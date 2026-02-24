const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html)
pub const qwebenginedesktopmediarequest = struct {
    /// New constructs a new QWebEngineDesktopMediaRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn New(other: ?*anyopaque) QtC.QWebEngineDesktopMediaRequest {
        return qtc.QWebEngineDesktopMediaRequest_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    /// ` other: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    /// ` other: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn ScreensModel(self: ?*anyopaque) QtC.QAbstractListModel {
        return qtc.QWebEngineDesktopMediaRequest_ScreensModel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn WindowsModel(self: ?*anyopaque) QtC.QAbstractListModel {
        return qtc.QWebEngineDesktopMediaRequest_WindowsModel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SelectScreen(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_SelectScreen(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SelectWindow(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_SelectWindow(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_Cancel(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#dtor.QWebEngineDesktopMediaRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineDesktopMediaRequest `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_Delete(@ptrCast(self));
    }
};
