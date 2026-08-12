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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLWindow object in C++ memory
    ///
    pub fn new() QOpenGLWindow {
        return .{ .ptr = qtc.QOpenGLWindow_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _shareContext: QOpenGLContext `
    ///
    pub fn new2(_shareContext: anytype) QOpenGLWindow {
        comptime _ = @TypeOf(_shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLWindow_new2(@ptrCast(_shareContext.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    pub fn new3(_updateBehavior: i32) QOpenGLWindow {
        return .{ .ptr = qtc.QOpenGLWindow_new3(@bitCast(_updateBehavior)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QOpenGLWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new4(_updateBehavior: i32, _parent: anytype) QOpenGLWindow {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.QOpenGLWindow_new4(@bitCast(_updateBehavior), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QOpenGLWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _shareContext: QOpenGLContext `
    ///
    /// ` _updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    pub fn new5(_shareContext: anytype, _updateBehavior: i32) QOpenGLWindow {
        comptime _ = @TypeOf(_shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLWindow_new5(@ptrCast(_shareContext.ptr), @bitCast(_updateBehavior)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QOpenGLWindow object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _shareContext: QOpenGLContext `
    ///
    /// ` _updateBehavior: qopenglwindow_enums.UpdateBehavior `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new6(_shareContext: anytype, _updateBehavior: i32, _parent: anytype) QOpenGLWindow {
        comptime _ = @TypeOf(_shareContext)._is_QOpenGLContext;
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.QOpenGLWindow_new6(@ptrCast(_shareContext.ptr), @bitCast(_updateBehavior), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn metaObject(self: QOpenGLWindow) QMetaObject {
        return .{ .ptr = qtc.QOpenGLWindow_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QOpenGLWindow, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLWindow_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn superMetaObject(self: QOpenGLWindow) QMetaObject {
        return .{ .ptr = qtc.QOpenGLWindow_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QOpenGLWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLWindow_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLWindow_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QOpenGLWindow, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLWindow_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QOpenGLWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLWindow_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QOpenGLWindow, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLWindow_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLWindow.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `updateBehavior` instead
    ///
    pub const UpdateBehavior = updateBehavior;

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
    pub fn updateBehavior(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_UpdateBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn isValid(self: QOpenGLWindow) bool {
        return qtc.QOpenGLWindow_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeCurrent` instead
    ///
    pub const MakeCurrent = makeCurrent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#makeCurrent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn makeCurrent(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_MakeCurrent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `doneCurrent` instead
    ///
    pub const DoneCurrent = doneCurrent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#doneCurrent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn doneCurrent(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_DoneCurrent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#context)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn context(self: QOpenGLWindow) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLWindow_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `shareContext` instead
    ///
    pub const ShareContext = shareContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#shareContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn shareContext(self: QOpenGLWindow) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLWindow_ShareContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultFramebufferObject` instead
    ///
    pub const DefaultFramebufferObject = defaultFramebufferObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#defaultFramebufferObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn defaultFramebufferObject(self: QOpenGLWindow) u32 {
        return qtc.QOpenGLWindow_DefaultFramebufferObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabFramebuffer` instead
    ///
    pub const GrabFramebuffer = grabFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#grabFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn grabFramebuffer(self: QOpenGLWindow) QImage {
        return .{ .ptr = qtc.QOpenGLWindow_GrabFramebuffer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameSwapped` instead
    ///
    pub const FrameSwapped = frameSwapped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#frameSwapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn frameSwapped(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_FrameSwapped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFrameSwapped` instead
    ///
    pub const OnFrameSwapped = onFrameSwapped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#frameSwapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow) callconv(.c) void `
    ///
    pub fn onFrameSwapped(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow) callconv(.c) void) void {
        qtc.QOpenGLWindow_Connect_FrameSwapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initializeGL` instead
    ///
    pub const InitializeGL = initializeGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn initializeGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_InitializeGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeGL` instead
    ///
    pub const OnInitializeGL = onInitializeGL;

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
    pub fn onInitializeGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnInitializeGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeGL` instead
    ///
    pub const SuperInitializeGL = superInitializeGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn superInitializeGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperInitializeGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resizeGL` instead
    ///
    pub const ResizeGL = resizeGL;

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
    pub fn resizeGL(self: QOpenGLWindow, w: i32, h: i32) void {
        qtc.QOpenGLWindow_ResizeGL(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `onResizeGL` instead
    ///
    pub const OnResizeGL = onResizeGL;

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
    pub fn onResizeGL(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32, i32) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnResizeGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeGL` instead
    ///
    pub const SuperResizeGL = superResizeGL;

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
    pub fn superResizeGL(self: QOpenGLWindow, w: i32, h: i32) void {
        qtc.QOpenGLWindow_SuperResizeGL(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `paintGL` instead
    ///
    pub const PaintGL = paintGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn paintGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_PaintGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaintGL` instead
    ///
    pub const OnPaintGL = onPaintGL;

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
    pub fn onPaintGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintGL` instead
    ///
    pub const SuperPaintGL = superPaintGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn superPaintGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperPaintGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintUnderGL` instead
    ///
    pub const PaintUnderGL = paintUnderGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn paintUnderGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_PaintUnderGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaintUnderGL` instead
    ///
    pub const OnPaintUnderGL = onPaintUnderGL;

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
    pub fn onPaintUnderGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintUnderGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintUnderGL` instead
    ///
    pub const SuperPaintUnderGL = superPaintUnderGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn superPaintUnderGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperPaintUnderGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintOverGL` instead
    ///
    pub const PaintOverGL = paintOverGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn paintOverGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_PaintOverGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaintOverGL` instead
    ///
    pub const OnPaintOverGL = onPaintOverGL;

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
    pub fn onPaintOverGL(self: QOpenGLWindow, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintOverGL(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintOverGL` instead
    ///
    pub const SuperPaintOverGL = superPaintOverGL;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn superPaintOverGL(self: QOpenGLWindow) void {
        qtc.QOpenGLWindow_SuperPaintOverGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.QOpenGLWindow_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QPaintEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.QOpenGLWindow_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QOpenGLWindow_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QResizeEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.QOpenGLWindow_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QOpenGLWindow, _metric: i32) i32 {
        return qtc.QOpenGLWindow_Metric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QOpenGLWindow, _metric: i32) i32 {
        return qtc.QOpenGLWindow_SuperMetric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QPoint `
    ///
    pub fn redirected(self: QOpenGLWindow, param1: anytype) QPaintDevice {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLWindow_Redirected(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

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
    pub fn onRedirected(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QOpenGLWindow_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

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
    pub fn superRedirected(self: QOpenGLWindow, param1: anytype) QPaintDevice {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLWindow_SuperRedirected(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLWindow.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLWindow.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

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
    pub fn update(self: QOpenGLWindow, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPaintDeviceWindow_Update(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

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
    pub fn update2(self: QOpenGLWindow, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QPaintDeviceWindow_Update2(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `update3` instead
    ///
    pub const Update3 = update3;

    /// Inherited from QPaintDeviceWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn update3(self: QOpenGLWindow) void {
        qtc.QPaintDeviceWindow_Update3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSurfaceType` instead
    ///
    pub const SetSurfaceType = setSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _surfaceType: qsurface_enums.SurfaceType `
    ///
    pub fn setSurfaceType(self: QOpenGLWindow, _surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self.ptr), @bitCast(_surfaceType));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn isVisible(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

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
    pub fn visibility(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

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
    pub fn setVisibility(self: QOpenGLWindow, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self.ptr), @bitCast(v));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn create(self: QOpenGLWindow) void {
        qtc.QWindow_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn winId(self: QOpenGLWindow) usize {
        return qtc.QWindow_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn parent(self: QOpenGLWindow) QWindow {
        return .{ .ptr = qtc.QWindow_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setParent(self: QOpenGLWindow, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn isTopLevel(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn isModal(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modality` instead
    ///
    pub const Modality = modality;

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
    pub fn modality(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Modality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModality` instead
    ///
    pub const SetModality = setModality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn setModality(self: QOpenGLWindow, _modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _format: QSurfaceFormat `
    ///
    pub fn setFormat(self: QOpenGLWindow, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QSurfaceFormat;
        qtc.QWindow_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `requestedFormat` instead
    ///
    pub const RequestedFormat = requestedFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn requestedFormat(self: QOpenGLWindow) QSurfaceFormat {
        return .{ .ptr = qtc.QWindow_RequestedFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setFlags(self: QOpenGLWindow, _flags: i32) void {
        qtc.QWindow_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

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
    pub fn setFlag(self: QOpenGLWindow, param1: i32) void {
        qtc.QWindow_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

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
    pub fn title(self: QOpenGLWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLWindow.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

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
    pub fn setOpacity(self: QOpenGLWindow, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn opacity(self: QOpenGLWindow) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

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
    pub fn setMask(self: QOpenGLWindow, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QWindow_SetMask(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn mask(self: QOpenGLWindow) QRegion {
        return .{ .ptr = qtc.QWindow_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn isActive(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportContentOrientationChange` instead
    ///
    pub const ReportContentOrientationChange = reportContentOrientationChange;

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
    pub fn reportContentOrientationChange(self: QOpenGLWindow, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `contentOrientation` instead
    ///
    pub const ContentOrientation = contentOrientation;

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
    pub fn contentOrientation(self: QOpenGLWindow) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn devicePixelRatio(self: QOpenGLWindow) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

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
    pub fn windowState(self: QOpenGLWindow) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowStates` instead
    ///
    pub const WindowStates = windowStates;

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
    pub fn windowStates(self: QOpenGLWindow) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

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
    pub fn setWindowState(self: QOpenGLWindow, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `setWindowStates` instead
    ///
    pub const SetWindowStates = setWindowStates;

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
    pub fn setWindowStates(self: QOpenGLWindow, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self.ptr), @bitCast(states));
    }

    /// ### DEPRECATED: Use `setTransientParent` instead
    ///
    pub const SetTransientParent = setTransientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setTransientParent(self: QOpenGLWindow, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetTransientParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `transientParent` instead
    ///
    pub const TransientParent = transientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn transientParent(self: QOpenGLWindow) QWindow {
        return .{ .ptr = qtc.QWindow_TransientParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

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
    pub fn isAncestorOf(self: QOpenGLWindow, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `isExposed` instead
    ///
    pub const IsExposed = isExposed;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn isExposed(self: QOpenGLWindow) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn minimumWidth(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn minimumHeight(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn maximumWidth(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn maximumHeight(self: QOpenGLWindow) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn minimumSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn maximumSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn baseSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn sizeIncrement(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QWindow_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMinimumSize(self: QOpenGLWindow, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMaximumSize(self: QOpenGLWindow, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _size: QSize `
    ///
    pub fn setBaseSize(self: QOpenGLWindow, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSizeIncrement(self: QOpenGLWindow, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn geometry(self: QOpenGLWindow) QRect {
        return .{ .ptr = qtc.QWindow_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameMargins` instead
    ///
    pub const FrameMargins = frameMargins;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn frameMargins(self: QOpenGLWindow) QMargins {
        return .{ .ptr = qtc.QWindow_FrameMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn frameGeometry(self: QOpenGLWindow) QRect {
        return .{ .ptr = qtc.QWindow_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `framePosition` instead
    ///
    pub const FramePosition = framePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn framePosition(self: QOpenGLWindow) QPoint {
        return .{ .ptr = qtc.QWindow_FramePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFramePosition` instead
    ///
    pub const SetFramePosition = setFramePosition;

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
    pub fn setFramePosition(self: QOpenGLWindow, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QWindow_SetFramePosition(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn width(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn height(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn x(self: QOpenGLWindow) i32 {
        return qtc.QWindow_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn y(self: QOpenGLWindow) i32 {
        return qtc.QWindow_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn position(self: QOpenGLWindow) QPoint {
        return .{ .ptr = qtc.QWindow_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

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
    pub fn setPosition(self: QOpenGLWindow, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QWindow_SetPosition(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

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
    pub fn setPosition2(self: QOpenGLWindow, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

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
    pub fn resize(self: QOpenGLWindow, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSize;
        qtc.QWindow_Resize(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

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
    pub fn resize2(self: QOpenGLWindow, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFilePath` instead
    ///
    pub const SetFilePath = setFilePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _filePath: []const u8 `
    ///
    pub fn setFilePath(self: QOpenGLWindow, _filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = _filePath.len,
            .data = _filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

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
    pub fn filePath(self: QOpenGLWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLWindow.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QOpenGLWindow, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWindow_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn icon(self: QOpenGLWindow) QIcon {
        return .{ .ptr = qtc.QWindow_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn destroy(self: QOpenGLWindow) void {
        qtc.QWindow_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardGrabEnabled` instead
    ///
    pub const SetKeyboardGrabEnabled = setKeyboardGrabEnabled;

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
    pub fn setKeyboardGrabEnabled(self: QOpenGLWindow, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `setMouseGrabEnabled` instead
    ///
    pub const SetMouseGrabEnabled = setMouseGrabEnabled;

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
    pub fn setMouseGrabEnabled(self: QOpenGLWindow, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn screen(self: QOpenGLWindow) QScreen {
        return .{ .ptr = qtc.QWindow_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QOpenGLWindow, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

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
    pub fn mapToGlobal(self: QOpenGLWindow, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapToGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

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
    pub fn mapFromGlobal(self: QOpenGLWindow, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

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
    pub fn mapToGlobal2(self: QOpenGLWindow, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

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
    pub fn mapFromGlobal2(self: QOpenGLWindow, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn cursor(self: QOpenGLWindow) QCursor {
        return .{ .ptr = qtc.QWindow_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QOpenGLWindow, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWindow_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn unsetCursor(self: QOpenGLWindow) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromWinId` instead
    ///
    pub const FromWinId = fromWinId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: usize `
    ///
    pub fn fromWinId(id: usize) QWindow {
        return .{ .ptr = qtc.QWindow_FromWinId(@bitCast(id)) };
    }

    /// ### DEPRECATED: Use `requestActivate` instead
    ///
    pub const RequestActivate = requestActivate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn requestActivate(self: QOpenGLWindow) void {
        qtc.QWindow_RequestActivate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

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
    pub fn setVisible(self: QOpenGLWindow, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn show(self: QOpenGLWindow) void {
        qtc.QWindow_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn hide(self: QOpenGLWindow) void {
        qtc.QWindow_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn showMinimized(self: QOpenGLWindow) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn showMaximized(self: QOpenGLWindow) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn showFullScreen(self: QOpenGLWindow) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn showNormal(self: QOpenGLWindow) void {
        qtc.QWindow_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn close(self: QOpenGLWindow) bool {
        return qtc.QWindow_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn raise(self: QOpenGLWindow) void {
        qtc.QWindow_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn lower(self: QOpenGLWindow) void {
        qtc.QWindow_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startSystemResize` instead
    ///
    pub const StartSystemResize = startSystemResize;

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
    pub fn startSystemResize(self: QOpenGLWindow, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self.ptr), @bitCast(edges));
    }

    /// ### DEPRECATED: Use `startSystemMove` instead
    ///
    pub const StartSystemMove = startSystemMove;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn startSystemMove(self: QOpenGLWindow) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QOpenGLWindow, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

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
    pub fn setX(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

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
    pub fn setY(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

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
    pub fn setWidth(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

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
    pub fn setHeight(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

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
    pub fn setGeometry(self: QOpenGLWindow, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

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
    pub fn setGeometry2(self: QOpenGLWindow, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QWindow_SetGeometry2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

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
    pub fn setMinimumWidth(self: QOpenGLWindow, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

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
    pub fn setMinimumHeight(self: QOpenGLWindow, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

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
    pub fn setMaximumWidth(self: QOpenGLWindow, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

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
    pub fn setMaximumHeight(self: QOpenGLWindow, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `alert` instead
    ///
    pub const Alert = alert;

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
    pub fn alert(self: QOpenGLWindow, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn requestUpdate(self: QOpenGLWindow) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenChanged` instead
    ///
    pub const ScreenChanged = screenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn screenChanged(self: QOpenGLWindow, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_ScreenChanged(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenChanged` instead
    ///
    pub const OnScreenChanged = onScreenChanged;

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
    pub fn onScreenChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QScreen) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modalityChanged` instead
    ///
    pub const ModalityChanged = modalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn modalityChanged(self: QOpenGLWindow, _modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `onModalityChanged` instead
    ///
    pub const OnModalityChanged = onModalityChanged;

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
    pub fn onModalityChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowStateChanged` instead
    ///
    pub const WindowStateChanged = windowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _windowState: qnamespace_enums.WindowState `
    ///
    pub fn windowStateChanged(self: QOpenGLWindow, _windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self.ptr), @bitCast(_windowState));
    }

    /// ### DEPRECATED: Use `onWindowStateChanged` instead
    ///
    pub const OnWindowStateChanged = onWindowStateChanged;

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
    pub fn onWindowStateChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QOpenGLWindow, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

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
    pub fn onWindowTitleChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

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
    pub fn xChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

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
    pub fn onXChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

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
    pub fn yChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

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
    pub fn onYChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

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
    pub fn widthChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

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
    pub fn onWidthChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

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
    pub fn heightChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

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
    pub fn onHeightChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumWidthChanged` instead
    ///
    pub const MinimumWidthChanged = minimumWidthChanged;

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
    pub fn minimumWidthChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumWidthChanged` instead
    ///
    pub const OnMinimumWidthChanged = onMinimumWidthChanged;

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
    pub fn onMinimumWidthChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightChanged` instead
    ///
    pub const MinimumHeightChanged = minimumHeightChanged;

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
    pub fn minimumHeightChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumHeightChanged` instead
    ///
    pub const OnMinimumHeightChanged = onMinimumHeightChanged;

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
    pub fn onMinimumHeightChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumWidthChanged` instead
    ///
    pub const MaximumWidthChanged = maximumWidthChanged;

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
    pub fn maximumWidthChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumWidthChanged` instead
    ///
    pub const OnMaximumWidthChanged = onMaximumWidthChanged;

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
    pub fn onMaximumWidthChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumHeightChanged` instead
    ///
    pub const MaximumHeightChanged = maximumHeightChanged;

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
    pub fn maximumHeightChanged(self: QOpenGLWindow, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumHeightChanged` instead
    ///
    pub const OnMaximumHeightChanged = onMaximumHeightChanged;

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
    pub fn onMaximumHeightChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

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
    pub fn visibleChanged(self: QOpenGLWindow, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self.ptr), arg);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

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
    pub fn onVisibleChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibilityChanged` instead
    ///
    pub const VisibilityChanged = visibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _visibility: qwindow_enums.Visibility `
    ///
    pub fn visibilityChanged(self: QOpenGLWindow, _visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `onVisibilityChanged` instead
    ///
    pub const OnVisibilityChanged = onVisibilityChanged;

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
    pub fn onVisibilityChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn activeChanged(self: QOpenGLWindow) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

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
    pub fn onActiveChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentOrientationChanged` instead
    ///
    pub const ContentOrientationChanged = contentOrientationChanged;

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
    pub fn contentOrientationChanged(self: QOpenGLWindow, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `onContentOrientationChanged` instead
    ///
    pub const OnContentOrientationChanged = onContentOrientationChanged;

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
    pub fn onContentOrientationChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObjectChanged` instead
    ///
    pub const FocusObjectChanged = focusObjectChanged;

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
    pub fn focusObjectChanged(self: QOpenGLWindow, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QWindow_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `onFocusObjectChanged` instead
    ///
    pub const OnFocusObjectChanged = onFocusObjectChanged;

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
    pub fn onFocusObjectChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QObject) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn opacityChanged(self: QOpenGLWindow, _opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

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
    pub fn onOpacityChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transientParentChanged` instead
    ///
    pub const TransientParentChanged = transientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    /// ` _transientParent: QWindow `
    ///
    pub fn transientParentChanged(self: QOpenGLWindow, _transientParent: anytype) void {
        comptime _ = @TypeOf(_transientParent)._is_QWindow;
        qtc.QWindow_TransientParentChanged(@ptrCast(self.ptr), @ptrCast(_transientParent.ptr));
    }

    /// ### DEPRECATED: Use `onTransientParentChanged` instead
    ///
    pub const OnTransientParentChanged = onTransientParentChanged;

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
    pub fn onTransientParentChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent1` instead
    ///
    pub const Parent1 = parent1;

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
    pub fn parent1(self: QOpenGLWindow, mode: i32) QWindow {
        return .{ .ptr = qtc.QWindow_Parent1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

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
    pub fn setFlag2(self: QOpenGLWindow, param1: i32, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `isAncestorOf2` instead
    ///
    pub const IsAncestorOf2 = isAncestorOf2;

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
    pub fn isAncestorOf2(self: QOpenGLWindow, child: anytype, mode: i32) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self.ptr), @ptrCast(child.ptr), @bitCast(mode));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QOpenGLWindow, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLWindow.objectName: Memory allocation failed");
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QOpenGLWindow, name: []const u8) void {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn isWidgetType(self: QOpenGLWindow) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn isWindowType(self: QOpenGLWindow) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn isQuickItemType(self: QOpenGLWindow) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn signalsBlocked(self: QOpenGLWindow) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QOpenGLWindow, b: bool) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn thread(self: QOpenGLWindow) QThread {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QOpenGLWindow, _thread: anytype) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QOpenGLWindow, interval: i32) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QOpenGLWindow, time: i64) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QOpenGLWindow, id: i32) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QOpenGLWindow, id: i32) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QOpenGLWindow, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QOpenGLWindow.children: Memory allocation failed");
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QOpenGLWindow, filterObj: anytype) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QOpenGLWindow, obj: anytype) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QOpenGLWindow, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn disconnect3(self: QOpenGLWindow) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QOpenGLWindow, receiver: anytype) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn dumpObjectTree(self: QOpenGLWindow) void {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn dumpObjectInfo(self: QOpenGLWindow) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QOpenGLWindow, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QOpenGLWindow, name: [:0]const u8) QVariant {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QOpenGLWindow, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QOpenGLWindow.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QOpenGLWindow.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn bindingStorage(self: QOpenGLWindow) QBindingStorage {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn bindingStorage2(self: QOpenGLWindow) QBindingStorage {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn destroyed(self: QOpenGLWindow) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QOpenGLWindow, classname: [:0]const u8) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn deleteLater(self: QOpenGLWindow) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QOpenGLWindow, interval: i32, timerType: i32) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QOpenGLWindow, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QOpenGLWindow, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QOpenGLWindow, signal: [:0]const u8) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QOpenGLWindow, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QOpenGLWindow, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QOpenGLWindow, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QOpenGLWindow, param1: anytype) void {
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceClass` instead
    ///
    pub const SurfaceClass = surfaceClass;

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
    pub fn surfaceClass(self: QOpenGLWindow) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsOpenGL` instead
    ///
    pub const SupportsOpenGL = supportsOpenGL;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn supportsOpenGL(self: QOpenGLWindow) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn paintingActive(self: QOpenGLWindow) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn paintEngine(self: QOpenGLWindow) QPaintEngine {
        return .{ .ptr = qtc.QPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn widthMM(self: QOpenGLWindow) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn heightMM(self: QOpenGLWindow) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn logicalDpiX(self: QOpenGLWindow) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn logicalDpiY(self: QOpenGLWindow) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn physicalDpiX(self: QOpenGLWindow) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn physicalDpiY(self: QOpenGLWindow) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn devicePixelRatioF(self: QOpenGLWindow) f64 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn colorCount(self: QOpenGLWindow) i32 {
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn depth(self: QOpenGLWindow) i32 {
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
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `exposeEvent` instead
    ///
    pub const ExposeEvent = exposeEvent;

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
    pub fn exposeEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QExposeEvent;
        qtc.QOpenGLWindow_ExposeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superExposeEvent` instead
    ///
    pub const SuperExposeEvent = superExposeEvent;

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
    pub fn superExposeEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QExposeEvent;
        qtc.QOpenGLWindow_SuperExposeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onExposeEvent` instead
    ///
    pub const OnExposeEvent = onExposeEvent;

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
    pub fn onExposeEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QExposeEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnExposeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QOpenGLWindow, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLWindow_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QOpenGLWindow, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLWindow_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceType` instead
    ///
    pub const SurfaceType = surfaceType;

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
    pub fn surfaceType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSurfaceType` instead
    ///
    pub const SuperSurfaceType = superSurfaceType;

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
    pub fn superSurfaceType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SuperSurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSurfaceType` instead
    ///
    pub const OnSurfaceType = onSurfaceType;

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
    pub fn onSurfaceType(self: QOpenGLWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnSurfaceType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

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
    pub fn format(self: QOpenGLWindow) QSurfaceFormat {
        return .{ .ptr = qtc.QOpenGLWindow_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

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
    pub fn superFormat(self: QOpenGLWindow) QSurfaceFormat {
        return .{ .ptr = qtc.QOpenGLWindow_SuperFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: QOpenGLWindow, callback: *const fn () callconv(.c) QSurfaceFormat) void {
        qtc.QOpenGLWindow_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

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
    pub fn size(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QOpenGLWindow_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

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
    pub fn superSize(self: QOpenGLWindow) QSize {
        return .{ .ptr = qtc.QOpenGLWindow_SuperSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSize(self: QOpenGLWindow, callback: *const fn () callconv(.c) QSize) void {
        qtc.QOpenGLWindow_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accessibleRoot` instead
    ///
    pub const AccessibleRoot = accessibleRoot;

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
    pub fn accessibleRoot(self: QOpenGLWindow) QAccessibleInterface {
        return .{ .ptr = qtc.QOpenGLWindow_AccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleRoot` instead
    ///
    pub const SuperAccessibleRoot = superAccessibleRoot;

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
    pub fn superAccessibleRoot(self: QOpenGLWindow) QAccessibleInterface {
        return .{ .ptr = qtc.QOpenGLWindow_SuperAccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleRoot` instead
    ///
    pub const OnAccessibleRoot = onAccessibleRoot;

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
    pub fn onAccessibleRoot(self: QOpenGLWindow, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QOpenGLWindow_OnAccessibleRoot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObject` instead
    ///
    pub const FocusObject = focusObject;

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
    pub fn focusObject(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_FocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFocusObject` instead
    ///
    pub const SuperFocusObject = superFocusObject;

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
    pub fn superFocusObject(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_SuperFocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFocusObject` instead
    ///
    pub const OnFocusObject = onFocusObject;

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
    pub fn onFocusObject(self: QOpenGLWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLWindow_OnFocusObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

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
    pub fn moveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.QOpenGLWindow_MoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

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
    pub fn superMoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.QOpenGLWindow_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

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
    pub fn onMoveEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMoveEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    pub fn focusInEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    pub fn superFocusInEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QFocusEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    pub fn focusOutEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    pub fn superFocusOutEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QOpenGLWindow_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QFocusEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

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
    pub fn showEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QOpenGLWindow_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

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
    pub fn superShowEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QOpenGLWindow_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

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
    pub fn onShowEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QShowEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

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
    pub fn hideEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QOpenGLWindow_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

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
    pub fn superHideEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QOpenGLWindow_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

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
    pub fn onHideEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QHideEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

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
    pub fn closeEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QOpenGLWindow_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

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
    pub fn superCloseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QOpenGLWindow_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

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
    pub fn onCloseEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QCloseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    pub fn keyPressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    pub fn superKeyPressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QKeyEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

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
    pub fn keyReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

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
    pub fn superKeyReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QOpenGLWindow_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QKeyEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    pub fn mousePressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    pub fn superMousePressEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    pub fn mouseReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    pub fn superMouseReleaseEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

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
    pub fn mouseDoubleClickEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    pub fn superMouseDoubleClickEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

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
    pub fn mouseMoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    pub fn superMouseMoveEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QOpenGLWindow_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMouseEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    pub fn wheelEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QOpenGLWindow_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    pub fn superWheelEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QOpenGLWindow_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QWheelEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

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
    pub fn touchEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTouchEvent;
        qtc.QOpenGLWindow_TouchEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTouchEvent` instead
    ///
    pub const SuperTouchEvent = superTouchEvent;

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
    pub fn superTouchEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTouchEvent;
        qtc.QOpenGLWindow_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTouchEvent` instead
    ///
    pub const OnTouchEvent = onTouchEvent;

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
    pub fn onTouchEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QTouchEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

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
    pub fn tabletEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.QOpenGLWindow_TabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

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
    pub fn superTabletEvent(self: QOpenGLWindow, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.QOpenGLWindow_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

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
    pub fn onTabletEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QTabletEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

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
    pub fn nativeEvent(self: QOpenGLWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QOpenGLWindow_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

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
    pub fn superNativeEvent(self: QOpenGLWindow, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QOpenGLWindow_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

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
    pub fn onNativeEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QOpenGLWindow, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLWindow_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QOpenGLWindow, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLWindow_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLWindow_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLWindow_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLWindow_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLWindow_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLWindow_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QOpenGLWindow, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLWindow_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QEvent) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QOpenGLWindow, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLWindow_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

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
    pub fn devType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

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
    pub fn superDevType(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QOpenGLWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

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
    pub fn initPainter(self: QOpenGLWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLWindow_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

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
    pub fn superInitPainter(self: QOpenGLWindow, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLWindow_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

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
    pub fn onInitPainter(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QPainter) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

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
    pub fn sharedPainter(self: QOpenGLWindow) QPainter {
        return .{ .ptr = qtc.QOpenGLWindow_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

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
    pub fn superSharedPainter(self: QOpenGLWindow) QPainter {
        return .{ .ptr = qtc.QOpenGLWindow_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

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
    pub fn onSharedPainter(self: QOpenGLWindow, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QOpenGLWindow_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

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
    pub fn resolveInterface(self: QOpenGLWindow, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLWindow_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `superResolveInterface` instead
    ///
    pub const SuperResolveInterface = superResolveInterface;

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
    pub fn superResolveInterface(self: QOpenGLWindow, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLWindow_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `onResolveInterface` instead
    ///
    pub const OnResolveInterface = onResolveInterface;

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
    pub fn onResolveInterface(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLWindow_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn sender(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn superSender(self: QOpenGLWindow) QObject {
        return .{ .ptr = qtc.QOpenGLWindow_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QOpenGLWindow, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLWindow_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn senderSignalIndex(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    pub fn superSenderSignalIndex(self: QOpenGLWindow) i32 {
        return qtc.QOpenGLWindow_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QOpenGLWindow, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QOpenGLWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLWindow_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QOpenGLWindow, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLWindow_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QOpenGLWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLWindow_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QOpenGLWindow, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLWindow_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLWindow_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QOpenGLWindow, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLWindow_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QOpenGLWindow, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLWindow_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QOpenGLWindow`
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, i32, i32) callconv(.c) f64) void {
        qtc.QOpenGLWindow_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLWindow `
    ///
    /// ` callback: *const fn (self: QOpenGLWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QOpenGLWindow, callback: *const fn (QOpenGLWindow, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglwindow.html#dtor.QOpenGLWindow)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLWindow `
    ///
    pub fn delete(self: QOpenGLWindow) void {
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
