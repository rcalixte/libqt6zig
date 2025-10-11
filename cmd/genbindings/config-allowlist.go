package main

import (
	"path/filepath"
	"strings"
)

func InsertTypedefs() {
	// Seed well-known typedefs
	pp := "qt6"

	// FIXME this isn't picked up automatically because QFile inherits QFileDevice and the name refers to its parent class
	KnownTypedefs["QFile::FileTime"] = lookupResultTypedef{pp, CppTypedef{"QFile::FileTime", parseSingleTypeString("QFileDevice::FileTime", "")}}

	// QFile doesn't see QFileDevice parent class enum
	KnownTypedefs["QFile::Permissions"] = lookupResultTypedef{pp, CppTypedef{"QFile::Permissions", parseSingleTypeString("QFileDevice::Permissions", "")}}
	KnownTypedefs["QIODevice::OpenMode"] = lookupResultTypedef{pp, CppTypedef{"QIODevice::OpenMode", parseSingleTypeString("QIODeviceBase::OpenMode", "")}}

	// Qt 6 KConfig uses an inherited enum
	KnownTypedefs["KConfigGroup::WriteConfigFlags"] = lookupResultTypedef{pp, CppTypedef{"KConfigGroup::WriteConfigFlags", parseSingleTypeString("KConfigBase::WriteConfigFlags", "")}}

	// Qt 6 KCoreAddons: ksandbox.h uses an inherited enum
	KnownTypedefs["QProcess::OpenMode"] = lookupResultTypedef{pp, CppTypedef{"QProcess::OpenMode", parseSingleTypeString("QIODeviceBase::OpenMode", "")}}

	// Qt 6 Solid: predicate.h has a broken inner typedef for QSet<DeviceInterface::Type> - TODO?
	KnownTypedefs["DeviceInterface::Type"] = lookupResultTypedef{pp, CppTypedef{"Solid::DeviceInterface::Type", parseSingleTypeString("Solid::DeviceInterface::Type", "")}}

	// Qt 6 KIO
	KnownTypedefs["KProtocolInfo::Type"] = lookupResultTypedef{pp, CppTypedef{"KProtocolInfo::ExtraField::Type", parseSingleTypeString("KProtocolInfo::ExtraField::Type", "")}}
}

func Widgets_AllowHeader(fullpath string) bool {
	fname := filepath.Base(fullpath)

	if strings.HasSuffix(fname, "_impl.h") {
		return false // Not meant to be imported
	}

	fname_lc := strings.ToLower(fname)
	if strings.Contains(fname_lc, "vulkan") {
		return false // Too hard
	}

	switch fname {
	case "qatomic_bootstrap.h",
		"qatomic_cxx11.h",
		"qatomic_msvc.h",
		"qgenericatomic.h",                // Clang error
		"qt_windows.h",                    // Clang error
		"qmaccocoaviewcontainer_mac.h",    // Needs NSView* headers. TODO allow with darwin build tag
		"qmacnativewidget_mac.h",          // Needs NSView* headers. TODO allow with darwin build tag
		"qstring.h",                       // QString does not exist in this binding
		"qbytearray.h",                    // QByteArray does not exist in this binding
		"qlist.h",                         // QList does not exist in this binding
		"qspan.h",                         // QSpan does not exist in this binding
		"qvector.h",                       // QVector does not exist in this binding
		"qhash.h",                         // QHash does not exist in this binding
		"qmap.h",                          // QMap does not exist in this binding
		"qtcoreexports.h",                 // Nothing bindable here and has Q_CORE_EXPORT definition issues
		"q20algorithm.h",                  // Qt 6 unstable header
		"q20functional.h",                 // Qt 6 unstable header
		"q20iterator.h",                   // Qt 6 unstable header
		"q23functional.h",                 // Qt 6 unstable header
		"qguiapplication_platform.h",      // Qt 6 - can be built for X11 but then platform-specific code fails to build on Windows
		"qcomparehelpers.h",               // Qt 6 - not meant to be included directly
		"bus_interface.h",                 // Qt 6 - includes QtGui/private
		"cache_adaptor.h",                 // Qt 6 - includes QtGui/private
		"deviceeventcontroller_adaptor.h", // Qt 6 - includes QtGui/private
		"properties_interface.h",          // Qt 6 - includes QtGui/private
		"socket_interface.h",              // Qt 6 - includes QtGui/private
		"qatomic.h",                       // Qt 6 - broken inheritance QAtomicInt => QAtomicInteger
		"qrhiwidget.h",                    // Qt 6 - broken QRhi* types, granular blocking might be fine
		"qscreen_platform.h",              // Qt 6 - returns Wayland-specific wl_output type external to this library, a manual typedef does not work
		"qopenglext.h",                    // Qt 6 - typedefs are not in the header
		"____last____":
		return false
	}

	return true
}

