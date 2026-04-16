const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qcryptographichash_enums = @import("libqcryptographichash.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html)
pub const QMessageAuthenticationCode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMessageAuthenticationCode,

    pub const _is_QMessageAuthenticationCode = {};

    /// New constructs a new QMessageAuthenticationCode object.
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn New(method: i32) QMessageAuthenticationCode {
        return .{ .ptr = qtc.QMessageAuthenticationCode_new(@bitCast(method)) };
    }

    /// New2 constructs a new QMessageAuthenticationCode object.
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` key: []u8 `
    ///
    pub fn New2(method: i32, key: []u8) QMessageAuthenticationCode {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QMessageAuthenticationCode_new2(@bitCast(method), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` other: QMessageAuthenticationCode `
    ///
    pub fn Swap(self: QMessageAuthenticationCode, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMessageAuthenticationCode;
        qtc.QMessageAuthenticationCode_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    pub fn Reset(self: QMessageAuthenticationCode) void {
        qtc.QMessageAuthenticationCode_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` key: []u8 `
    ///
    pub fn SetKey(self: QMessageAuthenticationCode, key: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QMessageAuthenticationCode_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` length: isize `
    ///
    pub fn AddData(self: QMessageAuthenticationCode, data: [:0]const u8, length: isize) void {
        const data_Cstring = data.ptr;
        qtc.QMessageAuthenticationCode_AddData(@ptrCast(self.ptr), data_Cstring, @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` data: []u8 `
    ///
    pub fn AddData2(self: QMessageAuthenticationCode, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QMessageAuthenticationCode_AddData2(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` device: QIODevice `
    ///
    pub fn AddData3(self: QMessageAuthenticationCode, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QMessageAuthenticationCode_AddData3(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#resultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResultView(self: QMessageAuthenticationCode, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_ResultView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.ResultView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Result(self: QMessageAuthenticationCode, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Result(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` message: []u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn Hash(allocator: std.mem.Allocator, message: []u8, key: []u8, method: i32) []u8 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Hash(message_str, key_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.Hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` message: []u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto(allocator: std.mem.Allocator, buffer: []u8, message: []u8, key: []u8, method: i32) []u8 {
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
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto(buffer_list, message_str, key_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` message: []u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto2(allocator: std.mem.Allocator, buffer: []u8, message: []u8, key: []u8, method: i32) []u8 {
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
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto2(buffer_list, message_str, key_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` messageParts: [][]u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto4(allocator: std.mem.Allocator, buffer: []u8, messageParts: [][]u8, key: []u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_arr = allocator.alloc(qtc.libqt_string, messageParts.len) catch @panic("qmessageauthenticationcode.HashInto4: Memory allocation failed");
        defer allocator.free(messageParts_arr);
        for (messageParts, 0..messageParts.len) |item, i|
            messageParts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const messageParts_list = qtc.libqt_list{
            .len = messageParts.len,
            .data = messageParts_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto4(buffer_list, messageParts_list, key_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` buffer: []u8 `
    ///
    /// ` messageParts: [][]u8 `
    ///
    /// ` key: []u8 `
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn HashInto5(allocator: std.mem.Allocator, buffer: []u8, messageParts: [][]u8, key: []u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_arr = allocator.alloc(qtc.libqt_string, messageParts.len) catch @panic("qmessageauthenticationcode.HashInto5: Memory allocation failed");
        defer allocator.free(messageParts_arr);
        for (messageParts, 0..messageParts.len) |item, i|
            messageParts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const messageParts_list = qtc.libqt_list{
            .len = messageParts.len,
            .data = messageParts_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_HashInto5(buffer_list, messageParts_list, key_str, @bitCast(method));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessageauthenticationcode.HashInto5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#dtor.QMessageAuthenticationCode)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    pub fn Delete(self: QMessageAuthenticationCode) void {
        qtc.QMessageAuthenticationCode_Delete(@ptrCast(self.ptr));
    }
};
