const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const QScreen = @import("libqt6").QScreen;
const QWindow = @import("libqt6").QWindow;
const kconfigbase_enums = @import("libkconfigbase.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kwindowconfig.html)
pub const KWindowConfig = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWindowConfig,

    pub const _is_KWindowConfig = {};

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: KConfigGroup `
    ///
    /// ` param3: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SaveWindowSize(param1: anytype, param2: anytype, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param2)._is_KConfigGroup;
        qtc.KWindowConfig_SaveWindowSize(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn HasSavedWindowSize(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        return qtc.KWindowConfig_HasSavedWindowSize(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: KConfigGroup `
    ///
    pub fn RestoreWindowSize(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param2)._is_KConfigGroup;
        qtc.KWindowConfig_RestoreWindowSize(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: KConfigGroup `
    ///
    /// ` param3: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SaveWindowPosition(param1: anytype, param2: anytype, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param2)._is_KConfigGroup;
        qtc.KWindowConfig_SaveWindowPosition(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfigGroup `
    ///
    pub fn HasSavedWindowPosition(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_KConfigGroup;
        return qtc.KWindowConfig_HasSavedWindowPosition(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: KConfigGroup `
    ///
    pub fn RestoreWindowPosition(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param2)._is_KConfigGroup;
        qtc.KWindowConfig_RestoreWindowPosition(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowScreenPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: QScreen `
    ///
    /// ` param3: KConfigGroup `
    ///
    pub fn RestoreWindowScreenPosition(param1: anytype, param2: anytype, param3: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param2)._is_QScreen;
        comptime _ = @TypeOf(param3)._is_KConfigGroup;
        qtc.KWindowConfig_RestoreWindowScreenPosition(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }
};
