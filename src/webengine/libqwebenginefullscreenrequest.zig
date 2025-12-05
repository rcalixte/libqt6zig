const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html)
pub const qwebenginefullscreenrequest = struct {
    /// New constructs a new QWebEngineFullScreenRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn New(other: ?*anyopaque) QtC.QWebEngineFullScreenRequest {
        return qtc.QWebEngineFullScreenRequest_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFullScreenRequest `
    ///
    /// ` other: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn Reject(self: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_Reject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_Accept(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn ToggleOn(self: ?*anyopaque) bool {
        return qtc.QWebEngineFullScreenRequest_ToggleOn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFullScreenRequest_Origin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineFullScreenRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineFullScreenRequest_Delete(@ptrCast(self));
    }
};
