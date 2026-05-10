const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
pub const TextEmoticonsCore__EmoticonUnicodeUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmojiFontName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonUnicodeUtils_EmojiFontName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emoticonunicodeutils.EmojiFontName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RecentIdentifier(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonUnicodeUtils_RecentIdentifier();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emoticonunicodeutils.RecentIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomIdentifier(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmoticonUnicodeUtils_CustomIdentifier();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emoticonunicodeutils.CustomIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
