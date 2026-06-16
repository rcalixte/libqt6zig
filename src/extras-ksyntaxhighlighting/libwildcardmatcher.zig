const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html)
pub const KSyntaxHighlighting__WildcardMatcher = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html#exactMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` candidate: []const u8 `
    ///
    /// ` wildcard: []const u8 `
    ///
    pub fn ExactMatch(candidate: []const u8, wildcard: []const u8) bool {
        const candidate_str = qtc.libqt_string{
            .len = candidate.len,
            .data = candidate.ptr,
        };
        const wildcard_str = qtc.libqt_string{
            .len = wildcard.len,
            .data = wildcard.ptr,
        };
        return qtc.KSyntaxHighlighting__WildcardMatcher_ExactMatch(candidate_str, wildcard_str);
    }
};
