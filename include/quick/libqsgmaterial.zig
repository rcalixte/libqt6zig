const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSGMaterialShader = @import("libqt6").QSGMaterialShader;
const QSGMaterialType = @import("libqt6").QSGMaterialType;
const qsgmaterial_enums = enums;
const qsgrendererinterface_enums = @import("libqsgrendererinterface.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html)
pub const QSGMaterial = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGMaterial,

    pub const _is_QSGMaterial = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGMaterial object in C++ memory
    ///
    pub fn new() QSGMaterial {
        return .{ .ptr = qtc.QSGMaterial_new() };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    pub fn type0(self: QSGMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGMaterial_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` callback: *const fn () callconv(.c) QSGMaterialType `
    ///
    pub fn onType(self: QSGMaterial, callback: *const fn () callconv(.c) QSGMaterialType) void {
        qtc.QSGMaterial_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    pub fn superType(self: QSGMaterial) QSGMaterialType {
        return .{ .ptr = qtc.QSGMaterial_SuperType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createShader` instead
    ///
    pub const CreateShader = createShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#createShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn createShader(self: QSGMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGMaterial_CreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `onCreateShader` instead
    ///
    pub const OnCreateShader = onCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#createShader)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` callback: *const fn (self: QSGMaterial, renderMode: qsgrendererinterface_enums.RenderMode) callconv(.c) QSGMaterialShader `
    ///
    pub fn onCreateShader(self: QSGMaterial, callback: *const fn (QSGMaterial, i32) callconv(.c) QSGMaterialShader) void {
        qtc.QSGMaterial_OnCreateShader(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateShader` instead
    ///
    pub const SuperCreateShader = superCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#createShader)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` renderMode: qsgrendererinterface_enums.RenderMode `
    ///
    pub fn superCreateShader(self: QSGMaterial, renderMode: i32) QSGMaterialShader {
        return .{ .ptr = qtc.QSGMaterial_SuperCreateShader(@ptrCast(self.ptr), @bitCast(renderMode)) };
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn compare(self: QSGMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGMaterial_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onCompare` instead
    ///
    pub const OnCompare = onCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#compare)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` callback: *const fn (self: QSGMaterial, other: QSGMaterial) callconv(.c) i32 `
    ///
    pub fn onCompare(self: QSGMaterial, callback: *const fn (QSGMaterial, QSGMaterial) callconv(.c) i32) void {
        qtc.QSGMaterial_OnCompare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompare` instead
    ///
    pub const SuperCompare = superCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#compare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` other: QSGMaterial `
    ///
    pub fn superCompare(self: QSGMaterial, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QSGMaterial;
        return qtc.QSGMaterial_SuperCompare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgmaterial_enums.Flag `
    ///
    pub fn flags(self: QSGMaterial) i32 {
        return qtc.QSGMaterial_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    pub fn setFlag(self: QSGMaterial, _flags: i32) void {
        qtc.QSGMaterial_SetFlag(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `viewCount` instead
    ///
    pub const ViewCount = viewCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    pub fn viewCount(self: QSGMaterial) i32 {
        return qtc.QSGMaterial_ViewCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGMaterial `
    ///
    /// ` _flags: flag of qsgmaterial_enums.Flag `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QSGMaterial, _flags: i32, on: bool) void {
        qtc.QSGMaterial_SetFlag2(@ptrCast(self.ptr), @bitCast(_flags), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#dtor.QSGMaterial)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGMaterial `
    ///
    pub fn delete(self: QSGMaterial) void {
        qtc.QSGMaterial_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#public-types)
pub const enums = struct {
    pub const Flag = enum {
        pub const Blending: i32 = 1;
        pub const RequiresDeterminant: i32 = 2;
        pub const RequiresFullMatrixExceptTranslate: i32 = 6;
        pub const RequiresFullMatrix: i32 = 14;
        pub const NoBatching: i32 = 16;
        pub const MultiView2: i32 = 65536;
        pub const MultiView3: i32 = 131072;
        pub const MultiView4: i32 = 262144;
        pub const CustomCompileStep: i32 = 16;
    };
};
