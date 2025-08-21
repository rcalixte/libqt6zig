const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcryptographichash_enums = @import("../libqcryptographichash.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpassworddigestor.html
pub const qpassworddigestor = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf1)
    ///
    /// ``` param1: qcryptographichash_enums.Algorithm, param2: []u8, param3: []u8, param4: i32, param5: u64, allocator: std.mem.Allocator ```
    pub fn DeriveKeyPbkdf1(param1: i32, param2: []u8, param3: []u8, param4: i32, param5: u64, allocator: std.mem.Allocator) []u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QPasswordDigestor_DeriveKeyPbkdf1(@intCast(param1), param2_str, param3_str, @intCast(param4), @intCast(param5));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpassworddigestor.DeriveKeyPbkdf1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf2)
    ///
    /// ``` param1: qcryptographichash_enums.Algorithm, param2: []u8, param3: []u8, param4: i32, param5: u64, allocator: std.mem.Allocator ```
    pub fn DeriveKeyPbkdf2(param1: i32, param2: []u8, param3: []u8, param4: i32, param5: u64, allocator: std.mem.Allocator) []u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QPasswordDigestor_DeriveKeyPbkdf2(@intCast(param1), param2_str, param3_str, @intCast(param4), @intCast(param5));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpassworddigestor.DeriveKeyPbkdf2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};
