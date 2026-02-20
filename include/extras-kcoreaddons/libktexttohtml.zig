const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ktexttohtml_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexttohtml.html)
pub const ktexttohtml = struct {
    /// ### [Upstream resources](https://api.kde.org/ktexttohtml.html#convertToHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: *const flag of ktexttohtml_enums.Option `
    ///
    /// ` param3: i32 `
    ///
    /// ` param4: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConvertToHtml(param1: []const u8, param2: *const i32, param3: i32, param4: i32, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KTextToHTML_ConvertToHtml(param1_str, @ptrCast(param2), @bitCast(param3), @bitCast(param4));
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
