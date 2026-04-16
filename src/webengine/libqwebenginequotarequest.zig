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

    /// New constructs a new QWebEngineQuotaRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn New(other: anytype) QWebEngineQuotaRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineQuotaRequest;
        return .{ .ptr = qtc.QWebEngineQuotaRequest_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QWebEngineQuotaRequest object and invalidates the source QWebEngineQuotaRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn New2(other: anytype) QWebEngineQuotaRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineQuotaRequest;
        return .{ .ptr = qtc.QWebEngineQuotaRequest_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QWebEngineQuotaRequest object.
    ///
    pub fn New3() QWebEngineQuotaRequest {
        return .{ .ptr = qtc.QWebEngineQuotaRequest_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn CopyAssign(self: QWebEngineQuotaRequest, other: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` other: QWebEngineQuotaRequest `
    ///
    pub fn MoveAssign(self: QWebEngineQuotaRequest, other: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn Accept(self: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn Reject(self: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn Origin(self: QWebEngineQuotaRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineQuotaRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#requestedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn RequestedSize(self: QWebEngineQuotaRequest) i64 {
        return qtc.QWebEngineQuotaRequest_RequestedSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` param1: QWebEngineQuotaRequest `
    ///
    pub fn OperatorEqual(self: QWebEngineQuotaRequest, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWebEngineQuotaRequest;
        return qtc.QWebEngineQuotaRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    /// ` param1: QWebEngineQuotaRequest `
    ///
    pub fn OperatorNotEqual(self: QWebEngineQuotaRequest, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWebEngineQuotaRequest;
        return qtc.QWebEngineQuotaRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#dtor.QWebEngineQuotaRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineQuotaRequest `
    ///
    pub fn Delete(self: QWebEngineQuotaRequest) void {
        qtc.QWebEngineQuotaRequest_Delete(@ptrCast(self.ptr));
    }
};
