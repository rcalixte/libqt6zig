const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ktexttohtml_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexttohtml.html)
pub const KTextToHTML = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexttohtml.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextToHTML,

    pub const _is_KTextToHTML = {};

    /// ### [Upstream resources](https://api.kde.org/ktexttohtml.html#convertToHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` plainText: []const u8 `
    ///
    /// ` options: *const flag of ktexttohtml_enums.Option `
    ///
    /// ` maxUrlLen: i32 `
    ///
    /// ` maxAddressLen: i32 `
    ///
    pub fn ConvertToHtml(allocator: std.mem.Allocator, plainText: []const u8, options: *const i32, maxUrlLen: i32, maxAddressLen: i32) []const u8 {
        const plainText_str = qtc.libqt_string{
            .len = plainText.len,
            .data = plainText.ptr,
        };
        var _str = qtc.KTextToHTML_ConvertToHtml(plainText_str, @ptrCast(options), @bitCast(maxUrlLen), @bitCast(maxAddressLen));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexttohtml.ConvertToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexttohtml.html#public-types)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const PreserveSpaces: i32 = 2;
        pub const ReplaceSmileys: i32 = 4;
        pub const IgnoreUrls: i32 = 8;
        pub const HighlightText: i32 = 16;
        pub const ConvertPhoneNumbers: i32 = 32;
    };
};
