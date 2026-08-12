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

    /// ### DEPRECATED: Use `initStyle` instead
    ///
    pub const InitStyle = initStyle;

    /// ### [Upstream resources](https://api.kde.org/kstylemanager.html#initStyle)
    ///
    pub fn initStyle() void {
        qtc.KStyleManager_InitStyle();
    }

    /// ### DEPRECATED: Use `createConfigureAction` instead
    ///
    pub const CreateConfigureAction = createConfigureAction;

    /// ### [Upstream resources](https://api.kde.org/kstylemanager.html#createConfigureAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn createConfigureAction(parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStyleManager_CreateConfigureAction(@ptrCast(parent.ptr)) };
    }
};
