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

	arch := archMap[runtime.GOARCH]

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

		// Qt 6 OpenGL
		// Depends on Qt Core, GUI, Widgets
		{
			path: "opengl",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtOpenGL",
				"/usr/include/" + arch + "-linux-gnu/qt6/QtOpenGLWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6OpenGLWidgets"),
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

		// Qt 6 XML
		// Depends on Qt Core
		{
			path: "xml",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtXml",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Xml"),
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

		// extras

		// Attica
		// Depends on Qt Core, Network
		{
			path: "extras-attica",
			dirs: []string{
				"/usr/include/KF6/Attica",
				"/usr/include/KF6/Attica/attica",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/Attica -I/usr/include/KF6/Attica/Attica -I/usr/include/KF6/Attica/attica " + pkgConfigCflags("Qt6Network"),
		},

		// KCodecs
		// Depends on Qt Core
		{
			path: "extras-kcodecs",
			dirs: []string{
				"/usr/include/KF6/KCodecs",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KCodecs " + pkgConfigCflags("Qt6Core"),
		},

		// KCompletion
		// Depends on Qt Core, GUI, Widgets
		{
			path: "extras-kcompletion",
			dirs: []string{
				"/usr/include/KF6/KCompletion",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KCompletion " + pkgConfigCflags("Qt6Widgets"),
		},

		// KConfig
		// Depends on Qt Core, GUI, Widgets
		{
			path: "extras-kconfig",
			dirs: []string{
				"/usr/include/KF6/KConfig",
				"/usr/include/KF6/KConfigCore",
				"/usr/include/KF6/KConfigGui",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KConfig -I/usr/include/KF6/KConfigCore -I/usr/include/KF6/KConfigGui " + pkgConfigCflags("Qt6Widgets"),
		},

		// KCoreAddons
		// Depends on Qt Core
		{
			path: "extras-kcoreaddons",
			dirs: []string{
				"/usr/include/KF6/KCoreAddons",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KCoreAddons " + pkgConfigCflags("Qt6Core"),
		},

		// KGuiAddons
		// Depends on Qt Core, GUI, KCoreAddons
		{
			path: "extras-kguiaddons",
			dirs: []string{
				"/usr/include/KF6/KGuiAddons",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KGuiAddons -I/usr/include/KF6/KCoreAddons " + pkgConfigCflags("Qt6Gui"),
		},

		// KI18n
		// Depends on Qt Core
		{
			path: "extras-ki18n",
			dirs: []string{
				"/usr/include/KF6/KI18n",
				"/usr/include/KF6/KI18nLocaleData",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KI18n -I/usr/include/KF6/KI18nLocaleData " + pkgConfigCflags("Qt6Core"),
		},

		// KItemViews
		// Depends on Qt Core, GUI, Widgets
		{
			path: "extras-kitemviews",
			dirs: []string{
				"/usr/include/KF6/KItemViews",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KItemViews " + pkgConfigCflags("Qt6Widgets"),
		},

		// KJobWidgets
		// Depends on Qt Core, KCoreAddons
		{
			path: "extras-kjobwidgets",
			dirs: []string{
				"/usr/include/KF6/KJobWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17  -I/usr/include/KF6/KJobWidgets -I/usr/include/KF6/KCoreAddons " + pkgConfigCflags("Qt6Core"),
		},

		// KNewStuff
		// Depends on Qt Core, GUI, Widgets, Attica
		{
			path: "extras-knewstuff",
			dirs: []string{
				"/usr/include/KF6/KNewStuff",
				"/usr/include/KF6/KNewStuffCore/KNSCore",
				"/usr/include/KF6/KNewStuffWidgets/KNSWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KNewStuff -I/usr/include/KF6/KNewStuffCore -I/usr/include/KF6/KNewStuffCore/KNSCore -I/usr/include/KF6/KNewStuffWidgets -I/usr/include/KF6/KNewStuffWidgets/KNSWidgets -I/usr/include/KF6/Attica -I/usr/include/KF6/Attica/Attica -I/usr/include/KF6/Attica/attica " + pkgConfigCflags("Qt6Widgets"),
		},

		// KPlotting
		// Depends on Qt Core, GUI, Widgets
		{
			path: "extras-kplotting",
			dirs: []string{
				"/usr/include/KF6/KPlotting",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KPlotting " + pkgConfigCflags("Qt6Widgets"),
		},

		// KService
		// Depends on Qt Core
		{
			path: "extras-kservice",
			dirs: []string{
				"/usr/include/KF6/KService",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KService " + pkgConfigCflags("Qt6Core"),
		},

		// Solid
		// Depends on Qt Core
		{
			path: "extras-solid",
			dirs: []string{
				"/usr/include/KF6/Solid",
				"/usr/include/KF6/Solid/solid",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17  -I/usr/include/KF6/Solid " + pkgConfigCflags("Qt6Core"),
		},

		// Sonnet
		// Depends on Qt Core, GUI, Widgets
		{
			path: "extras-sonnet",
			dirs: []string{
				"/usr/include/KF6/Sonnet",
				"/usr/include/KF6/SonnetCore/sonnet",
				"/usr/include/KF6/SonnetUi/sonnet",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/Sonnet " + pkgConfigCflags("Qt6Widgets"),
		},

		// KSyntaxHighlighting
		// Depends on Qt Core, GUI
		{
			path: "extras-ksyntaxhighlighting",
			dirs: []string{
				"/usr/include/KF6/KSyntaxHighlighting",
				"/usr/include/KF6/KSyntaxHighlighting/KSyntaxHighlighting",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KSyntaxHighlighting -I/usr/include/KF6/KSyntaxHighlighting/KSyntaxHighlighting " + pkgConfigCflags("Qt6Gui"),
		},

		// KTextWidgets
		// Depends on Qt Core, GUI, Widgets, KCompletion, KConfig, KI18n, Sonnet
		{
			path: "extras-ktextwidgets",
			dirs: []string{
				"/usr/include/KF6/KTextWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KTextWidgets -I/usr/include/KF6/KI18n -I/usr/include/KF6/Sonnet -I/usr/include/KF6/SonnetUi " + pkgConfigCflags("Qt6Widgets"),
		},

		// KWidgetsAddons
		// Depends on Qt Core, GUI, Widgets, KConfig
		{
			path: "extras-kwidgetsaddons",
			dirs: []string{
				"/usr/include/KF6/KWidgetsAddons",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KWidgetsAddons " + pkgConfigCflags("Qt6Widgets"),
		},

		// KColorScheme
		// Depends on Qt Core, GUI, KConfig, KWidgetsAddons
		{
			path: "extras-kcolorscheme",
			dirs: []string{
				"/usr/include/KF6/KColorScheme",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KColorScheme -I/usr/include/KF6/KConfig -I/usr/include/KF6/KConfigCore " + pkgConfigCflags("Qt6Gui"),
		},

		// KConfigWidgets
		// Depends on Qt Core, GUI, Widgets, KConfig, KGuiAddons, KWidgetsAddons
		{
			path: "extras-kconfigwidgets",
			dirs: []string{
				"/usr/include/KF6/KConfigWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KConfigWidgets -I/usr/include/KF6/KColorScheme -I/usr/include/KF6/KConfig -I/usr/include/KF6/KConfigCore -I/usr/include/KF6/KConfigGui -I/usr/include/KF6/KGuiAddons -I/usr/include/KF6/KWidgetsAddons " + pkgConfigCflags("Qt6Widgets"),
		},

		// KBookmarks
		// Depends on Qt Core, GUI, Widgets, XML
		{
			path: "extras-kbookmarks",
			dirs: []string{
				"/usr/include/KF6/KBookmarks",
				"/usr/include/KF6/KBookmarksWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17  -I/usr/include/KF6/KBookmarks -I/usr/include/KF6/KBookmarksWidgets -I/usr/include/KF6/KConfigWidgets -I/usr/include/KF6/KWidgetsAddons " + pkgConfigCflags("Qt6Widgets") + pkgConfigCflags("Qt6Xml"),
		},

		// KNotifications
		// Depends on Qt Core, GUI, KConfig
		{
			path: "extras-knotifications",
			dirs: []string{
				"/usr/include/KF6/KNotifications",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17  -I/usr/include/KF6/KNotifications -I/usr/include/KF6/KConfig -I/usr/include/KF6/KConfigCore -I/usr/include/KF6/KConfigGui " + pkgConfigCflags("Qt6Gui"),
		},

		// KIconThemes
		// Depends on Qt Core, GUI, Widgets, KWidgetsAddons
		{
			path: "extras-kiconthemes",
			dirs: []string{
				"/usr/include/KF6/KIconThemes",
				"/usr/include/KF6/KIconWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KIconThemes -I/usr/include/KF6/KIconWidgets -I/usr/include/KF6/KWidgetsAddons " + pkgConfigCflags("Qt6Widgets") + pkgConfigCflags("Qt6Quick"),
		},

		// KXmlGui
		// Depends on Qt Core, Gui, Widgets, XML, KConfig, KConfigWidgets, KGuiAddons, KWidgetsAddons
		{
			path: "extras-kxmlgui",
			dirs: []string{
				"/usr/include/KF6/KXmlGui",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KXmlGui -I/usr/include/KF6/KConfig -I/usr/include/KF6/KConfigCore -I/usr/include/KF6/KConfigGui -I/usr/include/KF6/KConfigWidgets -I/usr/include/KF6/KGuiAddons -I/usr/include/KF6/KWidgetsAddons " + pkgConfigCflags("Qt6Widgets"),
		},

		// foss-extras

		// KGlobalAccel
		// Depends on Qt Core, Gui, D-Bus
		{
			path: "foss-extras-kglobalaccel",
			dirs: []string{
				"/usr/include/KF6/KGlobalAccel",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KGlobalAccel " + pkgConfigCflags("Qt6Gui") + pkgConfigCflags("Qt6DBus"),
		},

		// KWindowSystem
		// Depends on Qt Core, GUI, Widgets
		{
			path: "foss-extras-kwindowsystem",
			dirs: []string{
				"/usr/include/KF6/KWindowSystem",
			},
			allowHeader: func(fullpath string) bool {
				baseName := filepath.Base(fullpath)
				return baseName != "kx11extras.h"
			},
			cflags: "--std=c++17 -I/usr/include/KF6/KWindowSystem " + pkgConfigCflags("Qt6Widgets"),
		},

		// posix-extras

		// Qt 6 D-Bus
		// Depends on Qt Core
		{
			path: "posix-extras-dbus",
			dirs: []string{
				"/usr/include/" + arch + "-linux-gnu/qt6/QtDBus",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6DBus"),
		},

		// extras (cont.)

		// KIO
		// Depends on Qt Core, GUI, Widgets, D-Bus, Network, XML, KConfig, KCoreAddons, KWidgetsAddons, KBookmarks, KCompletion, KIconThemes, KItemViews, KJobWidgets, KService, Solid
		{
			path: "extras-kio",
			dirs: []string{
				"/usr/include/KF6/KIO",
				"/usr/include/KF6/KIOCore",
				"/usr/include/KF6/KIOCore/kio",
				"/usr/include/KF6/KIOGui",
				"/usr/include/KF6/KIOGui/kio",
				"/usr/include/KF6/KIOWidgets",
				"/usr/include/KF6/KIOWidgets/kio",
				"/usr/include/KF6/KIOFileWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 -I/usr/include/KF6/KIO -I/usr/include/KF6/KIOCore -I/usr/include/KF6/KIOCore/kio/KIO -I/usr/include/KF6/KIOGui -I/usr/include/KF6/KIOGui/KIO -I/usr/include/KF6/KIOWidgets -I/usr/include/KF6/KIOWidgets/KIO -I/usr/include/KF6/KIOFileWidgets -I/usr/include/KF6/KConfig -I/usr/include/KF6/KConfigCore -I/usr/include/KF6/KCoreAddons -I/usr/include/KF6/KWidgetsAddons -I/usr/include/KF6/KBookmarks -I/usr/include/KF6/KCompletion -I/usr/include/KF6/KIconThemes -I/usr/include/KF6/KItemViews -I/usr/include/KF6/KJobWidgets -I/usr/include/KF6/KService -I/usr/include/KF6/Solid " + pkgConfigCflags("Qt6Widgets") + pkgConfigCflags("Qt6Network") + pkgConfigCflags("Qt6DBus") + pkgConfigCflags("Qt6Xml"),
		},

		// posix-restricted

		// QTermWidget
		// Depends on Qt Core, GUI, Widgets
		{
			path: "posix-restricted-qtermwidget",
			dirs: []string{
				"/usr/include/qtermwidget6",
			},
			allowHeader: AllowAllHeaders,
			cflags:      `--std=c++17 -DQ_DECLARE_INTERFACE(x,y)= -DQTermWidgetInterface_iid="lxqt.qtermwidget.QTermWidgetInterface/1.5 ` + pkgConfigCflags("qtermwidget6"),
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
