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
    /// ` param1: KColorSchemeManager `
    ///
    /// ` param2: QObject `
    ///
    pub fn CreateMenu(param1: anytype, param2: anytype) KActionMenu {
        comptime _ = @TypeOf(param1)._is_KColorSchemeManager;
        comptime _ = @TypeOf(param2)._is_QObject;
        return .{ .ptr = qtc.KColorSchemeMenu_CreateMenu(@ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }
};
