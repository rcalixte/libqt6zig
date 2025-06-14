const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qssl_enums = @import("libqssl.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslcipher.html
pub const qsslcipher = struct {
    /// New constructs a new QSslCipher object.
    ///
    ///
    pub fn New() QtC.QSslCipher {
        return qtc.QSslCipher_new();
    }

    /// New2 constructs a new QSslCipher object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.QSslCipher {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QSslCipher_new2(name_str);
    }

    /// New3 constructs a new QSslCipher object.
    ///
    /// ``` name: []const u8, protocol: qssl_enums.SslProtocol ```
    pub fn New3(name: []const u8, protocol: i64) QtC.QSslCipher {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QSslCipher_new3(name_str, @intCast(protocol));
    }

    /// New4 constructs a new QSslCipher object.
    ///
    /// ``` other: QtC.QSslCipher ```
    pub fn New4(other: ?*anyopaque) QtC.QSslCipher {
        return qtc.QSslCipher_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator=)
    ///
    /// ``` self: QtC.QSslCipher, other: QtC.QSslCipher ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCipher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#swap)
    ///
    /// ``` self: QtC.QSslCipher, other: QtC.QSslCipher ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCipher_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator==)
    ///
    /// ``` self: QtC.QSslCipher, other: QtC.QSslCipher ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCipher_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator!=)
    ///
    /// ``` self: QtC.QSslCipher, other: QtC.QSslCipher ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCipher_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
    ///
    /// ``` self: QtC.QSslCipher ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSslCipher_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#name)
    ///
    /// ``` self: QtC.QSslCipher, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
    ///
    /// ``` self: QtC.QSslCipher ```
    pub fn SupportedBits(self: ?*anyopaque) i32 {
        return qtc.QSslCipher_SupportedBits(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
    ///
    /// ``` self: QtC.QSslCipher ```
    pub fn UsedBits(self: ?*anyopaque) i32 {
        return qtc.QSslCipher_UsedBits(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
    ///
    /// ``` self: QtC.QSslCipher, allocator: std.mem.Allocator ```
    pub fn KeyExchangeMethod(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_KeyExchangeMethod(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.KeyExchangeMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
    ///
    /// ``` self: QtC.QSslCipher, allocator: std.mem.Allocator ```
    pub fn AuthenticationMethod(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_AuthenticationMethod(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.AuthenticationMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
    ///
    /// ``` self: QtC.QSslCipher, allocator: std.mem.Allocator ```
    pub fn EncryptionMethod(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_EncryptionMethod(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.EncryptionMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
    ///
    /// ``` self: QtC.QSslCipher, allocator: std.mem.Allocator ```
    pub fn ProtocolString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCipher_ProtocolString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.ProtocolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocol)
    ///
    /// ``` self: QtC.QSslCipher ```
    pub fn Protocol(self: ?*anyopaque) i64 {
        return qtc.QSslCipher_Protocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#dtor.QSslCipher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslCipher ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslCipher_Delete(@ptrCast(self));
    }
};
