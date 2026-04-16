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
    /// ` param1: QObject `
    ///
    /// ` param2: QWidget `
    ///
    pub fn SetWindow(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.KJobWidgets_SetWindow(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QWindow `
    ///
    pub fn SetWindowHandle(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QWindow;
        qtc.KJobWidgets_SetWindowHandle(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn Window(param1: anytype) QWidget {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.KJobWidgets_Window(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn WindowHandle(param1: anytype) QWindow {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.KJobWidgets_WindowHandle(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#updateUserTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: usize `
    ///
    pub fn UpdateUserTimestamp(param1: anytype, param2: usize) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.KJobWidgets_UpdateUserTimestamp(@ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwidgets.html#userTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn UserTimestamp(param1: anytype) usize {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.KJobWidgets_UserTimestamp(@ptrCast(param1.ptr));
    }
};
