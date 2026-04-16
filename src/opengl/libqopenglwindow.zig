const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCursor = @import("libqt6").QCursor;
const QEvent = @import("libqt6").QEvent;
const QExposeEvent = @import("libqt6").QExposeEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QImage = @import("libqt6").QImage;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qopenglwindow_enums = enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qsurface_enums = @import("../libqsurface.zig").enums;
const qwindow_enums = @import("../libqwindow.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html)
pub const QOpenGLWindow = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLWindow,

    pub const _is_QOpenGLWindow = {};
    pub const _is_QPaintDeviceWindow = {};
    pub const _is_QWindow = {};
    pub const _is_QObject = {};
    pub const _is_QSurface = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QOpenGLWindow object.
    ///
    pub fn New() QOpenGLWindow {
        return .{ .ptr = qtc.QOpenGLWindow_new() };
    }

    /// New2 constructs a new QOpenGLWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` shareContext: QOpenGLContext `
    ///
    pub fn New2(shareContext: anytype) QOpenGLWindow {
        comptime _ = @TypeOf(shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLWindow_new2(@ptrCast(shareContext.ptr)) };
    }

    /// New3 constructs a new QOpenGLWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    pub fn New3(updateBehavior: i32) QOpenGLWindow {
        return .{ .ptr = qtc.QOpenGLWindow_new3(@bitCast(updateBehavior)) };
    }

    /// New4 constructs a new QOpenGLWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    /// ` parent: QWindow `
    ///
    pub fn New4(updateBehavior: i32, parent: anytype) QOpenGLWindow {
        comptime _ = @TypeOf(parent)._is_QWindow;
        return .{ .ptr = qtc.QOpenGLWindow_new4(@bitCast(updateBehavior), @ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new QOpenGLWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` shareContext: QOpenGLContext `
    ///
    /// ` updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    pub fn New5(shareContext: anytype, updateBehavior: i32) QOpenGLWindow {
        comptime _ = @TypeOf(shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLWindow_new5(@ptrCast(shareContext.ptr), @bitCast(updateBehavior)) };
    }

    /// New6 constructs a new QOpenGLWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` shareContext: QOpenGLContext `
    ///
    /// ` updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    /// ` parent: QWindow `
    ///
    pub fn New6(shareContext: anytype, updateBehavior: i32, parent: anytype) QOpenGLWindow {
        comptime _ = @TypeOf(shareContext)._is_QOpenGLContext;
        comptime _ = @TypeOf(parent)._is_QWindow;
        return .{ .ptr = qtc.QOpenGLWindow_new6(@ptrCast(shareContext.ptr), @bitCast(updateBehavior), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MetaObject(self: QOpenGLWindow) QMetaObject {
        return .{ .ptr = qtc.QOpenGLWindow_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QOpenGLWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperMetaObject(self: QOpenGLWindow) QMetaObject {
        return .{ .ptr = qtc.QOpenGLWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QOpenGLWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QOpenGLWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QOpenGLWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QOpenGLWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#updateBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qopenglwindow_enums.UpdateBehavior `
    ///
    pub fn UpdateBehavior(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_UpdateBehavior(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsValid(self: QOpenGLWindow) bool {
        return qtc.QOpenGLWindow_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#makeCurrent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MakeCurrent(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_MakeCurrent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#doneCurrent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DoneCurrent(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_DoneCurrent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#context)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Context(self: QOpenGLWindow) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLWindow_Context(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#shareContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ShareContext(self: QOpenGLWindow) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLWindow_ShareContext(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#defaultFramebufferObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DefaultFramebufferObject(self: QOpenGLWindow) u32 {
        return qtc.QOpenGLWindow_DefaultFramebufferObject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#grabFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn GrabFramebuffer(self: QOpenGLWindow) QImage {
        return .{ .ptr = qtc.QOpenGLWindow_GrabFramebuffer(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#frameSwapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn FrameSwapped(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_FrameSwapped(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#frameSwapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow) callconv(.c) void `
    ///
    pub fn OnFrameSwapped(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow) callconv(.c) void) void {
        qtc.QOpenGLWindow_Connect_FrameSwapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn InitializeGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_InitializeGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInitializeGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnInitializeGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeGL` instead
    ///
    pub const QBaseInitializeGL = SuperInitializeGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperInitializeGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperInitializeGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn ResizeGL(self: QOpenGLWindow, w: i32, h: i32) void {
        qtc.QOpenGLWindow_ResizeGL(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeGL)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, w: i32, h: i32) callconv(.c) void `
    ///
    pub fn OnResizeGL(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32, i32) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnResizeGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeGL` instead
    ///
    pub const QBaseResizeGL = SuperResizeGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SuperResizeGL(self: QOpenGLWindow, w: i32, h: i32) void {
        qtc.QOpenGLWindow_SuperResizeGL(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PaintGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_PaintGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPaintGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintGL` instead
    ///
    pub const QBasePaintGL = SuperPaintGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperPaintGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperPaintGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PaintUnderGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_PaintUnderGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPaintUnderGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintUnderGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintUnderGL` instead
    ///
    pub const QBasePaintUnderGL = SuperPaintUnderGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperPaintUnderGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperPaintUnderGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PaintOverGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_PaintOverGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPaintOverGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintOverGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintOverGL` instead
    ///
    pub const QBasePaintOverGL = SuperPaintOverGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperPaintOverGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperPaintOverGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QOpenGLWindow_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QPaintEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QOpenGLWindow_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QOpenGLWindow_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QResizeEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QOpenGLWindow_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QOpenGLWindow, metric: i32) i32 {
        return qtc.QOpenGLWindow_Metric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QOpenGLWindow, metric: i32) i32 {
        return qtc.QOpenGLWindow_SuperMetric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Redirected(self: QOpenGLWindow, param1: anytype) QPaintDevice {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLWindow_Redirected(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QOpenGLWindow_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn SuperRedirected(self: QOpenGLWindow, param1: anytype) QPaintDevice {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLWindow_SuperRedirected(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` rect: QRect `
    ///
    pub fn Update(self: QOpenGLWindow, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPaintDeviceWindow_Update(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` region: QRegion `
    ///
    pub fn Update2(self: QOpenGLWindow, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QPaintDeviceWindow_Update2(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Update3(self: QOpenGLWindow) void {
        qtc.QPaintDeviceWindow_Update3(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` surfaceType: qsurface_enums.SurfaceType `
    ///
    pub fn SetSurfaceType(self: QOpenGLWindow, surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self.ptr), @bitCast(surfaceType));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsVisible(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qwindow_enums.Visibility `
    ///
    pub fn Visibility(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` v: qwindow_enums.Visibility `
    ///
    pub fn SetVisibility(self: QOpenGLWindow, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self.ptr), @bitCast(v));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Create(self: QOpenGLWindow) void {
        qtc.QWindow_Create(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn WinId(self: QOpenGLWindow) usize {
        return qtc.QWindow_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Parent(self: QOpenGLWindow) QWindow {
        return .{ .ptr = qtc.QWindow_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` parent: QWindow `
    ///
    pub fn SetParent(self: QOpenGLWindow, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWindow;
        qtc.QWindow_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsTopLevel(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsModal(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn Modality(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Modality(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` modality: qnamespace_enums.WindowModality `
    ///
    pub fn SetModality(self: QOpenGLWindow, modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self.ptr), @bitCast(modality));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` format: QSurfaceFormat `
    ///
    pub fn SetFormat(self: QOpenGLWindow, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QSurfaceFormat;
        qtc.QWindow_SetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn RequestedFormat(self: QOpenGLWindow) QSurfaceFormat {
        return .{ .ptr = qtc.QWindow_RequestedFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetFlags(self: QOpenGLWindow, flags: i32) void {
        qtc.QWindow_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn Flags(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetFlag(self: QOpenGLWindow, param1: i32) void {
        qtc.QWindow_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn Type(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QOpenGLWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` level: f64 `
    ///
    pub fn SetOpacity(self: QOpenGLWindow, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Opacity(self: QOpenGLWindow) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetMask(self: QOpenGLWindow, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QWindow_SetMask(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Mask(self: QOpenGLWindow) QRegion {
        return .{ .ptr = qtc.QWindow_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsActive(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsActive(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn ReportContentOrientationChange(self: QOpenGLWindow, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn ContentOrientation(self: QOpenGLWindow) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DevicePixelRatio(self: QOpenGLWindow) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QOpenGLWindow) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowStates(self: QOpenGLWindow) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` state: qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QOpenGLWindow, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` states: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowStates(self: QOpenGLWindow, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self.ptr), @bitCast(states));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` parent: QWindow `
    ///
    pub fn SetTransientParent(self: QOpenGLWindow, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWindow;
        qtc.QWindow_SetTransientParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn TransientParent(self: QOpenGLWindow) QWindow {
        return .{ .ptr = qtc.QWindow_TransientParent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` child: QWindow `
    ///
    pub fn IsAncestorOf(self: QOpenGLWindow, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsExposed(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MinimumWidth(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MinimumHeight(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MaximumWidth(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MaximumHeight(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MinimumSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn MaximumSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn BaseSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SizeIncrement(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn SetMinimumSize(self: QOpenGLWindow, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QWindow_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn SetMaximumSize(self: QOpenGLWindow, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QWindow_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn SetBaseSize(self: QOpenGLWindow, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QWindow_SetBaseSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSizeIncrement(self: QOpenGLWindow, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QWindow_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Geometry(self: QOpenGLWindow) QRect {
        return .{ .ptr = qtc.QWindow_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn FrameMargins(self: QOpenGLWindow) QMargins {
        return .{ .ptr = qtc.QWindow_FrameMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn FrameGeometry(self: QOpenGLWindow) QRect {
        return .{ .ptr = qtc.QWindow_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn FramePosition(self: QOpenGLWindow) QPoint {
        return .{ .ptr = qtc.QWindow_FramePosition(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` point: QPoint `
    ///
    pub fn SetFramePosition(self: QOpenGLWindow, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QWindow_SetFramePosition(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Width(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Height(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn X(self: QOpenGLWindow) i32 {
        return qtc.QWindow_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Y(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Position(self: QOpenGLWindow) QPoint {
        return .{ .ptr = qtc.QWindow_Position(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` pt: QPoint `
    ///
    pub fn SetPosition(self: QOpenGLWindow, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QWindow_SetPosition(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    pub fn SetPosition2(self: QOpenGLWindow, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` newSize: QSize `
    ///
    pub fn Resize(self: QOpenGLWindow, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSize;
        qtc.QWindow_Resize(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize2(self: QOpenGLWindow, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetFilePath(self: QOpenGLWindow, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: QOpenGLWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QOpenGLWindow, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWindow_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Icon(self: QOpenGLWindow) QIcon {
        return .{ .ptr = qtc.QWindow_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Destroy(self: QOpenGLWindow) void {
        qtc.QWindow_Destroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` grab: bool `
    ///
    pub fn SetKeyboardGrabEnabled(self: QOpenGLWindow, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` grab: bool `
    ///
    pub fn SetMouseGrabEnabled(self: QOpenGLWindow, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Screen(self: QOpenGLWindow) QScreen {
        return .{ .ptr = qtc.QWindow_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QOpenGLWindow, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QWindow_SetScreen(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` pos: QPointF `
    ///
    pub fn MapToGlobal(self: QOpenGLWindow, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapToGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` pos: QPointF `
    ///
    pub fn MapFromGlobal(self: QOpenGLWindow, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` pos: QPoint `
    ///
    pub fn MapToGlobal2(self: QOpenGLWindow, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` pos: QPoint `
    ///
    pub fn MapFromGlobal2(self: QOpenGLWindow, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Cursor(self: QOpenGLWindow) QCursor {
        return .{ .ptr = qtc.QWindow_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QOpenGLWindow, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWindow_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn UnsetCursor(self: QOpenGLWindow) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: usize `
    ///
    pub fn FromWinId(id: usize) QWindow {
        return .{ .ptr = qtc.QWindow_FromWinId(@bitCast(id)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn RequestActivate(self: QOpenGLWindow) void {
        qtc.QWindow_RequestActivate(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QOpenGLWindow, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Show(self: QOpenGLWindow) void {
        qtc.QWindow_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Hide(self: QOpenGLWindow) void {
        qtc.QWindow_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ShowMinimized(self: QOpenGLWindow) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ShowMaximized(self: QOpenGLWindow) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ShowFullScreen(self: QOpenGLWindow) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ShowNormal(self: QOpenGLWindow) void {
        qtc.QWindow_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Close(self: QOpenGLWindow) bool {
        return qtc.QWindow_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Raise(self: QOpenGLWindow) void {
        qtc.QWindow_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Lower(self: QOpenGLWindow) void {
        qtc.QWindow_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` edges: flag of qnamespace_enums.Edge `
    ///
    pub fn StartSystemResize(self: QOpenGLWindow, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self.ptr), @bitCast(edges));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn StartSystemMove(self: QOpenGLWindow) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QOpenGLWindow, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetX(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetY(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetWidth(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetHeight(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QOpenGLWindow, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetGeometry2(self: QOpenGLWindow, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QWindow_SetGeometry2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn SetMinimumWidth(self: QOpenGLWindow, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn SetMinimumHeight(self: QOpenGLWindow, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn SetMaximumWidth(self: QOpenGLWindow, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn SetMaximumHeight(self: QOpenGLWindow, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` msec: i32 `
    ///
    pub fn Alert(self: QOpenGLWindow, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn RequestUpdate(self: QOpenGLWindow) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` screen: QScreen `
    ///
    pub fn ScreenChanged(self: QOpenGLWindow, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QWindow_ScreenChanged(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnScreenChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QScreen) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` modality: qnamespace_enums.WindowModality `
    ///
    pub fn ModalityChanged(self: QOpenGLWindow, modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self.ptr), @bitCast(modality));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, modality: qnamespace_enums.WindowModality) callconv(.c) void `
    ///
    pub fn OnModalityChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` windowState: qnamespace_enums.WindowState `
    ///
    pub fn WindowStateChanged(self: QOpenGLWindow, windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self.ptr), @bitCast(windowState));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, windowState: qnamespace_enums.WindowState) callconv(.c) void `
    ///
    pub fn OnWindowStateChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QOpenGLWindow, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn XChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnXChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn YChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnYChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn WidthChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn HeightChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MinimumWidthChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMinimumWidthChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MinimumHeightChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMinimumHeightChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MaximumWidthChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMaximumWidthChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MaximumHeightChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMaximumHeightChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` arg: bool `
    ///
    pub fn VisibleChanged(self: QOpenGLWindow, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self.ptr), arg);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, arg: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` visibility: qwindow_enums.Visibility `
    ///
    pub fn VisibilityChanged(self: QOpenGLWindow, visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self.ptr), @bitCast(visibility));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, visibility: qwindow_enums.Visibility) callconv(.c) void `
    ///
    pub fn OnVisibilityChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ActiveChanged(self: QOpenGLWindow) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn ContentOrientationChanged(self: QOpenGLWindow, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn OnContentOrientationChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` object: QObject `
    ///
    pub fn FocusObjectChanged(self: QOpenGLWindow, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QWindow_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, object: QObject) callconv(.c) void `
    ///
    pub fn OnFocusObjectChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QObject) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` opacity: f64 `
    ///
    pub fn OpacityChanged(self: QOpenGLWindow, opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, opacity: f64) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` transientParent: QWindow `
    ///
    pub fn TransientParentChanged(self: QOpenGLWindow, transientParent: anytype) void {
        comptime _ = @TypeOf(transientParent)._is_QWindow;
        qtc.QWindow_TransientParentChanged(@ptrCast(self.ptr), @ptrCast(transientParent.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, transientParent: QWindow) callconv(.c) void `
    ///
    pub fn OnTransientParentChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn Parent1(self: QOpenGLWindow, mode: i32) QWindow {
        return .{ .ptr = qtc.QWindow_Parent1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetFlag2(self: QOpenGLWindow, param1: i32, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` child: QWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn IsAncestorOf2(self: QOpenGLWindow, child: anytype, mode: i32) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self.ptr), @ptrCast(child.ptr), @bitCast(mode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QOpenGLWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QOpenGLWindow, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsWidgetType(self: QOpenGLWindow) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsWindowType(self: QOpenGLWindow) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn IsQuickItemType(self: QOpenGLWindow) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SignalsBlocked(self: QOpenGLWindow) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QOpenGLWindow, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Thread(self: QOpenGLWindow) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QOpenGLWindow, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QOpenGLWindow, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QOpenGLWindow, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QOpenGLWindow, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QOpenGLWindow, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QOpenGLWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qopenglwindow.Children: Memory allocation failed");
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QOpenGLWindow, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QOpenGLWindow, obj: anytype) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QOpenGLWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn Disconnect3(self: QOpenGLWindow) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QOpenGLWindow, receiver: anytype) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn DumpObjectTree(self: QOpenGLWindow) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DumpObjectInfo(self: QOpenGLWindow) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QOpenGLWindow, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QOpenGLWindow, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QOpenGLWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qopenglwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qopenglwindow.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn BindingStorage(self: QOpenGLWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn BindingStorage2(self: QOpenGLWindow) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Destroyed(self: QOpenGLWindow) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QOpenGLWindow, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DeleteLater(self: QOpenGLWindow) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QOpenGLWindow, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QOpenGLWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QOpenGLWindow, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QOpenGLWindow, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QOpenGLWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QOpenGLWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QOpenGLWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn SurfaceClass(self: QOpenGLWindow) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self.ptr));
    }

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SupportsOpenGL(self: QOpenGLWindow) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PaintingActive(self: QOpenGLWindow) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PaintEngine(self: QOpenGLWindow) QPaintEngine {
        return .{ .ptr = qtc.QPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn WidthMM(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn HeightMM(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn LogicalDpiX(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn LogicalDpiY(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PhysicalDpiX(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn PhysicalDpiY(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DevicePixelRatioF(self: QOpenGLWindow) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn ColorCount(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Depth(self: QOpenGLWindow) i32 {
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

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QExposeEvent `
    ///
    pub fn ExposeEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QExposeEvent;
        qtc.QOpenGLWindow_ExposeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperExposeEvent` instead
    ///
    pub const QBaseExposeEvent = SuperExposeEvent;

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QExposeEvent `
    ///
    pub fn SuperExposeEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QExposeEvent;
        qtc.QOpenGLWindow_SuperExposeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QExposeEvent) callconv(.c) void `
    ///
    pub fn OnExposeEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QExposeEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnExposeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QOpenGLWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLWindow_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QOpenGLWindow, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn SurfaceType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSurfaceType` instead
    ///
    pub const QBaseSurfaceType = SuperSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn SuperSurfaceType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SuperSurfaceType(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSurfaceType(self: QOpenGLWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnSurfaceType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Format(self: QOpenGLWindow) QSurfaceFormat {
        return .{ .ptr = qtc.QOpenGLWindow_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperFormat(self: QOpenGLWindow) QSurfaceFormat {
        return .{ .ptr = qtc.QOpenGLWindow_SuperFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QSurfaceFormat `
    ///
    pub fn OnFormat(self: QOpenGLWindow, callback: *const fn () callconv(.c) QSurfaceFormat) void {
        qtc.QOpenGLWindow_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Size(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QOpenGLWindow_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QOpenGLWindow_SuperSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSize(self: QOpenGLWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.QOpenGLWindow_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn AccessibleRoot(self: QOpenGLWindow) QAccessibleInterface {
        return .{ .ptr = qtc.QOpenGLWindow_AccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleRoot` instead
    ///
    pub const QBaseAccessibleRoot = SuperAccessibleRoot;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperAccessibleRoot(self: QOpenGLWindow) QAccessibleInterface {
        return .{ .ptr = qtc.QOpenGLWindow_SuperAccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleRoot(self: QOpenGLWindow, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QOpenGLWindow_OnAccessibleRoot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn FocusObject(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_FocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperFocusObject` instead
    ///
    pub const QBaseFocusObject = SuperFocusObject;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperFocusObject(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_SuperFocusObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnFocusObject(self: QOpenGLWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLWindow_OnFocusObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMoveEvent `
    ///
    pub fn MoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.QOpenGLWindow_MoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.QOpenGLWindow_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMoveEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QFocusEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QFocusEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn ShowEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QOpenGLWindow_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QOpenGLWindow_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QShowEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn HideEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QOpenGLWindow_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QOpenGLWindow_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QHideEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn CloseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QOpenGLWindow_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QOpenGLWindow_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QCloseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QKeyEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QKeyEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn WheelEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QOpenGLWindow_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QOpenGLWindow_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QWheelEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QTouchEvent `
    ///
    pub fn TouchEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTouchEvent;
        qtc.QOpenGLWindow_TouchEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTouchEvent` instead
    ///
    pub const QBaseTouchEvent = SuperTouchEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QTouchEvent `
    ///
    pub fn SuperTouchEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTouchEvent;
        qtc.QOpenGLWindow_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QTouchEvent) callconv(.c) void `
    ///
    pub fn OnTouchEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QTouchEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QTabletEvent `
    ///
    pub fn TabletEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.QOpenGLWindow_TabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.QOpenGLWindow_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QTabletEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QOpenGLWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QOpenGLWindow_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QOpenGLWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QOpenGLWindow_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QOpenGLWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QOpenGLWindow, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QOpenGLWindow, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn DevType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperDevType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QOpenGLWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QOpenGLWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLWindow_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QOpenGLWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLWindow_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QPainter) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SharedPainter(self: QOpenGLWindow) QPainter {
        return .{ .ptr = qtc.QOpenGLWindow_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperSharedPainter(self: QOpenGLWindow) QPainter {
        return .{ .ptr = qtc.QOpenGLWindow_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QOpenGLWindow, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QOpenGLWindow_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn ResolveInterface(self: QOpenGLWindow, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLWindow_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `SuperResolveInterface` instead
    ///
    pub const QBaseResolveInterface = SuperResolveInterface;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn SuperResolveInterface(self: QOpenGLWindow, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLWindow_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn OnResolveInterface(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLWindow_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Sender(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperSender(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QOpenGLWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn SenderSignalIndex(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn SuperSenderSignalIndex(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QOpenGLWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QOpenGLWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QOpenGLWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QOpenGLWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QOpenGLWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QOpenGLWindow, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLWindow_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QOpenGLWindow, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLWindow_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32, i32) callconv(.c) f64) void {
        qtc.QOpenGLWindow_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#dtor.QOpenGLWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn Delete(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#public-types)
pub const enums = struct {
    pub const UpdateBehavior = enum(i32) {
        pub const NoPartialUpdate: i32 = 0;
        pub const PartialUpdateBlit: i32 = 1;
        pub const PartialUpdateBlend: i32 = 2;
    };
};
