const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html)
pub const KLineEditEventHandler = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLineEditEventHandler,

    pub const _is_KLineEditEventHandler = {};

    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html#catchReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn CatchReturnKey(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.KLineEditEventHandler_CatchReturnKey(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html#handleUrlDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn HandleUrlDrops(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.KLineEditEventHandler_HandleUrlDrops(@ptrCast(param1.ptr));
    }
};
