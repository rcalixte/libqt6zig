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

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
pub const TextEmoticonsWidgets__EmoticonTextEditSelector = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsWidgets__EmoticonTextEditSelector,

    pub const _is_TextEmoticonsWidgets__EmoticonTextEditSelector = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextEmoticonsWidgets::EmoticonTextEditSelector object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextEmoticonsWidgets__EmoticonTextEditSelector {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextEmoticonsWidgets::EmoticonTextEditSelector object.
    ///
    pub fn New2() TextEmoticonsWidgets__EmoticonTextEditSelector {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MetaObject(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperMetaObject(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ForceLineEditFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ForceLineEditFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` b: bool `
    ///
    pub fn SetCustomEmojiSupport(self: TextEmoticonsWidgets__EmoticonTextEditSelector, b: bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SetCustomEmojiSupport(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn CustomEmojiSupport(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEmojiSupport(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn LoadEmoticons(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_LoadEmoticons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn InsertEmoji(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_InsertEmoji(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInsertEmoji(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Connect_InsertEmoji(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn InsertEmojiIdentifier(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_InsertEmojiIdentifier(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInsertEmojiIdentifier(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Connect_InsertEmojiIdentifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn WinId(self: TextEmoticonsWidgets__EmoticonTextEditSelector) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn CreateWinId(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn InternalWinId(self: TextEmoticonsWidgets__EmoticonTextEditSelector) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn EffectiveWinId(self: TextEmoticonsWidgets__EmoticonTextEditSelector) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Style(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextEmoticonsWidgets__EmoticonTextEditSelector, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsTopLevel(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsWindow(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsModal(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextEmoticonsWidgets__EmoticonTextEditSelector, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsEnabled(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextEmoticonsWidgets__EmoticonTextEditSelector, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextEmoticonsWidgets__EmoticonTextEditSelector, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextEmoticonsWidgets__EmoticonTextEditSelector, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FrameGeometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Geometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn NormalGeometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn X(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Y(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Pos(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FrameSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Size(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Width(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Height(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Rect(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ChildrenRect(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ChildrenRegion(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MinimumSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MaximumSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MinimumWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MinimumHeight(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MaximumWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MaximumHeight(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextEmoticonsWidgets__EmoticonTextEditSelector, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextEmoticonsWidgets__EmoticonTextEditSelector, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SizeIncrement(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextEmoticonsWidgets__EmoticonTextEditSelector, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn BaseSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextEmoticonsWidgets__EmoticonTextEditSelector, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Window(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn NativeParentWidget(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn TopLevelWidget(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Palette(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextEmoticonsWidgets__EmoticonTextEditSelector, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextEmoticonsWidgets__EmoticonTextEditSelector, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextEmoticonsWidgets__EmoticonTextEditSelector, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Font(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextEmoticonsWidgets__EmoticonTextEditSelector, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FontMetrics(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FontInfo(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Cursor(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextEmoticonsWidgets__EmoticonTextEditSelector, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UnsetCursor(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextEmoticonsWidgets__EmoticonTextEditSelector, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn HasMouseTracking(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UnderMouse(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextEmoticonsWidgets__EmoticonTextEditSelector, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn HasTabletTracking(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextEmoticonsWidgets__EmoticonTextEditSelector, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Mask(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ClearMask(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextEmoticonsWidgets__EmoticonTextEditSelector, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Grab(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn GraphicsEffect(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextEmoticonsWidgets__EmoticonTextEditSelector, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextEmoticonsWidgets__EmoticonTextEditSelector, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextEmoticonsWidgets__EmoticonTextEditSelector, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextEmoticonsWidgets__EmoticonTextEditSelector, windowTitle: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextEmoticonsWidgets__EmoticonTextEditSelector, styleSheet: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextEmoticonsWidgets__EmoticonTextEditSelector, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn WindowIcon(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextEmoticonsWidgets__EmoticonTextEditSelector, windowIconText: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextEmoticonsWidgets__EmoticonTextEditSelector, windowRole: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextEmoticonsWidgets__EmoticonTextEditSelector, filePath: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextEmoticonsWidgets__EmoticonTextEditSelector, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn WindowOpacity(self: TextEmoticonsWidgets__EmoticonTextEditSelector) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsWindowModified(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextEmoticonsWidgets__EmoticonTextEditSelector, toolTip: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextEmoticonsWidgets__EmoticonTextEditSelector, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ToolTipDuration(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextEmoticonsWidgets__EmoticonTextEditSelector, statusTip: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextEmoticonsWidgets__EmoticonTextEditSelector, whatsThis: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextEmoticonsWidgets__EmoticonTextEditSelector, name: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextEmoticonsWidgets__EmoticonTextEditSelector, description: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextEmoticonsWidgets__EmoticonTextEditSelector, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UnsetLayoutDirection(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextEmoticonsWidgets__EmoticonTextEditSelector, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Locale(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UnsetLocale(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsRightToLeft(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsLeftToRight(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SetFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsActiveWindow(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ActivateWindow(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ClearFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextEmoticonsWidgets__EmoticonTextEditSelector, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn HasFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextEmoticonsWidgets__EmoticonTextEditSelector, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FocusProxy(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextEmoticonsWidgets__EmoticonTextEditSelector, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn GrabMouse(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ReleaseMouse(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn GrabKeyboard(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ReleaseKeyboard(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextEmoticonsWidgets__EmoticonTextEditSelector, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UpdatesEnabled(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextEmoticonsWidgets__EmoticonTextEditSelector, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn GraphicsProxyWidget(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Update(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Repaint(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextEmoticonsWidgets__EmoticonTextEditSelector, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Show(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Hide(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ShowMinimized(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ShowMaximized(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ShowFullScreen(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ShowNormal(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Close(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Raise(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Lower(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextEmoticonsWidgets__EmoticonTextEditSelector, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextEmoticonsWidgets__EmoticonTextEditSelector, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("textemoticonswidgets__emoticontexteditselector.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector, geometry: []u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn AdjustSize(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsVisible(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsHidden(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsMinimized(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsMaximized(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsFullScreen(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextEmoticonsWidgets__EmoticonTextEditSelector, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextEmoticonsWidgets__EmoticonTextEditSelector, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SizePolicy(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextEmoticonsWidgets__EmoticonTextEditSelector, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn VisibleRegion(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextEmoticonsWidgets__EmoticonTextEditSelector, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ContentsMargins(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ContentsRect(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Layout(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextEmoticonsWidgets__EmoticonTextEditSelector, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UpdateGeometry(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextEmoticonsWidgets__EmoticonTextEditSelector, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FocusWidget(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn NextInFocusChain(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn PreviousInFocusChain(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn AcceptDrops(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextEmoticonsWidgets__EmoticonTextEditSelector, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextEmoticonsWidgets__EmoticonTextEditSelector, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextEmoticonsWidgets__EmoticonTextEditSelector, actions: []QAction) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextEmoticonsWidgets__EmoticonTextEditSelector, before: anytype, actions: []QAction) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextEmoticonsWidgets__EmoticonTextEditSelector, before: anytype, action: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextEmoticonsWidgets__EmoticonTextEditSelector, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("textemoticonswidgets__emoticontexteditselector.Actions: Memory allocation failed");
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, text: []const u8) QAction {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextEmoticonsWidgets__EmoticonTextEditSelector, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextEmoticonsWidgets__EmoticonTextEditSelector, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextEmoticonsWidgets__EmoticonTextEditSelector, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ParentWidget(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextEmoticonsWidgets__EmoticonTextEditSelector, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextEmoticonsWidgets__EmoticonTextEditSelector, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextEmoticonsWidgets__EmoticonTextEditSelector, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextEmoticonsWidgets__EmoticonTextEditSelector, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn EnsurePolished(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextEmoticonsWidgets__EmoticonTextEditSelector, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn AutoFillBackground(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextEmoticonsWidgets__EmoticonTextEditSelector, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn BackingStore(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn WindowHandle(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Screen(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextEmoticonsWidgets__EmoticonTextEditSelector, screen: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, title: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, iconText: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextEmoticonsWidgets__EmoticonTextEditSelector, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextEmoticonsWidgets__EmoticonTextEditSelector, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextEmoticonsWidgets__EmoticonTextEditSelector, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextEmoticonsWidgets__EmoticonTextEditSelector, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextEmoticonsWidgets__EmoticonTextEditSelector, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextEmoticonsWidgets__EmoticonTextEditSelector, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32, on: bool) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonswidgets__emoticontexteditselector.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextEmoticonsWidgets__EmoticonTextEditSelector, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsWidgetType(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsWindowType(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn IsQuickItemType(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SignalsBlocked(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextEmoticonsWidgets__EmoticonTextEditSelector, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Thread(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextEmoticonsWidgets__EmoticonTextEditSelector, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextEmoticonsWidgets__EmoticonTextEditSelector, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextEmoticonsWidgets__EmoticonTextEditSelector, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textemoticonswidgets__emoticontexteditselector.Children: Memory allocation failed");
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, obj: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextEmoticonsWidgets__EmoticonTextEditSelector, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Disconnect3(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextEmoticonsWidgets__EmoticonTextEditSelector, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn DumpObjectTree(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn DumpObjectInfo(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextEmoticonsWidgets__EmoticonTextEditSelector, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextEmoticonsWidgets__EmoticonTextEditSelector, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextEmoticonsWidgets__EmoticonTextEditSelector, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textemoticonswidgets__emoticontexteditselector.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textemoticonswidgets__emoticontexteditselector.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn BindingStorage(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn BindingStorage2(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Destroyed(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Parent(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextEmoticonsWidgets__EmoticonTextEditSelector, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn DeleteLater(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextEmoticonsWidgets__EmoticonTextEditSelector, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextEmoticonsWidgets__EmoticonTextEditSelector, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextEmoticonsWidgets__EmoticonTextEditSelector, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextEmoticonsWidgets__EmoticonTextEditSelector, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn PaintingActive(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn WidthMM(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn HeightMM(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn LogicalDpiX(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn LogicalDpiY(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn PhysicalDpiX(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn PhysicalDpiY(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn DevicePixelRatio(self: TextEmoticonsWidgets__EmoticonTextEditSelector) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn DevicePixelRatioF(self: TextEmoticonsWidgets__EmoticonTextEditSelector) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn ColorCount(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Depth(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn DevType(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperDevType(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextEmoticonsWidgets__EmoticonTextEditSelector, visible: bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextEmoticonsWidgets__EmoticonTextEditSelector, visible: bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, bool) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SizeHint(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperSizeHint(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn MinimumSizeHint(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperMinimumSizeHint(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QSize {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, i32) callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn HasHeightForWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperHasHeightForWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn PaintEngine(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPaintEngine {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperPaintEngine(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPaintEngine {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMouseEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMouseEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMouseEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMouseEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QWheelEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QKeyEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QKeyEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QFocusEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QFocusEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QEnterEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QPaintEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMoveEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QResizeEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QCloseEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QTabletEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QActionEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QDropEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QShowEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QHideEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, i32) callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QPainter) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextEmoticonsWidgets__EmoticonTextEditSelector, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextEmoticonsWidgets__EmoticonTextEditSelector, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SharedPainter(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPainter {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperSharedPainter(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QPainter {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) QVariant {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: i32) QVariant {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, i32) callconv(.c) QVariant) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector, next: bool) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector, next: bool) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, bool) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QTimerEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QChildEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn UpdateMicroFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperUpdateMicroFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Create(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Create(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperCreate(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Destroy(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperDestroy(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FocusNextChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperFocusNextChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn FocusPreviousChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperFocusPreviousChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Sender(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperSender(self: TextEmoticonsWidgets__EmoticonTextEditSelector) QObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SenderSignalIndex(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn SuperSenderSignalIndex(self: TextEmoticonsWidgets__EmoticonTextEditSelector) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, QMetaMethod) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextEmoticonsWidgets__EmoticonTextEditSelector, metricA: i32, metricB: i32) f64 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextEmoticonsWidgets__EmoticonTextEditSelector, metricA: i32, metricB: i32) f64 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, i32, i32) callconv(.c) f64) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditSelector, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextEmoticonsWidgets__EmoticonTextEditSelector, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditSelector, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditSelector.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditSelector `
    ///
    pub fn Delete(self: TextEmoticonsWidgets__EmoticonTextEditSelector) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditSelector_Delete(@ptrCast(self.ptr));
    }
};
