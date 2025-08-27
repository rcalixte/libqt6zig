const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kjobwindows.html
pub const kjobwindows = struct {
    /// [Qt documentation](https://api-staging.kde.org/kjobwindows.html#setWindow)
    ///
    /// ``` param1: QtC.QObject, param2: QtC.QWindow ```
    pub fn SetWindow(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KJobWindows_SetWindow(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobwindows.html#window)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn Window(param1: ?*anyopaque) QtC.QWindow {
        return qtc.KJobWindows_Window(@ptrCast(param1));
    }
};
