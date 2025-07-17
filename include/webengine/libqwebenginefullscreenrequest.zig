const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html
pub const qwebenginefullscreenrequest = struct {
    /// New constructs a new QWebEngineFullScreenRequest object.
    ///
    /// ``` other: QtC.QWebEngineFullScreenRequest ```
    pub fn New(other: ?*anyopaque) QtC.QWebEngineFullScreenRequest {
        return qtc.QWebEngineFullScreenRequest_new(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
    ///
    /// ``` self: QtC.QWebEngineFullScreenRequest, other: QtC.QWebEngineFullScreenRequest ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
    ///
    /// ``` self: QtC.QWebEngineFullScreenRequest ```
    pub fn Reject(self: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_Reject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
    ///
    /// ``` self: QtC.QWebEngineFullScreenRequest ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
    ///
    /// ``` self: QtC.QWebEngineFullScreenRequest ```
    pub fn ToggleOn(self: ?*anyopaque) bool {
        return qtc.QWebEngineFullScreenRequest_ToggleOn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
    ///
    /// ``` self: QtC.QWebEngineFullScreenRequest ```
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFullScreenRequest_Origin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineFullScreenRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_Delete(@ptrCast(self));
    }
};
