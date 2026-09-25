const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const builtin = @import("builtin");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html)
pub const QNativeInterface__QEGLContext = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeInterface__QEGLContext,

    pub const _is_QNativeInterface__QEGLContext = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNativeInterface::QEGLContext object in C++ memory
    ///
    pub fn new() QNativeInterface__QEGLContext {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return .{ .ptr = qtc.QNativeInterface__QEGLContext_new() };
    }

    /// ### DEPRECATED: Use `fromNative` instead
    ///
    pub const FromNative = fromNative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` _display: ?*anyopaque `
    ///
    pub fn fromNative(context: ?*anyopaque, _display: ?*anyopaque) QOpenGLContext {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return .{ .ptr = qtc.QNativeInterface__QEGLContext_FromNative(@ptrCast(context), @ptrCast(_display)) };
    }

    /// ### DEPRECATED: Use `nativeContext` instead
    ///
    pub const NativeContext = nativeContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn nativeContext(self: QNativeInterface__QEGLContext) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QEGLContext_NativeContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNativeContext` instead
    ///
    pub const OnNativeContext = onNativeContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onNativeContext(self: QNativeInterface__QEGLContext, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QEGLContext_OnNativeContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNativeContext` instead
    ///
    pub const SuperNativeContext = superNativeContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn superNativeContext(self: QNativeInterface__QEGLContext) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QEGLContext_SuperNativeContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn config(self: QNativeInterface__QEGLContext) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QEGLContext_Config(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfig` instead
    ///
    pub const OnConfig = onConfig;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onConfig(self: QNativeInterface__QEGLContext, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QEGLContext_OnConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConfig` instead
    ///
    pub const SuperConfig = superConfig;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn superConfig(self: QNativeInterface__QEGLContext) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QEGLContext_SuperConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `display` instead
    ///
    pub const Display = display;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn display(self: QNativeInterface__QEGLContext) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QEGLContext_Display(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisplay` instead
    ///
    pub const OnDisplay = onDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    /// ` callback: *const fn () callconv(.c) ?*anyopaque `
    ///
    pub fn onDisplay(self: QNativeInterface__QEGLContext, callback: *const fn () callconv(.c) ?*anyopaque) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QEGLContext_OnDisplay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisplay` instead
    ///
    pub const SuperDisplay = superDisplay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn superDisplay(self: QNativeInterface__QEGLContext) ?*anyopaque {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        return qtc.QNativeInterface__QEGLContext_SuperDisplay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalidateContext` instead
    ///
    pub const InvalidateContext = invalidateContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn invalidateContext(self: QNativeInterface__QEGLContext) void {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        qtc.QNativeInterface__QEGLContext_InvalidateContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromNative3` instead
    ///
    pub const FromNative3 = fromNative3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` _display: ?*anyopaque `
    ///
    /// ` shareContext: QOpenGLContext `
    ///
    pub fn fromNative3(context: ?*anyopaque, _display: ?*anyopaque, shareContext: anytype) QOpenGLContext {
        if (builtin.target.os.tag != .linux and builtin.target.os.tag != .freebsd)
            @compileError("Unsupported operating system");
        comptime _ = @TypeOf(shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QNativeInterface__QEGLContext_FromNative3(@ptrCast(context), @ptrCast(_display), @ptrCast(shareContext.ptr)) };
    }
};
