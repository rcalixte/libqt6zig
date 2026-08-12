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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLTextureBlitter object in C++ memory
    ///
    pub fn new() QOpenGLTextureBlitter {
        return .{ .ptr = qtc.QOpenGLTextureBlitter_new() };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn create(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCreated` instead
    ///
    pub const IsCreated = isCreated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#isCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn isCreated(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_IsCreated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn destroy(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsExternalOESTarget` instead
    ///
    pub const SupportsExternalOESTarget = supportsExternalOESTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsExternalOESTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn supportsExternalOESTarget(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_SupportsExternalOESTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsRectangleTarget` instead
    ///
    pub const SupportsRectangleTarget = supportsRectangleTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsRectangleTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn supportsRectangleTarget(self: QOpenGLTextureBlitter) bool {
        return qtc.QOpenGLTextureBlitter_SupportsRectangleTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bind` instead
    ///
    pub const Bind = bind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn bind(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Bind(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn release(self: QOpenGLTextureBlitter) void {
        qtc.QOpenGLTextureBlitter_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRedBlueSwizzle` instead
    ///
    pub const SetRedBlueSwizzle = setRedBlueSwizzle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#setRedBlueSwizzle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` swizzle: bool `
    ///
    pub fn setRedBlueSwizzle(self: QOpenGLTextureBlitter, swizzle: bool) void {
        qtc.QOpenGLTextureBlitter_SetRedBlueSwizzle(@ptrCast(self.ptr), swizzle);
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` opacity: f32 `
    ///
    pub fn setOpacity(self: QOpenGLTextureBlitter, opacity: f32) void {
        qtc.QOpenGLTextureBlitter_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### DEPRECATED: Use `blit` instead
    ///
    pub const Blit = blit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#blit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` texture: u32 `
    ///
    /// ` _targetTransform: QMatrix4x4 `
    ///
    /// ` sourceOrigin: qopengltextureblitter_enums.Origin `
    ///
    pub fn blit(self: QOpenGLTextureBlitter, texture: u32, _targetTransform: anytype, sourceOrigin: i32) void {
        comptime _ = @TypeOf(_targetTransform)._is_QMatrix4x4;
        qtc.QOpenGLTextureBlitter_Blit(@ptrCast(self.ptr), @bitCast(texture), @ptrCast(_targetTransform.ptr), @bitCast(sourceOrigin));
    }

    /// ### DEPRECATED: Use `targetTransform` instead
    ///
    pub const TargetTransform = targetTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#targetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QRectF `
    ///
    /// ` viewport: QRect `
    ///
    pub fn targetTransform(target: anytype, viewport: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(viewport)._is_QRect;
        return .{ .ptr = qtc.QOpenGLTextureBlitter_TargetTransform(@ptrCast(target.ptr), @ptrCast(viewport.ptr)) };
    }

    /// ### DEPRECATED: Use `bind1` instead
    ///
    pub const Bind1 = bind1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    /// ` target: u32 `
    ///
    pub fn bind1(self: QOpenGLTextureBlitter, target: u32) void {
        qtc.QOpenGLTextureBlitter_Bind1(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltextureblitter.html#dtor.QOpenGLTextureBlitter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLTextureBlitter `
    ///
    pub fn delete(self: QOpenGLTextureBlitter) void {
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
