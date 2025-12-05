const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kconfigbase_enums = @import("libkconfigbase.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kwindowconfig.html)
pub const kwindowconfig = struct {
    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: QtC.KConfigGroup `
    ///
    /// ` param3: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SaveWindowSize(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) void {
        qtc.KWindowConfig_SaveWindowSize(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KConfigGroup `
    ///
    pub fn HasSavedWindowSize(param1: ?*anyopaque) bool {
        return qtc.KWindowConfig_HasSavedWindowSize(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: QtC.KConfigGroup `
    ///
    pub fn RestoreWindowSize(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KWindowConfig_RestoreWindowSize(@ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: QtC.KConfigGroup `
    ///
    /// ` param3: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SaveWindowPosition(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32) void {
        qtc.KWindowConfig_SaveWindowPosition(@ptrCast(param1), @ptrCast(param2), @intCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KConfigGroup `
    ///
    pub fn HasSavedWindowPosition(param1: ?*anyopaque) bool {
        return qtc.KWindowConfig_HasSavedWindowPosition(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: QtC.KConfigGroup `
    ///
    pub fn RestoreWindowPosition(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KWindowConfig_RestoreWindowPosition(@ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowScreenPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: QtC.QScreen `
    ///
    /// ` param3: QtC.KConfigGroup `
    ///
    pub fn RestoreWindowScreenPosition(param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque) void {
        qtc.KWindowConfig_RestoreWindowScreenPosition(@ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
    }
};
