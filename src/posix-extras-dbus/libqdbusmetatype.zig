const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusArgument = @import("libqt6").QDBusArgument;
const QMetaType = @import("libqt6").QMetaType;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html)
pub const QDBusMetaType = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusMetaType,

    pub const _is_QDBusMetaType = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusMetaType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusMetaType `
    ///
    pub fn new(other: anytype) QDBusMetaType {
        comptime _ = @TypeOf(other)._is_QDBusMetaType;
        return .{ .ptr = qtc.QDBusMetaType_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusMetaType object and invalidate the source QDBusMetaType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusMetaType `
    ///
    pub fn new2(other: anytype) QDBusMetaType {
        comptime _ = @TypeOf(other)._is_QDBusMetaType;
        return .{ .ptr = qtc.QDBusMetaType_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusMetaType `
    ///
    /// ` other: QDBusMetaType `
    ///
    pub fn copyAssign(self: QDBusMetaType, other: QDBusMetaType) void {
        qtc.QDBusMetaType_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusMetaType `
    ///
    /// ` other: QDBusMetaType `
    ///
    pub fn moveAssign(self: QDBusMetaType, other: QDBusMetaType) void {
        qtc.QDBusMetaType_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `registerMarshallOperators` instead
    ///
    pub const RegisterMarshallOperators = registerMarshallOperators;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#registerMarshallOperators)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeId: QMetaType `
    ///
    /// ` param2: *const fn (funcparam1: QDBusArgument, funcparam2: ?*const anyopaque) callconv(.c) void `
    ///
    /// ` param3: *const fn (funcparam1: QDBusArgument, funcparam2: ?*anyopaque) callconv(.c) void `
    ///
    pub fn registerMarshallOperators(typeId: anytype, param2: *const fn (QDBusArgument, ?*const anyopaque) callconv(.c) void, param3: *const fn (QDBusArgument, ?*anyopaque) callconv(.c) void) void {
        comptime _ = @TypeOf(typeId)._is_QMetaType;
        qtc.QDBusMetaType_RegisterMarshallOperators(@ptrCast(typeId.ptr), @bitCast(@intFromPtr(param2)), @bitCast(@intFromPtr(param3)));
    }

    /// ### DEPRECATED: Use `marshall` instead
    ///
    pub const Marshall = marshall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#marshall)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusArgument `
    ///
    /// ` id: QMetaType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn marshall(param1: anytype, id: anytype, data: ?*const anyopaque) bool {
        comptime _ = @TypeOf(param1)._is_QDBusArgument;
        comptime _ = @TypeOf(id)._is_QMetaType;
        return qtc.QDBusMetaType_Marshall(@ptrCast(param1.ptr), @ptrCast(id.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `demarshall` instead
    ///
    pub const Demarshall = demarshall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#demarshall)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusArgument `
    ///
    /// ` id: QMetaType `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn demarshall(param1: anytype, id: anytype, data: ?*anyopaque) bool {
        comptime _ = @TypeOf(param1)._is_QDBusArgument;
        comptime _ = @TypeOf(id)._is_QMetaType;
        return qtc.QDBusMetaType_Demarshall(@ptrCast(param1.ptr), @ptrCast(id.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `registerCustomType` instead
    ///
    pub const RegisterCustomType = registerCustomType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#registerCustomType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` signature: []u8 `
    ///
    pub fn registerCustomType(typeVal: anytype, signature: []u8) void {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.QDBusMetaType_RegisterCustomType(@ptrCast(typeVal.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `signatureToMetaType` instead
    ///
    pub const SignatureToMetaType = signatureToMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#signatureToMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` signature: [:0]const u8 `
    ///
    pub fn signatureToMetaType(signature: [:0]const u8) QMetaType {
        const signature_Cstring = signature.ptr;
        return .{ .ptr = qtc.QDBusMetaType_SignatureToMetaType(signature_Cstring) };
    }

    /// ### DEPRECATED: Use `typeToSignature` instead
    ///
    pub const TypeToSignature = typeToSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#typeToSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn typeToSignature(typeVal: anytype) [:0]const u8 {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        const _ret = qtc.QDBusMetaType_TypeToSignature(@ptrCast(typeVal.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#dtor.QDBusMetaType)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusMetaType `
    ///
    pub fn delete(self: QDBusMetaType) void {
        qtc.QDBusMetaType_Delete(@ptrCast(self.ptr));
    }
};
