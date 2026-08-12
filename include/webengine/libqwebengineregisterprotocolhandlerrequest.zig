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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineRegisterProtocolHandlerRequest object in C++ memory
    ///
    pub fn new() QWebEngineRegisterProtocolHandlerRequest {
        return .{ .ptr = qtc.QWebEngineRegisterProtocolHandlerRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineRegisterProtocolHandlerRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn new2(param1: anytype) QWebEngineRegisterProtocolHandlerRequest {
        comptime _ = @TypeOf(param1)._is_QWebEngineRegisterProtocolHandlerRequest;
        return .{ .ptr = qtc.QWebEngineRegisterProtocolHandlerRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn accept(self: QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reject` instead
    ///
    pub const Reject = reject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn reject(self: QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn origin(self: QWebEngineRegisterProtocolHandlerRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineRegisterProtocolHandlerRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scheme` instead
    ///
    pub const Scheme = scheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scheme(self: QWebEngineRegisterProtocolHandlerRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineRegisterProtocolHandlerRequest_Scheme(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineRegisterProtocolHandlerRequest.scheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` that: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn operatorEqual(self: QWebEngineRegisterProtocolHandlerRequest, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineRegisterProtocolHandlerRequest;
        return qtc.QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` that: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn operatorNotEqual(self: QWebEngineRegisterProtocolHandlerRequest, that: anytype) bool {
        comptime _ = @TypeOf(that)._is_QWebEngineRegisterProtocolHandlerRequest;
        return qtc.QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(that.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#dtor.QWebEngineRegisterProtocolHandlerRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn delete(self: QWebEngineRegisterProtocolHandlerRequest) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Delete(@ptrCast(self.ptr));
    }
};
