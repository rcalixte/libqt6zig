const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;

/// ### [Upstream resources](https://api.kde.org/kjobwidgets.html)
pub const KJobWidgets = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KJobWidgets,

    pub const _is_KJobWidgets = {};

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWindow(job: anytype, widget: anytype) void {
        comptime _ = @TypeOf(job)._is_QObject;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KJobWidgets_SetWindow(@ptrCast(job.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    /// ` window: QWindow `
    ///
    pub fn SetWindowHandle(job: anytype, window: anytype) void {
        comptime _ = @TypeOf(job)._is_QObject;
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.KJobWidgets_SetWindowHandle(@ptrCast(job.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    pub fn Window(job: anytype) QWidget {
        comptime _ = @TypeOf(job)._is_QObject;
        return .{ .ptr = qtc.KJobWidgets_Window(@ptrCast(job.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    pub fn WindowHandle(job: anytype) QWindow {
        comptime _ = @TypeOf(job)._is_QObject;
        return .{ .ptr = qtc.KJobWidgets_WindowHandle(@ptrCast(job.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#updateUserTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    /// ` time: usize `
    ///
    pub fn UpdateUserTimestamp(job: anytype, time: usize) void {
        comptime _ = @TypeOf(job)._is_QObject;
        qtc.KJobWidgets_UpdateUserTimestamp(@ptrCast(job.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#userTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    pub fn UserTimestamp(job: anytype) usize {
        comptime _ = @TypeOf(job)._is_QObject;
        return qtc.KJobWidgets_UserTimestamp(@ptrCast(job.ptr));
    }
};
