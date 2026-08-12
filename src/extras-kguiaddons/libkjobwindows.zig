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

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    /// ` _window: QWindow `
    ///
    pub fn setWindow(job: anytype, _window: anytype) void {
        comptime _ = @TypeOf(job)._is_QObject;
        comptime _ = @TypeOf(_window)._is_QWindow;
        qtc.KJobWindows_SetWindow(@ptrCast(job.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://api.kde.org/kjobwindows.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` job: QObject `
    ///
    pub fn window(job: anytype) QWindow {
        comptime _ = @TypeOf(job)._is_QObject;
        return .{ .ptr = qtc.KJobWindows_Window(@ptrCast(job.ptr)) };
    }
};
