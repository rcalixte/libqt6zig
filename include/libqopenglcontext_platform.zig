const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html)
pub const QNativeInterface__QEGLContext = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeInterface__QEGLContext,

    pub const _is_QNativeInterface__QEGLContext = {};

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
        return qtc.QNativeInterface__QEGLContext_NativeContext(@ptrCast(self.ptr));
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
        return qtc.QNativeInterface__QEGLContext_Config(@ptrCast(self.ptr));
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
        return qtc.QNativeInterface__QEGLContext_Display(@ptrCast(self.ptr));
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
        comptime _ = @TypeOf(shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QNativeInterface__QEGLContext_FromNative3(@ptrCast(context), @ptrCast(_display), @ptrCast(shareContext.ptr)) };
    }
};
