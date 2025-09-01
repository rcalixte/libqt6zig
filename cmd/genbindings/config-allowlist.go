package main

import (
	"path/filepath"
	"strings"
)

func InsertTypedefs() {
	// Seed well-known typedefs
	pp := "qt6"

	// FIXME this isn't picked up automatically because QFile inherits QFileDevice and the name refers to its parent class
	KnownTypedefs["QFile::FileTime"] = lookupResultTypedef{pp, CppTypedef{"QFile::FileTime", parseSingleTypeString("QFileDevice::FileTime")}}

	// QFile doesn't see QFileDevice parent class enum
	KnownTypedefs["QFile::Permissions"] = lookupResultTypedef{pp, CppTypedef{"QFile::Permissions", parseSingleTypeString("QFileDevice::Permissions")}}
	KnownTypedefs["QIODevice::OpenMode"] = lookupResultTypedef{pp, CppTypedef{"QIODevice::OpenMode", parseSingleTypeString("QIODeviceBase::OpenMode")}}

	// Qt 6 KConfig uses an inherited enum
	KnownTypedefs["KConfigGroup::WriteConfigFlags"] = lookupResultTypedef{pp, CppTypedef{"KConfigGroup::WriteConfigFlags", parseSingleTypeString("KConfigBase::WriteConfigFlags")}}

	// Qt 6 QTermWidget has a broken typedef for Command
	KnownTypedefs["KeyboardTranslator::Command"] = lookupResultTypedef{pp, CppTypedef{"Konsole::KeyboardTranslator::Command", parseSingleTypeString("Konsole::KeyboardTranslator::Command")}}
	KnownTypedefs["Command"] = lookupResultTypedef{pp, CppTypedef{"Konsole::KeyboardTranslator::Command", parseSingleTypeString("Konsole::KeyboardTranslator::Command")}}
	KnownImports["Command"] = lookupResultImport{"posix-restricted-qtermwidget", "KeyboardTranslator"}

	// Qt 6 ksandbox.h uses an inherited enum
	KnownTypedefs["QProcess::OpenMode"] = lookupResultTypedef{pp, CppTypedef{"QProcess::OpenMode", parseSingleTypeString("QIODeviceBase::OpenMode")}}
}

