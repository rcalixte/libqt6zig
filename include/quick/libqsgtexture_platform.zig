const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QQuickWindow = @import("libqt6").QQuickWindow;
const QSGTexture = @import("libqt6").QSGTexture;
const QSize = @import("libqt6").QSize;
const qquickwindow_enums = @import("libqquickwindow.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html)
pub const QNativeInterface__QSGOpenGLTexture = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeInterface__QSGOpenGLTexture,

    pub const _is_QNativeInterface__QSGOpenGLTexture = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNativeInterface::QSGOpenGLTexture object in C++ memory
    ///
    pub fn new() QNativeInterface__QSGOpenGLTexture {
        return .{ .ptr = qtc.QNativeInterface__QSGOpenGLTexture_new() };
    }

    /// ### DEPRECATED: Use `nativeTexture` instead
    ///
    pub const NativeTexture = nativeTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#nativeTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QSGOpenGLTexture `
    ///
    pub fn nativeTexture(self: QNativeInterface__QSGOpenGLTexture) u32 {
        return qtc.QNativeInterface__QSGOpenGLTexture_NativeTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNativeTexture` instead
    ///
    pub const OnNativeTexture = onNativeTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#nativeTexture)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNativeInterface__QSGOpenGLTexture `
    ///
    /// ` callback: *const fn () callconv(.c) u32 `
    ///
    pub fn onNativeTexture(self: QNativeInterface__QSGOpenGLTexture, callback: *const fn () callconv(.c) u32) void {
        qtc.QNativeInterface__QSGOpenGLTexture_OnNativeTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNativeTexture` instead
    ///
    pub const SuperNativeTexture = superNativeTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#nativeTexture)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeInterface__QSGOpenGLTexture `
    ///
    pub fn superNativeTexture(self: QNativeInterface__QSGOpenGLTexture) u32 {
        return qtc.QNativeInterface__QSGOpenGLTexture_SuperNativeTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromNative` instead
    ///
    pub const FromNative = fromNative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` window: QQuickWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn fromNative(textureId: u32, window: anytype, size: anytype) QSGTexture {
        comptime _ = @TypeOf(window)._is_QQuickWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QNativeInterface__QSGOpenGLTexture_FromNative(@bitCast(textureId), @ptrCast(window.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `fromNativeExternalOES` instead
    ///
    pub const FromNativeExternalOES = fromNativeExternalOES;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNativeExternalOES)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` window: QQuickWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn fromNativeExternalOES(textureId: u32, window: anytype, size: anytype) QSGTexture {
        comptime _ = @TypeOf(window)._is_QQuickWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES(@bitCast(textureId), @ptrCast(window.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `fromNative4` instead
    ///
    pub const FromNative4 = fromNative4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNative)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` window: QQuickWindow `
    ///
    /// ` size: QSize `
    ///
    /// ` options: flag of qquickwindow_enums.CreateTextureOption `
    ///
    pub fn fromNative4(textureId: u32, window: anytype, size: anytype, options: i32) QSGTexture {
        comptime _ = @TypeOf(window)._is_QQuickWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QNativeInterface__QSGOpenGLTexture_FromNative4(@bitCast(textureId), @ptrCast(window.ptr), @ptrCast(size.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `fromNativeExternalOES4` instead
    ///
    pub const FromNativeExternalOES4 = fromNativeExternalOES4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNativeExternalOES)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` window: QQuickWindow `
    ///
    /// ` size: QSize `
    ///
    /// ` options: flag of qquickwindow_enums.CreateTextureOption `
    ///
    pub fn fromNativeExternalOES4(textureId: u32, window: anytype, size: anytype, options: i32) QSGTexture {
        comptime _ = @TypeOf(window)._is_QQuickWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES4(@bitCast(textureId), @ptrCast(window.ptr), @ptrCast(size.ptr), @bitCast(options)) };
    }
};
