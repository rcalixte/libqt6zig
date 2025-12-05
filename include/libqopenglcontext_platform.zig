const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html)
pub const qnativeinterface__qeglcontext = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` display: ?*anyopaque `
    ///
    pub fn FromNative(context: ?*anyopaque, display: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QNativeInterface__QEGLContext_FromNative(@ptrCast(context), @ptrCast(display));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeInterface__QEGLContext `
    ///
    pub fn NativeContext(self: ?*anyopaque) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_NativeContext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeInterface__QEGLContext `
    ///
    pub fn Config(self: ?*anyopaque) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_Config(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeInterface__QEGLContext `
    ///
    pub fn Display(self: ?*anyopaque) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_Display(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNativeInterface__QEGLContext `
    ///
    pub fn InvalidateContext(self: ?*anyopaque) void {
        qtc.QNativeInterface__QEGLContext_InvalidateContext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: ?*anyopaque `
    ///
    /// ` display: ?*anyopaque `
    ///
    /// ` shareContext: QtC.QOpenGLContext `
    ///
    pub fn FromNative3(context: ?*anyopaque, display: ?*anyopaque, shareContext: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QNativeInterface__QEGLContext_FromNative3(@ptrCast(context), @ptrCast(display), @ptrCast(shareContext));
    }
};
