const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractListModel = @import("libqt6").QAbstractListModel;
const QModelIndex = @import("libqt6").QModelIndex;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html)
pub const QWebEngineDesktopMediaRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineDesktopMediaRequest,

    pub const _is_QWebEngineDesktopMediaRequest = {};

    /// New constructs a new QWebEngineDesktopMediaRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineDesktopMediaRequest `
    ///
    pub fn New(other: anytype) QWebEngineDesktopMediaRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineDesktopMediaRequest;
        return .{ .ptr = qtc.QWebEngineDesktopMediaRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` other: QWebEngineDesktopMediaRequest `
    ///
    pub fn OperatorAssign(self: QWebEngineDesktopMediaRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineDesktopMediaRequest;
        qtc.QWebEngineDesktopMediaRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` other: QWebEngineDesktopMediaRequest `
    ///
    pub fn Swap(self: QWebEngineDesktopMediaRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineDesktopMediaRequest;
        qtc.QWebEngineDesktopMediaRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn ScreensModel(self: QWebEngineDesktopMediaRequest) QAbstractListModel {
        return .{ .ptr = qtc.QWebEngineDesktopMediaRequest_ScreensModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn WindowsModel(self: QWebEngineDesktopMediaRequest) QAbstractListModel {
        return .{ .ptr = qtc.QWebEngineDesktopMediaRequest_WindowsModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SelectScreen(self: QWebEngineDesktopMediaRequest, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QWebEngineDesktopMediaRequest_SelectScreen(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SelectWindow(self: QWebEngineDesktopMediaRequest, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QWebEngineDesktopMediaRequest_SelectWindow(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn Cancel(self: QWebEngineDesktopMediaRequest) void {
        qtc.QWebEngineDesktopMediaRequest_Cancel(@ptrCast(self.ptr));
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
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn Delete(self: QWebEngineDesktopMediaRequest) void {
        qtc.QWebEngineDesktopMediaRequest_Delete(@ptrCast(self.ptr));
    }
};
