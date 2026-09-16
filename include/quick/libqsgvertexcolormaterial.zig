const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGMaterialShader = @import("libqt6").QSGMaterialShader;
const QSGMaterialType = @import("libqt6").QSGMaterialType;
const qsgmaterial_enums = @import("libqsgmaterial.zig").enums;
const qsgrendererinterface_enums = @import("libqsgrendererinterface.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html)
pub const QSGVertexColorMaterial = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGVertexColorMaterial,

    pub const _is_QSGVertexColorMaterial = {};
    pub const _is_QSGMaterial = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGVertexColorMaterial object in C++ memory
    ///
    pub fn new() QSGVertexColorMaterial {
        return .{ .ptr = qtc.QSGVertexColorMaterial_new() };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn compare(self: QSGVertexColorMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGVertexColorMaterial_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onCompare` instead
    ///
    pub const OnCompare = onCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#compare)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` callback: *const fn (self: QSGVertexColorMaterial, other: QSGMaterial) callconv(.c) i32 `
    ///
    pub fn onCompare(self: QSGVertexColorMaterial, callback: *const fn (QSGVertexColorMaterial, QSGMaterial) callconv(.c) i32) void {
        qtc.QSGVertexColorMaterial_OnCompare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompare` instead
    ///
    pub const SuperCompare = superCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#compare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn superCompare(self: QSGVertexColorMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGVertexColorMaterial_SuperCompare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    pub fn type0(self: QSGVertexColorMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGVertexColorMaterial_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` callback: *const fn () callconv(.c) QSGMaterialType `
    ///
    pub fn onType(self: QSGVertexColorMaterial, callback: *const fn () callconv(.c) QSGMaterialType) void {
        qtc.QSGVertexColorMaterial_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    pub fn superType(self: QSGVertexColorMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGVertexColorMaterial_SuperType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createShader` instead
    ///
    pub const CreateShader = createShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#createShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn createShader(self: QSGVertexColorMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGVertexColorMaterial_CreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `onCreateShader` instead
    ///
    pub const OnCreateShader = onCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#createShader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` callback: *const fn (self: QSGVertexColorMaterial, renderMode: qsgrendererinterface_enums.RenderMode) callconv(.c) QSGMaterialShader `
    ///
    pub fn onCreateShader(self: QSGVertexColorMaterial, callback: *const fn (QSGVertexColorMaterial, i32) callconv(.c) QSGMaterialShader) void {
        qtc.QSGVertexColorMaterial_OnCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateShader` instead
    ///
    pub const SuperCreateShader = superCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#createShader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn superCreateShader(self: QSGVertexColorMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGVertexColorMaterial_SuperCreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
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
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterial_enums.Flag `
    ///
    pub fn flags(self: QSGVertexColorMaterial) i32 {
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
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    pub fn setFlag(self: QSGVertexColorMaterial, _flags: i32) void {
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
    /// ` self: QSGVertexColorMaterial `
    ///
    pub fn viewCount(self: QSGVertexColorMaterial) i32 {
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
    /// ` self: QSGVertexColorMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QSGVertexColorMaterial, _flags: i32, on: bool) void {
        qtc.QSGMaterial_SetFlag2(@ptrCast(self.ptr), @bitCast(_flags), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#dtor.QSGVertexColorMaterial)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGVertexColorMaterial `
    ///
    pub fn delete(self: QSGVertexColorMaterial) void {
        qtc.QSGVertexColorMaterial_Delete(@ptrCast(self.ptr));
    }
};
