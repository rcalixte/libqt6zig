const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kapplicationtrader.html)
pub const KApplicationTrader = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kapplicationtrader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KApplicationTrader,

    pub const _is_KApplicationTrader = {};

    /// ### [Upstream resources](https://api.kde.org/kapplicationtrader.html#isSubsequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: qnamespace_enums.CaseSensitivity `
    ///
    pub fn IsSubsequence(param1: []const u8, param2: []const u8, param3: i32) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KApplicationTrader_IsSubsequence(param1_str, param2_str, @bitCast(param3));
    }
};
