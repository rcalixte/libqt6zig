const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbusmetatype.html
pub const qdbusmetatype = struct {
    /// New constructs a new QDBusMetaType object.
    ///
    /// ``` other: QtC.QDBusMetaType ```
    pub fn New(other: ?*anyopaque) QtC.QDBusMetaType {
        return qtc.QDBusMetaType_new(@ptrCast(other));
    }

    /// New2 constructs a new QDBusMetaType object and invalidates the source QDBusMetaType object.
    ///
    /// ``` other: QtC.QDBusMetaType ```
    pub fn New2(other: ?*anyopaque) QtC.QDBusMetaType {
        return qtc.QDBusMetaType_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QDBusMetaType, other: QtC.QDBusMetaType ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusMetaType_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QDBusMetaType, other: QtC.QDBusMetaType ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusMetaType_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusmetatype.html#marshall)
    ///
    /// ``` param1: QtC.QDBusArgument, id: QtC.QMetaType, data: ?*anyopaque ```
    pub fn Marshall(param1: ?*anyopaque, id: QtC.QMetaType, data: ?*anyopaque) bool {
        return qtc.QDBusMetaType_Marshall(@ptrCast(param1), @ptrCast(id), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusmetatype.html#demarshall)
    ///
    /// ``` param1: QtC.QDBusArgument, id: QtC.QMetaType, data: ?*anyopaque ```
    pub fn Demarshall(param1: ?*anyopaque, id: QtC.QMetaType, data: ?*anyopaque) bool {
        return qtc.QDBusMetaType_Demarshall(@ptrCast(param1), @ptrCast(id), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusmetatype.html#registerCustomType)
    ///
    /// ``` typeVal: QtC.QMetaType, signature: []u8 ```
    pub fn RegisterCustomType(typeVal: QtC.QMetaType, signature: []u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.QDBusMetaType_RegisterCustomType(@ptrCast(typeVal), signature_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusmetatype.html#signatureToMetaType)
    ///
    /// ``` signature: []const u8 ```
    pub fn SignatureToMetaType(signature: []const u8) QtC.QMetaType {
        const signature_Cstring = signature.ptr;
        return qtc.QDBusMetaType_SignatureToMetaType(signature_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusmetatype.html#typeToSignature)
    ///
    /// ``` typeVal: QtC.QMetaType ```
    pub fn TypeToSignature(typeVal: QtC.QMetaType) []const u8 {
        const _ret = qtc.QDBusMetaType_TypeToSignature(@ptrCast(typeVal));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusmetatype.html#dtor.QDBusMetaType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusMetaType ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusMetaType_Delete(@ptrCast(self));
    }
};