func ImportHeaderForClass(className string) bool {
	if !IsKnownClass(className) && !cabiPreventStructDeclaration(className) {
		return false
	}

	// TODO this could be implicit by checking if files exist in known header paths

	if strings.HasPrefix(className, "QPlatform") {
		// e.g. QPlatformPixmap, QPlatformWindow, QPlatformScreen
		// These classes don't have a <> version to include
		return false
	}

	if strings.HasPrefix(className, "QOpenGLFunctions_") && strings.HasSuffix(className, "Backend") {
		// e.g. QOpenGLFunctions_1_0_CoreBackend, QOpenGLFunctions_1_0_DeprecatedBackend
		return false
	}

	if strings.HasPrefix(className, "QCP") || className == "QCustomPlot" {
		return false // Qt 6 qcustomplot.h
	}

	// Qt 6 KWindowSystem
	if strings.HasPrefix(className, "NET") {
		// e.g. NET, NETExtendedStrut, NETFullscreenMonitors, NETRootInfo, NETWinInfo
		// These classes don't have a <> version to include
		return false
	}

	if strings.HasPrefix(className, "Qsci") {
		// QScintilla - does not produce imports
		return false
	}

	switch className {
	case "QGraphicsEffectSource", // e.g. qgraphicseffect.h
		"QAbstractConcatenable",          // qstringbuilder.h
		"QTextEngine",                    // qtextlayout.h
		"QText",                          // e.g. qtextcursor.h
		"QVLABaseBase",                   // e.g. Qt 6 qvarlengtharray.h
		"QAdoptSharedDataTag",            // Qt 6 qshareddata.h
		"qfloat16",                       // Qt 6 qfloat16.h
		"QFormDataPartBuilder",           // Qt 6.8 qformdatabuilder.h
		"QGenericRunnable",               // Qt 6.8 qrunnable.h
		"QCameraPermission",              // Qt 6.8 qpermissions.h
		"QMicrophonePermission",          // Qt 6.8 qpermissions.h
		"QDBusPendingReplyTypes",         // Qt 6 qdbuspendingreply.h
		"QAbstractOpenGLFunctions",       // Qt 6 qopenglfunctions.h
		"QOpenGLVersionFunctionsBackend", // Qt 6 qopenglversionfunctions.h
		"QOpenGLVersionFunctionsStorage", // Qt 6 qopenglversionfunctions.h
		"QOpenGLVersionStatus",           // Qt 6 qopenglversionfunctions.h
		"QtVideo",                        // Qt 6 qtvideo.h
		"q20",                            // Qt 6 q20type_traits.h
		"Kuit",                           // Qt 6 kuitsetup.h
		"QTermWidget",                    // Qt 6 qtermwidget.h
		"QTermWidgetInterface",           // Qt 6 qtermwidget_interface.h
		"Konsole",                        // Qt 6 KeyboardTranslator.h
		"Attica",                         // Qt 6 version.h
		"KConfigSkeletonItem",            // Qt 6 kconfigloader.h
		"KConfigCompilerSignallingItem",  // Qt 6 kcoreconfigskeleton.h
		"KPropertySkeletonItem",          // Qt 6 kcoreconfigskeleton.h
		"KDragWidgetDecoratorBase",       // Qt 6 kdragwidgetdecorator.h
		"KTwoFingerSwipeRecognizer",      // Qt 6 ktwofingerswipe.h
		"KTwoFingerTapRecognizer",        // Qt 6 ktwofingertap.h
		"KCharMacroExpander",             // Qt 6 kmacroexpander.h
		"KMacroExpanderBase",             // Qt 6 kmacroexpander.h
		"KWordMacroExpander",             // Qt 6 kmacroexpander.h
		"KUserGroup",                     // Qt 6 kuser.h
		"KLocalImageCacheImplementation", // Qt 6 klocalimagecacheimpl.h
		"KModifierKeyInfoProvider",       // Qt 6 kmodifierkeyinfoprovider_p.h
		"KDE",                            // Qt 6 kiconloader.h
		"KBookmarkGroup",                 // Qt 6 KBookmarks, a legacy class
		"KNotificationAction",            // Qt 6 knotification.h
		"KStartupInfoData",               // Qt 6 kstartupinfo.h, a legacy class
		"KStartupInfoId",                 // Qt 6 kstartupinfo.h, a legacy class
		"KFileItemList",                  // Qt 6 kfileitem.h
		"KIO",                            // Qt 6 jobtracker.h
		"KUriFilterData",                 // Qt 6 kurifilter.h
		"KUriFilterSearchProvider",       // Qt 6 kurifilter.h
		"KUrlComboRequester",             // Qt 6 kurlrequester.h
		"KNSCore",                        // Qt 6 searchrequest.h
		"KSyntaxHighlighting",            // Qt 6 state.h
		"KParts",                         // Qt 6 partloader.h
		"TerminalInterface",              // Qt 6 kde_terminal_interface.h
		"KTextEditor",                    // Qt 6 KTextEditor
		"QKeychain",                      // Qt 6 QKeychain
		"____last____":
		return false
	}

	return true
}

func AllowClass(className string) bool {
	if strings.HasSuffix(className, "Private") || strings.HasSuffix(className, "PrivateShared") ||
		strings.Contains(className, "Private::") || strings.HasSuffix(className, "PrivateShared::") {
		return false
	}

	if strings.Contains(className, "QPrivateSignal") {
		return false
	}

	if strings.HasPrefix(className, "std::") && !strings.HasPrefix(className, "std::pair") {
		return false // Scintilla bindings find some of these
	}

	switch className {
	case
		"QTextStreamManipulator",     // Only seems to contain garbage methods
		"QException",                 // Extends std::exception, too hard
		"QGenericRunnable",           // Qt 6, Unavailable class header in Qt 6.8
		"QUnhandledException",        // As above (child class)
		"QPolygon",                   // Extends a QVector<QPoint> template class, too hard
		"QPolygonF",                  // Extends a QVector<QPoint> template class, too hard
		"QAssociativeIterator",       // Qt 6. Extends a QIterator<>, too hard
		"QAssociativeConstIterator",  // Qt 6. Extends a QIterator<>, too hard
		"QAssociativeIterable",       // Qt 6. Extends a QIterator<>, too hard
		"QSequentialIterator",        // Qt 6. Extends a QIterator<>, too hard
		"QSequentialConstIterator",   // Qt 6. Extends a QIterator<>, too hard
		"QSequentialIterable",        // Qt 6. Extends a QIterator<>, too hard
		"QBrushDataPointerDeleter",   // Qt 6 qbrush.h. Appears in header but cannot be linked
		"QPropertyBindingPrivatePtr", // Qt 6 qpropertyprivate.h. Appears in header but cannot be linked
		"QVariantConstPointer",       // Qt 6, possible to bind but yields little value
		"KCompletionMatchesWrapper",  // Qt 6 kcompletionmatches.h, incomplete forward declaration
		"KGroupId",                   // Qt 6 kuser.h, inherits from KUserOrGroupId<unsigned int>
		"KUserId",                    // Qt 6 kuser.h, inherits from KUserOrGroupId<unsigned int>
		"KQuickIconProvider",         // Qt 6 kquickiconprovider.h, inherits from QQuickImageProvider
		"KBookmarkGroupTraverser",    // Qt 6 kbookmark.h, a legacy class
		"KLocalization::Internal",    // Qt 6 klocalizedqmlcontext.h
		"KSycocaFactory",             // Qt 6 ksycoca.h, a legacy class
		"KSycocaFactoryList",         // Qt 6 ksycoca.h, a legacy class
		"NETWinInfo",                 // Qt 6 kwindowsystem.h
		"NETRootInfo",                // Qt 6 kwindowsystem.h
		"OrgKdeKDirNotifyInterface",  // Qt 6 kdirnotify.h
		"____last____":
		return false
	}

	return true
}

