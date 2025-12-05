const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html)
pub const qwebengineregisterprotocolhandlerrequest = struct {
    /// New constructs a new QWebEngineRegisterProtocolHandlerRequest object.
    ///
    pub fn New() QtC.QWebEngineRegisterProtocolHandlerRequest {
        return qtc.QWebEngineRegisterProtocolHandlerRequest_new();
    }

    /// New2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QWebEngineRegisterProtocolHandlerRequest {
        return qtc.QWebEngineRegisterProtocolHandlerRequest_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Accept(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Reject(self: ?*anyopaque) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Reject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineRegisterProtocolHandlerRequest_Origin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Scheme(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineRegisterProtocolHandlerRequest_Scheme(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineregisterprotocolhandlerrequest.Scheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` that: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, that: ?*anyopaque) bool {
        return qtc.QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(@ptrCast(self), @ptrCast(that));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    /// ` that: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, that: ?*anyopaque) bool {
        return qtc.QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(@ptrCast(self), @ptrCast(that));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#dtor.QWebEngineRegisterProtocolHandlerRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineRegisterProtocolHandlerRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineRegisterProtocolHandlerRequest_Delete(@ptrCast(self));
    }
};
