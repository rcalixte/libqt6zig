const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kjobwidgets.html
pub const kjobwidgets = struct {
    /// [Qt documentation](https://api.kde.org/kjobwidgets.html#setWindow)
    ///
    /// ``` param1: QtC.QObject, param2: QtC.QWidget ```
    pub fn SetWindow(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KJobWidgets_SetWindow(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kjobwidgets.html#setWindowHandle)
    ///
    /// ``` param1: QtC.QObject, param2: QtC.QWindow ```
    pub fn SetWindowHandle(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KJobWidgets_SetWindowHandle(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kjobwidgets.html#window)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn Window(param1: ?*anyopaque) QtC.QWidget {
        return qtc.KJobWidgets_Window(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kjobwidgets.html#windowHandle)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn WindowHandle(param1: ?*anyopaque) QtC.QWindow {
        return qtc.KJobWidgets_WindowHandle(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kjobwidgets.html#updateUserTimestamp)
    ///
    /// ``` param1: QtC.QObject, param2: u64 ```
    pub fn UpdateUserTimestamp(param1: ?*anyopaque, param2: u64) void {
        qtc.KJobWidgets_UpdateUserTimestamp(@ptrCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kjobwidgets.html#userTimestamp)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn UserTimestamp(param1: ?*anyopaque) u64 {
        return qtc.KJobWidgets_UserTimestamp(@ptrCast(param1));
    }
};
