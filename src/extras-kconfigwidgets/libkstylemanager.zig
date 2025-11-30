const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kstylemanager.html
pub const kstylemanager = struct {
    /// [Upstream resources](https://api.kde.org/kstylemanager.html#initStyle)
    ///
    ///
    pub fn InitStyle() void {
        qtc.KStyleManager_InitStyle();
    }

    /// [Upstream resources](https://api.kde.org/kstylemanager.html#createConfigureAction)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn CreateConfigureAction(param1: ?*anyopaque) QtC.QAction {
        return qtc.KStyleManager_CreateConfigureAction(@ptrCast(param1));
    }
};
