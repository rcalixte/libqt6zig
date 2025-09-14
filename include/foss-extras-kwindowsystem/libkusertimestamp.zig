const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kusertimestamp.html
pub const kusertimestamp = struct {
    /// [Qt documentation](https://api.kde.org/kusertimestamp.html#userTimestamp)
    ///
    ///
    pub fn UserTimestamp() u64 {
        return qtc.KUserTimestamp_UserTimestamp();
    }

    /// [Qt documentation](https://api.kde.org/kusertimestamp.html#updateUserTimestamp)
    ///
    /// ``` param1: u64 ```
    pub fn UpdateUserTimestamp(param1: u64) void {
        qtc.KUserTimestamp_UpdateUserTimestamp(@intCast(param1));
    }
};
