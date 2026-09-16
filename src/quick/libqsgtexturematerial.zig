const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGMaterialShader = @import("libqt6").QSGMaterialShader;
const QSGMaterialType = @import("libqt6").QSGMaterialType;
const QSGTexture = @import("libqt6").QSGTexture;
const qsgmaterial_enums = @import("libqsgmaterial.zig").enums;
const qsgrendererinterface_enums = @import("libqsgrendererinterface.zig").enums;
const qsgtexture_enums = @import("libqsgtexture.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html)
pub const QSGOpaqueTextureMaterial = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGOpaqueTextureMaterial,

    pub const _is_QSGOpaqueTextureMaterial = {};
    pub const _is_QSGMaterial = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGOpaqueTextureMaterial object in C++ memory
    ///
    pub fn new() QSGOpaqueTextureMaterial {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_new() };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    pub fn type0(self: QSGOpaqueTextureMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` callback: *const fn () callconv(.c) QSGMaterialType `
    ///
    pub fn onType(self: QSGOpaqueTextureMaterial, callback: *const fn () callconv(.c) QSGMaterialType) void {
        qtc.QSGOpaqueTextureMaterial_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    pub fn superType(self: QSGOpaqueTextureMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_SuperType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createShader` instead
    ///
    pub const CreateShader = createShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn createShader(self: QSGOpaqueTextureMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_CreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `onCreateShader` instead
    ///
    pub const OnCreateShader = onCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` callback: *const fn (self: QSGOpaqueTextureMaterial, renderMode: qsgrendererinterface_enums.RenderMode) callconv(.c) QSGMaterialShader `
    ///
    pub fn onCreateShader(self: QSGOpaqueTextureMaterial, callback: *const fn (QSGOpaqueTextureMaterial, i32) callconv(.c) QSGMaterialShader) void {
        qtc.QSGOpaqueTextureMaterial_OnCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateShader` instead
    ///
    pub const SuperCreateShader = superCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn superCreateShader(self: QSGOpaqueTextureMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_SuperCreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn compare(self: QSGOpaqueTextureMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGOpaqueTextureMaterial_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onCompare` instead
    ///
    pub const OnCompare = onCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` callback: *const fn (self: QSGOpaqueTextureMaterial, other: QSGMaterial) callconv(.c) i32 `
    ///
    pub fn onCompare(self: QSGOpaqueTextureMaterial, callback: *const fn (QSGOpaqueTextureMaterial, QSGMaterial) callconv(.c) i32) void {
        qtc.QSGOpaqueTextureMaterial_OnCompare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompare` instead
    ///
    pub const SuperCompare = superCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn superCompare(self: QSGOpaqueTextureMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGOpaqueTextureMaterial_SuperCompare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` _texture: QSGTexture `
    ///
    pub fn setTexture(self: QSGOpaqueTextureMaterial, _texture: anytype) void {
        comptime _ = @TypeOf(_texture)._is_QSGTexture;
        qtc.QSGOpaqueTextureMaterial_SetTexture(@ptrCast(self.ptr), @ptrCast(_texture.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    pub fn texture(self: QSGOpaqueTextureMaterial) QSGTexture {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_Texture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMipmapFiltering` instead
    ///
    pub const SetMipmapFiltering = setMipmapFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setMipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` filteringType: qsgtexture_enums.Filtering `
    ///
    pub fn setMipmapFiltering(self: QSGOpaqueTextureMaterial, filteringType: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetMipmapFiltering(@ptrCast(self.ptr), @bitCast(filteringType));
    }

    /// ### DEPRECATED: Use `mipmapFiltering` instead
    ///
    pub const MipmapFiltering = mipmapFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#mipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn mipmapFiltering(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_MipmapFiltering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` filteringType: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGOpaqueTextureMaterial, filteringType: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetFiltering(@ptrCast(self.ptr), @bitCast(filteringType));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalWrapMode` instead
    ///
    pub const SetHorizontalWrapMode = setHorizontalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setHorizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` mode: qsgtexture_enums.WrapMode `
    ///
    pub fn setHorizontalWrapMode(self: QSGOpaqueTextureMaterial, mode: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetHorizontalWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `horizontalWrapMode` instead
    ///
    pub const HorizontalWrapMode = horizontalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#horizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn horizontalWrapMode(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_HorizontalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalWrapMode` instead
    ///
    pub const SetVerticalWrapMode = setVerticalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setVerticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` mode: qsgtexture_enums.WrapMode `
    ///
    pub fn setVerticalWrapMode(self: QSGOpaqueTextureMaterial, mode: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetVerticalWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `verticalWrapMode` instead
    ///
    pub const VerticalWrapMode = verticalWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#verticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn verticalWrapMode(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_VerticalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnisotropyLevel` instead
    ///
    pub const SetAnisotropyLevel = setAnisotropyLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setAnisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` level: qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn setAnisotropyLevel(self: QSGOpaqueTextureMaterial, level: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetAnisotropyLevel(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `anisotropyLevel` instead
    ///
    pub const AnisotropyLevel = anisotropyLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#anisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn anisotropyLevel(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_AnisotropyLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterial_enums.Flag `
    ///
    pub fn flags(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGMaterial_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    pub fn setFlag(self: QSGOpaqueTextureMaterial, _flags: i32) void {
        qtc.QSGMaterial_SetFlag(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `viewCount` instead
    ///
    pub const ViewCount = viewCount;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    pub fn viewCount(self: QSGOpaqueTextureMaterial) i32 {
        return qtc.QSGMaterial_ViewCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QSGOpaqueTextureMaterial, _flags: i32, on: bool) void {
        qtc.QSGMaterial_SetFlag2(@ptrCast(self.ptr), @bitCast(_flags), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#dtor.QSGOpaqueTextureMaterial)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGOpaqueTextureMaterial `
    ///
    pub fn delete(self: QSGOpaqueTextureMaterial) void {
        qtc.QSGOpaqueTextureMaterial_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html)
pub const QSGTextureMaterial = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGTextureMaterial,

    pub const _is_QSGTextureMaterial = {};
    pub const _is_QSGOpaqueTextureMaterial = {};
    pub const _is_QSGMaterial = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGTextureMaterial object in C++ memory
    ///
    pub fn new() QSGTextureMaterial {
        return .{ .ptr = qtc.QSGTextureMaterial_new() };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    pub fn type0(self: QSGTextureMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGTextureMaterial_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` callback: *const fn () callconv(.c) QSGMaterialType `
    ///
    pub fn onType(self: QSGTextureMaterial, callback: *const fn () callconv(.c) QSGMaterialType) void {
        qtc.QSGTextureMaterial_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    pub fn superType(self: QSGTextureMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGTextureMaterial_SuperType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createShader` instead
    ///
    pub const CreateShader = createShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn createShader(self: QSGTextureMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGTextureMaterial_CreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `onCreateShader` instead
    ///
    pub const OnCreateShader = onCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` callback: *const fn (self: QSGTextureMaterial, renderMode: qsgrendererinterface_enums.RenderMode) callconv(.c) QSGMaterialShader `
    ///
    pub fn onCreateShader(self: QSGTextureMaterial, callback: *const fn (QSGTextureMaterial, i32) callconv(.c) QSGMaterialShader) void {
        qtc.QSGTextureMaterial_OnCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateShader` instead
    ///
    pub const SuperCreateShader = superCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn superCreateShader(self: QSGTextureMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGTextureMaterial_SuperCreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` _texture: QSGTexture `
    ///
    pub fn setTexture(self: QSGTextureMaterial, _texture: anytype) void {
        comptime _ = @TypeOf(_texture)._is_QSGTexture;
        qtc.QSGOpaqueTextureMaterial_SetTexture(@ptrCast(self.ptr), @ptrCast(_texture.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    pub fn texture(self: QSGTextureMaterial) QSGTexture {
        return .{ .ptr = qtc.QSGOpaqueTextureMaterial_Texture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMipmapFiltering` instead
    ///
    pub const SetMipmapFiltering = setMipmapFiltering;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setMipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` filteringType: qsgtexture_enums.Filtering `
    ///
    pub fn setMipmapFiltering(self: QSGTextureMaterial, filteringType: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetMipmapFiltering(@ptrCast(self.ptr), @bitCast(filteringType));
    }

    /// ### DEPRECATED: Use `mipmapFiltering` instead
    ///
    pub const MipmapFiltering = mipmapFiltering;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#mipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn mipmapFiltering(self: QSGTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_MipmapFiltering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` filteringType: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGTextureMaterial, filteringType: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetFiltering(@ptrCast(self.ptr), @bitCast(filteringType));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalWrapMode` instead
    ///
    pub const SetHorizontalWrapMode = setHorizontalWrapMode;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setHorizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` mode: qsgtexture_enums.WrapMode `
    ///
    pub fn setHorizontalWrapMode(self: QSGTextureMaterial, mode: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetHorizontalWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `horizontalWrapMode` instead
    ///
    pub const HorizontalWrapMode = horizontalWrapMode;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#horizontalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn horizontalWrapMode(self: QSGTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_HorizontalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalWrapMode` instead
    ///
    pub const SetVerticalWrapMode = setVerticalWrapMode;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setVerticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` mode: qsgtexture_enums.WrapMode `
    ///
    pub fn setVerticalWrapMode(self: QSGTextureMaterial, mode: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetVerticalWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `verticalWrapMode` instead
    ///
    pub const VerticalWrapMode = verticalWrapMode;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#verticalWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.WrapMode `
    ///
    pub fn verticalWrapMode(self: QSGTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_VerticalWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnisotropyLevel` instead
    ///
    pub const SetAnisotropyLevel = setAnisotropyLevel;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setAnisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` level: qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn setAnisotropyLevel(self: QSGTextureMaterial, level: i32) void {
        qtc.QSGOpaqueTextureMaterial_SetAnisotropyLevel(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `anisotropyLevel` instead
    ///
    pub const AnisotropyLevel = anisotropyLevel;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#anisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn anisotropyLevel(self: QSGTextureMaterial) i32 {
        return qtc.QSGOpaqueTextureMaterial_AnisotropyLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterial_enums.Flag `
    ///
    pub fn flags(self: QSGTextureMaterial) i32 {
        return qtc.QSGMaterial_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    pub fn setFlag(self: QSGTextureMaterial, _flags: i32) void {
        qtc.QSGMaterial_SetFlag(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `viewCount` instead
    ///
    pub const ViewCount = viewCount;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    pub fn viewCount(self: QSGTextureMaterial) i32 {
        return qtc.QSGMaterial_ViewCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QSGMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QSGTextureMaterial, _flags: i32, on: bool) void {
        qtc.QSGMaterial_SetFlag2(@ptrCast(self.ptr), @bitCast(_flags), on);
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn compare(self: QSGTextureMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGTextureMaterial_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `superCompare` instead
    ///
    pub const SuperCompare = superCompare;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextureMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn superCompare(self: QSGTextureMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGTextureMaterial_SuperCompare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onCompare` instead
    ///
    pub const OnCompare = onCompare;

    /// Inherited from QSGOpaqueTextureMaterial
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGTextureMaterial`
    ///
    /// ` callback: *const fn (self: QSGTextureMaterial, other: QSGMaterial) callconv(.c) i32 `
    ///
    pub fn onCompare(self: QSGTextureMaterial, callback: *const fn (QSGTextureMaterial, QSGMaterial) callconv(.c) i32) void {
        qtc.QSGTextureMaterial_OnCompare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#dtor.QSGTextureMaterial)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGTextureMaterial `
    ///
    pub fn delete(self: QSGTextureMaterial) void {
        qtc.QSGTextureMaterial_Delete(@ptrCast(self.ptr));
    }
};