func AllowSignal(mm CppMethod) bool {
	if !mm.ReturnType.Void() {
		// This affects how we cast the signal function pointer for connect
		// It would be fixable, but, real signals always have void return types anyway
		return false
	}

	switch mm.MethodName {
	case "metaObject", "qt_metacast",
		"clone": // Qt 6 - qcoreevent.h
		return false
	default:
		return true
	}
}

func AllowVirtual(mm CppMethod) bool {
	if mm.MethodName == "metaObject" || mm.MethodName == "qt_metacast" {
		return false
	}

	return true // AllowSignal(mm)
}

func AllowVirtualForClass(className string) bool {
	// Pure virtual method futureInterface() returns an unprojectable template type
	if className == "QFutureWatcherBase" {
		return false
	}

	// Pure virtual dtor (should be possible to support)
	if className == "QObjectData" {
		return false
	}

	// Pure virtual method registerEventNotifier takes a QWinEventNotifier* on Windows
	// which is platform-specific
	if strings.HasPrefix(className, "QAbstractEventDispatcher") {
		return false
	}

	// Qt 6 KCoreAddons
	// the vtable causes a linker error
	if className == "KJobTrackerInterface" {
		return false
	}

	// Qt 6 KJobWidgets
	// these vtables cause linker errors
	if className == "KAbstractWidgetJobTracker" || className == "KDialogJobUiDelegate" ||
		className == "KNotificationJobUiDelegate" || className == "KStatusBarJobTracker" ||
		className == "KUiServerJobTracker" || className == "KUiServerV2JobTracker" ||
		className == "KWidgetJobTracker" {
		return false
	}

	return true
}

