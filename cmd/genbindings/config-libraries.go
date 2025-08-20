package main

import (
	"os"
	"path/filepath"
	"runtime"
	"sort"
	"strings"
)

func ProcessLibraries(clangBin, outDir, extraLibsDir string) {
	AllowAllHeaders := func(string) bool { return true }

	InsertTypedefs()

	headerList := []string{}
	zigIncMap := map[string]string{}
	qtstructdefs := make(map[string]struct{})

	arch, _ := archMap[runtime.GOARCH]

	// Define our module configuration
	type moduleConfig struct {
		path        string
		dirs        []string
		allowHeader func(string) bool
		cflags      string
	}

	// Qt 6 modules
	modules := []moduleConfig{
		// Qt 6 Core, GUI, Widgets
		{
			path: "",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtCore",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtGui",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtWidgets",
			},
			allowHeader: func(fullpath string) bool {
				// Block cbor and generate it separately
				fname := filepath.Base(fullpath)
				if strings.HasPrefix(fname, "qcbor") {
					return false
				}
				return Widgets_AllowHeader(fullpath)
			},
			cflags: "--std=c++17 " + pkgConfigCflags("Qt6Widgets"),
		},

		// Qt 6 CBOR
		// Depends on Qt Core
		{
			path: "cbor",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtCore",
			},
			allowHeader: func(fullpath string) bool {
				// Only include the same json, xml, cbor files excluded above
				fname := filepath.Base(fullpath)
				return strings.HasPrefix(fname, "qcbor")
			},
			cflags: "--std=c++20 " + pkgConfigCflags("Qt6Core"),
		},

		// Qt 6 Multimedia
		// Depends on Qt Core, GUI, Widgets
		{
			path: "multimedia",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtMultimedia",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtMultimediaWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6MultimediaWidgets"),
		},

		// Qt 6 Network
		// Depends on Qt Core
		{
			path: "network",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtNetwork",
			},
			allowHeader: func(fullpath string) bool {
				fname := filepath.Base(fullpath)
				return fname != "qtnetwork-config.h"
			},
			cflags: "--std=c++17 " + pkgConfigCflags("Qt6Network"),
		},

		// Qt 6 PDF
		// Depends on Qt Core, GUI, Widgets
		{
			path: "pdf",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtPdf",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtPdfWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6PdfWidgets"),
		},

		// Qt 6 Print Support
		// Depends on Qt Core, GUI, Widgets
		{
			path: "printsupport",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtPrintSupport",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6PrintSupport"),
		},

		// Qt 6 Spatial Audio
		// Depends on Qt Core, Multimedia
		{
			path: "spatialaudio",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtSpatialAudio",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6SpatialAudio"),
		},

		// Qt 6 SQL
		// Depends on Qt Core
		{
			path: "sql",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtSql",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Sql"),
		},

		// Qt 6 SVG
		// Depends on Qt Core, GUI, Widgets
		{
			path: "svg",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtSvg",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtSvgWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6SvgWidgets"),
		},

		// Qt 6 WebChannel
		// Depends on Qt Core
		{
			path: "webchannel",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtWebChannel",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6WebChannel"),
		},

		// Qt 6 WebEngine
		// Depends on Qt Core, GUI, Widgets
		{
			path: "webengine",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtWebEngineCore",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtWebEngineWidgets",
			},
			allowHeader: func(fullpath string) bool {
				baseName := filepath.Base(fullpath)
				return baseName != "qtwebenginewidgets-config.h"
			},
			cflags: "--std=c++17 " + pkgConfigCflags("Qt6WebEngineWidgets"),
		},

		// restricted-extras

		// Qt 6 Charts
		// Depends on Qt Core, GUI, Widgets
		{
			path: "restricted-extras-charts",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtCharts",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Charts"),
		},

		// Qt 6 QScintilla
		// Depends on Qt Core, GUI, Widgets, Print Support
		{
			path: "restricted-extras-qscintilla",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/Qsci",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6PrintSupport"),
		},
	}

	// PASS 1: Gather all types across all modules
	for _, mod := range modules {
		gatherTypes(
			mod.path,
			mod.dirs,
			mod.allowHeader,
			clangBin,
			mod.cflags,
		)
	}

	var allBatches []*FormatBatch

	// PASS 2: Generate bindings with complete type information
	for _, mod := range modules {
		batch := generate(
			mod.path,
			mod.dirs,
			mod.allowHeader,
			outDir,
			&headerList,
			zigIncMap,
			qtstructdefs,
		)
		allBatches = append(allBatches, batch)
	}

	for _, batch := range allBatches {
		if err := processFormatBatch(batch); err != nil {
			panic(err)
		}
	}

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

	zigCLibIncludePath := filepath.Join(outDir, "include", "libqtc.zig")
	zigQtIncludePath := filepath.Join(outDir, "include", "libqt6.zig")

	finalBatch := &FormatBatch{
		zigFiles: []string{zigCLibPath, zigQtPath},
		zigCopies: map[string]string{
			zigCLibPath: zigCLibIncludePath,
			zigQtPath:   zigQtIncludePath,
		},
	}

	if err := processFormatBatch(finalBatch); err != nil {
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
}
