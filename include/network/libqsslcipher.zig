const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qssl_enums = @import("libqssl.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html)
pub const QSslCipher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslCipher,

    pub const _is_QSslCipher = {};

    /// New constructs a new QSslCipher object.
    ///
    pub fn New() QSslCipher {
        return .{ .ptr = qtc.QSslCipher_new() };
    }

    /// New2 constructs a new QSslCipher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New2(name: []const u8) QSslCipher {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSslCipher_new2(name_str) };
    }

    /// New3 constructs a new QSslCipher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` protocol: qssl_enums.SslProtocol `
    ///
    pub fn New3(name: []const u8, protocol: i32) QSslCipher {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSslCipher_new3(name_str, @bitCast(protocol)) };
    }

    /// New4 constructs a new QSslCipher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslCipher `
    ///
    pub fn New4(other: anytype) QSslCipher {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        return .{ .ptr = qtc.QSslCipher_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn OperatorAssign(self: QSslCipher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        qtc.QSslCipher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn Swap(self: QSslCipher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        qtc.QSslCipher_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn OperatorEqual(self: QSslCipher, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        return qtc.QSslCipher_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn OperatorNotEqual(self: QSslCipher, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        return qtc.QSslCipher_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    pub fn IsNull(self: QSslCipher) bool {
        return qtc.QSslCipher_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    pub fn SupportedBits(self: QSslCipher) i32 {
        return qtc.QSslCipher_SupportedBits(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    pub fn UsedBits(self: QSslCipher) i32 {
        return qtc.QSslCipher_UsedBits(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyExchangeMethod(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_KeyExchangeMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.KeyExchangeMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AuthenticationMethod(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_AuthenticationMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.AuthenticationMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EncryptionMethod(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_EncryptionMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.EncryptionMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolString(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_ProtocolString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcipher.ProtocolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#protocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn Protocol(self: QSslCipher) i32 {
        return qtc.QSslCipher_Protocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#dtor.QSslCipher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslCipher `
    ///
    pub fn Delete(self: QSslCipher) void {
        qtc.QSslCipher_Delete(@ptrCast(self.ptr));
    }
};
