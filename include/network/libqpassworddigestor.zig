const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcryptographichash_enums = @import("../libqcryptographichash.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html)
pub const QPasswordDigestor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPasswordDigestor,

    pub const _is_QPasswordDigestor = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf1)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` algorithm: qcryptographichash_enums.Algorithm `
    ///
    /// ` password: []u8 `
    ///
    /// ` salt: []u8 `
    ///
    /// ` iterations: i32 `
    ///
    /// ` dkLen: u64 `
    ///
    pub fn DeriveKeyPbkdf1(allocator: std.mem.Allocator, algorithm: i32, password: []u8, salt: []u8, iterations: i32, dkLen: u64) []u8 {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        const salt_str = qtc.libqt_string{
            .len = salt.len,
            .data = salt.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QPasswordDigestor_DeriveKeyPbkdf1(@bitCast(algorithm), password_str, salt_str, @bitCast(iterations), @bitCast(dkLen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpassworddigestor.DeriveKeyPbkdf1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf2)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` algorithm: qcryptographichash_enums.Algorithm `
    ///
    /// ` password: []u8 `
    ///
    /// ` salt: []u8 `
    ///
    /// ` iterations: i32 `
    ///
    /// ` dkLen: u64 `
    ///
    pub fn DeriveKeyPbkdf2(allocator: std.mem.Allocator, algorithm: i32, password: []u8, salt: []u8, iterations: i32, dkLen: u64) []u8 {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        const salt_str = qtc.libqt_string{
            .len = salt.len,
            .data = salt.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QPasswordDigestor_DeriveKeyPbkdf2(@bitCast(algorithm), password_str, salt_str, @bitCast(iterations), @bitCast(dkLen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpassworddigestor.DeriveKeyPbkdf2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};
