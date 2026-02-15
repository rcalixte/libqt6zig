const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html)
pub const qwebsockethandshakeoptions = struct {
    /// New constructs a new QWebSocketHandshakeOptions object.
    ///
    pub fn New() QtC.QWebSocketHandshakeOptions {
        return qtc.QWebSocketHandshakeOptions_new();
    }

    /// New2 constructs a new QWebSocketHandshakeOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebSocketHandshakeOptions `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QWebSocketHandshakeOptions {
        return qtc.QWebSocketHandshakeOptions_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketHandshakeOptions `
    ///
    /// ` other: QtC.QWebSocketHandshakeOptions `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebSocketHandshakeOptions_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketHandshakeOptions `
    ///
    /// ` other: QtC.QWebSocketHandshakeOptions `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebSocketHandshakeOptions_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#subprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketHandshakeOptions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subprotocols(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebSocketHandshakeOptions_Subprotocols(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qwebsockethandshakeoptions.Subprotocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebsockethandshakeoptions.Subprotocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#setSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketHandshakeOptions `
    ///
    /// ` protocols: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetSubprotocols(self: ?*anyopaque, protocols: []const []const u8, allocator: std.mem.Allocator) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("qwebsockethandshakeoptions.SetSubprotocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |item, i| {
            protocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QWebSocketHandshakeOptions_SetSubprotocols(@ptrCast(self), protocols_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#dtor.QWebSocketHandshakeOptions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebSocketHandshakeOptions `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebSocketHandshakeOptions_Delete(@ptrCast(self));
    }
};