func AllowMethod(className string, mm CppMethod) error {
	for _, p := range mm.Parameters {
		if strings.HasSuffix(p.ParameterType, "Private") {
			return ErrTooComplex // Skip private type
		}

		if p.ParameterType == "Duration" {
			return ErrTooComplex // Skip std::chrono alias
		}

		if p.ParameterType == "..." {
			return ErrTooComplex // Skip variadic parameter
		}
	}

	if mm.ReturnType.ParameterType == "Duration" {
		return ErrTooComplex // Skip std::chrono alias
	}

	if strings.HasSuffix(mm.ReturnType.ParameterType, "Private") {
		return ErrTooComplex // Skip private type
	}

	if strings.Contains(mm.ReturnType.ParameterType, "std::optional") {
		return ErrTooComplex // Skip std::optional type
	}

	if strings.Contains(mm.MethodName, "QGADGET") {
		return ErrTooComplex // Skipping method with weird QGADGET behaviour
	}

	if mm.IsReceiverMethod() {
		// Non-projectable receiver pattern parameters
		return ErrTooComplex
	}

	if className == "QBitArray" && mm.MethodName == "operator~" {
		return ErrTooComplex // Present in Qt 5.15 and 6.4, missing in Qt 6.7
	}

	if className == "QTimeZone" && (mm.MethodName == "operator==" || mm.MethodName == "operator!=") {
		return ErrTooComplex // Present in Qt 5.15 and 6.4, missing in Qt 6.7
	}

	if className == "QDir" && (mm.MethodName == "mkdir" || mm.MethodName == "mkpath") {
		// Qt 6.10: Both methods were converted from regular enum parameters to
		// std::optional enum parameters, resulting in linker errors
		// @ref https://github.com/qt/qtbase/commit/4275dfb7bfa78999bb8edf27ab18433f97cd3490
		return ErrTooComplex
	}

	if className == "QThreadStorageData" && mm.MethodName == "finish" {
		return ErrTooComplex // Removed in Qt 6.10
	}

	if className == "QWebEngineClientHints" && mm.MethodName == "qt_qmlMarker_uncreatable" {
		return ErrTooComplex // Removed in Qt 6.10
	}

	if className == "QWaveDecoder" && mm.MethodName == "setIODevice" {
		return ErrTooComplex // Qt 6: Present in header, but no-op method was not included in compiled library
	}

	if className == "QDeadlineTimer" && mm.MethodName == "_q_data" {
		// Qt 6.4: Present in header with "not a public method" comment, not present in Qt 6.6
		// @ref https://github.com/qt/qtbase/blob/v6.4.0/src/corelib/kernel/qdeadlinetimer.h#L156C29-L156C36
		return ErrTooComplex
	}

	if className == "QNetworkCacheMetaData" && mm.MethodName == "setRawHeaders" {
		// Qt 6: undefined symbol error during compilation
		return ErrTooComplex
	}

	if className == "QHttpHeaders" && mm.MethodName == "fromListOfPairs" {
		// Qt 6: undefined symbol error during compilation
		return ErrTooComplex
	}

	if className == "QDBusPendingReplyTypes" && mm.MethodName == "metaTypeFor" {
		return ErrTooComplex // Qt 6.8: qdbuspendingreply.h, templated method
	}

	if (className == "KGradientSelector" || className == "QGradient") && mm.MethodName == "setStops" {
		return ErrTooComplex // Qt 6: undefined symbol error during compilation
	}

	if className == "QVariantAnimation" && mm.MethodName == "setKeyValues" {
		return ErrTooComplex // Qt 6: undefined symbol error during compilation
	}

	if className == "QXmlStreamEntityResolver" && mm.MethodName == "operator=" {
		// Present in Qt 6.7, but marked as =delete by Q_DISABLE_COPY_MOVE in Qt 6.8
		return ErrTooComplex
	}

	if className == "QAbstractVideoBuffer" && mm.MethodName == "map" {
		// Present in Qt 6.8 but the return type is not properly handled yet
		return ErrTooComplex
	}

	if className == "QChronoTimer" && mm.MethodName == "id" {
		// Present in Qt 6.8 but the return type is not properly handled yet
		return ErrTooComplex
	}

	if className == "QTransform" && mm.MethodName == "asAffineMatrix" {
		// Qt 6.8: Skip this method, the return type is not properly handled yet
		return ErrTooComplex
	}

	if className == "QUrlQuery" && mm.MethodName == "setQueryItems" {
		// Qt 6: undefined symbol error during compilation
		return ErrTooComplex
	}

	if className == "QWebEngineClientHints" && mm.MethodName == "setQmlMarkerUncreatable" {
		// Removed in Qt 6.10
		return ErrTooComplex
	}

	if className == "QWebEnginePage" && mm.MethodName == "setFeaturePermission" {
		// Qt 6.8: Skip this method, a parameter type is not properly handled yet
		// and the function does not appear in the Qt documentation
		return ErrTooComplex
	}

	if strings.HasPrefix(className, "QCP") && (mm.MethodName == "getFinalMinimumOuterSize" || mm.MethodName == "getFinalMaximumOuterSize") {
		// Qt 6 qcustomplot.h: broken method
		return ErrTooComplex
	}
	if className == "QCPPolarAxisAngular" && mm.MethodName == "setLabelPosition" {
		// Qt 6 qcustomplot.h: undefined symbol error during compilation
		return ErrTooComplex
	}

	// Qt 6 Attica
	if className == "Attica::Metadata" && mm.MethodName == "setHeaders" {
		// Qt 6 metadata.h: undefined symbol error during compilation
		return ErrTooComplex
	}

	// Qt 6 KConfig
	if className == "KCoreConfigSkeleton::ItemInt" && (mm.MethodName == "setMinValue" || mm.MethodName == "setMaxValue") {
		// Qt 6 kcoreconfigskeleton.h: inherited method of a blocked class
		return ErrTooComplex
	}

	// Qt 6 KCoreAddons
	if className == "KJob" && mm.MethodName == "description" {
		// Qt 6 kjob.h: undefined symbol error during compilation
		return ErrTooComplex
	}

	// Qt 6 QTermWidget
	if className == "Konsole::Filter" && (mm.MethodName == "hotSpots" || mm.MethodName == "hotSpotsAtLine") {
		// Skip these methods due to broken typedefs
		return ErrTooComplex
	}
	if className == "Konsole::FilterChain" && mm.MethodName == "hotSpotsAtLine" {
		// Skip these methods due to broken typedefs
		return ErrTooComplex
	}

	// Qt 6 KTextWidgets
	if className == "KRichTextWidget" && mm.MethodName == "setRichTextSupport" {
		// Skip this method due to it being poorly implemented (a chance to engage with upstream)
		return ErrTooComplex
	}

	// Qt 6 KIconThemes
	if className == "KIconLoader" && (mm.SafeMethodName() == "LoadScaledIcon" || mm.SafeMethodName() == "LoadScaledIcon2") {
		// Qt 6 kiconloader.h: there are multiple definitions and two broken overload combinations
		return ErrTooComplex
	}

	// Qt 6 Solid
	if className == "Solid::StorageVolume" && mm.MethodName == "encryptedContainer" {
		// Qt 6 storagevolume.h: incomplete return type
		return ErrTooComplex
	}

	// Qt 6 KWindowSystem
	if className == "KKeyServer" && mm.MethodName == "xEventToQt" {
		// Qt 6 kkeyserver.h: incomplete external parameter type
		return ErrTooComplex
	}

	// Qt 6 KIO
	if className == "KACL" && (mm.MethodName == "setAllGroupPermissions" || mm.MethodName == "setAllUserPermissions") {
		// Qt 6 kacl.h: undefined symbol error during compilation
		return ErrTooComplex
	}
	if className == "KCoreDirLister" && mm.MethodName == "refreshItems" {
		// Qt 6 kcoredirlister.h: undefined symbol error during compilation
		return ErrTooComplex
	}
	if className == "KProtocolManager" && mm.MethodName == "fileNameUsedForCopying" {
		// Qt 6 kprotocolmanager.h: this hits an unresolved bug
		return ErrTooComplex
	}
	if className == "KSslInfoDialog" && (mm.MethodName == "setSslInfo" || mm.MethodName == "certificateErrorsFromString") {
		// Qt 6 ksslinfodialog.h: this has a parameter/return type that is not in the binding yet:
		// const QList<QList<QSslError::SslError>>
		// this can be implemented at some point
		return ErrTooComplex
	}
	if className == "KIO::RestoreJob" && mm.MethodName == "trashUrls" {
		// Qt 6 restorejob.h: linker error
		return ErrTooComplex
	}
	if className == "KRecentDocument" && mm.MethodName == "clearEntriesOldestEntries" {
		// Qt 6 krecentdocument.h: linker error
		return ErrTooComplex
	}
	if className == "KFileItemListProperties" && mm.MethodName == "items" {
		// Qt 6 kfileitemlistproperties.h: this has a legacy return type
		return ErrTooComplex
	}
	if className == "KIO" && mm.MethodName == "chmod" {
		// Qt 6 chmodjob.h && simplejob.h: cross-header conflict for the same method name
		return ErrTooComplex
	}

	// Qt 6 KParts
	if (className == "KXMLGUIBuilder" || className == "KXMLGUIClient") && mm.MethodName == "virtual_hook" {
		// Qt 6 mainwindow.h: found in multiple base classes of different types leading to ambiguous name lookup
		return ErrTooComplex
	}

	// Skip functions that return ints-by-reference since the ergonomics don't
	// go through the binding
	if mm.ReturnType.IntType() && mm.ReturnType.ByRef {
		return ErrTooComplex // e.g. QSize::rheight()
	}

	return nil // OK, allow
}

func AllowCtor(className string) bool {
	if className == "QStringConverterBase" {
		// Both the main ctor and the copy constructor were changed from public to protected between 6.8.1 and 6.8.2
		// @ref https://github.com/qt/qtbase/commit/41679e0b4398c0de38a8107642dc643fe2c3554f
		// @ref https://github.com/mappu/miqt/issues/168
		// Block both ctors from generation
		return false
	}

	if className == "QBrushData" {
		// Both the main ctor and the copy constructor were changed from public to protected in Qt 6.10
		// @ref https://github.com/qt/qtbase/commit/3bbc9e29ef59683351cf35c19a8bd4a030615c64
		return false
	}

	if className == "QNativeInterface::QGLXContext" || className == "QNativeInterface::QEGLContext" {
		return false
	}

	// Qt 6 OpenGL
	if strings.HasPrefix(className, "QOpenGL") && strings.HasSuffix(className, "Backend") {
		// e.g. QOpenGLFunctions_1_0_CoreBackend, QOpenGLFunctions_1_0_DeprecatedBackend, QOpenGLVersionFunctionsBackend
		return false
	}
	if strings.HasPrefix(className, "QOpenGL") && strings.HasSuffix(className, "Storage") {
		// e.g. QOpenGLVersionFunctionsStorage
		return false
	}

	// Qt 6 Attica
	if className == "Attica::PlatformDependentV2" || className == "Attica::PlatformDependentV3" {
		return false
	}

	// Qt 6 KIO
	if className == "KIO::WorkerFactory" {
		return false
	}

	// Default allow
	return true
}

