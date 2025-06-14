const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcryptographichash_enums = @import("libqcryptographichash.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmessageauthenticationcode.html
pub const qmessageauthenticationcode = struct {
    /// New constructs a new QMessageAuthenticationCode object.
    ///
    /// ``` method: qcryptographichash_enums.Algorithm ```
    pub fn New(method: i64) QtC.QMessageAuthenticationCode {
        return qtc.QMessageAuthenticationCode_new(@intCast(method));
    }

    /// New2 constructs a new QMessageAuthenticationCode object.
    ///
    /// ``` method: qcryptographichash_enums.Algorithm, key: []u8 ```
    pub fn New2(method: i64, key: []u8) QtC.QMessageAuthenticationCode {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QMessageAuthenticationCode_new2(@intCast(method), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, key: []u8 ```
    pub fn SetKey(self: ?*anyopaque, key: []u8) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QMessageAuthenticationCode_SetKey(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, data: []const u8, length: i64 ```
    pub fn AddData(self: ?*anyopaque, data: []const u8, length: i64) void {
        const data_Cstring = data.ptr;
        qtc.QMessageAuthenticationCode_AddData(@ptrCast(self), data_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, data: []u8 ```
    pub fn AddDataWithData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QMessageAuthenticationCode_AddDataWithData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, device: QtC.QIODevice ```
    pub fn AddDataWithDevice(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QMessageAuthenticationCode_AddDataWithDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, allocator: std.mem.Allocator ```
    pub fn Result(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QMessageAuthenticationCode_Result(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hash)
    ///
    /// ``` message: []u8, key: []u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn Hash(message: []u8, key: []u8, method: i64, allocator: std.mem.Allocator) []u8 {
        const message_str = qtc.struct_libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QMessageAuthenticationCode_Hash(message_str, key_str, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#dtor.QMessageAuthenticationCode)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMessageAuthenticationCode ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Delete(@ptrCast(self));
    }
};
