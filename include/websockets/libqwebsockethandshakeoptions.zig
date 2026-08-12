const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html)
pub const QWebSocketHandshakeOptions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebSocketHandshakeOptions,

    pub const _is_QWebSocketHandshakeOptions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebSocketHandshakeOptions object in C++ memory
    ///
    pub fn new() QWebSocketHandshakeOptions {
        return .{ .ptr = qtc.QWebSocketHandshakeOptions_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebSocketHandshakeOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebSocketHandshakeOptions `
    ///
    pub fn new2(other: anytype) QWebSocketHandshakeOptions {
        comptime _ = @TypeOf(other)._is_QWebSocketHandshakeOptions;
        return .{ .ptr = qtc.QWebSocketHandshakeOptions_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketHandshakeOptions `
    ///
    /// ` other: QWebSocketHandshakeOptions `
    ///
    pub fn operatorAssign(self: QWebSocketHandshakeOptions, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebSocketHandshakeOptions;
        qtc.QWebSocketHandshakeOptions_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketHandshakeOptions `
    ///
    /// ` other: QWebSocketHandshakeOptions `
    ///
    pub fn swap(self: QWebSocketHandshakeOptions, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebSocketHandshakeOptions;
        qtc.QWebSocketHandshakeOptions_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `subprotocols` instead
    ///
    pub const Subprotocols = subprotocols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#subprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketHandshakeOptions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subprotocols(self: QWebSocketHandshakeOptions, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebSocketHandshakeOptions_Subprotocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QWebSocketHandshakeOptions.subprotocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebSocketHandshakeOptions.subprotocols: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSubprotocols` instead
    ///
    pub const SetSubprotocols = setSubprotocols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#setSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketHandshakeOptions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocols: []const []const u8 `
    ///
    pub fn setSubprotocols(self: QWebSocketHandshakeOptions, allocator: std.mem.Allocator, protocols: []const []const u8) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("QWebSocketHandshakeOptions.setSubprotocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |str_item, i|
            protocols_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QWebSocketHandshakeOptions_SetSubprotocols(@ptrCast(self.ptr), protocols_list);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#dtor.QWebSocketHandshakeOptions)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebSocketHandshakeOptions `
    ///
    pub fn delete(self: QWebSocketHandshakeOptions) void {
        qtc.QWebSocketHandshakeOptions_Delete(@ptrCast(self.ptr));
    }
};
