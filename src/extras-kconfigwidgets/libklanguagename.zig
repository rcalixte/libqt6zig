const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/klanguagename.html
pub const klanguagename = struct {
    /// [Qt documentation](https://api.kde.org/klanguagename.html#nameForCode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn NameForCode(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KLanguageName_NameForCode(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klanguagename.NameForCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klanguagename.html#nameForCodeInLocale)
    ///
    /// ``` param1: []const u8, param2: []const u8, allocator: std.mem.Allocator ```
    pub fn NameForCodeInLocale(param1: []const u8, param2: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _str = qtc.KLanguageName_NameForCodeInLocale(param1_str, param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klanguagename.NameForCodeInLocale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klanguagename.html#allLanguageCodes)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllLanguageCodes(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KLanguageName_AllLanguageCodes();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("klanguagename.AllLanguageCodes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klanguagename.AllLanguageCodes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
