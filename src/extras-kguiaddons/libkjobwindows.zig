const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kjobwindows.html)
pub const kjobwindows = struct {
    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QWindow `
    ///
    pub fn SetWindow(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KJobWindows_SetWindow(@ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Window(param1: ?*anyopaque) QtC.QWindow {
        return qtc.KJobWindows_Window(@ptrCast(param1));
    }
};
