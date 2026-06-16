const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionMenu = @import("libqt6").KActionMenu;
const KColorSchemeManager = @import("libqt6").KColorSchemeManager;
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://api.kde.org/kcolorschememenu.html)
pub const KColorSchemeMenu = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcolorschememenu.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KColorSchemeMenu,

    pub const _is_KColorSchemeMenu = {};

    /// ### [Upstream resources](https://api.kde.org/kcolorschememenu.html#createMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: KColorSchemeManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateMenu(manager: anytype, parent: anytype) KActionMenu {
        comptime _ = @TypeOf(manager)._is_KColorSchemeManager;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KColorSchemeMenu_CreateMenu(@ptrCast(manager.ptr), @ptrCast(parent.ptr)) };
    }
};
