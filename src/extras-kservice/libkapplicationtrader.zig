const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// https://api.kde.org/kapplicationtrader.html
pub const kapplicationtrader = struct {
    /// [Qt documentation](https://api.kde.org/kapplicationtrader.html#isSubsequence)
    ///
    /// ``` param1: []const u8, param2: []const u8, param3: qnamespace_enums.CaseSensitivity ```
    pub fn IsSubsequence(param1: []const u8, param2: []const u8, param3: i32) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KApplicationTrader_IsSubsequence(param1_str, param2_str, @intCast(param3));
    }
};