// AllowType controls whether to permit binding of a method, if a method uses
// this type in its parameter list or return type.
// Any type not permitted by AllowClass is also not permitted by this method.
func AllowType(p CppParameter, isReturnType bool) error {

	if t, ok := p.QSetOf(); ok {
		if err := AllowType(t, isReturnType); err != nil {
			return err
		}
	}
	if t, _, ok := p.QListOf(); ok {
		if err := AllowType(t, isReturnType); err != nil { // e.g. QGradientStops is a QVector<> (OK) of QGradientStop (not OK)
			return err
		}

		// qsciscintilla.h QsciScintilla_Annotate4: no copy ctor for private type QsciStyledText
		// Works fine normally, but not in a list
		if t.ParameterType == "QsciStyledText" {
			return ErrTooComplex
		}
	}
	if kType, vType, _, ok := p.QMapOf(); ok {
		if err := AllowType(kType, isReturnType); err != nil {
			return err
		}
		if err := AllowType(vType, isReturnType); err != nil {
			return err
		}
		// Additionally, Go maps do not support []byte keys
		// This affects qnetwork qsslconfiguration BackendConfiguration
		if kType.ParameterType == "QByteArray" {
			return ErrTooComplex
		}
	}
	if kType, vType, ok := p.QPairOf(); ok {
		if err := AllowType(kType, isReturnType); err != nil {
			return err
		}
		if err := AllowType(vType, isReturnType); err != nil {
			return err
		}
	}
	if p.QMultiMapOf() {
		return ErrTooComplex // e.g. Qt5 QNetwork qsslcertificate.h has a QMultiMap<QSsl::AlternativeNameEntryType, QString>
	}

	if !AllowClass(p.ParameterType) {
		return ErrTooComplex // This whole class type has been blocked, not only as a parameter/return type
	}

	if strings.Contains(p.ParameterType, "(*)") || strings.Contains(p.ParameterType, "::*)(") { // Function pointer.
		return ErrTooComplex // e.g. QAccessible_InstallFactory
	}
	if strings.Contains(p.ParameterType, "QJSValue") { // callback function pointer
		return ErrTooComplex // e.g. QWebEngineFrame_RunJavaScript2
	}
	if strings.HasPrefix(p.ParameterType, "QDBusReply<") {
		return ErrTooComplex // Qt 6 qdbusconnectioninterface.h, this could probably be made to work
	}
	if strings.HasPrefix(p.ParameterType, "StringResult<") {
		return ErrTooComplex // e.g. qcborstreamreader.h
	}
	if strings.HasPrefix(p.ParameterType, "QScopedPointer<") {
		return ErrTooComplex // e.g. qbrush.h
	}
	if strings.HasPrefix(p.ParameterType, "QExplicitlySharedDataPointer<") {
		return ErrTooComplex // e.g. qpicture.h
	}
	if strings.HasPrefix(p.ParameterType, "QSharedDataPointer<") {
		return ErrTooComplex // e.g. qurlquery.h
	}
	if strings.HasPrefix(p.ParameterType, "QTypedArrayData<") {
		return ErrTooComplex // e.g. qbitarray.h
	}
	if strings.HasPrefix(p.ParameterType, "QGenericMatrix<") {
		return ErrTooComplex // e.g. qmatrix4x4.h
	}
	if strings.HasPrefix(p.ParameterType, "QUrlTwoFlags<") {
		return ErrTooComplex // e.g. qurl.h
	}
	if strings.HasPrefix(p.ParameterType, "struct __") {
		return ErrTooComplex // e.g. Qt 6 qopenglcontext_platform.h
	}
	if strings.HasPrefix(p.ParameterType, "FillResult<") {
		return ErrTooComplex // Scintilla
	}
	if strings.HasPrefix(p.ParameterType, "QBindable<") {
		return ErrTooComplex // e.g. Qt 6 qabstractanimation.h
	}
	if strings.HasPrefix(p.ParameterType, "QRgbaFloat<") {
		return ErrTooComplex // e.g. Qt 6 qcolortransform.h
	}
	if strings.HasPrefix(p.ParameterType, "QPointer<") {
		return ErrTooComplex // e.g. Qt 6 qevent.h . It should be possible to support this
	}
	if strings.HasPrefix(p.ParameterType, "EncodedData<") {
		return ErrTooComplex // e.g. Qt 6 qstringconverter.h
	}
	if strings.HasPrefix(p.ParameterType, "QQmlListProperty<") {
		return ErrTooComplex // e.g. Qt 5 QWebChannel qmlwebchannel.h . Supporting this will be required for QML in future
	}
	if strings.HasPrefix(p.ParameterType, "QWebEngineCallback<") {
		return ErrTooComplex // Function pointer types in QtWebEngine
	}
	if strings.HasPrefix(p.ParameterType, "Result<") {
		return ErrTooComplex // e.g. Qt 6 kpluginfactory.h . Template type
	}

	if strings.HasPrefix(p.ParameterType, "std::") && !strings.HasPrefix(p.ParameterType, "std::pair<") {
		// std::initializer           e.g. qcborarray.h
		// std::string                QByteArray->toStdString(). There are QString overloads already
		// std::nullptr_t             Qcborstreamwriter
		// std::chrono::nanoseconds   QDeadlineTimer_RemainingTimeAsDuration
		// std::seed_seq              QRandom
		// std::exception             Scintilla
		return ErrTooComplex
	}
	if p.ParameterType == "QVersionNumber::It" {
		return ErrTooComplex // e.g. Qt 6.8 qversionnumber.h
	}
	if strings.Contains(p.ParameterType, "QCP") && strings.Contains(p.ParameterType, "const_iterator") {
		return ErrTooComplex // Qt 6 qcustomplot.h. This could probably be made to work
	}
	if strings.Contains(p.ParameterType, "::QPrivate") {
		return ErrTooComplex // e.g. QAbstractItemModel::QPrivateSignal
	}
	if strings.Contains(p.GetQtCppType().ParameterType, "DataPtr") {
		return ErrTooComplex // e.g. QImage::data_ptr()
	}
	if strings.Contains(p.ParameterType, "::DataPointer") {
		return ErrTooComplex // Qt 6 qbytearray.h. This could probably be made to work
	}
	if strings.HasPrefix(p.ParameterType, "QSharedPointer<") {
		return ErrTooComplex // Qt 6 qwebengineclientcertificateselection.h
	}
	if strings.HasPrefix(p.ParameterType, "QWeakPointer<") {
		return ErrTooComplex // Qt 6 qwebengineframe.h
	}
	if strings.HasPrefix(p.ParameterType, "QArrayDataPointer<") {
		return ErrTooComplex // Qt 6 qbytearray.h. This could probably be made to work
	}
	if strings.HasPrefix(p.ParameterType, "QAtomicPointer<") {
		return ErrTooComplex // Qt 6 qreadwritelock.h
	}
	if strings.HasPrefix(p.ParameterType, "QBasicAtomicPointer<") {
		return ErrTooComplex // Qt 6 qmutex.h
	}
	if strings.HasPrefix(p.ParameterType, "QBasicAtomicInteger<") {
		return ErrTooComplex // Qt 6 qarraydata.h
	}
	if strings.HasPrefix(p.ParameterType, "QTaggedPointer<") {
		return ErrTooComplex // Qt 6 qproperty.h
	}
	if strings.HasPrefix(p.ParameterType, "QCPDataContainer<") {
		return ErrTooComplex // Qt 6 qcustomplot.h
	}
	if strings.Contains(p.ParameterType, "totally_ordered_wrapper<") {
		return ErrTooComplex // Qt 6 qabstractitemmodel.h
	}
	if strings.HasSuffix(p.ParameterType, "]") {
		return ErrTooComplex // Qt 6 quuid.h
	}

	// Some QFoo constructors take a QFooPrivate
	// QIcon also returns a QIconPrivate
	if len(p.ParameterType) > 0 && p.ParameterType[0] == 'Q' && strings.HasSuffix(p.ParameterType, "Private") {
		return ErrTooComplex
	}
	if strings.HasPrefix(p.ParameterType, "QtPrivate::") {
		return ErrTooComplex // e.g. Qt 6 qbindingstorage.h
	}

	// If any parameters are QString*, skip the method
	// QDebug constructor
	// QXmlStreamWriter constructor
	// QFile::moveToTrash
	// QLockFile::getLockInfo
	// QTextDecoder::toUnicode
	// QTextStream::readLineInto
	// QFileDialog::getOpenFileName selectedFilter* param
	if p.ParameterType == "QString" && p.Pointer && !isReturnType { // Out-parameters
		return ErrTooComplex
	}

	// QBuffer can accept a raw pointer to an internal QByteArray, but that
	// doesn't work when QByteArray is deleted
	// QDataStream
	if p.ParameterType == "QByteArray" && p.Pointer && !isReturnType {
		return ErrTooComplex
	}

	if p.ParameterType == "QFormLayout::ItemRole" && p.Pointer && !isReturnType { // Out-parameters in QFormLayout
		return ErrTooComplex
	}

	// Qt 6 OpenGL
	if strings.HasPrefix(p.ParameterType, "QOpenGL") && strings.Contains(p.ParameterType, "Backend::") {
		// e.g. QOpenGLFunctions_1_0_CoreBackend, QOpenGLFunctions_1_0_DeprecatedBackend, QOpenGLVersionFunctionsBackend
		return ErrTooComplex
	}

	// Qt 6 Attica
	if strings.HasPrefix(p.ParameterType, "ItemJob<") {
		return ErrTooComplex // template classes
	}
	if strings.HasPrefix(p.ParameterType, "ItemPostJob<") {
		return ErrTooComplex // template classes
	}
	if strings.HasPrefix(p.ParameterType, "ListJob<") {
		return ErrTooComplex // template classes
	}

	// Qt 6 KWindowSystem
	if strings.Contains(p.ParameterType, "NET::") {
		// e.g. NET, NETExtendedStrut, NETFullscreenMonitors, NETRootInfo, NETWinInfo
		// These classes don't have a valid include and end up as incomplete types
		return ErrTooComplex
	}
	if strings.HasPrefix(p.ParameterType, "xcb_") {
		// e.g. xcb_atom_t, xcb_connection_t, xcb_generic_event_t
		// These are external types that require more work to project
		return ErrTooComplex
	}

	// Qt 6 KIO
	if strings.Contains(p.ParameterType, "stat64") {
		// a parameter to a UDSEntry constructor variant, this is a Qt struct typedef alias for an external type
		return ErrTooComplex
	}

	if p.Pointer && p.PointerCount >= 2 { // Out-parameters
		if p.ParameterType != "char" && p.ParameterType != "void" {
			return ErrTooComplex // e.g. QGraphicsItem_IsBlockedByModalPanel1
		}
		if p.ParameterType == "char" && p.ParameterName == "xpm" {
			// Array parameters:
			// - QPixmap and QImage ctors from an xpm char*[]
			// TODO support these
			return ErrTooComplex
		}
	}

	switch p.ParameterType {
	case
		"QPolygon", "QPolygonF", // QPolygon extends a template type
		"QGenericMatrix", "QMatrix3x3", // extends a template type
		"QLatin1String", "QStringView", // e.g. QColor constructors and QColor::SetNamedColor() overloads. These are usually optional alternatives to QString
		"QLatin1StringView",               // Qt 6 - used in qanystringview
		"QUtf8StringView",                 // Qt 6 - used in qdebug
		"QStringRef",                      // e.g. QLocale::toLongLong and similar overloads. As above
		"qfloat16",                        // e.g. QDataStream - there is no such half-float type in C or Go
		"char16_t",                        // e.g. QChar() constructor overload, just unnecessary
		"char32_t",                        // e.g. QDebug().operator<< overload, unnecessary
		"wchar_t",                         // e.g. qstringview.h overloads, unnecessary
		"FILE",                            // e.g. qfile.h constructors
		"sockaddr",                        // Qt network Qhostaddress. Should be possible to make this work but may be platform-specific
		"qInternalCallback",               // e.g. qnamespace.h
		"QGraphicsEffectSource",           // e.g. used by qgraphicseffect.h, but the definition is in ????
		"QXmlStreamEntityDeclarations",    // e.g. qxmlstream.h. The class definition was blacklisted for ???? reason so don't allow it as a parameter either
		"QXmlStreamNamespaceDeclarations", // e.g. qxmlstream.h. As above
		"QXmlStreamNotationDeclarations",  // e.g. qxmlstream.h. As above
		"LineLayout::ValidLevel",          // ..
		"QtMsgType",                       // e.g. qdebug.h TODO Defined in qlogging.h, but omitted because it's predefined in qglobal.h, and our clangexec is too aggressive
		"QTextStreamFunction",             // e.g. qdebug.h
		"QFactoryInterface",               // qfactoryinterface.h
		"QTextEngine",                     // used by qtextlayout.h, also blocked in ImportHeaderForClass above
		"QVulkanInstance",                 // e.g. qwindow.h. Not tackling vulkan yet
		"QPlatformNativeInterface",        // e.g. QGuiApplication::platformNativeInterface(). Private type, could probably expose as uintptr. n.b. Changes in Qt6
		"QPlatformBackingStore",           // e.g. qbackingstore.h, as below
		"QPlatformMenuBar",                // e.g. qfutureinterface.h, as below
		"QPlatformOffscreenSurface",       // e.g. qoffscreensurface.h, as below
		"QPlatformPixmap",                 // e.g. qpixmap.h. as below
		"QPlatformScreen",                 // e.g. qscreen.h. as below
		"QPlatformWindow",                 // e.g. qwindow.h, as below
		"QPlatformSurface",                // e.g. qsurface.h. as below
		"QPlatformMenu",                   // e.g. QMenu_PlatformMenu. Defined in the QPA, could probably expose as uintptr
		"QPlatformMediaCaptureSession",    // Qt 6 Multimedia qmediacapturesession.h
		"QPlatformMediaRecorder",          // Qt 6 Multimedia qmediarecorder.h
		"QPlatformVideoSink",              // Qt 6 Multimedia qvideosink.h
		"QTextDocument::ResourceProvider", // Qt 6 typedef for unsupported std::function<QVariant(const QUrl&)>
		"QTransform::Affine",              // Qt 6 qtransform.h - public method returning private type
		"QAbstractAudioBuffer",            // Qt 5 Multimedia, this is a private/internal type only
		"QAbstractVideoBuffer",            // Works in Qt 5, but in Qt 6 Multimedia this type is used in qvideoframe.h but is not defined anywhere (it was later added in Qt 6.8)
		"QRhi",                            // Qt 6 unstable types, used in Multimedia
		"QPostEventList",                  // Qt QCoreApplication: private headers required
		"QMetaCallEvent",                  // ..
		"QPostEvent",                      // ..
		"QWebFrameAdapter",                // Qt 5 Webkit: Used by e.g. qwebframe.h but never defined anywhere
		"QWebPageAdapter",                 // ...
		"QQmlWebChannelAttached",          // Qt 5 qqmlwebchannel.h. Need to add QML support for this to work
		"QQmlEngine",                      // Qt 6 qqmlengine.h, need to add QtQml for this to work
		"QJSEngine",                       // Qt 6 qjsengine.h, need to add QtQml for this to work
		"Character",                       // Qt 6 libqtermwidget, this is an internal class, it's in the Git repo but not in the Debian package
		"HistoryType",                     // Qt 6 libqtermwidget, this is an internal class, it's in the Git repo but not in the Debian package
		"ScreenWindow",                    // Qt 6 libqtermwidget, this is an internal class, it's in the Git repo but not in the Debian package
		"TerminalCharacterDecoder",        // Qt 6 libqtermwidget, this is an internal class, it's in the Git repo but not in the Debian package
		"QueryPair",                       // Qt 6 qevent.h
		"QWidgetItemData",                 // Qt 6 qtablewidget.h
		"Macro",                           // Qt 6 qscimacro.h
		"QList<QString>::const_iterator",  // Qt 6 qsciapis.h
		"QAtomicInt",                      // Qt 6 qobject.h
		"QDynamicMetaObjectData",          // Qt 6 qobject.h
		"QPropertyDelayedNotifications",   // Qt 6 qbindingstorage.h
		"QList<bool>",                     // Qt 6 qsqlindex.h, this can probably be implemented at some point
		"group",                           // Qt 6 kuser.h
		"passwd",                          // Qt 6 kuser.h
		"DBusError",                       // Qt 6 qdbuserror.h, this is an external type forward declaration
		"ClipboardUpdater",                // Qt 6 jobuidelegate.h
		"KIO::SslUi",                      // Qt 6 sslui.h
		"Installation",                    // Qt 6 KNewStuff, enginebase.h
		"GL",                              // Qt 6 qopengl.h
		"GLsync",                          // Qt 6 qopengl.h
		"GLDEBUGPROC",                     // Qt 6 qopenglfunctions.h
		"QPlatformOpenGLContext",          // Qt 6 qopenglcontext.h
		"KateInlineNoteData",              // Qt 6 inlinenote.h
		"____last____":
		return ErrTooComplex
	}

	// Should be OK
	return nil
}

