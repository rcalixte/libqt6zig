const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html
pub const qnativeinterface__qeglcontext = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ``` context: ?*anyopaque, display: ?*anyopaque ```
    pub fn FromNative(context: ?*anyopaque, display: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QNativeInterface__QEGLContext_FromNative(context, display);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
    ///
    /// ``` self: QtC.QNativeInterface__QEGLContext ```
    pub fn NativeContext(self: ?*anyopaque) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_NativeContext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
    ///
    /// ``` self: QtC.QNativeInterface__QEGLContext ```
    pub fn Config(self: ?*anyopaque) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_Config(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
    ///
    /// ``` self: QtC.QNativeInterface__QEGLContext ```
    pub fn Display(self: ?*anyopaque) ?*anyopaque {
        return qtc.QNativeInterface__QEGLContext_Display(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
    ///
    /// ``` self: QtC.QNativeInterface__QEGLContext ```
    pub fn InvalidateContext(self: ?*anyopaque) void {
        qtc.QNativeInterface__QEGLContext_InvalidateContext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
    ///
    /// ``` context: ?*anyopaque, display: ?*anyopaque, shareContext: QtC.QOpenGLContext ```
    pub fn FromNative3(context: ?*anyopaque, display: ?*anyopaque, shareContext: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QNativeInterface__QEGLContext_FromNative3(context, display, @ptrCast(shareContext));
    }
};
