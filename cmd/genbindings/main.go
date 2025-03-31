package main

import (
	"context"
	"encoding/json"
	"flag"
	"fmt"
	"log"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strings"
	"sync"
)

const (
	ClangSubprocessCount = 4
)

func cacheFilePath(inputHeader string) string {
	return filepath.Join("cachedir", strings.Replace(inputHeader, `/`, `__`, -1)+".json")
}

func findHeadersInDir(srcDir string, allowHeader func(string) bool) []string {
	content, err := os.ReadDir(srcDir)
	if err != nil {
		panic(err)
	}

	var ret []string

	for _, includeFile := range content {
		if includeFile.IsDir() {
			continue
		}
		if !strings.HasSuffix(includeFile.Name(), `.h`) {
			continue
		}
		fullPath := filepath.Join(srcDir, includeFile.Name())
		if !allowHeader(fullPath) {
			continue
		}
		ret = append(ret, fullPath)
	}

	return ret
}

func cleanGeneratedFilesInDir(dirpath string) {
	log.Printf("Cleaning up output directory %q...", dirpath)

	_ = os.MkdirAll(dirpath, 0755)

	existing, err := os.ReadDir(dirpath)
	if err != nil {
		panic(err)
	}

	cleaned := 0
	for _, e := range existing {
		if e.IsDir() {
			continue
		}
		if !strings.HasPrefix(e.Name(), `libq`) {
			continue
		}
		// One of ours, clean up
		err := os.Remove(filepath.Join(dirpath, e.Name()))
		if err != nil {
			log.Printf("WARNING: Failed to remove existing file %q", e.Name())
			continue
		}

		cleaned++
	}

	log.Printf("Removed %d file(s).", cleaned)
}

func pkgConfigCflags(packageName string) string {
	stdout, err := exec.Command(`pkg-config`, `--cflags`, packageName).Output()
	if err != nil {
		panic(err)
	}

	return string(stdout)
}

