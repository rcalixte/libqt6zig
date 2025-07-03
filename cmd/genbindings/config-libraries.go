package main

import (
	"os"
	"os/exec"
	"path/filepath"
	"sort"
	"strings"
)

func ProcessLibraries(clangBin, outDir, extraLibsDir string) {
	AllowAllHeaders := func(string) bool { return true }

	// FLUSH all known typedefs / ...

	flushKnownTypes()
	InsertTypedefs(true)

	headerList := []string{}
	zigIncMap := map[string]string{}
	qtstructdefs := make(map[string]struct{})

	// Qt 6
	generate(
		"",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCore",
			"/usr/include/x86_64-linux-gnu/qt6/QtGui",
			"/usr/include/x86_64-linux-gnu/qt6/QtWidgets",
		},
		func(fullpath string) bool {
			// Block cbor and generate it separately
			fname := filepath.Base(fullpath)
			if strings.HasPrefix(fname, "qcbor") {
				return false
			}

			return Widgets_AllowHeader(fullpath)
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Widgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	generate(
		"cbor",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCore",
		},
		func(fullpath string) bool {
			// Only include the same json, xml, cbor files excluded above
			fname := filepath.Base(fullpath)
			return strings.HasPrefix(fname, "qcbor")
		},
		clangBin,
		"--std=c++20 "+pkgConfigCflags("Qt6Core"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 QtPrintSupport
	generate(
		"printsupport",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtPrintSupport",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 SVG
	generate(
		"svg",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSvg",
			"/usr/include/x86_64-linux-gnu/qt6/QtSvgWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6SvgWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 QtNetwork
	generate(
		"network",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
		},
		func(fullpath string) bool {
			fname := filepath.Base(fullpath)
			return fname != "qtnetwork-config.h"
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 QtMultimedia
	generate(
		"multimedia",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtMultimedia",
			"/usr/include/x86_64-linux-gnu/qt6/QtMultimediaWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6MultimediaWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 Spatial Audio (on Debian this is a dependency of Qt6Multimedia)
	generate(
		"spatialaudio",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSpatialAudio",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6SpatialAudio"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 QWebChannel
	generate(
		"webchannel",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebChannel",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebChannel"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 QWebEngine
	generate(
		"webengine",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineCore",
			"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineWidgets",
		},
		func(fullpath string) bool {
			baseName := filepath.Base(fullpath)
			return baseName != "qtwebenginewidgets-config.h"
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebEngineWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 PDF
	// Depends on QtCore/Gui/Widgets
	generate(
		"pdf",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtPdf",
			"/usr/include/x86_64-linux-gnu/qt6/QtPdfWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PdfWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 Charts
	// Depends on QtCore/Gui/Widgets
	generate(
		"restricted-extras-charts",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCharts",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Charts"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Qt 6 QScintilla
	// Depends on QtCore/Gui/Widgets, QPrintSupport
	generate(
		"restricted-extras-qscintilla",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/Qsci",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		zigIncMap,
		qtstructdefs,
	)

	// Post-processing to generate auxiliary files
	structdefs := make([]string, 0, len(qtstructdefs))
	for k := range qtstructdefs {
		structdefs = append(structdefs, "pub const "+k+" = ?*C."+k+";")
	}
	sort.Strings(structdefs)

	typedefHeader := "// THIS FILE IS AUTOMATICALLY GENERATED\n\nconst C = @import(\"qt6c\");\n\n"
	for _, k := range structdefs {
		typedefHeader += k + "\n"
	}

	zigCLibPath := filepath.Join(outDir, "src", "libqtc.zig")
	err := os.WriteFile(zigCLibPath, []byte(typedefHeader), 0644)
	if err != nil {
		panic(err)
	}
	cmdQtC := exec.Command("zig", "fmt", zigCLibPath)
	cmdQtC.Stderr = os.Stderr
	err = cmdQtC.Start()
	if err != nil {
		panic(err)
	}

	qt6cHeader := "// THIS FILE IS AUTOMATICALLY GENERATED\n#pragma once\n\n#include \"qtlibc.h\"\n#include \"threading/libqt6zigthreading.h\"\n"
	for _, k := range headerList {
		qt6cHeader += "#include \"" + k + "\"\n"
	}

	err = os.WriteFile(filepath.Join(outDir, "src", "libqt6c.h"), []byte(qt6cHeader), 0644)
	if err != nil {
		panic(err)
	}

	includeHeader := filepath.Join(outDir, "include", "libqt6c.h")
	err = os.MkdirAll(filepath.Dir(includeHeader), 0755)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(includeHeader, []byte(qt6cHeader), 0644)
	if err != nil {
		panic(err)
	}

	qtLibHeader := filepath.Join(outDir, "src", "qtlibc.h")
	includeQtLibHeader := filepath.Join(outDir, "include", "qtlibc.h")
	qtHeaderFile, err := os.ReadFile(qtLibHeader)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(includeQtLibHeader, qtHeaderFile, 0644)
	if err != nil {
		panic(err)
	}

	zigIncList := []string{
		"pub const threading = @import(\"threading/libqt6zigthreading.zig\").Threading;",
	}
	for _, v := range zigIncMap {
		zigIncList = append(zigIncList, v)
	}
	sort.Strings(zigIncList)
	zigDefs := "// THIS FILE IS AUTOMATICALLY GENERATED\n\npub const C = @import(\"qtzig\");\n\n"
	zigDefs = zigDefs + strings.Join(zigIncList, "\n")
	zigQtPath := filepath.Join(outDir, "src", "libqt6.zig")
	err = os.WriteFile(zigQtPath, []byte(zigDefs), 0644)
	if err != nil {
		panic(err)
	}
	cmdQt6 := exec.Command("zig", "fmt", zigQtPath)
	cmdQt6.Stderr = os.Stderr
	err = cmdQt6.Start()
	if err != nil {
		panic(err)
	}

	threadingQtLibHeader := filepath.Join(outDir, "src", "threading", "libqt6zigthreading.h")
	threadingIncludeQtLibHeader := filepath.Join(outDir, "include", "threading", "libqt6zigthreading.h")
	threadingQtHeaderFile, err := os.ReadFile(threadingQtLibHeader)
	if err != nil {
		panic(err)
	}
	err = os.MkdirAll(filepath.Dir(threadingIncludeQtLibHeader), 0755)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(threadingIncludeQtLibHeader, threadingQtHeaderFile, 0644)
	if err != nil {
		panic(err)
	}

	zigThreadingQtLib := filepath.Join(outDir, "src", "threading", "libqt6zigthreading.zig")
	zigThreadingIncludeQtLib := filepath.Join(outDir, "include", "threading", "libqt6zigthreading.zig")
	zigThreadingQtFile, err := os.ReadFile(zigThreadingQtLib)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(zigThreadingIncludeQtLib, zigThreadingQtFile, 0644)
	if err != nil {
		panic(err)
	}

	cmdQtC.Wait()

	zigCLibIncludePath := filepath.Join(outDir, "include", "libqtc.zig")
	zigCLibQtInclude, err := os.ReadFile(zigCLibPath)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(zigCLibIncludePath, zigCLibQtInclude, 0644)
	if err != nil {
		panic(err)
	}

	cmdQt6.Wait()

	zigQtIncludePath := filepath.Join(outDir, "include", "libqt6.zig")
	zigQtInclude, err := os.ReadFile(zigQtPath)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(zigQtIncludePath, zigQtInclude, 0644)
	if err != nil {
		panic(err)
	}
}
