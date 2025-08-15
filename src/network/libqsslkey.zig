const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qssl_enums = @import("libqssl.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslkey.html
pub const qsslkey = struct {
    /// New constructs a new QSslKey object.
    ///
    ///
    pub fn New() QtC.QSslKey {
        return qtc.QSslKey_new();
    }

    /// New2 constructs a new QSslKey object.
    ///
    /// ``` encoded: []u8, algorithm: qssl_enums.KeyAlgorithm ```
    pub fn New2(encoded: []u8, algorithm: i64) QtC.QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };

        return qtc.QSslKey_new2(encoded_str, @intCast(algorithm));
    }

    /// New3 constructs a new QSslKey object.
    ///
    /// ``` device: QtC.QIODevice, algorithm: qssl_enums.KeyAlgorithm ```
    pub fn New3(device: ?*anyopaque, algorithm: i64) QtC.QSslKey {
        return qtc.QSslKey_new3(@ptrCast(device), @intCast(algorithm));
    }

    /// New4 constructs a new QSslKey object.
    ///
    /// ``` handle: ?*anyopaque ```
    pub fn New4(handle: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslKey_new4(handle);
    }

    /// New5 constructs a new QSslKey object.
    ///
    /// ``` other: QtC.QSslKey ```
    pub fn New5(other: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslKey_new5(@ptrCast(other));
    }

    /// New6 constructs a new QSslKey object.
    ///
    /// ``` encoded: []u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat ```
    pub fn New6(encoded: []u8, algorithm: i64, format: i64) QtC.QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };

        return qtc.QSslKey_new6(encoded_str, @intCast(algorithm), @intCast(format));
    }

    /// New7 constructs a new QSslKey object.
    ///
    /// ``` encoded: []u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat, typeVal: qssl_enums.KeyType ```
    pub fn New7(encoded: []u8, algorithm: i64, format: i64, typeVal: i64) QtC.QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };

        return qtc.QSslKey_new7(encoded_str, @intCast(algorithm), @intCast(format), @intCast(typeVal));
    }

    /// New8 constructs a new QSslKey object.
    ///
    /// ``` encoded: []u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat, typeVal: qssl_enums.KeyType, passPhrase: []u8 ```
    pub fn New8(encoded: []u8, algorithm: i64, format: i64, typeVal: i64, passPhrase: []u8) QtC.QSslKey {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };

        return qtc.QSslKey_new8(encoded_str, @intCast(algorithm), @intCast(format), @intCast(typeVal), passPhrase_str);
    }

    /// New9 constructs a new QSslKey object.
    ///
    /// ``` device: QtC.QIODevice, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat ```
    pub fn New9(device: ?*anyopaque, algorithm: i64, format: i64) QtC.QSslKey {
        return qtc.QSslKey_new9(@ptrCast(device), @intCast(algorithm), @intCast(format));
    }

    /// New10 constructs a new QSslKey object.
    ///
    /// ``` device: QtC.QIODevice, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat, typeVal: qssl_enums.KeyType ```
    pub fn New10(device: ?*anyopaque, algorithm: i64, format: i64, typeVal: i64) QtC.QSslKey {
        return qtc.QSslKey_new10(@ptrCast(device), @intCast(algorithm), @intCast(format), @intCast(typeVal));
    }

    /// New11 constructs a new QSslKey object.
    ///
    /// ``` device: QtC.QIODevice, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat, typeVal: qssl_enums.KeyType, passPhrase: []u8 ```
    pub fn New11(device: ?*anyopaque, algorithm: i64, format: i64, typeVal: i64, passPhrase: []u8) QtC.QSslKey {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };

        return qtc.QSslKey_new11(@ptrCast(device), @intCast(algorithm), @intCast(format), @intCast(typeVal), passPhrase_str);
    }

    /// New12 constructs a new QSslKey object.
    ///
    /// ``` handle: ?*anyopaque, typeVal: qssl_enums.KeyType ```
    pub fn New12(handle: ?*anyopaque, typeVal: i64) QtC.QSslKey {
        return qtc.QSslKey_new12(handle, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator-eq)
    ///
    /// ``` self: QtC.QSslKey, other: QtC.QSslKey ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslKey_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#swap)
    ///
    /// ``` self: QtC.QSslKey, other: QtC.QSslKey ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslKey_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#isNull)
    ///
    /// ``` self: QtC.QSslKey ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSslKey_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#clear)
    ///
    /// ``` self: QtC.QSslKey ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSslKey_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#length)
    ///
    /// ``` self: QtC.QSslKey ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QSslKey_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#type)
    ///
    /// ``` self: QtC.QSslKey ```
    ///
    /// Returns: ``` qssl_enums.KeyType ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QSslKey_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#algorithm)
    ///
    /// ``` self: QtC.QSslKey ```
    ///
    /// Returns: ``` qssl_enums.KeyAlgorithm ```
    pub fn Algorithm(self: ?*anyopaque) i64 {
        return qtc.QSslKey_Algorithm(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toPem)
    ///
    /// ``` self: QtC.QSslKey, allocator: std.mem.Allocator ```
    pub fn ToPem(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslKey_ToPem(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToPem: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toDer)
    ///
    /// ``` self: QtC.QSslKey, allocator: std.mem.Allocator ```
    pub fn ToDer(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslKey_ToDer(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToDer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#handle)
    ///
    /// ``` self: QtC.QSslKey ```
    pub fn Handle(self: ?*anyopaque) ?*anyopaque {
        return qtc.QSslKey_Handle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QSslKey, key: QtC.QSslKey ```
    pub fn OperatorEqual(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QSslKey_OperatorEqual(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator-not-eq)
    ///
    /// ``` self: QtC.QSslKey, key: QtC.QSslKey ```
    pub fn OperatorNotEqual(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QSslKey_OperatorNotEqual(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toPem)
    ///
    /// ``` self: QtC.QSslKey, passPhrase: []u8, allocator: std.mem.Allocator ```
    pub fn ToPem1(self: ?*anyopaque, passPhrase: []u8, allocator: std.mem.Allocator) []u8 {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QSslKey_ToPem1(@ptrCast(self), passPhrase_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToPem1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toDer)
    ///
    /// ``` self: QtC.QSslKey, passPhrase: []u8, allocator: std.mem.Allocator ```
    pub fn ToDer1(self: ?*anyopaque, passPhrase: []u8, allocator: std.mem.Allocator) []u8 {
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QSslKey_ToDer1(@ptrCast(self), passPhrase_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslkey.ToDer1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#dtor.QSslKey)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslKey ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslKey_Delete(@ptrCast(self));
    }
};
