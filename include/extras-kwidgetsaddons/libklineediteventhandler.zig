const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/klineediteventhandler.html
pub const klineediteventhandler = struct {
    /// [Qt documentation](https://api.kde.org/klineediteventhandler.html#catchReturnKey)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn CatchReturnKey(param1: ?*anyopaque) void {
        qtc.KLineEditEventHandler_CatchReturnKey(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/klineediteventhandler.html#handleUrlDrops)
    ///
    /// ``` param1: QtC.QObject ```
    pub fn HandleUrlDrops(param1: ?*anyopaque) void {
        qtc.KLineEditEventHandler_HandleUrlDrops(@ptrCast(param1));
    }
};
