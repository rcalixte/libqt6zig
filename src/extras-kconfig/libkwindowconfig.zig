const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kwindowconfig.html
pub const kwindowconfig = struct {
    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#saveWindowSize)
    ///
    /// ``` param1: QtC.QWindow, param2: QtC.KConfigGroup, param3: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn SaveWindowSize(param1: ?*anyopaque, param2: ?*anyopaque, param3: i64) void {
        qtc.KWindowConfig_SaveWindowSize(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#hasSavedWindowSize)
    ///
    /// ``` param1: QtC.KConfigGroup ```
    pub fn HasSavedWindowSize(param1: ?*anyopaque) bool {
        return qtc.KWindowConfig_HasSavedWindowSize(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#restoreWindowSize)
    ///
    /// ``` param1: QtC.QWindow, param2: QtC.KConfigGroup ```
    pub fn RestoreWindowSize(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KWindowConfig_RestoreWindowSize(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#saveWindowPosition)
    ///
    /// ``` param1: QtC.QWindow, param2: QtC.KConfigGroup, param3: flag of kconfigbase_enums.WriteConfigFlag ```
    pub fn SaveWindowPosition(param1: ?*anyopaque, param2: ?*anyopaque, param3: i64) void {
        qtc.KWindowConfig_SaveWindowPosition(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#hasSavedWindowPosition)
    ///
    /// ``` param1: QtC.KConfigGroup ```
    pub fn HasSavedWindowPosition(param1: ?*anyopaque) bool {
        return qtc.KWindowConfig_HasSavedWindowPosition(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#restoreWindowPosition)
    ///
    /// ``` param1: QtC.QWindow, param2: QtC.KConfigGroup ```
    pub fn RestoreWindowPosition(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KWindowConfig_RestoreWindowPosition(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#restoreWindowScreenPosition)
    ///
    /// ``` param1: QtC.QWindow, param2: QtC.QScreen, param3: QtC.KConfigGroup ```
    pub fn RestoreWindowScreenPosition(param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque) void {
        qtc.KWindowConfig_RestoreWindowScreenPosition(@ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
    }
};