func AllowField(fieldName string) bool {
	switch fieldName {
	case "psName", "psIconName", // Qt 6 KConfig, kstandardactions_p.h
		"____last____":
		return false
	}
	return true
}

func AllowFieldForClass(className string) bool {
	switch className {
	case "KSandbox::ProcessContext", // Qt 6 KCoreAddons, ksandbox.h
		"____last____":
		return false
	}
	return true
}

func AllowStructDef(className string) bool {
	switch className {
	case "KIO::SslUi",
		"KNSCore::ErrorCode",
		"KParts::PartLoader",
		"KSyntaxHighlighting::WildcardMatcher":
		return false
	default:
		return true
	}
}

func AllowInnerClassDef(className string) bool {
	switch className {
	case
		"KIO::DeleteJob",                     // Qt 6 KIO, deletejob.h
		"KIO::Job",                           // Qt 6 KIO, listjob.h
		"KIO::ListJob",                       // Qt 6 KIO, listjob.h
		"KIO::MetaData",                      // Qt 6 KIO, metadata.h
		"KIO::SimpleJob",                     // Qt 6 KIO, listjob.h
		"KIO::UDSEntry",                      // Qt 6 KIO, listjob.h
		"KNSCore::EngineBase",                // Qt 6 KNewStuff, enginebase.h
		"KNSCore::Entry",                     // Qt 6 KNewStuff, question.h
		"KNSCore::ErrorCode",                 // Qt 6 KNewStuff, errorcode.h
		"KNSCore::Provider",                  // Qt 6 KNewStuff, provider.h
		"KNSCore::SearchRequest",             // Qt 6 KNewStuff, searchrequest.h
		"KParts::MainWindow",                 // Qt 6 KParts, mainwindow.h
		"KParts::OpenUrlArguments",           // Qt 6 KParts, readonlypart.h
		"KSyntaxHighlighting::Definition",    // Qt 6 KSyntaxHighlighting, definition.h
		"KSyntaxHighlighting::FoldingRegion", // Qt 6 KSyntaxHighlighting, foldingregion.h
		"KSyntaxHighlighting::Format",        // Qt 6 KSyntaxHighlighting, format.h
		"KSyntaxHighlighting::Theme",         // Qt 6 KSyntaxHighlighting, theme.h
		"KTextEditor::Cursor",                // Qt 6 KTextEditor, cursor.h
		"KTextEditor::Document",              // Qt 6 KTextEditor, document.h
		"KTextEditor::MainWindow",            // Qt 6 KTextEditor, mainwindow.h
		"KTextEditor::Message",               // Qt 6 KTextEditor, message.h
		"KTextEditor::MovingCursor",          // Qt 6 KTextEditor, document.h
		"KTextEditor::MovingRange",           // Qt 6 KTextEditor, document.h
		"KTextEditor::Plugin",                // Qt 6 KTextEditor, plugin.h
		"Sonnet::BackgroundChecker",          // Qt 6 Sonnet, dialog.h
		"Sonnet::Dialog",                     // Qt 6 Sonnet, dialog.h
		"____last____":
		return true
	}

	return false
}

