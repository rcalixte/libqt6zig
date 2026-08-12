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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslCipher object in C++ memory
    ///
    pub fn new() QSslCipher {
        return .{ .ptr = qtc.QSslCipher_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslCipher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new2(_name: []const u8) QSslCipher {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QSslCipher_new2(name_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSslCipher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _protocol: qssl_enums.SslProtocol `
    ///
    pub fn new3(_name: []const u8, _protocol: i32) QSslCipher {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QSslCipher_new3(name_str, @bitCast(_protocol)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSslCipher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslCipher `
    ///
    pub fn new4(other: anytype) QSslCipher {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        return .{ .ptr = qtc.QSslCipher_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn operatorAssign(self: QSslCipher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        qtc.QSslCipher_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn swap(self: QSslCipher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        qtc.QSslCipher_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn operatorEqual(self: QSslCipher, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        return qtc.QSslCipher_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` other: QSslCipher `
    ///
    pub fn operatorNotEqual(self: QSslCipher, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCipher;
        return qtc.QSslCipher_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    pub fn isNull(self: QSslCipher) bool {
        return qtc.QSslCipher_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCipher.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedBits` instead
    ///
    pub const SupportedBits = supportedBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    pub fn supportedBits(self: QSslCipher) i32 {
        return qtc.QSslCipher_SupportedBits(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `usedBits` instead
    ///
    pub const UsedBits = usedBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    pub fn usedBits(self: QSslCipher) i32 {
        return qtc.QSslCipher_UsedBits(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyExchangeMethod` instead
    ///
    pub const KeyExchangeMethod = keyExchangeMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keyExchangeMethod(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_KeyExchangeMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCipher.keyExchangeMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `authenticationMethod` instead
    ///
    pub const AuthenticationMethod = authenticationMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn authenticationMethod(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_AuthenticationMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCipher.authenticationMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encryptionMethod` instead
    ///
    pub const EncryptionMethod = encryptionMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn encryptionMethod(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_EncryptionMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCipher.encryptionMethod: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `protocolString` instead
    ///
    pub const ProtocolString = protocolString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCipher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn protocolString(self: QSslCipher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCipher_ProtocolString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCipher.protocolString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `protocol` instead
    ///
    pub const Protocol = protocol;

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
    pub fn protocol(self: QSslCipher) i32 {
        return qtc.QSslCipher_Protocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#dtor.QSslCipher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslCipher `
    ///
    pub fn delete(self: QSslCipher) void {
        qtc.QSslCipher_Delete(@ptrCast(self.ptr));
    }
};
