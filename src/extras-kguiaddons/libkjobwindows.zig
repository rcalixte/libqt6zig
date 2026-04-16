const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const QWindow = @import("libqt6").QWindow;

/// ### [Upstream resources](https://api.kde.org/kjobwindows.html)
pub const KJobWindows = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KJobWindows,

    pub const _is_KJobWindows = {};

    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QWindow `
    ///
    pub fn SetWindow(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QWindow;
        qtc.KJobWindows_SetWindow(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn Window(param1: anytype) QWindow {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.KJobWindows_Window(@ptrCast(param1.ptr)) };
    }
};
