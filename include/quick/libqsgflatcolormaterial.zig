const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGMaterialShader = @import("libqt6").QSGMaterialShader;
const QSGMaterialType = @import("libqt6").QSGMaterialType;
const qsgmaterial_enums = @import("libqsgmaterial.zig").enums;
const qsgrendererinterface_enums = @import("libqsgrendererinterface.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html)
pub const QSGFlatColorMaterial = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGFlatColorMaterial,

    pub const _is_QSGFlatColorMaterial = {};
    pub const _is_QSGMaterial = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGFlatColorMaterial object in C++ memory
    ///
    pub fn new() QSGFlatColorMaterial {
        return .{ .ptr = qtc.QSGFlatColorMaterial_new() };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    pub fn type0(self: QSGFlatColorMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGFlatColorMaterial_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` callback: *const fn () callconv(.c) QSGMaterialType `
    ///
    pub fn onType(self: QSGFlatColorMaterial, callback: *const fn () callconv(.c) QSGMaterialType) void {
        qtc.QSGFlatColorMaterial_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    pub fn superType(self: QSGFlatColorMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGFlatColorMaterial_SuperType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createShader` instead
    ///
    pub const CreateShader = createShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#createShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn createShader(self: QSGFlatColorMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGFlatColorMaterial_CreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `onCreateShader` instead
    ///
    pub const OnCreateShader = onCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#createShader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` callback: *const fn (self: QSGFlatColorMaterial, renderMode: qsgrendererinterface_enums.RenderMode) callconv(.c) QSGMaterialShader `
    ///
    pub fn onCreateShader(self: QSGFlatColorMaterial, callback: *const fn (QSGFlatColorMaterial, i32) callconv(.c) QSGMaterialShader) void {
        qtc.QSGFlatColorMaterial_OnCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateShader` instead
    ///
    pub const SuperCreateShader = superCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#createShader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn superCreateShader(self: QSGFlatColorMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGFlatColorMaterial_SuperCreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QSGFlatColorMaterial, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QSGFlatColorMaterial_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    pub fn color(self: QSGFlatColorMaterial) QColor {
        return .{ .ptr = qtc.QSGFlatColorMaterial_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn compare(self: QSGFlatColorMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGFlatColorMaterial_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onCompare` instead
    ///
    pub const OnCompare = onCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#compare)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` callback: *const fn (self: QSGFlatColorMaterial, other: QSGMaterial) callconv(.c) i32 `
    ///
    pub fn onCompare(self: QSGFlatColorMaterial, callback: *const fn (QSGFlatColorMaterial, QSGMaterial) callconv(.c) i32) void {
        qtc.QSGFlatColorMaterial_OnCompare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompare` instead
    ///
    pub const SuperCompare = superCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#compare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn superCompare(self: QSGFlatColorMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGFlatColorMaterial_SuperCompare(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterial_enums.Flag `
    ///
    pub fn flags(self: QSGFlatColorMaterial) i32 {
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
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    pub fn setFlag(self: QSGFlatColorMaterial, _flags: i32) void {
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
    /// ` self: QSGFlatColorMaterial `
    ///
    pub fn viewCount(self: QSGFlatColorMaterial) i32 {
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
    /// ` self: QSGFlatColorMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QSGFlatColorMaterial, _flags: i32, on: bool) void {
        qtc.QSGMaterial_SetFlag2(@ptrCast(self.ptr), @bitCast(_flags), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#dtor.QSGFlatColorMaterial)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGFlatColorMaterial `
    ///
    pub fn delete(self: QSGFlatColorMaterial) void {
        qtc.QSGFlatColorMaterial_Delete(@ptrCast(self.ptr));
    }
};
