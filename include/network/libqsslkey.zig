const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qssl_enums = @import("libqssl.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)
pub const QSslKey = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslKey,

    pub const _is_QSslKey = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslKey object in C++ memory
    ///
    pub fn new() QSslKey {
        return .{ .ptr = qtc.QSslKey_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    pub fn new2(encoded: []u8, _algorithm: i32) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new2(encoded_str, @bitCast(_algorithm)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    pub fn new3(device: anytype, _algorithm: i32) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslKey_new3(@ptrCast(device.ptr), @bitCast(_algorithm)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _handle: ?*anyopaque `
    ///
    pub fn new4(_handle: ?*anyopaque) QSslKey {
        return .{ .ptr = qtc.QSslKey_new4(@ptrCast(_handle)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslKey `
    ///
    pub fn new5(other: anytype) QSslKey {
        comptime _ = @TypeOf(other)._is_QSslKey;
        return .{ .ptr = qtc.QSslKey_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn new6(encoded: []u8, _algorithm: i32, format: i32) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new6(encoded_str, @bitCast(_algorithm), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    pub fn new7(encoded: []u8, _algorithm: i32, format: i32, typeVal: i32) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new7(encoded_str, @bitCast(_algorithm), @bitCast(format), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn new8(encoded: []u8, _algorithm: i32, format: i32, typeVal: i32, passPhrase: []u8) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new8(encoded_str, @bitCast(_algorithm), @bitCast(format), @bitCast(typeVal), passPhrase_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn new9(device: anytype, _algorithm: i32, format: i32) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslKey_new9(@ptrCast(device.ptr), @bitCast(_algorithm), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    pub fn new10(device: anytype, _algorithm: i32, format: i32, typeVal: i32) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslKey_new10(@ptrCast(device.ptr), @bitCast(_algorithm), @bitCast(format), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` _algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn new11(device: anytype, _algorithm: i32, format: i32, typeVal: i32, passPhrase: []u8) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new11(@ptrCast(device.ptr), @bitCast(_algorithm), @bitCast(format), @bitCast(typeVal), passPhrase_str) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QSslKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _handle: ?*anyopaque `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    pub fn new12(_handle: ?*anyopaque, typeVal: i32) QSslKey {
        return .{ .ptr = qtc.QSslKey_new12(@ptrCast(_handle), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` other: QSslKey `
    ///
    pub fn operatorAssign(self: QSslKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslKey;
        qtc.QSslKey_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` other: QSslKey `
    ///
    pub fn swap(self: QSslKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslKey;
        qtc.QSslKey_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn isNull(self: QSslKey) bool {
        return qtc.QSslKey_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn clear(self: QSslKey) void {
        qtc.QSslKey_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn length(self: QSslKey) i32 {
        return qtc.QSslKey_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.KeyType `
    ///
    pub fn type0(self: QSslKey) i32 {
        return qtc.QSslKey_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `algorithm` instead
    ///
    pub const Algorithm = algorithm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#algorithm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.KeyAlgorithm `
    ///
    pub fn algorithm(self: QSslKey) i32 {
        return qtc.QSslKey_Algorithm(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPem` instead
    ///
    pub const ToPem = toPem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPem(self: QSslKey, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToPem(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslKey.toPem: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDer` instead
    ///
    pub const ToDer = toDer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toDer(self: QSslKey, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToDer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslKey.toDer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `handle` instead
    ///
    pub const Handle = handle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn handle(self: QSslKey) ?*anyopaque {
        return qtc.QSslKey_Handle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` key: QSslKey `
    ///
    pub fn operatorEqual(self: QSslKey, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QSslKey;
        return qtc.QSslKey_OperatorEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` key: QSslKey `
    ///
    pub fn operatorNotEqual(self: QSslKey, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QSslKey;
        return qtc.QSslKey_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `toPem1` instead
    ///
    pub const ToPem1 = toPem1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn toPem1(self: QSslKey, allocator: std.mem.Allocator, passPhrase: []u8) []u8 {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToPem1(@ptrCast(self.ptr), passPhrase_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslKey.toPem1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDer1` instead
    ///
    pub const ToDer1 = toDer1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn toDer1(self: QSslKey, allocator: std.mem.Allocator, passPhrase: []u8) []u8 {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToDer1(@ptrCast(self.ptr), passPhrase_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslKey.toDer1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#dtor.QSslKey)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslKey `
    ///
    pub fn delete(self: QSslKey) void {
        qtc.QSslKey_Delete(@ptrCast(self.ptr));
    }
};
