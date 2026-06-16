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
    /// ` window: QWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` options: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SaveWindowSize(window: anytype, config: anytype, options: i32) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KWindowConfig_SaveWindowSize(@ptrCast(window.ptr), @ptrCast(config.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn HasSavedWindowSize(config: anytype) bool {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        return qtc.KWindowConfig_HasSavedWindowSize(@ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn RestoreWindowSize(window: anytype, config: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KWindowConfig_RestoreWindowSize(@ptrCast(window.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` options: flag of kconfigbase_enums.WriteConfigFlag `
    ///
    pub fn SaveWindowPosition(window: anytype, config: anytype, options: i32) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KWindowConfig_SaveWindowPosition(@ptrCast(window.ptr), @ptrCast(config.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn HasSavedWindowPosition(config: anytype) bool {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        return qtc.KWindowConfig_HasSavedWindowPosition(@ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn RestoreWindowPosition(window: anytype, config: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KWindowConfig_RestoreWindowPosition(@ptrCast(window.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowScreenPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` screen: QScreen `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn RestoreWindowScreenPosition(window: anytype, screen: anytype, config: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(screen)._is_QScreen;
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KWindowConfig_RestoreWindowScreenPosition(@ptrCast(window.ptr), @ptrCast(screen.ptr), @ptrCast(config.ptr));
    }
};
