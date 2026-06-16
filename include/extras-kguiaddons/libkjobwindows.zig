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
    /// ` job: QObject `
    ///
    /// ` window: QWindow `
    ///
    pub fn SetWindow(job: anytype, window: anytype) void {
        comptime _ = @TypeOf(job)._is_QObject;
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.KJobWindows_SetWindow(@ptrCast(job.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    pub fn Window(job: anytype) QWindow {
        comptime _ = @TypeOf(job)._is_QObject;
        return .{ .ptr = qtc.KJobWindows_Window(@ptrCast(job.ptr)) };
    }
};
