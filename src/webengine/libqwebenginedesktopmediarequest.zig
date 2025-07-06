const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html
pub const qwebenginedesktopmediarequest = struct {
    /// New constructs a new QWebEngineDesktopMediaRequest object.
    ///
    /// ``` other: QtC.QWebEngineDesktopMediaRequest ```
    pub fn New(other: ?*anyopaque) QtC.QWebEngineDesktopMediaRequest {
        return qtc.QWebEngineDesktopMediaRequest_new(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator=)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest, other: QtC.QWebEngineDesktopMediaRequest ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest, other: QtC.QWebEngineDesktopMediaRequest ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest ```
    pub fn ScreensModel(self: ?*anyopaque) QtC.QAbstractListModel {
        return qtc.QWebEngineDesktopMediaRequest_ScreensModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest ```
    pub fn WindowsModel(self: ?*anyopaque) QtC.QAbstractListModel {
        return qtc.QWebEngineDesktopMediaRequest_WindowsModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest, index: QtC.QModelIndex ```
    pub fn SelectScreen(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_SelectScreen(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest, index: QtC.QModelIndex ```
    pub fn SelectWindow(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_SelectWindow(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest ```
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#dtor.QWebEngineDesktopMediaRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineDesktopMediaRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineDesktopMediaRequest_Delete(@ptrCast(self));
    }
};
