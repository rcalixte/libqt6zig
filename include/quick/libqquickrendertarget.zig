const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPaintDevice = @import("libqt6").QPaintDevice;
const QSize = @import("libqt6").QSize;
const qquickrendertarget_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html)
pub const QQuickRenderTarget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickRenderTarget,

    pub const _is_QQuickRenderTarget = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickRenderTarget object in C++ memory
    ///
    pub fn new() QQuickRenderTarget {
        return .{ .ptr = qtc.QQuickRenderTarget_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickRenderTarget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickRenderTarget `
    ///
    pub fn new2(other: anytype) QQuickRenderTarget {
        comptime _ = @TypeOf(other)._is_QQuickRenderTarget;
        return .{ .ptr = qtc.QQuickRenderTarget_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRenderTarget `
    ///
    /// ` other: QQuickRenderTarget `
    ///
    pub fn operatorAssign(self: QQuickRenderTarget, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QQuickRenderTarget;
        qtc.QQuickRenderTarget_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRenderTarget `
    ///
    pub fn isNull(self: QQuickRenderTarget) bool {
        return qtc.QQuickRenderTarget_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRenderTarget `
    ///
    pub fn devicePixelRatio(self: QQuickRenderTarget) f64 {
        return qtc.QQuickRenderTarget_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRenderTarget `
    ///
    /// ` ratio: f64 `
    ///
    pub fn setDevicePixelRatio(self: QQuickRenderTarget, ratio: f64) void {
        qtc.QQuickRenderTarget_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `mirrorVertically` instead
    ///
    pub const MirrorVertically = mirrorVertically;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#mirrorVertically)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRenderTarget `
    ///
    pub fn mirrorVertically(self: QQuickRenderTarget) bool {
        return qtc.QQuickRenderTarget_MirrorVertically(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMirrorVertically` instead
    ///
    pub const SetMirrorVertically = setMirrorVertically;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#setMirrorVertically)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRenderTarget `
    ///
    /// ` enable: bool `
    ///
    pub fn setMirrorVertically(self: QQuickRenderTarget, enable: bool) void {
        qtc.QQuickRenderTarget_SetMirrorVertically(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fromOpenGLTexture` instead
    ///
    pub const FromOpenGLTexture = fromOpenGLTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    pub fn fromOpenGLTexture(textureId: u32, pixelSize: anytype) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLTexture(@bitCast(textureId), @ptrCast(pixelSize.ptr)) };
    }

    /// ### DEPRECATED: Use `fromOpenGLTexture2` instead
    ///
    pub const FromOpenGLTexture2 = fromOpenGLTexture2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    pub fn fromOpenGLTexture2(textureId: u32, format: u32, pixelSize: anytype) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLTexture2(@bitCast(textureId), @bitCast(format), @ptrCast(pixelSize.ptr)) };
    }

    /// ### DEPRECATED: Use `fromOpenGLTexture3` instead
    ///
    pub const FromOpenGLTexture3 = fromOpenGLTexture3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    /// ` sampleCount: i32 `
    ///
    /// ` arraySize: i32 `
    ///
    /// ` flags: flag of qquickrendertarget_enums.Flag `
    ///
    pub fn fromOpenGLTexture3(textureId: u32, format: u32, pixelSize: anytype, sampleCount: i32, arraySize: i32, flags: i32) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLTexture3(@bitCast(textureId), @bitCast(format), @ptrCast(pixelSize.ptr), @bitCast(sampleCount), @bitCast(arraySize), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `fromOpenGLRenderBuffer` instead
    ///
    pub const FromOpenGLRenderBuffer = fromOpenGLRenderBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLRenderBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` renderbufferId: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    pub fn fromOpenGLRenderBuffer(renderbufferId: u32, pixelSize: anytype) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLRenderBuffer(@bitCast(renderbufferId), @ptrCast(pixelSize.ptr)) };
    }

    /// ### DEPRECATED: Use `fromPaintDevice` instead
    ///
    pub const FromPaintDevice = fromPaintDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromPaintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QPaintDevice `
    ///
    pub fn fromPaintDevice(device: anytype) QQuickRenderTarget {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        const device_ = if (@hasDecl(@TypeOf(device), "asQPaintDevice")) device.asQPaintDevice() else device;
        return .{ .ptr = qtc.QQuickRenderTarget_FromPaintDevice(@ptrCast(device_.ptr)) };
    }

    /// ### DEPRECATED: Use `fromOpenGLTexture32` instead
    ///
    pub const FromOpenGLTexture32 = fromOpenGLTexture32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    /// ` sampleCount: i32 `
    ///
    pub fn fromOpenGLTexture32(textureId: u32, pixelSize: anytype, sampleCount: i32) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLTexture32(@bitCast(textureId), @ptrCast(pixelSize.ptr), @bitCast(sampleCount)) };
    }

    /// ### DEPRECATED: Use `fromOpenGLTexture4` instead
    ///
    pub const FromOpenGLTexture4 = fromOpenGLTexture4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` textureId: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    /// ` sampleCount: i32 `
    ///
    pub fn fromOpenGLTexture4(textureId: u32, format: u32, pixelSize: anytype, sampleCount: i32) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLTexture4(@bitCast(textureId), @bitCast(format), @ptrCast(pixelSize.ptr), @bitCast(sampleCount)) };
    }

    /// ### DEPRECATED: Use `fromOpenGLRenderBuffer3` instead
    ///
    pub const FromOpenGLRenderBuffer3 = fromOpenGLRenderBuffer3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLRenderBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` renderbufferId: u32 `
    ///
    /// ` pixelSize: QSize `
    ///
    /// ` sampleCount: i32 `
    ///
    pub fn fromOpenGLRenderBuffer3(renderbufferId: u32, pixelSize: anytype, sampleCount: i32) QQuickRenderTarget {
        comptime _ = @TypeOf(pixelSize)._is_QSize;
        return .{ .ptr = qtc.QQuickRenderTarget_FromOpenGLRenderBuffer3(@bitCast(renderbufferId), @ptrCast(pixelSize.ptr), @bitCast(sampleCount)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#dtor.QQuickRenderTarget)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickRenderTarget `
    ///
    pub fn delete(self: QQuickRenderTarget) void {
        qtc.QQuickRenderTarget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#public-types)
pub const enums = struct {
    pub const Flag = enum {
        pub const MultisampleResolve: i32 = 1;
    };
};
