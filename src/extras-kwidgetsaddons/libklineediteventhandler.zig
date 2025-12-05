const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html)
pub const klineediteventhandler = struct {
    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html#catchReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn CatchReturnKey(param1: ?*anyopaque) void {
        qtc.KLineEditEventHandler_CatchReturnKey(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html#handleUrlDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn HandleUrlDrops(param1: ?*anyopaque) void {
        qtc.KLineEditEventHandler_HandleUrlDrops(@ptrCast(param1));
    }
};
