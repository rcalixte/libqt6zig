const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopengltextureblitter_enums = enums;

/// https://doc.qt.io/qt-6/qopengltextureblitter.html
pub const qopengltextureblitter = struct {
    /// New constructs a new QOpenGLTextureBlitter object.
    ///
    ///
    pub fn New() QtC.QOpenGLTextureBlitter {
        return qtc.QOpenGLTextureBlitter_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#create)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn Create(self: ?*anyopaque) bool {
        return qtc.QOpenGLTextureBlitter_Create(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#isCreated)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn IsCreated(self: ?*anyopaque) bool {
        return qtc.QOpenGLTextureBlitter_IsCreated(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#destroy)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QOpenGLTextureBlitter_Destroy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsExternalOESTarget)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn SupportsExternalOESTarget(self: ?*anyopaque) bool {
        return qtc.QOpenGLTextureBlitter_SupportsExternalOESTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsRectangleTarget)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn SupportsRectangleTarget(self: ?*anyopaque) bool {
        return qtc.QOpenGLTextureBlitter_SupportsRectangleTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn Bind(self: ?*anyopaque) void {
        qtc.QOpenGLTextureBlitter_Bind(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#release)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn Release(self: ?*anyopaque) void {
        qtc.QOpenGLTextureBlitter_Release(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#setRedBlueSwizzle)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter, swizzle: bool ```
    pub fn SetRedBlueSwizzle(self: ?*anyopaque, swizzle: bool) void {
        qtc.QOpenGLTextureBlitter_SetRedBlueSwizzle(@ptrCast(self), swizzle);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#setOpacity)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter, opacity: f32 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f32) void {
        qtc.QOpenGLTextureBlitter_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#blit)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter, texture: u32, targetTransform: QtC.QMatrix4x4, sourceOrigin: qopengltextureblitter_enums.Origin ```
    pub fn Blit(self: ?*anyopaque, texture: u32, targetTransform: ?*anyopaque, sourceOrigin: i32) void {
        qtc.QOpenGLTextureBlitter_Blit(@ptrCast(self), @intCast(texture), @ptrCast(targetTransform), @intCast(sourceOrigin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#targetTransform)
    ///
    /// ``` target: QtC.QRectF, viewport: QtC.QRect ```
    pub fn TargetTransform(target: ?*anyopaque, viewport: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QOpenGLTextureBlitter_TargetTransform(@ptrCast(target), @ptrCast(viewport));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter, target: u32 ```
    pub fn Bind1(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLTextureBlitter_Bind1(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#dtor.QOpenGLTextureBlitter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLTextureBlitter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLTextureBlitter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopengltextureblitter.html#types
pub const enums = struct {
    pub const Origin = enum {
        pub const OriginBottomLeft: i32 = 0;
        pub const OriginTopLeft: i32 = 1;
    };
};
