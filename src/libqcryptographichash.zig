const C = @import("qt6c");
const qcryptographichash_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcryptographichash.html
pub const qcryptographichash = struct {
    /// New constructs a new QCryptographicHash object.
    ///
    /// ``` method: qcryptographichash_enums.Algorithm ```
    pub fn New(method: i64) ?*C.QCryptographicHash {
        return C.QCryptographicHash_new(@intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
    ///
    /// ``` self: ?*C.QCryptographicHash ```
    pub fn Reset(self: ?*anyopaque) void {
        C.QCryptographicHash_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ``` self: ?*C.QCryptographicHash, data: []const u8, length: i64 ```
    pub fn AddData(self: ?*anyopaque, data: []const u8, length: i64) void {
        const data_Cstring = @constCast(data.ptr);
        C.QCryptographicHash_AddData(@ptrCast(self), data_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ``` self: ?*C.QCryptographicHash, data: []const u8 ```
    pub fn AddDataWithData(self: ?*anyopaque, data: []const u8) void {
        C.QCryptographicHash_AddDataWithData(@ptrCast(self), @ptrCast(@constCast(&data)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ``` self: ?*C.QCryptographicHash, device: ?*C.QIODevice ```
    pub fn AddDataWithDevice(self: ?*anyopaque, device: ?*anyopaque) bool {
        return C.QCryptographicHash_AddDataWithDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#result)
    ///
    /// ``` self: ?*C.QCryptographicHash, allocator: std.mem.Allocator ```
    pub fn Result(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QCryptographicHash_Result(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
    ///
    /// ``` self: ?*C.QCryptographicHash, allocator: std.mem.Allocator ```
    pub fn ResultView(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCryptographicHash_ResultView(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hash)
    ///
    /// ``` data: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn Hash(data: []const u8, method: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QCryptographicHash_Hash(@ptrCast(@constCast(&data)), @intCast(method));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
    ///
    /// ``` method: qcryptographichash_enums.Algorithm ```
    pub fn HashLength(method: i64) i32 {
        return C.QCryptographicHash_HashLength(@intCast(method));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCryptographicHash ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCryptographicHash_Delete(@ptrCast(self));
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
    };
};
