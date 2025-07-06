const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwebenginequotarequest.html
pub const qwebenginequotarequest = struct {
    /// New constructs a new QWebEngineQuotaRequest object.
    ///
    /// ``` other: QtC.QWebEngineQuotaRequest ```
    pub fn New(other: ?*anyopaque) QtC.QWebEngineQuotaRequest {
        return qtc.QWebEngineQuotaRequest_new(@ptrCast(other));
    }

    /// New2 constructs a new QWebEngineQuotaRequest object and invalidates the source QWebEngineQuotaRequest object.
    ///
    /// ``` other: QtC.QWebEngineQuotaRequest ```
    pub fn New2(other: ?*anyopaque) QtC.QWebEngineQuotaRequest {
        return qtc.QWebEngineQuotaRequest_new2(@ptrCast(other));
    }

    /// New3 constructs a new QWebEngineQuotaRequest object.
    ///
    ///
    pub fn New3() QtC.QWebEngineQuotaRequest {
        return qtc.QWebEngineQuotaRequest_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest, other: QtC.QWebEngineQuotaRequest ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineQuotaRequest_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest, other: QtC.QWebEngineQuotaRequest ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineQuotaRequest_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#accept)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineQuotaRequest_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#reject)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest ```
    pub fn Reject(self: ?*anyopaque) void {
        qtc.QWebEngineQuotaRequest_Reject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#origin)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest ```
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineQuotaRequest_Origin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#requestedSize)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest ```
    pub fn RequestedSize(self: ?*anyopaque) i64 {
        return qtc.QWebEngineQuotaRequest_RequestedSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator==)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest, param1: QtC.QWebEngineQuotaRequest ```
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWebEngineQuotaRequest_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator!=)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest, param1: QtC.QWebEngineQuotaRequest ```
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWebEngineQuotaRequest_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#dtor.QWebEngineQuotaRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineQuotaRequest_Delete(@ptrCast(self));
    }
};