// AllowInheritedClass allows for overriding the direct inheritance of a class.
// Order is important here, especially if there are multiple classes with overlapping
// methods and/or inheritance.
func AllowInheritedClass(className string) ([]string, bool) {
	switch className {
	case
		"KCompletionMatches": // Qt 6 kcompletionmatches.h, inherits from KSortableList<QString>
		return nil, true

	case
		"KConfigSkeleton::ItemColor",          // Qt 6 kconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QColor>
		"KConfigSkeleton::ItemFont",           // Qt 6 kconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QFont>
		"KCoreConfigSkeleton::ItemBool",       // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<bool>
		"KCoreConfigSkeleton::ItemDateTime",   // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QDateTime>
		"KCoreConfigSkeleton::ItemDouble",     // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<double>
		"KCoreConfigSkeleton::ItemInt",        // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<qint32>
		"KCoreConfigSkeleton::ItemIntList",    // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QList<int>>
		"KCoreConfigSkeleton::ItemLongLong",   // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<qint64>
		"KCoreConfigSkeleton::ItemPoint",      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QPoint>
		"KCoreConfigSkeleton::ItemPointF",     // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QPointF>
		"KCoreConfigSkeleton::ItemProperty",   // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QVariant>
		"KCoreConfigSkeleton::ItemRect",       // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QRect>
		"KCoreConfigSkeleton::ItemRectF",      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QRectF>
		"KCoreConfigSkeleton::ItemSize",       // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QSize>
		"KCoreConfigSkeleton::ItemSizeF",      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QSizeF>
		"KCoreConfigSkeleton::ItemString",     // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QString>
		"KCoreConfigSkeleton::ItemStringList", // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QStringList>
		"KCoreConfigSkeleton::ItemUInt",       // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<quint32>
		"KCoreConfigSkeleton::ItemULongLong",  // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<quint64>
		"KCoreConfigSkeleton::ItemUrl",        // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QUrl>
		"KCoreConfigSkeleton::ItemUrlList":    // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QList<QUrl>>
		return []string{"KConfigSkeletonGenericItem"}, true

	case
		"QCPBars",           // Qt 6 qcustomplot.h, inherits from QCPAbstractPlottable1D<QCPBarsData>
		"QCPCurve",          // Qt 6 qcustomplot.h, inherits from QCPAbstractPlottable1D<QCPCurveData>
		"QCPFinancial",      // Qt 6 qcustomplot.h, inherits from QCPAbstractPlottable1D<QCPFinancialData>
		"QCPGraph",          // Qt 6 qcustomplot.h, inherits from QCPAbstractPlottable1D<QCPGraphData>
		"QCPStatisticalBox": // Qt 6 qcustomplot.h, inherits from QCPAbstractPlottable1D<QCPStatisticalBoxData>
		return []string{"QCPPlottableInterface1D", "QCPAbstractPlottable"}, true
	}

	return nil, false
}

// LinuxWindowsCompatCheck checks if the parameter is incompatible between the
// generated headers (generated on Linux) with other OSes such as Windows.
// These methods will be blocked on non-Linux OSes.
func LinuxWindowsCompatCheck(p CppParameter) bool {
	if p.GetQtCppType().ParameterType == "Q_PID" {
		return true // int64 on Linux, _PROCESS_INFORMATION* on Windows
	}

	if p.GetQtCppType().ParameterType == "QSocketDescriptor::DescriptorType" {
		return true // uintptr_t-compatible on Linux, void* on Windows
	}
	return false
}

func ApplyQuirks(className string, mm *CppMethod) {
	if className == "QObjectData" && mm.MethodName == "dynamicMetaObject" {
		mm.ReturnType.BecomesConstInVersion = addr("6.9")
	}
}
