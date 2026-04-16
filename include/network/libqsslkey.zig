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

    /// New constructs a new QSslKey object.
    ///
    pub fn New() QSslKey {
        return .{ .ptr = qtc.QSslKey_new() };
    }

    /// New2 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    pub fn New2(encoded: []u8, algorithm: i32) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new2(encoded_str, @bitCast(algorithm)) };
    }

    /// New3 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    pub fn New3(device: anytype, algorithm: i32) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslKey_new3(@ptrCast(device.ptr), @bitCast(algorithm)) };
    }

    /// New4 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` handle: ?*anyopaque `
    ///
    pub fn New4(handle: ?*anyopaque) QSslKey {
        return .{ .ptr = qtc.QSslKey_new4(@ptrCast(handle)) };
    }

    /// New5 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslKey `
    ///
    pub fn New5(other: anytype) QSslKey {
        comptime _ = @TypeOf(other)._is_QSslKey;
        return .{ .ptr = qtc.QSslKey_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn New6(encoded: []u8, algorithm: i32, format: i32) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new6(encoded_str, @bitCast(algorithm), @bitCast(format)) };
    }

    /// New7 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    pub fn New7(encoded: []u8, algorithm: i32, format: i32, typeVal: i32) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new7(encoded_str, @bitCast(algorithm), @bitCast(format), @bitCast(typeVal)) };
    }

    /// New8 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn New8(encoded: []u8, algorithm: i32, format: i32, typeVal: i32, passPhrase: []u8) QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new8(encoded_str, @bitCast(algorithm), @bitCast(format), @bitCast(typeVal), passPhrase_str) };
    }

    /// New9 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn New9(device: anytype, algorithm: i32, format: i32) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslKey_new9(@ptrCast(device.ptr), @bitCast(algorithm), @bitCast(format)) };
    }

    /// New10 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    pub fn New10(device: anytype, algorithm: i32, format: i32, typeVal: i32) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslKey_new10(@ptrCast(device.ptr), @bitCast(algorithm), @bitCast(format), @bitCast(typeVal)) };
    }

    /// New11 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn New11(device: anytype, algorithm: i32, format: i32, typeVal: i32, passPhrase: []u8) QSslKey {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        return .{ .ptr = qtc.QSslKey_new11(@ptrCast(device.ptr), @bitCast(algorithm), @bitCast(format), @bitCast(typeVal), passPhrase_str) };
    }

    /// New12 constructs a new QSslKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` handle: ?*anyopaque `
    ///
    /// ` typeVal: qssl_enums.KeyType `
    ///
    pub fn New12(handle: ?*anyopaque, typeVal: i32) QSslKey {
        return .{ .ptr = qtc.QSslKey_new12(@ptrCast(handle), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` other: QSslKey `
    ///
    pub fn OperatorAssign(self: QSslKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslKey;
        qtc.QSslKey_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` other: QSslKey `
    ///
    pub fn Swap(self: QSslKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslKey;
        qtc.QSslKey_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn IsNull(self: QSslKey) bool {
        return qtc.QSslKey_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn Clear(self: QSslKey) void {
        qtc.QSslKey_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn Length(self: QSslKey) i32 {
        return qtc.QSslKey_Length(@ptrCast(self.ptr));
    }

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
    pub fn Type(self: QSslKey) i32 {
        return qtc.QSslKey_Type(@ptrCast(self.ptr));
    }

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
    pub fn Algorithm(self: QSslKey) i32 {
        return qtc.QSslKey_Algorithm(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPem(self: QSslKey, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToPem(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToPem: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDer(self: QSslKey, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToDer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToDer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    pub fn Handle(self: QSslKey) ?*anyopaque {
        return qtc.QSslKey_Handle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` key: QSslKey `
    ///
    pub fn OperatorEqual(self: QSslKey, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QSslKey;
        return qtc.QSslKey_OperatorEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslKey `
    ///
    /// ` key: QSslKey `
    ///
    pub fn OperatorNotEqual(self: QSslKey, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QSslKey;
        return qtc.QSslKey_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

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
    pub fn ToPem1(self: QSslKey, allocator: std.mem.Allocator, passPhrase: []u8) []u8 {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToPem1(@ptrCast(self.ptr), passPhrase_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToPem1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ToDer1(self: QSslKey, allocator: std.mem.Allocator, passPhrase: []u8) []u8 {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QSslKey_ToDer1(@ptrCast(self.ptr), passPhrase_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToDer1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#dtor.QSslKey)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslKey `
    ///
    pub fn Delete(self: QSslKey) void {
        qtc.QSslKey_Delete(@ptrCast(self.ptr));
    }
};
