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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebSocketCorsAuthenticator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _origin: []const u8 `
    ///
    pub fn new(_origin: []const u8) QWebSocketCorsAuthenticator {
        const origin_str = qtc.libqt_string{
            .len = _origin.len,
            .data = _origin.ptr,
        };
        return .{ .ptr = qtc.QWebSocketCorsAuthenticator_new(origin_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebSocketCorsAuthenticator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebSocketCorsAuthenticator `
    ///
    pub fn new2(other: anytype) QWebSocketCorsAuthenticator {
        comptime _ = @TypeOf(other)._is_QWebSocketCorsAuthenticator;
        return .{ .ptr = qtc.QWebSocketCorsAuthenticator_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` other: QWebSocketCorsAuthenticator `
    ///
    pub fn swap(self: QWebSocketCorsAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebSocketCorsAuthenticator;
        qtc.QWebSocketCorsAuthenticator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` other: QWebSocketCorsAuthenticator `
    ///
    pub fn operatorAssign(self: QWebSocketCorsAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebSocketCorsAuthenticator;
        qtc.QWebSocketCorsAuthenticator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn origin(self: QWebSocketCorsAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketCorsAuthenticator_Origin(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketCorsAuthenticator.origin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAllowed` instead
    ///
    pub const SetAllowed = setAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#setAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    /// ` _allowed: bool `
    ///
    pub fn setAllowed(self: QWebSocketCorsAuthenticator, _allowed: bool) void {
        qtc.QWebSocketCorsAuthenticator_SetAllowed(@ptrCast(self.ptr), _allowed);
    }

    /// ### DEPRECATED: Use `allowed` instead
    ///
    pub const Allowed = allowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#allowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    pub fn allowed(self: QWebSocketCorsAuthenticator) bool {
        return qtc.QWebSocketCorsAuthenticator_Allowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#dtor.QWebSocketCorsAuthenticator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebSocketCorsAuthenticator `
    ///
    pub fn delete(self: QWebSocketCorsAuthenticator) void {
        qtc.QWebSocketCorsAuthenticator_Delete(@ptrCast(self.ptr));
    }
};
