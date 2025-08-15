const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcryptographichash_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcryptographichash.html
pub const qcryptographichash = struct {
    /// New constructs a new QCryptographicHash object.
    ///
    /// ``` method: qcryptographichash_enums.Algorithm ```
    pub fn New(method: i64) QtC.QCryptographicHash {
        return qtc.QCryptographicHash_new(@intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#swap)
    ///
    /// ``` self: QtC.QCryptographicHash, other: QtC.QCryptographicHash ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCryptographicHash_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
    ///
    /// ``` self: QtC.QCryptographicHash ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QCryptographicHash_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#algorithm)
    ///
    /// ``` self: QtC.QCryptographicHash ```
    ///
    /// Returns: ``` qcryptographichash_enums.Algorithm ```
    pub fn Algorithm(self: ?*anyopaque) i64 {
        return qtc.QCryptographicHash_Algorithm(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ``` self: QtC.QCryptographicHash, data: []const u8, length: i64 ```
    pub fn AddData(self: ?*anyopaque, data: []const u8, length: i64) void {
        const data_Cstring = data.ptr;
        qtc.QCryptographicHash_AddData(@ptrCast(self), data_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ``` self: QtC.QCryptographicHash, data: []const u8 ```
    pub fn AddData2(self: ?*anyopaque, data: []const u8) void {
        qtc.QCryptographicHash_AddData2(@ptrCast(self), data.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ``` self: QtC.QCryptographicHash, device: QtC.QIODevice ```
    pub fn AddData3(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QCryptographicHash_AddData3(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#result)
    ///
    /// ``` self: QtC.QCryptographicHash, allocator: std.mem.Allocator ```
    pub fn Result(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCryptographicHash_Result(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.Result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
    ///
    /// ``` self: QtC.QCryptographicHash, allocator: std.mem.Allocator ```
    pub fn ResultView(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCryptographicHash_ResultView(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcryptographichash.ResultView: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hash)
    ///
    /// ``` data: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn Hash(data: []const u8, method: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCryptographicHash_Hash(data.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.Hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ``` buffer: []i8, data: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto(buffer: []i8, data: []const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const _str = qtc.QCryptographicHash_HashInto(buffer_list, data.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcryptographichash.HashInto: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ``` buffer: []u8, data: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto2(buffer: []u8, data: []const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const _str = qtc.QCryptographicHash_HashInto2(buffer_list, data.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcryptographichash.HashInto2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ``` buffer: []i8, data: [][]const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto4(buffer: []i8, data: [][]const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = @ptrCast(data.ptr),
        };
        const _str = qtc.QCryptographicHash_HashInto4(buffer_list, data_list, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcryptographichash.HashInto4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ``` buffer: []u8, data: [][]const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto5(buffer: []u8, data: [][]const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = @ptrCast(data.ptr),
        };
        const _str = qtc.QCryptographicHash_HashInto5(buffer_list, data_list, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcryptographichash.HashInto5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
    ///
    /// ``` method: qcryptographichash_enums.Algorithm ```
    pub fn HashLength(method: i64) i32 {
        return qtc.QCryptographicHash_HashLength(@intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#supportsAlgorithm)
    ///
    /// ``` method: qcryptographichash_enums.Algorithm ```
    pub fn SupportsAlgorithm(method: i64) bool {
        return qtc.QCryptographicHash_SupportsAlgorithm(@intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#dtor.QCryptographicHash)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCryptographicHash ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCryptographicHash_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcryptographichash.html#types
pub const enums = struct {
    pub const Algorithm = enum {
        pub const Md4: i32 = 0;
        pub const Md5: i32 = 1;
        pub const Sha1: i32 = 2;
        pub const Sha224: i32 = 3;
        pub const Sha256: i32 = 4;
        pub const Sha384: i32 = 5;
        pub const Sha512: i32 = 6;
        pub const Keccak_224: i32 = 7;
        pub const Keccak_256: i32 = 8;
        pub const Keccak_384: i32 = 9;
        pub const Keccak_512: i32 = 10;
        pub const RealSha3_224: i32 = 11;
        pub const RealSha3_256: i32 = 12;
        pub const RealSha3_384: i32 = 13;
        pub const RealSha3_512: i32 = 14;
        pub const Sha3_224: i32 = 11;
        pub const Sha3_256: i32 = 12;
        pub const Sha3_384: i32 = 13;
        pub const Sha3_512: i32 = 14;
        pub const Blake2b_160: i32 = 15;
        pub const Blake2b_256: i32 = 16;
        pub const Blake2b_384: i32 = 17;
        pub const Blake2b_512: i32 = 18;
        pub const Blake2s_128: i32 = 19;
        pub const Blake2s_160: i32 = 20;
        pub const Blake2s_224: i32 = 21;
        pub const Blake2s_256: i32 = 22;
        pub const NumAlgorithms: i32 = 23;
    };
};
