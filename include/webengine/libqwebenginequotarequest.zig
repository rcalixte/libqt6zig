const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwebenginequotarequest.html
pub const qwebenginequotarequest = struct {
    /// New constructs a new QWebEngineQuotaRequest object.
    ///
    ///
    pub fn New() QtC.QWebEngineQuotaRequest {
        return qtc.QWebEngineQuotaRequest_new();
    }

    /// New2 constructs a new QWebEngineQuotaRequest object.
    ///
    /// ``` param1: QtC.QWebEngineQuotaRequest ```
    pub fn New2(param1: ?*anyopaque) QtC.QWebEngineQuotaRequest {
        return qtc.QWebEngineQuotaRequest_new2(@ptrCast(param1));
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
    /// ``` self: QtC.QWebEngineQuotaRequest, that: QtC.QWebEngineQuotaRequest ```
    pub fn OperatorEqual(self: ?*anyopaque, that: ?*anyopaque) bool {
        return qtc.QWebEngineQuotaRequest_OperatorEqual(@ptrCast(self), @ptrCast(that));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator!=)
    ///
    /// ``` self: QtC.QWebEngineQuotaRequest, that: QtC.QWebEngineQuotaRequest ```
    pub fn OperatorNotEqual(self: ?*anyopaque, that: ?*anyopaque) bool {
        return qtc.QWebEngineQuotaRequest_OperatorNotEqual(@ptrCast(self), @ptrCast(that));
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
