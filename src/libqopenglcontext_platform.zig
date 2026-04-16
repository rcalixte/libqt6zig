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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` display: ?*anyopaque `
    ///
    pub fn FromNative(context: ?*anyopaque, display: ?*anyopaque) QOpenGLContext {
        return .{ .ptr = qtc.QNativeInterface__QEGLContext_FromNative(@ptrCast(context), @ptrCast(display)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn NativeContext(self: QNativeInterface__QEGLContext) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_NativeContext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn Config(self: QNativeInterface__QEGLContext) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_Config(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn Display(self: QNativeInterface__QEGLContext) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_Display(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QEGLContext `
    ///
    pub fn InvalidateContext(self: QNativeInterface__QEGLContext) void {
        qtc.QNativeInterface__QEGLContext_InvalidateContext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` display: ?*anyopaque `
    ///
    /// ` shareContext: QOpenGLContext `
    ///
    pub fn FromNative3(context: ?*anyopaque, display: ?*anyopaque, shareContext: anytype) QOpenGLContext {
        comptime _ = @TypeOf(shareContext)._is_QOpenGLContext;
        return .{ .ptr = qtc.QNativeInterface__QEGLContext_FromNative3(@ptrCast(context), @ptrCast(display), @ptrCast(shareContext.ptr)) };
    }
};
