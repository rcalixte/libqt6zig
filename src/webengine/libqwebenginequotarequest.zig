const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html)
pub const QWebEngineQuotaRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineQuotaRequest,

    pub const _is_QWebEngineQuotaRequest = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineQuotaRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn new(other: anytype) QWebEngineQuotaRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineQuotaRequest;
        return .{ .ptr = qtc.QWebEngineQuotaRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineQuotaRequest object and invalidate the source QWebEngineQuotaRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn new2(other: anytype) QWebEngineQuotaRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineQuotaRequest;
        return .{ .ptr = qtc.QWebEngineQuotaRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWebEngineQuotaRequest object in C++ memory
    ///
    pub fn new3() QWebEngineQuotaRequest {
        return .{ .ptr = qtc.QWebEngineQuotaRequest_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn copyAssign(self: QWebEngineQuotaRequest, other: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn moveAssign(self: QWebEngineQuotaRequest, other: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn accept(self: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reject` instead
    ///
    pub const Reject = reject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn reject(self: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn origin(self: QWebEngineQuotaRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineQuotaRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestedSize` instead
    ///
    pub const RequestedSize = requestedSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#requestedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn requestedSize(self: QWebEngineQuotaRequest) i64 {
        return qtc.QWebEngineQuotaRequest_RequestedSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` param1: QWebEngineQuotaRequest `
    ///
    pub fn operatorEqual(self: QWebEngineQuotaRequest, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWebEngineQuotaRequest;
        return qtc.QWebEngineQuotaRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` param1: QWebEngineQuotaRequest `
    ///
    pub fn operatorNotEqual(self: QWebEngineQuotaRequest, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWebEngineQuotaRequest;
        return qtc.QWebEngineQuotaRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#dtor.QWebEngineQuotaRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn delete(self: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_Delete(@ptrCast(self.ptr));
    }
};
