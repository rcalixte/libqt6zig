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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCryptographicHash object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn new(method: i32) QCryptographicHash {
        return .{ .ptr = qtc.QCryptographicHash_new(@bitCast(method)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` other: QCryptographicHash `
    ///
    pub fn swap(self: QCryptographicHash, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCryptographicHash;
        qtc.QCryptographicHash_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    pub fn reset(self: QCryptographicHash) void {
        qtc.QCryptographicHash_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `algorithm` instead
    ///
    pub const Algorithm = algorithm;

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
    pub fn algorithm(self: QCryptographicHash) i32 {
        return qtc.QCryptographicHash_Algorithm(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addData` instead
    ///
    pub const AddData = addData;

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
    pub fn addData(self: QCryptographicHash, data: [:0]const u8, length: isize) void {
        const data_Cstring = data.ptr;
        qtc.QCryptographicHash_AddData(@ptrCast(self.ptr), data_Cstring, @bitCast(length));
    }

    /// ### DEPRECATED: Use `addData2` instead
    ///
    pub const AddData2 = addData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` data: []u8 `
    ///
    pub fn addData2(self: QCryptographicHash, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QCryptographicHash_AddData2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `addData3` instead
    ///
    pub const AddData3 = addData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` device: QIODevice `
    ///
    pub fn addData3(self: QCryptographicHash, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QCryptographicHash_AddData3(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `result` instead
    ///
    pub const Result = result;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn result(self: QCryptographicHash, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_Result(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resultView` instead
    ///
    pub const ResultView = resultView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCryptographicHash `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resultView(self: QCryptographicHash, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_ResultView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.resultView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hash` instead
    ///
    pub const Hash = hash;

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
    pub fn hash(allocator: std.mem.Allocator, data: []u8, method: i32) []u8 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_Hash(data_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto` instead
    ///
    pub const HashInto = hashInto;

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
    pub fn hashInto(allocator: std.mem.Allocator, buffer: []u8, data: []u8, method: i32) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.hashInto: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto2` instead
    ///
    pub const HashInto2 = hashInto2;

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
    pub fn hashInto2(allocator: std.mem.Allocator, buffer: []u8, data: []u8, method: i32) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.hashInto2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto4` instead
    ///
    pub const HashInto4 = hashInto4;

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
    pub fn hashInto4(allocator: std.mem.Allocator, buffer: []u8, data: [][]u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_arr = allocator.alloc(qtc.libqt_string, data.len) catch @panic("QCryptographicHash.hashInto4: Memory allocation failed");
        defer allocator.free(data_arr);
        for (data, 0..data.len) |str_item, i|
            data_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = data_arr.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_HashInto4(buffer_list, data_list, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.hashInto4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto5` instead
    ///
    pub const HashInto5 = hashInto5;

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
    pub fn hashInto5(allocator: std.mem.Allocator, buffer: []u8, data: [][]u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const data_arr = allocator.alloc(qtc.libqt_string, data.len) catch @panic("QCryptographicHash.hashInto5: Memory allocation failed");
        defer allocator.free(data_arr);
        for (data, 0..data.len) |str_item, i|
            data_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = data_arr.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QCryptographicHash_HashInto5(buffer_list, data_list, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCryptographicHash.hashInto5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashLength` instead
    ///
    pub const HashLength = hashLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn hashLength(method: i32) i32 {
        return qtc.QCryptographicHash_HashLength(@bitCast(method));
    }

    /// ### DEPRECATED: Use `supportsAlgorithm` instead
    ///
    pub const SupportsAlgorithm = supportsAlgorithm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#supportsAlgorithm)
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn supportsAlgorithm(method: i32) bool {
        return qtc.QCryptographicHash_SupportsAlgorithm(@bitCast(method));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#dtor.QCryptographicHash)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCryptographicHash `
    ///
    pub fn delete(self: QCryptographicHash) void {
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
