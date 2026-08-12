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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMessageAuthenticationCode object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    pub fn new(method: i32) QMessageAuthenticationCode {
        return .{ .ptr = qtc.QMessageAuthenticationCode_new(@bitCast(method)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMessageAuthenticationCode object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` method: qcryptographichash_enums.Algorithm `
    ///
    /// ` key: []u8 `
    ///
    pub fn new2(method: i32, key: []u8) QMessageAuthenticationCode {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QMessageAuthenticationCode_new2(@bitCast(method), key_str) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` other: QMessageAuthenticationCode `
    ///
    pub fn swap(self: QMessageAuthenticationCode, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMessageAuthenticationCode;
        qtc.QMessageAuthenticationCode_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    pub fn reset(self: QMessageAuthenticationCode) void {
        qtc.QMessageAuthenticationCode_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` key: []u8 `
    ///
    pub fn setKey(self: QMessageAuthenticationCode, key: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QMessageAuthenticationCode_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `addData` instead
    ///
    pub const AddData = addData;

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
    pub fn addData(self: QMessageAuthenticationCode, data: [:0]const u8, length: isize) void {
        const data_Cstring = data.ptr;
        qtc.QMessageAuthenticationCode_AddData(@ptrCast(self.ptr), data_Cstring, @bitCast(length));
    }

    /// ### DEPRECATED: Use `addData2` instead
    ///
    pub const AddData2 = addData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` data: []u8 `
    ///
    pub fn addData2(self: QMessageAuthenticationCode, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QMessageAuthenticationCode_AddData2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `addData3` instead
    ///
    pub const AddData3 = addData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` device: QIODevice `
    ///
    pub fn addData3(self: QMessageAuthenticationCode, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QMessageAuthenticationCode_AddData3(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `resultView` instead
    ///
    pub const ResultView = resultView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#resultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resultView(self: QMessageAuthenticationCode, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_ResultView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.resultView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `result` instead
    ///
    pub const Result = result;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn result(self: QMessageAuthenticationCode, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMessageAuthenticationCode_Result(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.result: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hash` instead
    ///
    pub const Hash = hash;

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
    pub fn hash(allocator: std.mem.Allocator, message: []u8, key: []u8, method: i32) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.hash: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto` instead
    ///
    pub const HashInto = hashInto;

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
    pub fn hashInto(allocator: std.mem.Allocator, buffer: []u8, message: []u8, key: []u8, method: i32) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.hashInto: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto2` instead
    ///
    pub const HashInto2 = hashInto2;

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
    pub fn hashInto2(allocator: std.mem.Allocator, buffer: []u8, message: []u8, key: []u8, method: i32) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.hashInto2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto4` instead
    ///
    pub const HashInto4 = hashInto4;

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
    pub fn hashInto4(allocator: std.mem.Allocator, buffer: []u8, messageParts: [][]u8, key: []u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_arr = allocator.alloc(qtc.libqt_string, messageParts.len) catch @panic("QMessageAuthenticationCode.hashInto4: Memory allocation failed");
        defer allocator.free(messageParts_arr);
        for (messageParts, 0..messageParts.len) |str_item, i|
            messageParts_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.hashInto4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hashInto5` instead
    ///
    pub const HashInto5 = hashInto5;

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
    pub fn hashInto5(allocator: std.mem.Allocator, buffer: []u8, messageParts: [][]u8, key: []u8, method: i32) []u8 {
        const buffer_list = qtc.libqt_list{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        const messageParts_arr = allocator.alloc(qtc.libqt_string, messageParts.len) catch @panic("QMessageAuthenticationCode.hashInto5: Memory allocation failed");
        defer allocator.free(messageParts_arr);
        for (messageParts, 0..messageParts.len) |str_item, i|
            messageParts_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMessageAuthenticationCode.hashInto5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#dtor.QMessageAuthenticationCode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageAuthenticationCode `
    ///
    pub fn delete(self: QMessageAuthenticationCode) void {
        qtc.QMessageAuthenticationCode_Delete(@ptrCast(self.ptr));
    }
};
