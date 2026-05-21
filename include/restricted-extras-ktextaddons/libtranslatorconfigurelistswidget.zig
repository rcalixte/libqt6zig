const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDragEnterEvent = @import("libqt6").QDragEnterEvent;
const QDragLeaveEvent = @import("libqt6").QDragLeaveEvent;
const QDragMoveEvent = @import("libqt6").QDragMoveEvent;
const QDropEvent = @import("libqt6").QDropEvent;
const QEnterEvent = @import("libqt6").QEnterEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
pub const TextTranslator__TranslatorConfigureListsWidget = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorConfigureListsWidget,

    pub const _is_TextTranslator__TranslatorConfigureListsWidget = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextTranslator::TranslatorConfigureListsWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextTranslator__TranslatorConfigureListsWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextTranslator::TranslatorConfigureListsWidget object.
    ///
    pub fn New2() TextTranslator__TranslatorConfigureListsWidget {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MetaObject(self: TextTranslator__TranslatorConfigureListsWidget) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperMetaObject(self: TextTranslator__TranslatorConfigureListsWidget) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextTranslator__TranslatorConfigureListsWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextTranslator__TranslatorConfigureListsWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Save(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_Save(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Load(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_Load(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn WinId(self: TextTranslator__TranslatorConfigureListsWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn CreateWinId(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn InternalWinId(self: TextTranslator__TranslatorConfigureListsWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn EffectiveWinId(self: TextTranslator__TranslatorConfigureListsWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Style(self: TextTranslator__TranslatorConfigureListsWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextTranslator__TranslatorConfigureListsWidget, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsTopLevel(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsWindow(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsModal(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextTranslator__TranslatorConfigureListsWidget, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsEnabled(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextTranslator__TranslatorConfigureListsWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextTranslator__TranslatorConfigureListsWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextTranslator__TranslatorConfigureListsWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FrameGeometry(self: TextTranslator__TranslatorConfigureListsWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Geometry(self: TextTranslator__TranslatorConfigureListsWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn NormalGeometry(self: TextTranslator__TranslatorConfigureListsWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn X(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Y(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Pos(self: TextTranslator__TranslatorConfigureListsWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FrameSize(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Size(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Width(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Height(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Rect(self: TextTranslator__TranslatorConfigureListsWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ChildrenRect(self: TextTranslator__TranslatorConfigureListsWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ChildrenRegion(self: TextTranslator__TranslatorConfigureListsWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MinimumSize(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MaximumSize(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MinimumWidth(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MinimumHeight(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MaximumWidth(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MaximumHeight(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextTranslator__TranslatorConfigureListsWidget, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextTranslator__TranslatorConfigureListsWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextTranslator__TranslatorConfigureListsWidget, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextTranslator__TranslatorConfigureListsWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextTranslator__TranslatorConfigureListsWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextTranslator__TranslatorConfigureListsWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextTranslator__TranslatorConfigureListsWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextTranslator__TranslatorConfigureListsWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SizeIncrement(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextTranslator__TranslatorConfigureListsWidget, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextTranslator__TranslatorConfigureListsWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn BaseSize(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextTranslator__TranslatorConfigureListsWidget, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextTranslator__TranslatorConfigureListsWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextTranslator__TranslatorConfigureListsWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextTranslator__TranslatorConfigureListsWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextTranslator__TranslatorConfigureListsWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextTranslator__TranslatorConfigureListsWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Window(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn NativeParentWidget(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn TopLevelWidget(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Palette(self: TextTranslator__TranslatorConfigureListsWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextTranslator__TranslatorConfigureListsWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextTranslator__TranslatorConfigureListsWidget, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextTranslator__TranslatorConfigureListsWidget, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Font(self: TextTranslator__TranslatorConfigureListsWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextTranslator__TranslatorConfigureListsWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FontMetrics(self: TextTranslator__TranslatorConfigureListsWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FontInfo(self: TextTranslator__TranslatorConfigureListsWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Cursor(self: TextTranslator__TranslatorConfigureListsWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextTranslator__TranslatorConfigureListsWidget, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UnsetCursor(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextTranslator__TranslatorConfigureListsWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn HasMouseTracking(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UnderMouse(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextTranslator__TranslatorConfigureListsWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn HasTabletTracking(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextTranslator__TranslatorConfigureListsWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextTranslator__TranslatorConfigureListsWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Mask(self: TextTranslator__TranslatorConfigureListsWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ClearMask(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextTranslator__TranslatorConfigureListsWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextTranslator__TranslatorConfigureListsWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Grab(self: TextTranslator__TranslatorConfigureListsWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn GraphicsEffect(self: TextTranslator__TranslatorConfigureListsWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextTranslator__TranslatorConfigureListsWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextTranslator__TranslatorConfigureListsWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextTranslator__TranslatorConfigureListsWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextTranslator__TranslatorConfigureListsWidget, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextTranslator__TranslatorConfigureListsWidget, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextTranslator__TranslatorConfigureListsWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn WindowIcon(self: TextTranslator__TranslatorConfigureListsWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextTranslator__TranslatorConfigureListsWidget, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextTranslator__TranslatorConfigureListsWidget, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextTranslator__TranslatorConfigureListsWidget, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextTranslator__TranslatorConfigureListsWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn WindowOpacity(self: TextTranslator__TranslatorConfigureListsWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsWindowModified(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextTranslator__TranslatorConfigureListsWidget, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextTranslator__TranslatorConfigureListsWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ToolTipDuration(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextTranslator__TranslatorConfigureListsWidget, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextTranslator__TranslatorConfigureListsWidget, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextTranslator__TranslatorConfigureListsWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextTranslator__TranslatorConfigureListsWidget, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextTranslator__TranslatorConfigureListsWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UnsetLayoutDirection(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextTranslator__TranslatorConfigureListsWidget, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Locale(self: TextTranslator__TranslatorConfigureListsWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UnsetLocale(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsRightToLeft(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsLeftToRight(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SetFocus(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsActiveWindow(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ActivateWindow(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ClearFocus(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextTranslator__TranslatorConfigureListsWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextTranslator__TranslatorConfigureListsWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn HasFocus(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QWidget `
    ///
    pub fn SetTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextTranslator__TranslatorConfigureListsWidget, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FocusProxy(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextTranslator__TranslatorConfigureListsWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn GrabMouse(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ReleaseMouse(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn GrabKeyboard(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ReleaseKeyboard(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextTranslator__TranslatorConfigureListsWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextTranslator__TranslatorConfigureListsWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextTranslator__TranslatorConfigureListsWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextTranslator__TranslatorConfigureListsWidget, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn MouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn KeyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UpdatesEnabled(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextTranslator__TranslatorConfigureListsWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn GraphicsProxyWidget(self: TextTranslator__TranslatorConfigureListsWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Update(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Repaint(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextTranslator__TranslatorConfigureListsWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextTranslator__TranslatorConfigureListsWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextTranslator__TranslatorConfigureListsWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Show(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Hide(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ShowMinimized(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ShowMaximized(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ShowFullScreen(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ShowNormal(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Close(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Raise(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Lower(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextTranslator__TranslatorConfigureListsWidget, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextTranslator__TranslatorConfigureListsWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextTranslator__TranslatorConfigureListsWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextTranslator__TranslatorConfigureListsWidget, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("texttranslator__translatorconfigurelistswidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextTranslator__TranslatorConfigureListsWidget, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn AdjustSize(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsVisible(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsHidden(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsMinimized(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsMaximized(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsFullScreen(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextTranslator__TranslatorConfigureListsWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextTranslator__TranslatorConfigureListsWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SizePolicy(self: TextTranslator__TranslatorConfigureListsWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextTranslator__TranslatorConfigureListsWidget, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextTranslator__TranslatorConfigureListsWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn VisibleRegion(self: TextTranslator__TranslatorConfigureListsWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextTranslator__TranslatorConfigureListsWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextTranslator__TranslatorConfigureListsWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ContentsMargins(self: TextTranslator__TranslatorConfigureListsWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ContentsRect(self: TextTranslator__TranslatorConfigureListsWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Layout(self: TextTranslator__TranslatorConfigureListsWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextTranslator__TranslatorConfigureListsWidget, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UpdateGeometry(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextTranslator__TranslatorConfigureListsWidget, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextTranslator__TranslatorConfigureListsWidget, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextTranslator__TranslatorConfigureListsWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextTranslator__TranslatorConfigureListsWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FocusWidget(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn NextInFocusChain(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn PreviousInFocusChain(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn AcceptDrops(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextTranslator__TranslatorConfigureListsWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextTranslator__TranslatorConfigureListsWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextTranslator__TranslatorConfigureListsWidget, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextTranslator__TranslatorConfigureListsWidget, before: anytype, actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextTranslator__TranslatorConfigureListsWidget, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextTranslator__TranslatorConfigureListsWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("texttranslator__translatorconfigurelistswidget.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextTranslator__TranslatorConfigureListsWidget, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextTranslator__TranslatorConfigureListsWidget, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextTranslator__TranslatorConfigureListsWidget, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextTranslator__TranslatorConfigureListsWidget, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ParentWidget(self: TextTranslator__TranslatorConfigureListsWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextTranslator__TranslatorConfigureListsWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextTranslator__TranslatorConfigureListsWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn Find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextTranslator__TranslatorConfigureListsWidget, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextTranslator__TranslatorConfigureListsWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextTranslator__TranslatorConfigureListsWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn EnsurePolished(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextTranslator__TranslatorConfigureListsWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn AutoFillBackground(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextTranslator__TranslatorConfigureListsWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn BackingStore(self: TextTranslator__TranslatorConfigureListsWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn WindowHandle(self: TextTranslator__TranslatorConfigureListsWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Screen(self: TextTranslator__TranslatorConfigureListsWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextTranslator__TranslatorConfigureListsWidget, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn CreateWindowContainer(window: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(window.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextTranslator__TranslatorConfigureListsWidget, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextTranslator__TranslatorConfigureListsWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextTranslator__TranslatorConfigureListsWidget, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextTranslator__TranslatorConfigureListsWidget, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextTranslator__TranslatorConfigureListsWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextTranslator__TranslatorConfigureListsWidget, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextTranslator__TranslatorConfigureListsWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextTranslator__TranslatorConfigureListsWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextTranslator__TranslatorConfigureListsWidget, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextTranslator__TranslatorConfigureListsWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextTranslator__TranslatorConfigureListsWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextTranslator__TranslatorConfigureListsWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextTranslator__TranslatorConfigureListsWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextTranslator__TranslatorConfigureListsWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextTranslator__TranslatorConfigureListsWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextTranslator__TranslatorConfigureListsWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWindowContainer2(window: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(window.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateWindowContainer3(window: anytype, parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(window.ptr), @ptrCast(parent.ptr), @bitCast(flags)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorconfigurelistswidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextTranslator__TranslatorConfigureListsWidget, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsWidgetType(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsWindowType(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn IsQuickItemType(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SignalsBlocked(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextTranslator__TranslatorConfigureListsWidget, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Thread(self: TextTranslator__TranslatorConfigureListsWidget) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextTranslator__TranslatorConfigureListsWidget, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextTranslator__TranslatorConfigureListsWidget, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextTranslator__TranslatorConfigureListsWidget, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextTranslator__TranslatorConfigureListsWidget, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextTranslator__TranslatorConfigureListsWidget, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("texttranslator__translatorconfigurelistswidget.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextTranslator__TranslatorConfigureListsWidget, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextTranslator__TranslatorConfigureListsWidget, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextTranslator__TranslatorConfigureListsWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Disconnect3(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextTranslator__TranslatorConfigureListsWidget, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn DumpObjectTree(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn DumpObjectInfo(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextTranslator__TranslatorConfigureListsWidget, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextTranslator__TranslatorConfigureListsWidget, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextTranslator__TranslatorConfigureListsWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("texttranslator__translatorconfigurelistswidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("texttranslator__translatorconfigurelistswidget.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn BindingStorage(self: TextTranslator__TranslatorConfigureListsWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn BindingStorage2(self: TextTranslator__TranslatorConfigureListsWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Destroyed(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Parent(self: TextTranslator__TranslatorConfigureListsWidget) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextTranslator__TranslatorConfigureListsWidget, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn DeleteLater(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextTranslator__TranslatorConfigureListsWidget, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextTranslator__TranslatorConfigureListsWidget, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextTranslator__TranslatorConfigureListsWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextTranslator__TranslatorConfigureListsWidget, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextTranslator__TranslatorConfigureListsWidget, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextTranslator__TranslatorConfigureListsWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextTranslator__TranslatorConfigureListsWidget, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn PaintingActive(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn WidthMM(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn HeightMM(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn LogicalDpiX(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn LogicalDpiY(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn PhysicalDpiX(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn PhysicalDpiY(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn DevicePixelRatio(self: TextTranslator__TranslatorConfigureListsWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn DevicePixelRatioF(self: TextTranslator__TranslatorConfigureListsWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn ColorCount(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Depth(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn DevType(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperDevType(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextTranslator__TranslatorConfigureListsWidget, visible: bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextTranslator__TranslatorConfigureListsWidget, visible: bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, bool) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SizeHint(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperSizeHint(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSizeHint(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn MinimumSizeHint(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperMinimumSizeHint(self: TextTranslator__TranslatorConfigureListsWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnMinimumSizeHint(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, i32) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn HasHeightForWidth(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperHasHeightForWidth(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn PaintEngine(self: TextTranslator__TranslatorConfigureListsWidget) QPaintEngine {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperPaintEngine(self: TextTranslator__TranslatorConfigureListsWidget) QPaintEngine {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QWheelEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QKeyEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QKeyEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QFocusEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QFocusEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QEnterEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QPaintEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMoveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QResizeEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QCloseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QTabletEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QActionEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QDropEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QShowEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QHideEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextTranslator__TranslatorConfigureListsWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextTranslator__TranslatorConfigureListsWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextTranslator__TranslatorConfigureListsWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, i32) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextTranslator__TranslatorConfigureListsWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextTranslator__TranslatorConfigureListsWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextTranslator__TranslatorConfigureListsWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QPainter) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextTranslator__TranslatorConfigureListsWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextTranslator__TranslatorConfigureListsWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SharedPainter(self: TextTranslator__TranslatorConfigureListsWidget) QPainter {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperSharedPainter(self: TextTranslator__TranslatorConfigureListsWidget) QPainter {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextTranslator__TranslatorConfigureListsWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextTranslator__TranslatorConfigureListsWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnInputMethodQuery(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, i32) callconv(.c) QVariant) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextTranslator__TranslatorConfigureListsWidget, next: bool) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextTranslator__TranslatorConfigureListsWidget, next: bool) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, bool) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextTranslator__TranslatorConfigureListsWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextTranslator__TranslatorConfigureListsWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QTimerEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QChildEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextTranslator__TranslatorConfigureListsWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextTranslator__TranslatorConfigureListsWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorConfigureListsWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextTranslator__TranslatorConfigureListsWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextTranslator__TranslatorConfigureListsWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextTranslator__TranslatorConfigureListsWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn UpdateMicroFocus(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperUpdateMicroFocus(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Create(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperCreate(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Destroy(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDestroy` instead
    ///
    pub const QBaseDestroy = SuperDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperDestroy(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FocusNextChild(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusNextChild` instead
    ///
    pub const QBaseFocusNextChild = SuperFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperFocusNextChild(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn FocusPreviousChild(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusPreviousChild` instead
    ///
    pub const QBaseFocusPreviousChild = SuperFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperFocusPreviousChild(self: TextTranslator__TranslatorConfigureListsWidget) bool {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Sender(self: TextTranslator__TranslatorConfigureListsWidget) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperSender(self: TextTranslator__TranslatorConfigureListsWidget) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorConfigureListsWidget_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SenderSignalIndex(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn SuperSenderSignalIndex(self: TextTranslator__TranslatorConfigureListsWidget) i32 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextTranslator__TranslatorConfigureListsWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextTranslator__TranslatorConfigureListsWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextTranslator__TranslatorConfigureListsWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextTranslator__TranslatorConfigureListsWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextTranslator__TranslatorConfigureListsWidget, metricA: i32, metricB: i32) f64 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextTranslator__TranslatorConfigureListsWidget, metricA: i32, metricB: i32) f64 {
        return qtc.TextTranslator__TranslatorConfigureListsWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, i32, i32) callconv(.c) f64) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorConfigureListsWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextTranslator__TranslatorConfigureListsWidget, callback: *const fn (TextTranslator__TranslatorConfigureListsWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorConfigureListsWidget.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorConfigureListsWidget `
    ///
    pub fn Delete(self: TextTranslator__TranslatorConfigureListsWidget) void {
        qtc.TextTranslator__TranslatorConfigureListsWidget_Delete(@ptrCast(self.ptr));
    }
};
