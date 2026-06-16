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
    /// ` pattern: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn IsSubsequence(pattern: []const u8, text: []const u8, cs: i32) bool {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KApplicationTrader_IsSubsequence(pattern_str, text_str, @bitCast(cs));
    }
};
