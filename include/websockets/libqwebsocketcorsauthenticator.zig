const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html)
pub const qwebsocketcorsauthenticator = struct {
    /// New constructs a new QWebSocketCorsAuthenticator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    pub fn New(origin: []const u8) QtC.QWebSocketCorsAuthenticator {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };

        return qtc.QWebSocketCorsAuthenticator_new(origin_str);
    }

    /// New2 constructs a new QWebSocketCorsAuthenticator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebSocketCorsAuthenticator `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QWebSocketCorsAuthenticator {
        return qtc.QWebSocketCorsAuthenticator_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketCorsAuthenticator `
    ///
    /// ` other: QtC.QWebSocketCorsAuthenticator `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebSocketCorsAuthenticator_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketCorsAuthenticator `
    ///
    /// ` other: QtC.QWebSocketCorsAuthenticator `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebSocketCorsAuthenticator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketCorsAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Origin(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketCorsAuthenticator_Origin(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketcorsauthenticator.Origin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#setAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketCorsAuthenticator `
    ///
    /// ` allowed: bool `
    ///
    pub fn SetAllowed(self: ?*anyopaque, allowed: bool) void {
        qtc.QWebSocketCorsAuthenticator_SetAllowed(@ptrCast(self), allowed);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#allowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketCorsAuthenticator `
    ///
    pub fn Allowed(self: ?*anyopaque) bool {
        return qtc.QWebSocketCorsAuthenticator_Allowed(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#dtor.QWebSocketCorsAuthenticator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebSocketCorsAuthenticator `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWebSocketCorsAuthenticator_Delete(@ptrCast(self));
    }
};