func Widgets_AllowHeader(fullpath string) bool {
	fname := filepath.Base(fullpath)

	if strings.HasSuffix(fname, "_impl.h") {
		return false // Not meant to be imported
	}

	fname_lc := strings.ToLower(fname)
	if strings.Contains(fname_lc, "opengl") || strings.Contains(fname_lc, "vulkan") {
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
		"QtVideo",                        // Qt 6 qtvideo.h
		"q20",                            // Qt 6 q20type_traits.h
		"Kuit",                           // Qt 6 kuitsetup.h
		"QTermWidget",                    // Qt 6 qtermwidget.h
		"QTermWidgetInterface",           // Qt 6 qtermwidget_interface.h
		"Konsole",                        // Qt 6 KeyboardTranslator.h
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
		"QDeferredDeleteEvent",       // Qt 6. Hidden/undocumented class in Qt 6.4, moved to private header in Qt 6.7. Intended for test use only
		"QVariantConstPointer",       // Qt 6, possible to bind but yields little value
		"QUntypedPropertyData::InheritsQUntypedPropertyData", // qpropertyprivate.h . Hidden/undocumented class in Qt 6.4, removed in 6.7
		"KCoreConfigSkeleton::ItemString",                    // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QString>
		"KCoreConfigSkeleton::ItemUrl",                       // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QUrl>
		"KCoreConfigSkeleton::ItemProperty",                  // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QVariant>
		"KCoreConfigSkeleton::ItemBool",                      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<bool>
		"KCoreConfigSkeleton::ItemInt",                       // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<qint32>
		"KCoreConfigSkeleton::ItemLongLong",                  // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<qint64>
		"KCoreConfigSkeleton::ItemUInt",                      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<quint32>
		"KCoreConfigSkeleton::ItemULongLong",                 // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<quint64>
		"KCoreConfigSkeleton::ItemDouble",                    // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<double>
		"KCoreConfigSkeleton::ItemRect",                      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QRect>
		"KCoreConfigSkeleton::ItemRectF",                     // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QRectF>
		"KCoreConfigSkeleton::ItemPoint",                     // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QPoint>
		"KCoreConfigSkeleton::ItemPointF",                    // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QPointF>
		"KCoreConfigSkeleton::ItemSize",                      // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QSize>
		"KCoreConfigSkeleton::ItemSizeF",                     // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QSizeF>
		"KCoreConfigSkeleton::ItemDateTime",                  // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QDateTime>
		"KCoreConfigSkeleton::ItemStringList",                // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QStringList>
		"KCoreConfigSkeleton::ItemUrlList",                   // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QList<QUrl>>
		"KCoreConfigSkeleton::ItemIntList",                   // Qt 6 kcoreconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QList<int>>
		"KConfigSkeleton::ItemColor",                         // Qt 6 kconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QColor>
		"KConfigSkeleton::ItemFont",                          // Qt 6 kconfigskeleton.h, inherits from KConfigSkeletonGenericItem<QFont>
		"KGroupId",                                           // Qt 6 kuser.h, inherits from KUserOrGroupId<unsigned int>
		"KUserId",                                            // Qt 6 kuser.h, inherits from KUserOrGroupId<unsigned int>
		"KCompletionMatches",                                 // Qt 6 kcompletionmatches.h, inherits from KSortableList<QString>
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
	if className == "QAccessibleInterface" {
		return false
	}

	if className == "QAccessibleTableInterface" {
		return false
	}

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

	if className == "QTest::QTouchEventSequence" {
		return false
	}

	if className == "QFileDevice" {
		return false
	}
	if className == "QImageIOPlugin" {
		return false
	}
	if className == "QNetworkReply" {
		return false
	}
	if className == "QPagedPaintDevice" {
		return false
	}
	if className == "QPaintDevice" {
		return false
	}
	if className == "QPaintDeviceWindow" {
		return false
	}
	if className == "QScreen" {
		return false
	}
	if className == "QSurface" {
		return false
	}
	if className == "QTextBlockGroup" {
		return false
	}
	if className == "QTextObject" {
		return false
	}

	// Qt 6 SQL
	if className == "QSqlResult" {
		return false
	}

	// Qt 6 Charts
	if className == "QBarModelMapper" {
		return false
	}
	if className == "QBoxPlotModelMapper" {
		return false
	}
	if className == "QLegend" {
		return false
	}
	if className == "QPieModelMapper" {
		return false
	}
	if className == "QXYModelMapper" {
		return false
	}

	// Qt 6 KCodecs
	if className == "KCodecs::Codec" {
		return false
	}
	if className == "KCodecs::Encoder" {
		return false
	}

	// Qt 6 KConfig
	if className == "KConfigBase" {
		return false
	}

	// Qt 6 KWidgetsAddons
	if className == "KMultiTabBarButton" {
		return false
	}
	if className == "KMultiTabBarTab" {
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

	if className == "QWaveDecoder" && mm.MethodName == "setIODevice" {
		return ErrTooComplex // Qt 6: Present in header, but no-op method was not included in compiled library
	}

	if className == "QDeadlineTimer" && mm.MethodName == "_q_data" {
		// Qt 6.4: Present in header with "not a public method" comment, not present in Qt 6.6
		// @ref https://github.com/qt/qtbase/blob/v6.4.0/src/corelib/kernel/qdeadlinetimer.h#L156C29-L156C36
		return ErrTooComplex
	}

	if className == "QGradient" && mm.MethodName == "setStops" {
		return ErrTooComplex // Qt 6.4: undefined symbol error during compilation
	}

	if className == "QsciScintillaBase" && mm.MethodName == "inputMethodQuery" {
		return ErrTooComplex // Qt 6.4: private method
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

	if className == "QWebEnginePage" && mm.MethodName == "setFeaturePermission" {
		// Qt 6.8: Skip this method, a parameter type is not properly handled yet
		// and the function does not appear in the Qt documentation
		return ErrTooComplex
	}

	// Qt 6 KConfig
	if className == "KCoreConfigSkeleton::ItemInt" && (mm.MethodName == "setMinValue" || mm.MethodName == "setMaxValue") {
		// Qt 6 kcoreconfigskeleton.h: inherited method of a blocked class
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
