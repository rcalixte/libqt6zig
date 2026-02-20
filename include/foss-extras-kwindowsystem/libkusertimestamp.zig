const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kusertimestamp.html)
pub const kusertimestamp = struct {
    /// ### [Upstream resources](https://api.kde.org/kusertimestamp.html#userTimestamp)
    ///
    pub fn UserTimestamp() u64 {
        return qtc.KUserTimestamp_UserTimestamp();
    }

    /// ### [Upstream resources](https://api.kde.org/kusertimestamp.html#updateUserTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: u64 `
    ///
    pub fn UpdateUserTimestamp(param1: u64) void {
        qtc.KUserTimestamp_UpdateUserTimestamp(@bitCast(param1));
    }
};
