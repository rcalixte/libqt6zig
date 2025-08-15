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
    /// ``` method: qcryptographichash_enums.Algorithm, key: []const u8 ```
    pub fn New2(method: i64, key: []const u8) QtC.QMessageAuthenticationCode {
        return qtc.QMessageAuthenticationCode_new2(@intCast(method), key.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#swap)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, other: QtC.QMessageAuthenticationCode ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, key: []const u8 ```
    pub fn SetKey(self: ?*anyopaque, key: []const u8) void {
        qtc.QMessageAuthenticationCode_SetKey(@ptrCast(self), key.ptr);
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
    /// ``` self: QtC.QMessageAuthenticationCode, data: []const u8 ```
    pub fn AddData2(self: ?*anyopaque, data: []const u8) void {
        qtc.QMessageAuthenticationCode_AddData2(@ptrCast(self), data.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, device: QtC.QIODevice ```
    pub fn AddData3(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QMessageAuthenticationCode_AddData3(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#resultView)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, allocator: std.mem.Allocator ```
    pub fn ResultView(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageAuthenticationCode_ResultView(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.ResultView: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
    ///
    /// ``` self: QtC.QMessageAuthenticationCode, allocator: std.mem.Allocator ```
    pub fn Result(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Result(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hash)
    ///
    /// ``` message: []const u8, key: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn Hash(message: []const u8, key: []const u8, method: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Hash(message.ptr, key.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ``` buffer: []i8, message: []const u8, key: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto(buffer: []i8, message: []const u8, key: []const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const _str = qtc.QMessageAuthenticationCode_HashInto(buffer_list, message.ptr, key.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ``` buffer: []u8, message: []const u8, key: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto2(buffer: []u8, message: []const u8, key: []const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const _str = qtc.QMessageAuthenticationCode_HashInto2(buffer_list, message.ptr, key.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ``` buffer: []i8, messageParts: [][]const u8, key: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto4(buffer: []i8, messageParts: [][]const u8, key: []const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_list = qtc.libqt_list{
            .len = messageParts.len,
            .data = @ptrCast(messageParts.ptr),
        };
        const _str = qtc.QMessageAuthenticationCode_HashInto4(buffer_list, messageParts_list, key.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ``` buffer: []u8, messageParts: [][]const u8, key: []const u8, method: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn HashInto5(buffer: []u8, messageParts: [][]const u8, key: []const u8, method: i64, allocator: std.mem.Allocator) []const u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_list = qtc.libqt_list{
            .len = messageParts.len,
            .data = @ptrCast(messageParts.ptr),
        };
        const _str = qtc.QMessageAuthenticationCode_HashInto5(buffer_list, messageParts_list, key.ptr, @intCast(method));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessageauthenticationcode.HashInto5: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
