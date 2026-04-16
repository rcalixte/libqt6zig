const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const qopengltextureblitter_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html)
pub const QOpenGLTextureBlitter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLTextureBlitter,

    pub const _is_QOpenGLTextureBlitter = {};

    /// New constructs a new QOpenGLTextureBlitter object.
    ///
    pub fn New() QOpenGLTextureBlitter {
        return .{ .ptr = qtc.QOpenGLTextureBlitter_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn Create(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_Create(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#isCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn IsCreated(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_IsCreated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn Destroy(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Destroy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsExternalOESTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn SupportsExternalOESTarget(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_SupportsExternalOESTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsRectangleTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn SupportsRectangleTarget(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_SupportsRectangleTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn Bind(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Bind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn Release(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Release(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#setRedBlueSwizzle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` swizzle: bool `
    ///
    pub fn SetRedBlueSwizzle(self: QOpenGLTextureBlitter, swizzle: bool) void {
        qtc.QOpenGLTextureBlitter_SetRedBlueSwizzle(@ptrCast(self.ptr), swizzle);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` opacity: f32 `
    ///
    pub fn SetOpacity(self: QOpenGLTextureBlitter, opacity: f32) void {
        qtc.QOpenGLTextureBlitter_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#blit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` texture: u32 `
    ///
    /// ` targetTransform: QMatrix4x4 `
    ///
    /// ` sourceOrigin: qopengltextureblitter_enums.Origin `
    ///
    pub fn Blit(self: QOpenGLTextureBlitter, texture: u32, targetTransform: anytype, sourceOrigin: i32) void {
        comptime _ = @TypeOf(targetTransform)._is_QMatrix4x4;
        qtc.QOpenGLTextureBlitter_Blit(@ptrCast(self.ptr), @bitCast(texture), @ptrCast(targetTransform.ptr), @bitCast(sourceOrigin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#targetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QRectF `
    ///
    /// ` viewport: QRect `
    ///
    pub fn TargetTransform(target: anytype, viewport: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(viewport)._is_QRect;
        return .{ .ptr = qtc.QOpenGLTextureBlitter_TargetTransform(@ptrCast(target.ptr), @ptrCast(viewport.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` target: u32 `
    ///
    pub fn Bind1(self: QOpenGLTextureBlitter, target: u32) void {
        qtc.QOpenGLTextureBlitter_Bind1(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#dtor.QOpenGLTextureBlitter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn Delete(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#public-types)
pub const enums = struct {
    pub const Origin = enum(i32) {
        pub const OriginBottomLeft: i32 = 0;
        pub const OriginTopLeft: i32 = 1;
    };
};
