const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://api.kde.org/kstylemanager.html)
pub const KStyleManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstylemanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStyleManager,

    pub const _is_KStyleManager = {};

    /// ### [Upstream resources](https://api.kde.org/kstylemanager.html#initStyle)
    ///
    pub fn InitStyle() void {
        qtc.KStyleManager_InitStyle();
    }

    /// ### [Upstream resources](https://api.kde.org/kstylemanager.html#createConfigureAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn CreateConfigureAction(param1: anytype) QAction {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.KStyleManager_CreateConfigureAction(@ptrCast(param1.ptr)) };
    }
};
