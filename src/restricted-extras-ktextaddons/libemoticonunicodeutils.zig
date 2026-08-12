const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
pub const TextEmoticonsCore__EmoticonUnicodeUtils = extern struct {
    /// ### DEPRECATED: Use `emojiFontName` instead
    ///
    pub const EmojiFontName = emojiFontName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn emojiFontName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonUnicodeUtils_EmojiFontName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmoticonUnicodeUtils.emojiFontName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `recentIdentifier` instead
    ///
    pub const RecentIdentifier = recentIdentifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn recentIdentifier(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonUnicodeUtils_RecentIdentifier();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmoticonUnicodeUtils.recentIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `customIdentifier` instead
    ///
    pub const CustomIdentifier = customIdentifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customIdentifier(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonUnicodeUtils_CustomIdentifier();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmoticonUnicodeUtils.customIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
