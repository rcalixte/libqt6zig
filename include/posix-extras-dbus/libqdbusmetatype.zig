const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html)
pub const qdbusmetatype = struct {
    /// New constructs a new QDBusMetaType object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDBusMetaType `
    ///
    pub fn New(other: ?*anyopaque) QtC.QDBusMetaType {
        return qtc.QDBusMetaType_new(@ptrCast(other));
    }

    /// New2 constructs a new QDBusMetaType object and invalidates the source QDBusMetaType object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QDBusMetaType `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QDBusMetaType {
        return qtc.QDBusMetaType_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDBusMetaType `
    ///
    /// ` other: QtC.QDBusMetaType `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusMetaType_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDBusMetaType `
    ///
    /// ` other: QtC.QDBusMetaType `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusMetaType_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#marshall)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QDBusArgument `
    ///
    /// ` id: QtC.QMetaType `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn Marshall(param1: ?*anyopaque, id: QtC.QMetaType, data: ?*anyopaque) bool {
        return qtc.QDBusMetaType_Marshall(@ptrCast(param1), @ptrCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#demarshall)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QDBusArgument `
    ///
    /// ` id: QtC.QMetaType `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn Demarshall(param1: ?*anyopaque, id: QtC.QMetaType, data: ?*anyopaque) bool {
        return qtc.QDBusMetaType_Demarshall(@ptrCast(param1), @ptrCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#registerCustomType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    /// ` signature: []u8 `
    ///
    pub fn RegisterCustomType(typeVal: QtC.QMetaType, signature: []u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.QDBusMetaType_RegisterCustomType(@ptrCast(typeVal), signature_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#signatureToMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` signature: []const u8 `
    ///
    pub fn SignatureToMetaType(signature: []const u8) QtC.QMetaType {
        const signature_Cstring = signature.ptr;
        return qtc.QDBusMetaType_SignatureToMetaType(signature_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#typeToSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    pub fn TypeToSignature(typeVal: QtC.QMetaType) []const u8 {
        const _ret = qtc.QDBusMetaType_TypeToSignature(@ptrCast(typeVal));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#dtor.QDBusMetaType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDBusMetaType `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusMetaType_Delete(@ptrCast(self));
    }
};
