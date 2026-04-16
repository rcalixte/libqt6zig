const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qcryptographichash_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html)
pub const QCryptographicHash = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCryptographicHash,

    pub const _is_QCryptographicHash = {};

    /// New constructs a new QCryptographicHash object.
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn New(method: i32) QCryptographicHash {
        return .{ .ptr = qtc.QCryptographicHash_new(@bitCast(method)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` other: QCryptographicHash `
    ///
    pub fn Swap(self: QCryptographicHash, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCryptographicHash;
        qtc.QCryptographicHash_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    pub fn Reset(self: QCryptographicHash) void {
        qtc.QCryptographicHash_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#algorithm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ## Returns:
    ///
    /// ` qcryptographichash_enums.Algorithm `
    ///
    pub fn Algorithm(self: QCryptographicHash) i32 {
        return qtc.QCryptographicHash_Algorithm(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` length: isize `
    ///
    pub fn AddData(self: QCryptographicHash, data: [:0]const u8, length: isize) void {
        const data_Cstring = data.ptr;
        qtc.QCryptographicHash_AddData(@ptrCast(self.ptr), data_Cstring, @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` data: []u8 `
    ///
    pub fn AddData2(self: QCryptographicHash, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QCryptographicHash_AddData2(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` device: QIODevice `
    ///
    pub fn AddData3(self: QCryptographicHash, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QCryptographicHash_AddData3(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Result(self: QCryptographicHash, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_Result(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.Result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResultView(self: QCryptographicHash, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_ResultView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.ResultView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn Hash(allocator: std.mem.Allocator, data: []u8, method: i32) []u8 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_Hash(data_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.Hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto(allocator: std.mem.Allocator, buffer: []u8, data: []u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_HashInto(buffer_list, data_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.HashInto: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto2(allocator: std.mem.Allocator, buffer: []u8, data: []u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_HashInto2(buffer_list, data_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.HashInto2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` data: [][]u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto4(allocator: std.mem.Allocator, buffer: []u8, data: [][]u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_arr = allocator.alloc(qtc.libqt_string, data.len) catch @panic("qcryptographichash.HashInto4: Memory allocation failed");
        defer allocator.free(data_arr);
        for (data, 0..data.len) |item, i|
            data_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = data_arr.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_HashInto4(buffer_list, data_list, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.HashInto4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` data: [][]u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto5(allocator: std.mem.Allocator, buffer: []u8, data: [][]u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_arr = allocator.alloc(qtc.libqt_string, data.len) catch @panic("qcryptographichash.HashInto5: Memory allocation failed");
        defer allocator.free(data_arr);
        for (data, 0..data.len) |item, i|
            data_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = data_arr.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_HashInto5(buffer_list, data_list, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcryptographichash.HashInto5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashLength(method: i32) i32 {
        return qtc.QCryptographicHash_HashLength(@bitCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#supportsAlgorithm)
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn SupportsAlgorithm(method: i32) bool {
        return qtc.QCryptographicHash_SupportsAlgorithm(@bitCast(method));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#dtor.QCryptographicHash)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCryptographicHash `
    ///
    pub fn Delete(self: QCryptographicHash) void {
        qtc.QCryptographicHash_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#public-types)
pub const enums = struct {
    pub const Algorithm = enum(i32) {
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
