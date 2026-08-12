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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineFullScreenRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineFullScreenRequest `
    ///
    pub fn new(other: anytype) QWebEngineFullScreenRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineFullScreenRequest;
        return .{ .ptr = qtc.QWebEngineFullScreenRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    /// ` other: QWebEngineFullScreenRequest `
    ///
    pub fn operatorAssign(self: QWebEngineFullScreenRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFullScreenRequest;
        qtc.QWebEngineFullScreenRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `reject` instead
    ///
    pub const Reject = reject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn reject(self: QWebEngineFullScreenRequest) void {
        qtc.QWebEngineFullScreenRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn accept(self: QWebEngineFullScreenRequest) void {
        qtc.QWebEngineFullScreenRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toggleOn` instead
    ///
    pub const ToggleOn = toggleOn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn toggleOn(self: QWebEngineFullScreenRequest) bool {
        return qtc.QWebEngineFullScreenRequest_ToggleOn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn origin(self: QWebEngineFullScreenRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineFullScreenRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFullScreenRequest `
    ///
    pub fn delete(self: QWebEngineFullScreenRequest) void {
        qtc.QWebEngineFullScreenRequest_Delete(@ptrCast(self.ptr));
    }
};
