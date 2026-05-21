const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html)
pub const KSyntaxHighlighting__WildcardMatcher = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn ExactMatch(param1: []const u8, param2: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KSyntaxHighlighting__WildcardMatcher_ExactMatch(param1_str, param2_str);
    }
};
