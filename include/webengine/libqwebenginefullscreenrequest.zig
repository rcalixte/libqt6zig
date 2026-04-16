const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html)
pub const QWebEngineFullScreenRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineFullScreenRequest,

    pub const _is_QWebEngineFullScreenRequest = {};

    /// New constructs a new QWebEngineFullScreenRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineFullScreenRequest `
    ///
    pub fn New(other: anytype) QWebEngineFullScreenRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineFullScreenRequest;
        return .{ .ptr = qtc.QWebEngineFullScreenRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    /// ` other: QWebEngineFullScreenRequest `
    ///
    pub fn OperatorAssign(self: QWebEngineFullScreenRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFullScreenRequest;
        qtc.QWebEngineFullScreenRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn Reject(self: QWebEngineFullScreenRequest) void {
        qtc.QWebEngineFullScreenRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn Accept(self: QWebEngineFullScreenRequest) void {
        qtc.QWebEngineFullScreenRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn ToggleOn(self: QWebEngineFullScreenRequest) bool {
        return qtc.QWebEngineFullScreenRequest_ToggleOn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn Origin(self: QWebEngineFullScreenRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineFullScreenRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn Delete(self: QWebEngineFullScreenRequest) void {
        qtc.QWebEngineFullScreenRequest_Delete(@ptrCast(self.ptr));
    }
};