func generate(packageName string, srcDirs []string, allowHeaderFn func(string) bool, clangBin, cflagsCombined, outDir, includePath string, matcher ClangMatcher, headerList *[]string, zigIncs map[string]string, qtstructdefs map[string]struct{}) {

	var includeFiles []string
	for _, srcDir := range srcDirs {
		if strings.HasSuffix(srcDir, `.h`) {
			includeFiles = append(includeFiles, srcDir) // single .h
		} else {
			includeFiles = append(includeFiles, findHeadersInDir(srcDir, allowHeaderFn)...)
		}
	}

	log.Printf("Found %d header files to process.", len(includeFiles))

	cflags := strings.Fields(cflagsCombined)

	includeDir := filepath.Join(outDir, includePath)
	outDir = filepath.Join(outDir, packageName)

	cleanGeneratedFilesInDir(includeDir)
	cleanGeneratedFilesInDir(outDir)

	var processHeaders []*CppParsedHeader
	atr := astTransformRedundant{
		preserve: make(map[string]*CppEnum),
	}

	//
	// PASS 0 (Fill clang cache)
	//

	generateClangCaches(includeFiles, clangBin, cflags, matcher)

	// The cache should now be fully populated.

	//
	// PASS 1 (clang2il)
	//

	for _, inputHeader := range includeFiles {

		cacheFile := cacheFilePath(inputHeader)

		astJson, err := os.ReadFile(cacheFile)
		if err != nil {
			panic("Expected cache to be created for " + inputHeader + ", but got error " + err.Error())
		}

		// Json decode
		var astInner []interface{} = nil
		err = json.Unmarshal(astJson, &astInner)
		if err != nil {
			panic(err)
		}

		if astInner == nil {
			panic("Null in cache file for " + inputHeader)
		}

		// Convert it to our intermediate format
		parsed, err := parseHeader(astInner, "")
		if err != nil {
			panic(err)
		}

		parsed.Filename = inputHeader // Stash

		// AST transforms on our IL
		astTransformChildClasses(parsed) // must be first
		astTransformOptional(parsed)
		astTransformOverloads(parsed)
		astTransformConstructorOrder(parsed)
		atr.Process(parsed)

		// Update global state tracker (AFTER astTransformChildClasses)
		addKnownTypes(packageName, parsed)

		processHeaders = append(processHeaders, parsed)
	}

	//
	// PASS 2
	//

	for _, parsed := range processHeaders {

		log.Printf("Processing %q...", parsed.Filename)

		// More AST transforms on our IL
		astTransformTypedefs(parsed)
		astTransformBlocklist(parsed) // Must happen after typedef transformation

		{
			// Save the IL file for debug inspection
			jb, err := json.MarshalIndent(parsed, "", "\t")
			if err != nil {
				panic(err)
			}

			err = os.WriteFile(cacheFilePath(parsed.Filename)+".ours.json", jb, 0644)
			if err != nil {
				panic(err)
			}
		}

		// Breakout if there is nothing bindable
		if parsed.Empty() {
			log.Printf("Nothing in this header was bindable.")
			continue
		}

		// Emit 3 code files from the intermediate format
		libName := "lib" + strings.TrimSuffix(filepath.Base(parsed.Filename), `.h`)
		outputName := filepath.Join(outDir, libName)
		dirName := strings.TrimPrefix(packageName, "src/")
		dirName = strings.TrimPrefix(dirName, "src")
		if dirName != "" {
			dirName += "/"
		}

		// For packages where we scan multiple directories, it's possible that
		// there are filename collisions (e.g. Qt 6 has QtWidgets/qaction.h include
		// QtGui/qaction.h as a compatibility measure).
		// If the path exists, disambiguate it
		var counter = 0
		for {
			testName := outputName
			if counter > 0 {
				testName += fmt.Sprintf(".%d", counter)
				*headerList = append(*headerList, dirName+testName+".h")
			}

			if _, err := os.Stat(testName + ".zig"); err != nil && os.IsNotExist(err) {
				outputName = testName // Safe
				*headerList = append(*headerList, dirName+libName+".h")
				break
			}

			counter++
		}

		bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHSrc, structdefs, err := emitBindingHeader(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		for k := range structdefs {
			qtstructdefs[k] = struct{}{}
		}

		err = os.WriteFile(outputName+".h", []byte(bindingHSrc), 0644)
		if err != nil {
			panic(err)
		}

		zigSrc, zigInc, err := emitZig(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		for k, v := range zigInc {
			zigIncs[k] = v
		}

		err = os.WriteFile(outputName+".zig", []byte(zigSrc), 0644)
		if err != nil {
			panic(err)
		}

		zCmd := exec.Command("zig", "fmt", outputName+".zig")
		zCmd.Stderr = os.Stderr
		err = zCmd.Start()
		if err != nil {
			panic(err)
		}

		bindingHxxSrc, err := emitVirtualBindingHeader(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".hxx", []byte(bindingHxxSrc), 0644)
		if err != nil {
			panic(err)
		}

		cmdCpp := exec.Command("clang-format", "-i", outputName+".cpp")
		cmdCpp.Stderr = os.Stderr
		err = cmdCpp.Start()
		if err != nil {
			panic(err)
		}

		cmdH := exec.Command("clang-format", "-i", outputName+".h")
		cmdH.Stderr = os.Stderr
		err = cmdH.Start()
		if err != nil {
			panic(err)
		}

		cmdHxx := exec.Command("clang-format", "-i", outputName+".hxx")
		cmdHxx.Stderr = os.Stderr
		err = cmdHxx.Start()
		if err != nil {
			panic(err)
		}

		cmdH.Wait()

		formattedHeader, err := os.ReadFile(outputName + ".h")
		if err != nil {
			panic(err)
		}

		headerInclude := filepath.Join(includeDir, filepath.Base(outputName+".h"))

		err = os.MkdirAll(filepath.Dir(includeDir), 0755)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(headerInclude, formattedHeader, 0644)
		if err != nil {
			panic(err)
		}

		zCmd.Wait()

		formattedZig, err := os.ReadFile(outputName + ".zig")
		if err != nil {
			panic(err)
		}

		zigIncludeFile := filepath.Join(includeDir, filepath.Base(outputName+".zig"))

		err = os.MkdirAll(filepath.Dir(includeDir), 0755)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(zigIncludeFile, formattedZig, 0644)
		if err != nil {
			panic(err)
		}

		cmdCpp.Wait()
		cmdHxx.Wait()
	}

	log.Printf("Processing %d file(s) completed", len(includeFiles))
}

func generateClangCaches(includeFiles []string, clangBin string, cflags []string, matcher ClangMatcher) {

	var clangChan = make(chan string)
	var clangWg sync.WaitGroup
	ctx := context.Background()

	err := os.MkdirAll("cachedir", 0755)
	if err != nil {
		panic(err)
	}

	for i := 0; i < ClangSubprocessCount; i++ {
		clangWg.Add(1)
		go func() {
			defer clangWg.Done()
			log.Printf("Clang worker: starting")

			for {
				inputHeader, ok := <-clangChan
				if !ok {
					return // Done
				}

				log.Printf("Clang worker got message for file %q", inputHeader)

				// Parse the file
				// This seems to intermittently fail, so allow retrying
				astInner := mustClangExec(ctx, clangBin, inputHeader, cflags, matcher)

				// Write to cache
				jb, err := json.MarshalIndent(astInner, "", "\t")
				if err != nil {
					panic(err)
				}

				err = os.WriteFile(cacheFilePath(inputHeader), jb, 0644)
				if err != nil {
					panic(err)
				}

				runtime.GC()
			}
		}()
	}

	for _, inputHeader := range includeFiles {

		// Check if there is a matching cache hit
		cacheFile := cacheFilePath(inputHeader)

		if _, err := os.Stat(cacheFile); err != nil && os.IsNotExist(err) {

			// Nonexistent cache file, regenerate from clang
			log.Printf("No AST cache for file %q, running clang...", filepath.Base(inputHeader))
			clangChan <- inputHeader
		}
	}

	// Done with all clang workers
	close(clangChan)
	clangWg.Wait()
}

func main() {
	clang := flag.String("clang", "clang", "Custom path to clang")
	outDir := flag.String("outdir", "../../", "Output directory for generated gen_** files")
	extraLibsDir := flag.String("extralibs", "/usr/local/src/", "Base directory to find extra library checkouts")

	flag.Parse()

	ProcessLibraries(*clang, *outDir, *extraLibsDir)
}
