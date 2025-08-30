const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kcolorschememenu.html
pub const kcolorschememenu = struct {
    /// [Qt documentation](https://api-staging.kde.org/kcolorschememenu.html#createMenu)
    ///
    /// ``` param1: QtC.KColorSchemeManager, param2: QtC.QObject ```
    pub fn CreateMenu(param1: ?*anyopaque, param2: ?*anyopaque) QtC.KActionMenu {
        return qtc.KColorSchemeMenu_CreateMenu(@ptrCast(param1), @ptrCast(param2));
    }
};
