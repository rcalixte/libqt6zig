const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html)
pub const QWebSocketCorsAuthenticator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebSocketCorsAuthenticator,

    pub const _is_QWebSocketCorsAuthenticator = {};

    /// New constructs a new QWebSocketCorsAuthenticator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    pub fn New(origin: []const u8) QWebSocketCorsAuthenticator {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };
        return .{ .ptr = qtc.QWebSocketCorsAuthenticator_new(origin_str) };
    }

    /// New2 constructs a new QWebSocketCorsAuthenticator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebSocketCorsAuthenticator `
    ///
    pub fn New2(other: anytype) QWebSocketCorsAuthenticator {
        comptime _ = @TypeOf(other)._is_QWebSocketCorsAuthenticator;
        return .{ .ptr = qtc.QWebSocketCorsAuthenticator_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` other: QWebSocketCorsAuthenticator `
    ///
    pub fn Swap(self: QWebSocketCorsAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebSocketCorsAuthenticator;
        qtc.QWebSocketCorsAuthenticator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` other: QWebSocketCorsAuthenticator `
    ///
    pub fn OperatorAssign(self: QWebSocketCorsAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebSocketCorsAuthenticator;
        qtc.QWebSocketCorsAuthenticator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Origin(self: QWebSocketCorsAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketCorsAuthenticator_Origin(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketcorsauthenticator.Origin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#setAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` allowed: bool `
    ///
    pub fn SetAllowed(self: QWebSocketCorsAuthenticator, allowed: bool) void {
        qtc.QWebSocketCorsAuthenticator_SetAllowed(@ptrCast(self.ptr), allowed);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#allowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    pub fn Allowed(self: QWebSocketCorsAuthenticator) bool {
        return qtc.QWebSocketCorsAuthenticator_Allowed(@ptrCast(self.ptr));
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
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    pub fn Delete(self: QWebSocketCorsAuthenticator) void {
        qtc.QWebSocketCorsAuthenticator_Delete(@ptrCast(self.ptr));
    }
};
