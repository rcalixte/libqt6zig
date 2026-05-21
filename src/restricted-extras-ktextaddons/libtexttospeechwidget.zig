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
const TextEditTextToSpeech__TextToSpeechInterface = @import("libqt6").TextEditTextToSpeech__TextToSpeechInterface;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
const texttospeech_enums = @import("libtexttospeech.zig").enums;
const texttospeechwidget_enums = enums;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
pub const TextEditTextToSpeech__TextToSpeechWidget = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEditTextToSpeech__TextToSpeechWidget,

    pub const _is_TextEditTextToSpeech__TextToSpeechWidget = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextEditTextToSpeech::TextToSpeechWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextEditTextToSpeech__TextToSpeechWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextEditTextToSpeech::TextToSpeechWidget object.
    ///
    pub fn New2() TextEditTextToSpeech__TextToSpeechWidget {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MetaObject(self: TextEditTextToSpeech__TextToSpeechWidget) QMetaObject {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperMetaObject(self: TextEditTextToSpeech__TextToSpeechWidget) QMetaObject {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextEditTextToSpeech__TextToSpeechWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextEditTextToSpeech__TextToSpeechWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` texttospeechwidget_enums.State `
    ///
    pub fn State(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` state: texttospeechwidget_enums.State `
    ///
    pub fn SetState(self: TextEditTextToSpeech__TextToSpeechWidget, state: i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` interface: TextEditTextToSpeech__TextToSpeechInterface `
    ///
    pub fn SetTextToSpeechInterface(self: TextEditTextToSpeech__TextToSpeechWidget, interface: anytype) void {
        comptime _ = @TypeOf(interface)._is_TextEditTextToSpeech__TextToSpeechInterface;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SetTextToSpeechInterface(@ptrCast(self.ptr), @ptrCast(interface.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsReady(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_IsReady(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ShowWidget(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ShowWidget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Say(self: TextEditTextToSpeech__TextToSpeechWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextEditTextToSpeech__TextToSpeechWidget_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` state: texttospeech_enums.State `
    ///
    pub fn SlotStateChanged(self: TextEditTextToSpeech__TextToSpeechWidget, state: i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SlotStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` state: texttospeechwidget_enums.State `
    ///
    pub fn StateChanged(self: TextEditTextToSpeech__TextToSpeechWidget, state: i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, state: texttospeechwidget_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, i32) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` state: bool `
    ///
    pub fn ChangeVisibility(self: TextEditTextToSpeech__TextToSpeechWidget, state: bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ChangeVisibility(@ptrCast(self.ptr), state);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, state: bool) callconv(.c) void `
    ///
    pub fn OnChangeVisibility(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, bool) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_Connect_ChangeVisibility(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn WinId(self: TextEditTextToSpeech__TextToSpeechWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn CreateWinId(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn InternalWinId(self: TextEditTextToSpeech__TextToSpeechWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn EffectiveWinId(self: TextEditTextToSpeech__TextToSpeechWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Style(self: TextEditTextToSpeech__TextToSpeechWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextEditTextToSpeech__TextToSpeechWidget, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsTopLevel(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsWindow(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsModal(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextEditTextToSpeech__TextToSpeechWidget, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsEnabled(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextEditTextToSpeech__TextToSpeechWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextEditTextToSpeech__TextToSpeechWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextEditTextToSpeech__TextToSpeechWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FrameGeometry(self: TextEditTextToSpeech__TextToSpeechWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Geometry(self: TextEditTextToSpeech__TextToSpeechWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn NormalGeometry(self: TextEditTextToSpeech__TextToSpeechWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn X(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Y(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Pos(self: TextEditTextToSpeech__TextToSpeechWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FrameSize(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Size(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Width(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Height(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Rect(self: TextEditTextToSpeech__TextToSpeechWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ChildrenRect(self: TextEditTextToSpeech__TextToSpeechWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ChildrenRegion(self: TextEditTextToSpeech__TextToSpeechWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MinimumSize(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MaximumSize(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MinimumWidth(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MinimumHeight(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MaximumWidth(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MaximumHeight(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextEditTextToSpeech__TextToSpeechWidget, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextEditTextToSpeech__TextToSpeechWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextEditTextToSpeech__TextToSpeechWidget, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextEditTextToSpeech__TextToSpeechWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextEditTextToSpeech__TextToSpeechWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextEditTextToSpeech__TextToSpeechWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextEditTextToSpeech__TextToSpeechWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextEditTextToSpeech__TextToSpeechWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SizeIncrement(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextEditTextToSpeech__TextToSpeechWidget, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextEditTextToSpeech__TextToSpeechWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn BaseSize(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextEditTextToSpeech__TextToSpeechWidget, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextEditTextToSpeech__TextToSpeechWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextEditTextToSpeech__TextToSpeechWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextEditTextToSpeech__TextToSpeechWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextEditTextToSpeech__TextToSpeechWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextEditTextToSpeech__TextToSpeechWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Window(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn NativeParentWidget(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn TopLevelWidget(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Palette(self: TextEditTextToSpeech__TextToSpeechWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextEditTextToSpeech__TextToSpeechWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextEditTextToSpeech__TextToSpeechWidget, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextEditTextToSpeech__TextToSpeechWidget, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Font(self: TextEditTextToSpeech__TextToSpeechWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextEditTextToSpeech__TextToSpeechWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FontMetrics(self: TextEditTextToSpeech__TextToSpeechWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FontInfo(self: TextEditTextToSpeech__TextToSpeechWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Cursor(self: TextEditTextToSpeech__TextToSpeechWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextEditTextToSpeech__TextToSpeechWidget, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UnsetCursor(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextEditTextToSpeech__TextToSpeechWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn HasMouseTracking(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UnderMouse(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextEditTextToSpeech__TextToSpeechWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn HasTabletTracking(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextEditTextToSpeech__TextToSpeechWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextEditTextToSpeech__TextToSpeechWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Mask(self: TextEditTextToSpeech__TextToSpeechWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ClearMask(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextEditTextToSpeech__TextToSpeechWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextEditTextToSpeech__TextToSpeechWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Grab(self: TextEditTextToSpeech__TextToSpeechWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn GraphicsEffect(self: TextEditTextToSpeech__TextToSpeechWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextEditTextToSpeech__TextToSpeechWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextEditTextToSpeech__TextToSpeechWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextEditTextToSpeech__TextToSpeechWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextEditTextToSpeech__TextToSpeechWidget, windowTitle: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextEditTextToSpeech__TextToSpeechWidget, styleSheet: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextEditTextToSpeech__TextToSpeechWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn WindowIcon(self: TextEditTextToSpeech__TextToSpeechWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextEditTextToSpeech__TextToSpeechWidget, windowIconText: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextEditTextToSpeech__TextToSpeechWidget, windowRole: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextEditTextToSpeech__TextToSpeechWidget, filePath: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextEditTextToSpeech__TextToSpeechWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn WindowOpacity(self: TextEditTextToSpeech__TextToSpeechWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsWindowModified(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextEditTextToSpeech__TextToSpeechWidget, toolTip: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextEditTextToSpeech__TextToSpeechWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ToolTipDuration(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextEditTextToSpeech__TextToSpeechWidget, statusTip: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextEditTextToSpeech__TextToSpeechWidget, whatsThis: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextEditTextToSpeech__TextToSpeechWidget, name: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextEditTextToSpeech__TextToSpeechWidget, description: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextEditTextToSpeech__TextToSpeechWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UnsetLayoutDirection(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextEditTextToSpeech__TextToSpeechWidget, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Locale(self: TextEditTextToSpeech__TextToSpeechWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UnsetLocale(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsRightToLeft(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsLeftToRight(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SetFocus(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsActiveWindow(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ActivateWindow(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ClearFocus(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextEditTextToSpeech__TextToSpeechWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextEditTextToSpeech__TextToSpeechWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn HasFocus(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextEditTextToSpeech__TextToSpeechWidget, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FocusProxy(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextEditTextToSpeech__TextToSpeechWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn GrabMouse(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ReleaseMouse(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn GrabKeyboard(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ReleaseKeyboard(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextEditTextToSpeech__TextToSpeechWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UpdatesEnabled(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextEditTextToSpeech__TextToSpeechWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn GraphicsProxyWidget(self: TextEditTextToSpeech__TextToSpeechWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Update(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Repaint(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextEditTextToSpeech__TextToSpeechWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextEditTextToSpeech__TextToSpeechWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextEditTextToSpeech__TextToSpeechWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Show(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Hide(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ShowMinimized(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ShowMaximized(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ShowFullScreen(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ShowNormal(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Close(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Raise(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Lower(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextEditTextToSpeech__TextToSpeechWidget, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextEditTextToSpeech__TextToSpeechWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextEditTextToSpeech__TextToSpeechWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextEditTextToSpeech__TextToSpeechWidget, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("textedittexttospeech__texttospeechwidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextEditTextToSpeech__TextToSpeechWidget, geometry: []u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn AdjustSize(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsVisible(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsHidden(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsMinimized(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsMaximized(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsFullScreen(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextEditTextToSpeech__TextToSpeechWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextEditTextToSpeech__TextToSpeechWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SizePolicy(self: TextEditTextToSpeech__TextToSpeechWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextEditTextToSpeech__TextToSpeechWidget, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextEditTextToSpeech__TextToSpeechWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn VisibleRegion(self: TextEditTextToSpeech__TextToSpeechWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextEditTextToSpeech__TextToSpeechWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextEditTextToSpeech__TextToSpeechWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ContentsMargins(self: TextEditTextToSpeech__TextToSpeechWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ContentsRect(self: TextEditTextToSpeech__TextToSpeechWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Layout(self: TextEditTextToSpeech__TextToSpeechWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextEditTextToSpeech__TextToSpeechWidget, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UpdateGeometry(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextEditTextToSpeech__TextToSpeechWidget, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextEditTextToSpeech__TextToSpeechWidget, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextEditTextToSpeech__TextToSpeechWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextEditTextToSpeech__TextToSpeechWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FocusWidget(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn NextInFocusChain(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn PreviousInFocusChain(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn AcceptDrops(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextEditTextToSpeech__TextToSpeechWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextEditTextToSpeech__TextToSpeechWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextEditTextToSpeech__TextToSpeechWidget, actions: []QAction) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextEditTextToSpeech__TextToSpeechWidget, before: anytype, actions: []QAction) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextEditTextToSpeech__TextToSpeechWidget, before: anytype, action: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextEditTextToSpeech__TextToSpeechWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("textedittexttospeech__texttospeechwidget.Actions: Memory allocation failed");
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextEditTextToSpeech__TextToSpeechWidget, text: []const u8) QAction {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextEditTextToSpeech__TextToSpeechWidget, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextEditTextToSpeech__TextToSpeechWidget, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextEditTextToSpeech__TextToSpeechWidget, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ParentWidget(self: TextEditTextToSpeech__TextToSpeechWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextEditTextToSpeech__TextToSpeechWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextEditTextToSpeech__TextToSpeechWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextEditTextToSpeech__TextToSpeechWidget, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextEditTextToSpeech__TextToSpeechWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextEditTextToSpeech__TextToSpeechWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn EnsurePolished(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextEditTextToSpeech__TextToSpeechWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn AutoFillBackground(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextEditTextToSpeech__TextToSpeechWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn BackingStore(self: TextEditTextToSpeech__TextToSpeechWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn WindowHandle(self: TextEditTextToSpeech__TextToSpeechWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Screen(self: TextEditTextToSpeech__TextToSpeechWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextEditTextToSpeech__TextToSpeechWidget, screen: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextEditTextToSpeech__TextToSpeechWidget, title: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextEditTextToSpeech__TextToSpeechWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextEditTextToSpeech__TextToSpeechWidget, iconText: []const u8) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextEditTextToSpeech__TextToSpeechWidget, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextEditTextToSpeech__TextToSpeechWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextEditTextToSpeech__TextToSpeechWidget, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextEditTextToSpeech__TextToSpeechWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextEditTextToSpeech__TextToSpeechWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextEditTextToSpeech__TextToSpeechWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextEditTextToSpeech__TextToSpeechWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextEditTextToSpeech__TextToSpeechWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextEditTextToSpeech__TextToSpeechWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextEditTextToSpeech__TextToSpeechWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextEditTextToSpeech__TextToSpeechWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32, on: bool) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textedittexttospeech__texttospeechwidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextEditTextToSpeech__TextToSpeechWidget, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsWidgetType(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsWindowType(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn IsQuickItemType(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SignalsBlocked(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextEditTextToSpeech__TextToSpeechWidget, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Thread(self: TextEditTextToSpeech__TextToSpeechWidget) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextEditTextToSpeech__TextToSpeechWidget, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextEditTextToSpeech__TextToSpeechWidget, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextEditTextToSpeech__TextToSpeechWidget, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextEditTextToSpeech__TextToSpeechWidget, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textedittexttospeech__texttospeechwidget.Children: Memory allocation failed");
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextEditTextToSpeech__TextToSpeechWidget, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextEditTextToSpeech__TextToSpeechWidget, obj: anytype) void {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextEditTextToSpeech__TextToSpeechWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Disconnect3(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextEditTextToSpeech__TextToSpeechWidget, receiver: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn DumpObjectTree(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn DumpObjectInfo(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextEditTextToSpeech__TextToSpeechWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextEditTextToSpeech__TextToSpeechWidget, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextEditTextToSpeech__TextToSpeechWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textedittexttospeech__texttospeechwidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textedittexttospeech__texttospeechwidget.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn BindingStorage(self: TextEditTextToSpeech__TextToSpeechWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn BindingStorage2(self: TextEditTextToSpeech__TextToSpeechWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Destroyed(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Parent(self: TextEditTextToSpeech__TextToSpeechWidget) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextEditTextToSpeech__TextToSpeechWidget, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn DeleteLater(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextEditTextToSpeech__TextToSpeechWidget, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextEditTextToSpeech__TextToSpeechWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextEditTextToSpeech__TextToSpeechWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextEditTextToSpeech__TextToSpeechWidget, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextEditTextToSpeech__TextToSpeechWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextEditTextToSpeech__TextToSpeechWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextEditTextToSpeech__TextToSpeechWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn PaintingActive(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn WidthMM(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn HeightMM(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn LogicalDpiX(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn LogicalDpiY(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn PhysicalDpiX(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn PhysicalDpiY(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn DevicePixelRatio(self: TextEditTextToSpeech__TextToSpeechWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn DevicePixelRatioF(self: TextEditTextToSpeech__TextToSpeechWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn ColorCount(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Depth(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn DevType(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperDevType(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextEditTextToSpeech__TextToSpeechWidget, visible: bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextEditTextToSpeech__TextToSpeechWidget, visible: bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, bool) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SizeHint(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperSizeHint(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSizeHint(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn MinimumSizeHint(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperMinimumSizeHint(self: TextEditTextToSpeech__TextToSpeechWidget) QSize {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnMinimumSizeHint(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, i32) callconv(.c) i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn HasHeightForWidth(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperHasHeightForWidth(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn PaintEngine(self: TextEditTextToSpeech__TextToSpeechWidget) QPaintEngine {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperPaintEngine(self: TextEditTextToSpeech__TextToSpeechWidget) QPaintEngine {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QEvent) callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QWheelEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QKeyEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QKeyEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QFocusEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QFocusEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QEnterEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QPaintEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMoveEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QResizeEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QCloseEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QTabletEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QActionEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QDropEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QShowEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QHideEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, i32) callconv(.c) i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextEditTextToSpeech__TextToSpeechWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextEditTextToSpeech__TextToSpeechWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QPainter) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextEditTextToSpeech__TextToSpeechWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextEditTextToSpeech__TextToSpeechWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SharedPainter(self: TextEditTextToSpeech__TextToSpeechWidget) QPainter {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperSharedPainter(self: TextEditTextToSpeech__TextToSpeechWidget) QPainter {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextEditTextToSpeech__TextToSpeechWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextEditTextToSpeech__TextToSpeechWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnInputMethodQuery(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, i32) callconv(.c) QVariant) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextEditTextToSpeech__TextToSpeechWidget, next: bool) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextEditTextToSpeech__TextToSpeechWidget, next: bool) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, bool) callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextEditTextToSpeech__TextToSpeechWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextEditTextToSpeech__TextToSpeechWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QTimerEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QChildEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextEditTextToSpeech__TextToSpeechWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QEvent) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextEditTextToSpeech__TextToSpeechWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextEditTextToSpeech__TextToSpeechWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMetaMethod) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextEditTextToSpeech__TextToSpeechWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextEditTextToSpeech__TextToSpeechWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMetaMethod) callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn UpdateMicroFocus(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperUpdateMicroFocus(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Create(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperCreate(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Destroy(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperDestroy(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FocusNextChild(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperFocusNextChild(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn FocusPreviousChild(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperFocusPreviousChild(self: TextEditTextToSpeech__TextToSpeechWidget) bool {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Sender(self: TextEditTextToSpeech__TextToSpeechWidget) QObject {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperSender(self: TextEditTextToSpeech__TextToSpeechWidget) QObject {
        return .{ .ptr = qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SenderSignalIndex(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn SuperSenderSignalIndex(self: TextEditTextToSpeech__TextToSpeechWidget) i32 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextEditTextToSpeech__TextToSpeechWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextEditTextToSpeech__TextToSpeechWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextEditTextToSpeech__TextToSpeechWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextEditTextToSpeech__TextToSpeechWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextEditTextToSpeech__TextToSpeechWidget, metricA: i32, metricB: i32) f64 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextEditTextToSpeech__TextToSpeechWidget, metricA: i32, metricB: i32) f64 {
        return qtc.TextEditTextToSpeech__TextToSpeechWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget`
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, i32, i32) callconv(.c) f64) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    /// ` callback: *const fn (self: TextEditTextToSpeech__TextToSpeechWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextEditTextToSpeech__TextToSpeechWidget, callback: *const fn (TextEditTextToSpeech__TextToSpeechWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeechWidget.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEditTextToSpeech__TextToSpeechWidget `
    ///
    pub fn Delete(self: TextEditTextToSpeech__TextToSpeechWidget) void {
        qtc.TextEditTextToSpeech__TextToSpeechWidget_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const State = enum(i32) {
        pub const Stop: i32 = 0;
        pub const Play: i32 = 1;
        pub const Pause: i32 = 2;
    };
};
