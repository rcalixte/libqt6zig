const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kcolorschememenu.html)
pub const kcolorschememenu = struct {
    /// ### [Upstream resources](https://api.kde.org/kcolorschememenu.html#createMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KColorSchemeManager `
    ///
    /// ` param2: QtC.QObject `
    ///
    pub fn CreateMenu(param1: ?*anyopaque, param2: ?*anyopaque) QtC.KActionMenu {
        return qtc.KColorSchemeMenu_CreateMenu(@ptrCast(param1), @ptrCast(param2));
    }
};
