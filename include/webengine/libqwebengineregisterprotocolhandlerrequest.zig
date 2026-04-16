const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html)
pub const QWebEngineRegisterProtocolHandlerRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineRegisterProtocolHandlerRequest,

    pub const _is_QWebEngineRegisterProtocolHandlerRequest = {};

    /// New constructs a new QWebEngineRegisterProtocolHandlerRequest object.
    ///
    pub fn New() QWebEngineRegisterProtocolHandlerRequest {
        return .{ .ptr = qtc.QWebEngineRegisterProtocolHandlerRequest_new() };
    }

    /// New2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn New2(param1: anytype) QWebEngineRegisterProtocolHandlerRequest {
        comptime _ = @TypeOf(param1)._is_QWebEngineRegisterProtocolHandlerRequest;
        return .{ .ptr = qtc.QWebEngineRegisterProtocolHandlerRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Accept(self: QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Reject(self: QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Origin(self: QWebEngineRegisterProtocolHandlerRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineRegisterProtocolHandlerRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Scheme(self: QWebEngineRegisterProtocolHandlerRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineRegisterProtocolHandlerRequest_Scheme(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineregisterprotocolhandlerrequest.Scheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` that: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn OperatorEqual(self: QWebEngineRegisterProtocolHandlerRequest, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineRegisterProtocolHandlerRequest;
        return qtc.QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` that: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn OperatorNotEqual(self: QWebEngineRegisterProtocolHandlerRequest, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineRegisterProtocolHandlerRequest;
        return qtc.QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#dtor.QWebEngineRegisterProtocolHandlerRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Delete(self: QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Delete(@ptrCast(self.ptr));
    }
};
