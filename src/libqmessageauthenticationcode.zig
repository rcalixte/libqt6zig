const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcryptographichash_enums = @import("libqcryptographichash.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html)
pub const qmessageauthenticationcode = struct {
    /// New constructs a new QMessageAuthenticationCode object.
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn New(method: i32) QtC.QMessageAuthenticationCode {
        return qtc.QMessageAuthenticationCode_new(@intCast(method));
    }

    /// New2 constructs a new QMessageAuthenticationCode object.
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` key: []u8 `
    ///
    pub fn New2(method: i32, key: []u8) QtC.QMessageAuthenticationCode {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QMessageAuthenticationCode_new2(@intCast(method), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` other: QtC.QMessageAuthenticationCode `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` key: []u8 `
    ///
    pub fn SetKey(self: ?*anyopaque, key: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QMessageAuthenticationCode_SetKey(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` length: i64 `
    ///
    pub fn AddData(self: ?*anyopaque, data: [:0]const u8, length: i64) void {
        const data_Cstring = data.ptr;
        qtc.QMessageAuthenticationCode_AddData(@ptrCast(self), data_Cstring, @intCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` data: []u8 `
    ///
    pub fn AddData2(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QMessageAuthenticationCode_AddData2(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn AddData3(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QMessageAuthenticationCode_AddData3(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#resultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResultView(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_ResultView(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.ResultView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Result(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Result(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hash)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: []u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Hash(message: []u8, key: []u8, method: i32, allocator: std.mem.Allocator) []u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Hash(message_str, key_str, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: []u8 `
    ///
    /// ` message: []u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HashInto(buffer: []u8, message: []u8, key: []u8, method: i32, allocator: std.mem.Allocator) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto(buffer_list, message_str, key_str, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: []u8 `
    ///
    /// ` message: []u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HashInto2(buffer: []u8, message: []u8, key: []u8, method: i32, allocator: std.mem.Allocator) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto2(buffer_list, message_str, key_str, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: []u8 `
    ///
    /// ` messageParts: [][]u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HashInto4(buffer: []u8, messageParts: [][]u8, key: []u8, method: i32, allocator: std.mem.Allocator) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_arr = allocator.alloc(qtc.libqt_string, messageParts.len) catch @panic("qmessageauthenticationcode.HashInto4: Memory allocation failed");
        defer allocator.free(messageParts_arr);
        for (messageParts, 0..messageParts.len) |item, i| {
            messageParts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const messageParts_list = qtc.libqt_list{
            .len = messageParts.len,
            .data = messageParts_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto4(buffer_list, messageParts_list, key_str, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: []u8 `
    ///
    /// ` messageParts: [][]u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HashInto5(buffer: []u8, messageParts: [][]u8, key: []u8, method: i32, allocator: std.mem.Allocator) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_arr = allocator.alloc(qtc.libqt_string, messageParts.len) catch @panic("qmessageauthenticationcode.HashInto5: Memory allocation failed");
        defer allocator.free(messageParts_arr);
        for (messageParts, 0..messageParts.len) |item, i| {
            messageParts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const messageParts_list = qtc.libqt_list{
            .len = messageParts.len,
            .data = messageParts_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto5(buffer_list, messageParts_list, key_str, @intCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#dtor.QMessageAuthenticationCode)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMessageAuthenticationCode `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageAuthenticationCode_Delete(@ptrCast(self));
    }
};
