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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineDesktopMediaRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineDesktopMediaRequest `
    ///
    pub fn new(other: anytype) QWebEngineDesktopMediaRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineDesktopMediaRequest;
        return .{ .ptr = qtc.QWebEngineDesktopMediaRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` other: QWebEngineDesktopMediaRequest `
    ///
    pub fn operatorAssign(self: QWebEngineDesktopMediaRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineDesktopMediaRequest;
        qtc.QWebEngineDesktopMediaRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` other: QWebEngineDesktopMediaRequest `
    ///
    pub fn swap(self: QWebEngineDesktopMediaRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineDesktopMediaRequest;
        qtc.QWebEngineDesktopMediaRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `screensModel` instead
    ///
    pub const ScreensModel = screensModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn screensModel(self: QWebEngineDesktopMediaRequest) QAbstractListModel {
        return .{ .ptr = qtc.QWebEngineDesktopMediaRequest_ScreensModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowsModel` instead
    ///
    pub const WindowsModel = windowsModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn windowsModel(self: QWebEngineDesktopMediaRequest) QAbstractListModel {
        return .{ .ptr = qtc.QWebEngineDesktopMediaRequest_WindowsModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectScreen` instead
    ///
    pub const SelectScreen = selectScreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn selectScreen(self: QWebEngineDesktopMediaRequest, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QWebEngineDesktopMediaRequest_SelectScreen(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `selectWindow` instead
    ///
    pub const SelectWindow = selectWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn selectWindow(self: QWebEngineDesktopMediaRequest, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QWebEngineDesktopMediaRequest_SelectWindow(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn cancel(self: QWebEngineDesktopMediaRequest) void {
        qtc.QWebEngineDesktopMediaRequest_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#dtor.QWebEngineDesktopMediaRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineDesktopMediaRequest `
    ///
    pub fn delete(self: QWebEngineDesktopMediaRequest) void {
        qtc.QWebEngineDesktopMediaRequest_Delete(@ptrCast(self.ptr));
    }
};
