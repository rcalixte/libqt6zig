const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kusertimestamp.html)
pub const KUserTimestamp = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kusertimestamp.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUserTimestamp,

    pub const _is_KUserTimestamp = {};

    /// ### [Upstream resources](https://api.kde.org/kusertimestamp.html#userTimestamp)
    ///
    pub fn UserTimestamp() usize {
        return qtc.KUserTimestamp_UserTimestamp();
    }

    /// ### [Upstream resources](https://api.kde.org/kusertimestamp.html#updateUserTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` time: usize `
    ///
    pub fn UpdateUserTimestamp(time: usize) void {
        qtc.KUserTimestamp_UpdateUserTimestamp(@bitCast(time));
    }
};
