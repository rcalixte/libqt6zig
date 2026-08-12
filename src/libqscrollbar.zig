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
const QStyleOptionSlider = @import("libqt6").QStyleOptionSlider;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractslider_enums = @import("libqabstractslider.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html)
pub const QScrollBar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScrollBar,

    pub const _is_QScrollBar = {};
    pub const _is_QAbstractSlider = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScrollBar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QScrollBar {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QScrollBar_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QScrollBar object in C++ memory
    ///
    pub fn new2() QScrollBar {
        return .{ .ptr = qtc.QScrollBar_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QScrollBar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Orientation `
    ///
    pub fn new3(param1: i32) QScrollBar {
        return .{ .ptr = qtc.QScrollBar_new3(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QScrollBar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Orientation `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new4(param1: i32, _parent: anytype) QScrollBar {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QScrollBar_new4(@bitCast(param1), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn metaObject(self: QScrollBar) QMetaObject {
        return .{ .ptr = qtc.QScrollBar_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QScrollBar, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QScrollBar_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superMetaObject(self: QScrollBar) QMetaObject {
        return .{ .ptr = qtc.QScrollBar_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QScrollBar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScrollBar_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QScrollBar, callback: *const fn (QScrollBar, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QScrollBar_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QScrollBar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScrollBar_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QScrollBar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScrollBar_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QScrollBar, callback: *const fn (QScrollBar, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QScrollBar_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QScrollBar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScrollBar_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sizeHint(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QScrollBar_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QScrollBar, callback: *const fn () callconv(.c) QSize) void {
        qtc.QScrollBar_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superSizeHint(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QScrollBar_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QScrollBar, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QScrollBar_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QScrollBar, callback: *const fn (QScrollBar, QEvent) callconv(.c) bool) void {
        qtc.QScrollBar_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QScrollBar, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QScrollBar_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn wheelEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QScrollBar_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QScrollBar, callback: *const fn (QScrollBar, QWheelEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QScrollBar_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn paintEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.QScrollBar_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: QScrollBar, callback: *const fn (QScrollBar, QPaintEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.QScrollBar_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QScrollBar_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QScrollBar, callback: *const fn (QScrollBar, QMouseEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QScrollBar_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QScrollBar_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QScrollBar, callback: *const fn (QScrollBar, QMouseEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QScrollBar_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QScrollBar_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QScrollBar, callback: *const fn (QScrollBar, QMouseEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QScrollBar_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#hideEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn hideEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QScrollBar_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QScrollBar, callback: *const fn (QScrollBar, QHideEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn superHideEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QScrollBar_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `sliderChange` instead
    ///
    pub const SliderChange = sliderChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#sliderChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` change: qabstractslider_enums.SliderChange `
    ///
    pub fn sliderChange(self: QScrollBar, change: i32) void {
        qtc.QScrollBar_SliderChange(@ptrCast(self.ptr), @bitCast(change));
    }

    /// ### DEPRECATED: Use `onSliderChange` instead
    ///
    pub const OnSliderChange = onSliderChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#sliderChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, change: qabstractslider_enums.SliderChange) callconv(.c) void `
    ///
    pub fn onSliderChange(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) void) void {
        qtc.QScrollBar_OnSliderChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSliderChange` instead
    ///
    pub const SuperSliderChange = superSliderChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#sliderChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` change: qabstractslider_enums.SliderChange `
    ///
    pub fn superSliderChange(self: QScrollBar, change: i32) void {
        qtc.QScrollBar_SuperSliderChange(@ptrCast(self.ptr), @bitCast(change));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QScrollBar_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QScrollBar, callback: *const fn (QScrollBar, QContextMenuEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QScrollBar_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#initStyleOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` option: QStyleOptionSlider `
    ///
    pub fn initStyleOption(self: QScrollBar, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSlider;
        qtc.QScrollBar_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#initStyleOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, option: QStyleOptionSlider) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QScrollBar, callback: *const fn (QScrollBar, QStyleOptionSlider) callconv(.c) void) void {
        qtc.QScrollBar_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#initStyleOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` option: QStyleOptionSlider `
    ///
    pub fn superInitStyleOption(self: QScrollBar, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSlider;
        qtc.QScrollBar_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimum` instead
    ///
    pub const SetMinimum = setMinimum;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _minimum: i32 `
    ///
    pub fn setMinimum(self: QScrollBar, _minimum: i32) void {
        qtc.QAbstractSlider_SetMinimum(@ptrCast(self.ptr), @bitCast(_minimum));
    }

    /// ### DEPRECATED: Use `minimum` instead
    ///
    pub const Minimum = minimum;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn minimum(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_Minimum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximum` instead
    ///
    pub const SetMaximum = setMaximum;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _maximum: i32 `
    ///
    pub fn setMaximum(self: QScrollBar, _maximum: i32) void {
        qtc.QAbstractSlider_SetMaximum(@ptrCast(self.ptr), @bitCast(_maximum));
    }

    /// ### DEPRECATED: Use `maximum` instead
    ///
    pub const Maximum = maximum;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn maximum(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_Maximum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSingleStep` instead
    ///
    pub const SetSingleStep = setSingleStep;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _singleStep: i32 `
    ///
    pub fn setSingleStep(self: QScrollBar, _singleStep: i32) void {
        qtc.QAbstractSlider_SetSingleStep(@ptrCast(self.ptr), @bitCast(_singleStep));
    }

    /// ### DEPRECATED: Use `singleStep` instead
    ///
    pub const SingleStep = singleStep;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn singleStep(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_SingleStep(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPageStep` instead
    ///
    pub const SetPageStep = setPageStep;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _pageStep: i32 `
    ///
    pub fn setPageStep(self: QScrollBar, _pageStep: i32) void {
        qtc.QAbstractSlider_SetPageStep(@ptrCast(self.ptr), @bitCast(_pageStep));
    }

    /// ### DEPRECATED: Use `pageStep` instead
    ///
    pub const PageStep = pageStep;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn pageStep(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_PageStep(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTracking` instead
    ///
    pub const SetTracking = setTracking;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` enable: bool `
    ///
    pub fn setTracking(self: QScrollBar, enable: bool) void {
        qtc.QAbstractSlider_SetTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasTracking` instead
    ///
    pub const HasTracking = hasTracking;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn hasTracking(self: QScrollBar) bool {
        return qtc.QAbstractSlider_HasTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliderDown` instead
    ///
    pub const SetSliderDown = setSliderDown;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` sliderDown: bool `
    ///
    pub fn setSliderDown(self: QScrollBar, sliderDown: bool) void {
        qtc.QAbstractSlider_SetSliderDown(@ptrCast(self.ptr), sliderDown);
    }

    /// ### DEPRECATED: Use `isSliderDown` instead
    ///
    pub const IsSliderDown = isSliderDown;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isSliderDown(self: QScrollBar) bool {
        return qtc.QAbstractSlider_IsSliderDown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliderPosition` instead
    ///
    pub const SetSliderPosition = setSliderPosition;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _sliderPosition: i32 `
    ///
    pub fn setSliderPosition(self: QScrollBar, _sliderPosition: i32) void {
        qtc.QAbstractSlider_SetSliderPosition(@ptrCast(self.ptr), @bitCast(_sliderPosition));
    }

    /// ### DEPRECATED: Use `sliderPosition` instead
    ///
    pub const SliderPosition = sliderPosition;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sliderPosition(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_SliderPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInvertedAppearance` instead
    ///
    pub const SetInvertedAppearance = setInvertedAppearance;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _invertedAppearance: bool `
    ///
    pub fn setInvertedAppearance(self: QScrollBar, _invertedAppearance: bool) void {
        qtc.QAbstractSlider_SetInvertedAppearance(@ptrCast(self.ptr), _invertedAppearance);
    }

    /// ### DEPRECATED: Use `invertedAppearance` instead
    ///
    pub const InvertedAppearance = invertedAppearance;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn invertedAppearance(self: QScrollBar) bool {
        return qtc.QAbstractSlider_InvertedAppearance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInvertedControls` instead
    ///
    pub const SetInvertedControls = setInvertedControls;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _invertedControls: bool `
    ///
    pub fn setInvertedControls(self: QScrollBar, _invertedControls: bool) void {
        qtc.QAbstractSlider_SetInvertedControls(@ptrCast(self.ptr), _invertedControls);
    }

    /// ### DEPRECATED: Use `invertedControls` instead
    ///
    pub const InvertedControls = invertedControls;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn invertedControls(self: QScrollBar) bool {
        return qtc.QAbstractSlider_InvertedControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn value(self: QScrollBar) i32 {
        return qtc.QAbstractSlider_Value(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `triggerAction` instead
    ///
    pub const TriggerAction = triggerAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` action: qabstractslider_enums.SliderAction `
    ///
    pub fn triggerAction(self: QScrollBar, action: i32) void {
        qtc.QAbstractSlider_TriggerAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _value: i32 `
    ///
    pub fn setValue(self: QScrollBar, _value: i32) void {
        qtc.QAbstractSlider_SetValue(@ptrCast(self.ptr), @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QScrollBar, _orientation: i32) void {
        qtc.QAbstractSlider_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    pub fn setRange(self: QScrollBar, min: i32, max: i32) void {
        qtc.QAbstractSlider_SetRange(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// ### DEPRECATED: Use `valueChanged` instead
    ///
    pub const ValueChanged = valueChanged;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _value: i32 `
    ///
    pub fn valueChanged(self: QScrollBar, _value: i32) void {
        qtc.QAbstractSlider_ValueChanged(@ptrCast(self.ptr), @bitCast(_value));
    }

    /// ### DEPRECATED: Use `onValueChanged` instead
    ///
    pub const OnValueChanged = onValueChanged;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, value: i32) callconv(.c) void `
    ///
    pub fn onValueChanged(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliderPressed` instead
    ///
    pub const SliderPressed = sliderPressed;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sliderPressed(self: QScrollBar) void {
        qtc.QAbstractSlider_SliderPressed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSliderPressed` instead
    ///
    pub const OnSliderPressed = onSliderPressed;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar) callconv(.c) void `
    ///
    pub fn onSliderPressed(self: QScrollBar, callback: *const fn (QScrollBar) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_SliderPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliderMoved` instead
    ///
    pub const SliderMoved = sliderMoved;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` position: i32 `
    ///
    pub fn sliderMoved(self: QScrollBar, position: i32) void {
        qtc.QAbstractSlider_SliderMoved(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `onSliderMoved` instead
    ///
    pub const OnSliderMoved = onSliderMoved;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, position: i32) callconv(.c) void `
    ///
    pub fn onSliderMoved(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_SliderMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliderReleased` instead
    ///
    pub const SliderReleased = sliderReleased;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sliderReleased(self: QScrollBar) void {
        qtc.QAbstractSlider_SliderReleased(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSliderReleased` instead
    ///
    pub const OnSliderReleased = onSliderReleased;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar) callconv(.c) void `
    ///
    pub fn onSliderReleased(self: QScrollBar, callback: *const fn (QScrollBar) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_SliderReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rangeChanged` instead
    ///
    pub const RangeChanged = rangeChanged;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    pub fn rangeChanged(self: QScrollBar, min: i32, max: i32) void {
        qtc.QAbstractSlider_RangeChanged(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// ### DEPRECATED: Use `onRangeChanged` instead
    ///
    pub const OnRangeChanged = onRangeChanged;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, min: i32, max: i32) callconv(.c) void `
    ///
    pub fn onRangeChanged(self: QScrollBar, callback: *const fn (QScrollBar, i32, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionTriggered` instead
    ///
    pub const ActionTriggered = actionTriggered;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` action: i32 `
    ///
    pub fn actionTriggered(self: QScrollBar, action: i32) void {
        qtc.QAbstractSlider_ActionTriggered(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onActionTriggered` instead
    ///
    pub const OnActionTriggered = onActionTriggered;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, action: i32) callconv(.c) void `
    ///
    pub fn onActionTriggered(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn winId(self: QScrollBar) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createWinId` instead
    ///
    pub const CreateWinId = createWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn createWinId(self: QScrollBar) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `internalWinId` instead
    ///
    pub const InternalWinId = internalWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn internalWinId(self: QScrollBar) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `effectiveWinId` instead
    ///
    pub const EffectiveWinId = effectiveWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn effectiveWinId(self: QScrollBar) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn style(self: QScrollBar) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QScrollBar, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isTopLevel(self: QScrollBar) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isWindow(self: QScrollBar) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isModal(self: QScrollBar) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowModality` instead
    ///
    pub const WindowModality = windowModality;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QScrollBar) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowModality` instead
    ///
    pub const SetWindowModality = setWindowModality;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QScrollBar, _windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(_windowModality));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isEnabled(self: QScrollBar) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabledTo` instead
    ///
    pub const IsEnabledTo = isEnabledTo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QScrollBar, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QScrollBar, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QScrollBar, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// ### DEPRECATED: Use `setWindowModified` instead
    ///
    pub const SetWindowModified = setWindowModified;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QScrollBar, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn frameGeometry(self: QScrollBar) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn geometry(self: QScrollBar) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalGeometry` instead
    ///
    pub const NormalGeometry = normalGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn normalGeometry(self: QScrollBar) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn x(self: QScrollBar) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn y(self: QScrollBar) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn pos(self: QScrollBar) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn frameSize(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn size(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn width(self: QScrollBar) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn height(self: QScrollBar) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn rect(self: QScrollBar) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRect` instead
    ///
    pub const ChildrenRect = childrenRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn childrenRect(self: QScrollBar) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRegion` instead
    ///
    pub const ChildrenRegion = childrenRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn childrenRegion(self: QScrollBar) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn minimumSize(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn maximumSize(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn minimumWidth(self: QScrollBar) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn minimumHeight(self: QScrollBar) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn maximumWidth(self: QScrollBar) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn maximumHeight(self: QScrollBar) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QScrollBar, _minimumSize: anytype) void {
        comptime _ = @TypeOf(_minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_minimumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QScrollBar, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QScrollBar, _maximumSize: anytype) void {
        comptime _ = @TypeOf(_maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_maximumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QScrollBar, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QScrollBar, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QScrollBar, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QScrollBar, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QScrollBar, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sizeIncrement(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QScrollBar, _sizeIncrement: anytype) void {
        comptime _ = @TypeOf(_sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_sizeIncrement.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement2` instead
    ///
    pub const SetSizeIncrement2 = setSizeIncrement2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QScrollBar, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn baseSize(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QScrollBar, _baseSize: anytype) void {
        comptime _ = @TypeOf(_baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_baseSize.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize2` instead
    ///
    pub const SetBaseSize2 = setBaseSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QScrollBar, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// ### DEPRECATED: Use `setFixedSize` instead
    ///
    pub const SetFixedSize = setFixedSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QScrollBar, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// ### DEPRECATED: Use `setFixedSize2` instead
    ///
    pub const SetFixedSize2 = setFixedSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QScrollBar, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFixedWidth` instead
    ///
    pub const SetFixedWidth = setFixedWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QScrollBar, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setFixedHeight` instead
    ///
    pub const SetFixedHeight = setFixedHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QScrollBar, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QScrollBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QScrollBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QScrollBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QScrollBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QScrollBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent2` instead
    ///
    pub const MapToParent2 = mapToParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QScrollBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QScrollBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent2` instead
    ///
    pub const MapFromParent2 = mapFromParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QScrollBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo` instead
    ///
    pub const MapTo = mapTo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QScrollBar, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo2` instead
    ///
    pub const MapTo2 = mapTo2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QScrollBar, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom` instead
    ///
    pub const MapFrom = mapFrom;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QScrollBar, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom2` instead
    ///
    pub const MapFrom2 = mapFrom2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QScrollBar, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn window(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nativeParentWidget` instead
    ///
    pub const NativeParentWidget = nativeParentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn nativeParentWidget(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn topLevelWidget(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn palette(self: QScrollBar) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QScrollBar, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundRole` instead
    ///
    pub const SetBackgroundRole = setBackgroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QScrollBar, _backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(_backgroundRole));
    }

    /// ### DEPRECATED: Use `backgroundRole` instead
    ///
    pub const BackgroundRole = backgroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QScrollBar) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForegroundRole` instead
    ///
    pub const SetForegroundRole = setForegroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QScrollBar, _foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(_foregroundRole));
    }

    /// ### DEPRECATED: Use `foregroundRole` instead
    ///
    pub const ForegroundRole = foregroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QScrollBar) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn font(self: QScrollBar) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QScrollBar, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn fontMetrics(self: QScrollBar) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontInfo` instead
    ///
    pub const FontInfo = fontInfo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn fontInfo(self: QScrollBar) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn cursor(self: QScrollBar) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QScrollBar, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn unsetCursor(self: QScrollBar) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMouseTracking` instead
    ///
    pub const SetMouseTracking = setMouseTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QScrollBar, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasMouseTracking` instead
    ///
    pub const HasMouseTracking = hasMouseTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn hasMouseTracking(self: QScrollBar) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underMouse` instead
    ///
    pub const UnderMouse = underMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn underMouse(self: QScrollBar) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabletTracking` instead
    ///
    pub const SetTabletTracking = setTabletTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QScrollBar, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasTabletTracking` instead
    ///
    pub const HasTabletTracking = hasTabletTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn hasTabletTracking(self: QScrollBar) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QScrollBar, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `setMask2` instead
    ///
    pub const SetMask2 = setMask2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QScrollBar, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn mask(self: QScrollBar) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearMask` instead
    ///
    pub const ClearMask = clearMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn clearMask(self: QScrollBar) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QScrollBar, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `render2` instead
    ///
    pub const Render2 = render2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QScrollBar, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `grab` instead
    ///
    pub const Grab = grab;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn grab(self: QScrollBar) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn graphicsEffect(self: QScrollBar) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QScrollBar, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QScrollBar, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QScrollBar, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QScrollBar, _windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = _windowTitle.len,
            .data = _windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// ### DEPRECATED: Use `setStyleSheet` instead
    ///
    pub const SetStyleSheet = setStyleSheet;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QScrollBar, _styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = _styleSheet.len,
            .data = _styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// ### DEPRECATED: Use `styleSheet` instead
    ///
    pub const StyleSheet = styleSheet;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.styleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowIcon` instead
    ///
    pub const SetWindowIcon = setWindowIcon;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: QScrollBar, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `windowIcon` instead
    ///
    pub const WindowIcon = windowIcon;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn windowIcon(self: QScrollBar) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowIconText` instead
    ///
    pub const SetWindowIconText = setWindowIconText;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QScrollBar, _windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = _windowIconText.len,
            .data = _windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// ### DEPRECATED: Use `windowIconText` instead
    ///
    pub const WindowIconText = windowIconText;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.windowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowRole` instead
    ///
    pub const SetWindowRole = setWindowRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QScrollBar, _windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = _windowRole.len,
            .data = _windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// ### DEPRECATED: Use `windowRole` instead
    ///
    pub const WindowRole = windowRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.windowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowFilePath` instead
    ///
    pub const SetWindowFilePath = setWindowFilePath;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QScrollBar, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `windowFilePath` instead
    ///
    pub const WindowFilePath = windowFilePath;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.windowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowOpacity` instead
    ///
    pub const SetWindowOpacity = setWindowOpacity;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QScrollBar, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `windowOpacity` instead
    ///
    pub const WindowOpacity = windowOpacity;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn windowOpacity(self: QScrollBar) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowModified` instead
    ///
    pub const IsWindowModified = isWindowModified;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isWindowModified(self: QScrollBar) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QScrollBar, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTipDuration` instead
    ///
    pub const SetToolTipDuration = setToolTipDuration;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QScrollBar, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `toolTipDuration` instead
    ///
    pub const ToolTipDuration = toolTipDuration;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn toolTipDuration(self: QScrollBar) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QScrollBar, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QScrollBar, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accessibleName` instead
    ///
    pub const AccessibleName = accessibleName;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.accessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleName` instead
    ///
    pub const SetAccessibleName = setAccessibleName;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QScrollBar, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `accessibleDescription` instead
    ///
    pub const AccessibleDescription = accessibleDescription;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.accessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleDescription` instead
    ///
    pub const SetAccessibleDescription = setAccessibleDescription;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QScrollBar, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QScrollBar, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QScrollBar) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn unsetLayoutDirection(self: QScrollBar) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QScrollBar, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn locale(self: QScrollBar) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `unsetLocale` instead
    ///
    pub const UnsetLocale = unsetLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn unsetLocale(self: QScrollBar) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRightToLeft` instead
    ///
    pub const IsRightToLeft = isRightToLeft;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isRightToLeft(self: QScrollBar) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLeftToRight` instead
    ///
    pub const IsLeftToRight = isLeftToRight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isLeftToRight(self: QScrollBar) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn setFocus(self: QScrollBar) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isActiveWindow(self: QScrollBar) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activateWindow` instead
    ///
    pub const ActivateWindow = activateWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn activateWindow(self: QScrollBar) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn clearFocus(self: QScrollBar) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus2` instead
    ///
    pub const SetFocus2 = setFocus2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QScrollBar, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QScrollBar) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QScrollBar, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn hasFocus(self: QScrollBar) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

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
    pub fn setTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QScrollBar, _focusProxy: anytype) void {
        comptime _ = @TypeOf(_focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(_focusProxy.ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn focusProxy(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contextMenuPolicy` instead
    ///
    pub const ContextMenuPolicy = contextMenuPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QScrollBar) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContextMenuPolicy` instead
    ///
    pub const SetContextMenuPolicy = setContextMenuPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QScrollBar, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn grabMouse(self: QScrollBar) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabMouse2` instead
    ///
    pub const GrabMouse2 = grabMouse2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `releaseMouse` instead
    ///
    pub const ReleaseMouse = releaseMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn releaseMouse(self: QScrollBar) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn grabKeyboard(self: QScrollBar) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `releaseKeyboard` instead
    ///
    pub const ReleaseKeyboard = releaseKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn releaseKeyboard(self: QScrollBar) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QScrollBar, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QScrollBar, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QScrollBar, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QScrollBar, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `mouseGrabber` instead
    ///
    pub const MouseGrabber = mouseGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn mouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// ### DEPRECATED: Use `keyboardGrabber` instead
    ///
    pub const KeyboardGrabber = keyboardGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn keyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// ### DEPRECATED: Use `updatesEnabled` instead
    ///
    pub const UpdatesEnabled = updatesEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn updatesEnabled(self: QScrollBar) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUpdatesEnabled` instead
    ///
    pub const SetUpdatesEnabled = setUpdatesEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QScrollBar, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `graphicsProxyWidget` instead
    ///
    pub const GraphicsProxyWidget = graphicsProxyWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn graphicsProxyWidget(self: QScrollBar) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn update(self: QScrollBar) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repaint` instead
    ///
    pub const Repaint = repaint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn repaint(self: QScrollBar) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QScrollBar, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `update3` instead
    ///
    pub const Update3 = update3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `update4` instead
    ///
    pub const Update4 = update4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint2` instead
    ///
    pub const Repaint2 = repaint2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QScrollBar, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `repaint3` instead
    ///
    pub const Repaint3 = repaint3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint4` instead
    ///
    pub const Repaint4 = repaint4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setHidden` instead
    ///
    pub const SetHidden = setHidden;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QScrollBar, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn show(self: QScrollBar) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn hide(self: QScrollBar) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn showMinimized(self: QScrollBar) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn showMaximized(self: QScrollBar) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn showFullScreen(self: QScrollBar) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn showNormal(self: QScrollBar) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn close(self: QScrollBar) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn raise(self: QScrollBar) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn lower(self: QScrollBar) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stackUnder` instead
    ///
    pub const StackUnder = stackUnder;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QScrollBar, _x: i32, _y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `move2` instead
    ///
    pub const Move2 = move2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QScrollBar, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QScrollBar, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QScrollBar, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `saveGeometry` instead
    ///
    pub const SaveGeometry = saveGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QScrollBar, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QScrollBar.saveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreGeometry` instead
    ///
    pub const RestoreGeometry = restoreGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QScrollBar, _geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = _geometry.len,
            .data = _geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn adjustSize(self: QScrollBar) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isVisible(self: QScrollBar) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QScrollBar, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isHidden(self: QScrollBar) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMinimized` instead
    ///
    pub const IsMinimized = isMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isMinimized(self: QScrollBar) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMaximized` instead
    ///
    pub const IsMaximized = isMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isMaximized(self: QScrollBar) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFullScreen` instead
    ///
    pub const IsFullScreen = isFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isFullScreen(self: QScrollBar) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QScrollBar) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QScrollBar, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `overrideWindowState` instead
    ///
    pub const OverrideWindowState = overrideWindowState;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QScrollBar, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sizePolicy(self: QScrollBar) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QScrollBar, _sizePolicy: anytype) void {
        comptime _ = @TypeOf(_sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(_sizePolicy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QScrollBar, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `visibleRegion` instead
    ///
    pub const VisibleRegion = visibleRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn visibleRegion(self: QScrollBar) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QScrollBar, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QScrollBar, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn contentsMargins(self: QScrollBar) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn contentsRect(self: QScrollBar) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn layout(self: QScrollBar) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QScrollBar, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn updateGeometry(self: QScrollBar) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QScrollBar, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setParent2` instead
    ///
    pub const SetParent2 = setParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QScrollBar, _parent: anytype, f: i32) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QScrollBar, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `scroll2` instead
    ///
    pub const Scroll2 = scroll2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QScrollBar, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn focusWidget(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextInFocusChain` instead
    ///
    pub const NextInFocusChain = nextInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn nextInFocusChain(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousInFocusChain` instead
    ///
    pub const PreviousInFocusChain = previousInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn previousInFocusChain(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn acceptDrops(self: QScrollBar) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QScrollBar, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QScrollBar, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QScrollBar, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QScrollBar, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QScrollBar, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QScrollBar, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QScrollBar, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QScrollBar.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: QScrollBar, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction3` instead
    ///
    pub const AddAction3 = addAction3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: QScrollBar, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction4` instead
    ///
    pub const AddAction4 = addAction4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QScrollBar, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `addAction5` instead
    ///
    pub const AddAction5 = addAction5;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QScrollBar, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn parentWidget(self: QScrollBar) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QScrollBar, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QScrollBar) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlag` instead
    ///
    pub const SetWindowFlag = setWindowFlag;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QScrollBar, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `overrideWindowFlags` instead
    ///
    pub const OverrideWindowFlags = overrideWindowFlags;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QScrollBar, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QScrollBar) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QScrollBar, _x: i32, _y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `childAt2` instead
    ///
    pub const ChildAt2 = childAt2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QScrollBar, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt3` instead
    ///
    pub const ChildAt3 = childAt3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QScrollBar, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QScrollBar, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QScrollBar, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `ensurePolished` instead
    ///
    pub const EnsurePolished = ensurePolished;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn ensurePolished(self: QScrollBar) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QScrollBar, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn autoFillBackground(self: QScrollBar) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QScrollBar, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `backingStore` instead
    ///
    pub const BackingStore = backingStore;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn backingStore(self: QScrollBar) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowHandle` instead
    ///
    pub const WindowHandle = windowHandle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn windowHandle(self: QScrollBar) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn screen(self: QScrollBar) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QScrollBar, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `createWindowContainer` instead
    ///
    pub const CreateWindowContainer = createWindowContainer;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    pub fn createWindowContainer(_window: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QScrollBar, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QScrollBar, callback: *const fn (QScrollBar, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconChanged` instead
    ///
    pub const WindowIconChanged = windowIconChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: QScrollBar, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `onWindowIconChanged` instead
    ///
    pub const OnWindowIconChanged = onWindowIconChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QScrollBar, callback: *const fn (QScrollBar, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconTextChanged` instead
    ///
    pub const WindowIconTextChanged = windowIconTextChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QScrollBar, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// ### DEPRECATED: Use `onWindowIconTextChanged` instead
    ///
    pub const OnWindowIconTextChanged = onWindowIconTextChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QScrollBar, callback: *const fn (QScrollBar, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customContextMenuRequested` instead
    ///
    pub const CustomContextMenuRequested = customContextMenuRequested;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QScrollBar, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onCustomContextMenuRequested` instead
    ///
    pub const OnCustomContextMenuRequested = onCustomContextMenuRequested;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QScrollBar, callback: *const fn (QScrollBar, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QScrollBar) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QScrollBar, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `render22` instead
    ///
    pub const Render22 = render22;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QScrollBar, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render3` instead
    ///
    pub const Render3 = render3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QScrollBar, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render4` instead
    ///
    pub const Render4 = render4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: QScrollBar, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `render23` instead
    ///
    pub const Render23 = render23;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QScrollBar, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render32` instead
    ///
    pub const Render32 = render32;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QScrollBar, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render42` instead
    ///
    pub const Render42 = render42;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: QScrollBar, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `grab1` instead
    ///
    pub const Grab1 = grab1;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QScrollBar, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QScrollBar, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QScrollBar, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QScrollBar, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QScrollBar, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setWindowFlag2` instead
    ///
    pub const SetWindowFlag2 = setWindowFlag2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QScrollBar, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QScrollBar, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `createWindowContainer2` instead
    ///
    pub const CreateWindowContainer2 = createWindowContainer2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWindowContainer2(_window: anytype, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(_window.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createWindowContainer3` instead
    ///
    pub const CreateWindowContainer3 = createWindowContainer3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn createWindowContainer3(_window: anytype, _parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(_window.ptr), @ptrCast(_parent.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QScrollBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScrollBar.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QScrollBar, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isWidgetType(self: QScrollBar) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isWindowType(self: QScrollBar) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn isQuickItemType(self: QScrollBar) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn signalsBlocked(self: QScrollBar) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QScrollBar, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn thread(self: QScrollBar) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QScrollBar, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QScrollBar, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QScrollBar, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QScrollBar, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QScrollBar, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QScrollBar, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QScrollBar.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QScrollBar, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QScrollBar, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QScrollBar, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn disconnect3(self: QScrollBar) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QScrollBar, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn dumpObjectTree(self: QScrollBar) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn dumpObjectInfo(self: QScrollBar) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QScrollBar, name: [:0]const u8, _value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QScrollBar, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QScrollBar, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QScrollBar.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QScrollBar.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn bindingStorage(self: QScrollBar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn bindingStorage2(self: QScrollBar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn destroyed(self: QScrollBar) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QScrollBar, callback: *const fn (QScrollBar) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn parent(self: QScrollBar) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QScrollBar, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn deleteLater(self: QScrollBar) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QScrollBar, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QScrollBar, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QScrollBar, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QScrollBar, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QScrollBar, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QScrollBar, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QScrollBar, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QScrollBar, callback: *const fn (QScrollBar, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn paintingActive(self: QScrollBar) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn widthMM(self: QScrollBar) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn heightMM(self: QScrollBar) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn logicalDpiX(self: QScrollBar) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn logicalDpiY(self: QScrollBar) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn physicalDpiX(self: QScrollBar) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn physicalDpiY(self: QScrollBar) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn devicePixelRatio(self: QScrollBar) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn devicePixelRatioF(self: QScrollBar) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn colorCount(self: QScrollBar) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn depth(self: QScrollBar) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` _value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, _value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(_value));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` ev: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QScrollBar, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QKeyEvent;
        qtc.QScrollBar_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` ev: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QScrollBar, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QKeyEvent;
        qtc.QScrollBar_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, ev: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QScrollBar, callback: *const fn (QScrollBar, QKeyEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn timerEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.QScrollBar_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.QScrollBar_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QScrollBar, callback: *const fn (QScrollBar, QTimerEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: QScrollBar, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QScrollBar_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` e: QEvent `
    ///
    pub fn superChangeEvent(self: QScrollBar, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QScrollBar_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, e: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: QScrollBar, callback: *const fn (QScrollBar, QEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn devType(self: QScrollBar) i32 {
        return qtc.QScrollBar_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superDevType(self: QScrollBar) i32 {
        return qtc.QScrollBar_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QScrollBar, callback: *const fn () callconv(.c) i32) void {
        qtc.QScrollBar_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QScrollBar, visible: bool) void {
        qtc.QScrollBar_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QScrollBar, visible: bool) void {
        qtc.QScrollBar_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QScrollBar, callback: *const fn (QScrollBar, bool) callconv(.c) void) void {
        qtc.QScrollBar_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn minimumSizeHint(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QScrollBar_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superMinimumSizeHint(self: QScrollBar) QSize {
        return .{ .ptr = qtc.QScrollBar_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QScrollBar, callback: *const fn () callconv(.c) QSize) void {
        qtc.QScrollBar_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QScrollBar, param1: i32) i32 {
        return qtc.QScrollBar_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QScrollBar, param1: i32) i32 {
        return qtc.QScrollBar_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) i32) void {
        qtc.QScrollBar_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn hasHeightForWidth(self: QScrollBar) bool {
        return qtc.QScrollBar_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superHasHeightForWidth(self: QScrollBar) bool {
        return qtc.QScrollBar_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QScrollBar, callback: *const fn () callconv(.c) bool) void {
        qtc.QScrollBar_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn paintEngine(self: QScrollBar) QPaintEngine {
        return .{ .ptr = qtc.QScrollBar_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superPaintEngine(self: QScrollBar) QPaintEngine {
        return .{ .ptr = qtc.QScrollBar_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QScrollBar, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QScrollBar_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QScrollBar_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QScrollBar_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QScrollBar, callback: *const fn (QScrollBar, QMouseEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QScrollBar_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QScrollBar_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QScrollBar, callback: *const fn (QScrollBar, QKeyEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QScrollBar_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QScrollBar_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QScrollBar, callback: *const fn (QScrollBar, QFocusEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QScrollBar_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QScrollBar_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QScrollBar, callback: *const fn (QScrollBar, QFocusEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enterEvent` instead
    ///
    pub const EnterEvent = enterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QScrollBar_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEnterEvent` instead
    ///
    pub const SuperEnterEvent = superEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QScrollBar_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEnterEvent` instead
    ///
    pub const OnEnterEvent = onEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QScrollBar, callback: *const fn (QScrollBar, QEnterEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `leaveEvent` instead
    ///
    pub const LeaveEvent = leaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QScrollBar_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superLeaveEvent` instead
    ///
    pub const SuperLeaveEvent = superLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QScrollBar_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveEvent` instead
    ///
    pub const OnLeaveEvent = onLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QScrollBar, callback: *const fn (QScrollBar, QEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QScrollBar_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QScrollBar_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QScrollBar, callback: *const fn (QScrollBar, QMoveEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QScrollBar_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QScrollBar_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QScrollBar, callback: *const fn (QScrollBar, QResizeEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QScrollBar_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QScrollBar_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QScrollBar, callback: *const fn (QScrollBar, QCloseEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QScrollBar_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QScrollBar_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QScrollBar, callback: *const fn (QScrollBar, QTabletEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionEvent` instead
    ///
    pub const ActionEvent = actionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QScrollBar_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superActionEvent` instead
    ///
    pub const SuperActionEvent = superActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QScrollBar_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onActionEvent` instead
    ///
    pub const OnActionEvent = onActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QScrollBar, callback: *const fn (QScrollBar, QActionEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QScrollBar_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QScrollBar_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QScrollBar, callback: *const fn (QScrollBar, QDragEnterEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QScrollBar_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QScrollBar_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QScrollBar, callback: *const fn (QScrollBar, QDragMoveEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QScrollBar_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QScrollBar_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QScrollBar, callback: *const fn (QScrollBar, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QScrollBar_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QScrollBar_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QScrollBar, callback: *const fn (QScrollBar, QDropEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QScrollBar_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QScrollBar_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QScrollBar, callback: *const fn (QScrollBar, QShowEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QScrollBar, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QScrollBar_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QScrollBar, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QScrollBar_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QScrollBar, callback: *const fn (QScrollBar, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QScrollBar_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QScrollBar, param1: i32) i32 {
        return qtc.QScrollBar_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QScrollBar, param1: i32) i32 {
        return qtc.QScrollBar_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) i32) void {
        qtc.QScrollBar_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QScrollBar, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QScrollBar_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QScrollBar, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QScrollBar_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QScrollBar, callback: *const fn (QScrollBar, QPainter) callconv(.c) void) void {
        qtc.QScrollBar_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QScrollBar, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QScrollBar_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QScrollBar, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QScrollBar_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QScrollBar, callback: *const fn (QScrollBar, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QScrollBar_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sharedPainter(self: QScrollBar) QPainter {
        return .{ .ptr = qtc.QScrollBar_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superSharedPainter(self: QScrollBar) QPainter {
        return .{ .ptr = qtc.QScrollBar_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QScrollBar, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QScrollBar_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QScrollBar_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QScrollBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QScrollBar_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QScrollBar, callback: *const fn (QScrollBar, QInputMethodEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QScrollBar, param1: i32) QVariant {
        return .{ .ptr = qtc.QScrollBar_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QScrollBar, param1: i32) QVariant {
        return .{ .ptr = qtc.QScrollBar_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) QVariant) void {
        qtc.QScrollBar_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QScrollBar, next: bool) bool {
        return qtc.QScrollBar_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QScrollBar, next: bool) bool {
        return qtc.QScrollBar_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QScrollBar, callback: *const fn (QScrollBar, bool) callconv(.c) bool) void {
        qtc.QScrollBar_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QScrollBar, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QScrollBar_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QScrollBar, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QScrollBar_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QScrollBar, callback: *const fn (QScrollBar, QObject, QEvent) callconv(.c) bool) void {
        qtc.QScrollBar_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QScrollBar_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QScrollBar_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QScrollBar, callback: *const fn (QScrollBar, QChildEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QScrollBar_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QScrollBar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QScrollBar_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QScrollBar, callback: *const fn (QScrollBar, QEvent) callconv(.c) void) void {
        qtc.QScrollBar_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QScrollBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScrollBar_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QScrollBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScrollBar_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QScrollBar, callback: *const fn (QScrollBar, QMetaMethod) callconv(.c) void) void {
        qtc.QScrollBar_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QScrollBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScrollBar_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QScrollBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScrollBar_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QScrollBar, callback: *const fn (QScrollBar, QMetaMethod) callconv(.c) void) void {
        qtc.QScrollBar_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setRepeatAction` instead
    ///
    pub const SetRepeatAction = setRepeatAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` action: qabstractslider_enums.SliderAction `
    ///
    pub fn setRepeatAction(self: QScrollBar, action: i32) void {
        qtc.QScrollBar_SetRepeatAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superSetRepeatAction` instead
    ///
    pub const SuperSetRepeatAction = superSetRepeatAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` action: qabstractslider_enums.SliderAction `
    ///
    pub fn superSetRepeatAction(self: QScrollBar, action: i32) void {
        qtc.QScrollBar_SuperSetRepeatAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onSetRepeatAction` instead
    ///
    pub const OnSetRepeatAction = onSetRepeatAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, action: qabstractslider_enums.SliderAction) callconv(.c) void `
    ///
    pub fn onSetRepeatAction(self: QScrollBar, callback: *const fn (QScrollBar, i32) callconv(.c) void) void {
        qtc.QScrollBar_OnSetRepeatAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `repeatAction` instead
    ///
    pub const RepeatAction = repeatAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qabstractslider_enums.SliderAction `
    ///
    pub fn repeatAction(self: QScrollBar) i32 {
        return qtc.QScrollBar_RepeatAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRepeatAction` instead
    ///
    pub const SuperRepeatAction = superRepeatAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ## Returns:
    ///
    /// ` qabstractslider_enums.SliderAction `
    ///
    pub fn superRepeatAction(self: QScrollBar) i32 {
        return qtc.QScrollBar_SuperRepeatAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRepeatAction` instead
    ///
    pub const OnRepeatAction = onRepeatAction;

    /// Inherited from QAbstractSlider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onRepeatAction(self: QScrollBar, callback: *const fn () callconv(.c) i32) void {
        qtc.QScrollBar_OnRepeatAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn updateMicroFocus(self: QScrollBar) void {
        qtc.QScrollBar_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superUpdateMicroFocus(self: QScrollBar) void {
        qtc.QScrollBar_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QScrollBar, callback: *const fn () callconv(.c) void) void {
        qtc.QScrollBar_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn create(self: QScrollBar) void {
        qtc.QScrollBar_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superCreate(self: QScrollBar) void {
        qtc.QScrollBar_SuperCreate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QScrollBar, callback: *const fn () callconv(.c) void) void {
        qtc.QScrollBar_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn destroy(self: QScrollBar) void {
        qtc.QScrollBar_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDestroy` instead
    ///
    pub const SuperDestroy = superDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superDestroy(self: QScrollBar) void {
        qtc.QScrollBar_SuperDestroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroy` instead
    ///
    pub const OnDestroy = onDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QScrollBar, callback: *const fn () callconv(.c) void) void {
        qtc.QScrollBar_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextChild` instead
    ///
    pub const FocusNextChild = focusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn focusNextChild(self: QScrollBar) bool {
        return qtc.QScrollBar_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusNextChild` instead
    ///
    pub const SuperFocusNextChild = superFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superFocusNextChild(self: QScrollBar) bool {
        return qtc.QScrollBar_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusNextChild` instead
    ///
    pub const OnFocusNextChild = onFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QScrollBar, callback: *const fn () callconv(.c) bool) void {
        qtc.QScrollBar_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPreviousChild` instead
    ///
    pub const FocusPreviousChild = focusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn focusPreviousChild(self: QScrollBar) bool {
        return qtc.QScrollBar_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusPreviousChild` instead
    ///
    pub const SuperFocusPreviousChild = superFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superFocusPreviousChild(self: QScrollBar) bool {
        return qtc.QScrollBar_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusPreviousChild` instead
    ///
    pub const OnFocusPreviousChild = onFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QScrollBar, callback: *const fn () callconv(.c) bool) void {
        qtc.QScrollBar_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn sender(self: QScrollBar) QObject {
        return .{ .ptr = qtc.QScrollBar_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superSender(self: QScrollBar) QObject {
        return .{ .ptr = qtc.QScrollBar_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QScrollBar, callback: *const fn () callconv(.c) QObject) void {
        qtc.QScrollBar_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn senderSignalIndex(self: QScrollBar) i32 {
        return qtc.QScrollBar_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    pub fn superSenderSignalIndex(self: QScrollBar) i32 {
        return qtc.QScrollBar_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QScrollBar, callback: *const fn () callconv(.c) i32) void {
        qtc.QScrollBar_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QScrollBar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QScrollBar_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QScrollBar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QScrollBar_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QScrollBar, callback: *const fn (QScrollBar, [*:0]const u8) callconv(.c) i32) void {
        qtc.QScrollBar_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QScrollBar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QScrollBar_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QScrollBar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QScrollBar_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QScrollBar, callback: *const fn (QScrollBar, QMetaMethod) callconv(.c) bool) void {
        qtc.QScrollBar_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QScrollBar, metricA: i32, metricB: i32) f64 {
        return qtc.QScrollBar_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScrollBar `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QScrollBar, metricA: i32, metricB: i32) f64 {
        return qtc.QScrollBar_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar`
    ///
    /// ` callback: *const fn (self: QScrollBar, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QScrollBar, callback: *const fn (QScrollBar, i32, i32) callconv(.c) f64) void {
        qtc.QScrollBar_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QScrollBar `
    ///
    /// ` callback: *const fn (self: QScrollBar, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QScrollBar, callback: *const fn (QScrollBar, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscrollbar.html#dtor.QScrollBar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScrollBar `
    ///
    pub fn delete(self: QScrollBar) void {
        qtc.QScrollBar_Delete(@ptrCast(self.ptr));
    }
};
