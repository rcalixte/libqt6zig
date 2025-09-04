const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbusobjectpath.html
pub const qdbusobjectpath = struct {
    /// New constructs a new QDBusObjectPath object.
    ///
    ///
    pub fn New() QtC.QDBusObjectPath {
        return qtc.QDBusObjectPath_new();
    }

    /// New2 constructs a new QDBusObjectPath object.
    ///
    /// ``` path: []const u8 ```
    pub fn New2(path: []const u8) QtC.QDBusObjectPath {
        const path_Cstring = path.ptr;

        return qtc.QDBusObjectPath_new2(path_Cstring);
    }

    /// New3 constructs a new QDBusObjectPath object.
    ///
    /// ``` path: []const u8 ```
    pub fn New3(path: []const u8) QtC.QDBusObjectPath {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDBusObjectPath_new3(path_str);
    }

    /// New4 constructs a new QDBusObjectPath object.
    ///
    /// ``` param1: QtC.QDBusObjectPath ```
    pub fn New4(param1: ?*anyopaque) QtC.QDBusObjectPath {
        return qtc.QDBusObjectPath_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusobjectpath.html#swap)
    ///
    /// ``` self: QtC.QDBusObjectPath, other: QtC.QDBusObjectPath ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusObjectPath_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusobjectpath.html#setPath)
    ///
    /// ``` self: QtC.QDBusObjectPath, path: []const u8 ```
    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusObjectPath_SetPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusobjectpath.html#path)
    ///
    /// ``` self: QtC.QDBusObjectPath, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusObjectPath_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusobjectpath.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusobjectpath.html#operator)
    ///
    /// ``` self: QtC.QDBusObjectPath ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QDBusObjectPath_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusobjectpath.html#dtor.QDBusObjectPath)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusObjectPath ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusObjectPath_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdbussignature.html
pub const qdbussignature = struct {
    /// New constructs a new QDBusSignature object.
    ///
    ///
    pub fn New() QtC.QDBusSignature {
        return qtc.QDBusSignature_new();
    }

    /// New2 constructs a new QDBusSignature object.
    ///
    /// ``` signature: []const u8 ```
    pub fn New2(signature: []const u8) QtC.QDBusSignature {
        const signature_Cstring = signature.ptr;

        return qtc.QDBusSignature_new2(signature_Cstring);
    }

    /// New3 constructs a new QDBusSignature object.
    ///
    /// ``` signature: []const u8 ```
    pub fn New3(signature: []const u8) QtC.QDBusSignature {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };

        return qtc.QDBusSignature_new3(signature_str);
    }

    /// New4 constructs a new QDBusSignature object.
    ///
    /// ``` param1: QtC.QDBusSignature ```
    pub fn New4(param1: ?*anyopaque) QtC.QDBusSignature {
        return qtc.QDBusSignature_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbussignature.html#swap)
    ///
    /// ``` self: QtC.QDBusSignature, other: QtC.QDBusSignature ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusSignature_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbussignature.html#setSignature)
    ///
    /// ``` self: QtC.QDBusSignature, signature: []const u8 ```
    pub fn SetSignature(self: ?*anyopaque, signature: []const u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.QDBusSignature_SetSignature(@ptrCast(self), signature_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbussignature.html#signature)
    ///
    /// ``` self: QtC.QDBusSignature, allocator: std.mem.Allocator ```
    pub fn Signature(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusSignature_Signature(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbussignature.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbussignature.html#dtor.QDBusSignature)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusSignature ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusSignature_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdbusvariant.html
pub const qdbusvariant = struct {
    /// New constructs a new QDBusVariant object.
    ///
    ///
    pub fn New() QtC.QDBusVariant {
        return qtc.QDBusVariant_new();
    }

    /// New2 constructs a new QDBusVariant object.
    ///
    /// ``` variant: QtC.QVariant ```
    pub fn New2(variant: ?*anyopaque) QtC.QDBusVariant {
        return qtc.QDBusVariant_new2(@ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusvariant.html#swap)
    ///
    /// ``` self: QtC.QDBusVariant, other: QtC.QDBusVariant ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusVariant_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusvariant.html#setVariant)
    ///
    /// ``` self: QtC.QDBusVariant, variant: QtC.QVariant ```
    pub fn SetVariant(self: ?*anyopaque, variant: ?*anyopaque) void {
        qtc.QDBusVariant_SetVariant(@ptrCast(self), @ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusvariant.html#variant)
    ///
    /// ``` self: QtC.QDBusVariant ```
    pub fn Variant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QDBusVariant_Variant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusvariant.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusVariant, param1: QtC.QDBusVariant ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDBusVariant_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusvariant.html#dtor.QDBusVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusVariant ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusVariant_Delete(@ptrCast(self));
    }
};
