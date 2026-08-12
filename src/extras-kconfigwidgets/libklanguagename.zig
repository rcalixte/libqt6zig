const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klanguagename.html)
pub const KLanguageName = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klanguagename.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLanguageName,

    pub const _is_KLanguageName = {};

    /// ### DEPRECATED: Use `nameForCode` instead
    ///
    pub const NameForCode = nameForCode;

    /// ### [Upstream resources](https://api.kde.org/klanguagename.html#nameForCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` code: []const u8 `
    ///
    pub fn nameForCode(allocator: std.mem.Allocator, code: []const u8) []const u8 {
        const code_str = qtc.libqt_string{
            .len = code.len,
            .data = code.ptr,
        };
        var _str = qtc.KLanguageName_NameForCode(code_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLanguageName.nameForCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nameForCodeInLocale` instead
    ///
    pub const NameForCodeInLocale = nameForCodeInLocale;

    /// ### [Upstream resources](https://api.kde.org/klanguagename.html#nameForCodeInLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` code: []const u8 `
    ///
    /// ` outputLocale: []const u8 `
    ///
    pub fn nameForCodeInLocale(allocator: std.mem.Allocator, code: []const u8, outputLocale: []const u8) []const u8 {
        const code_str = qtc.libqt_string{
            .len = code.len,
            .data = code.ptr,
        };
        const outputLocale_str = qtc.libqt_string{
            .len = outputLocale.len,
            .data = outputLocale.ptr,
        };
        var _str = qtc.KLanguageName_NameForCodeInLocale(code_str, outputLocale_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLanguageName.nameForCodeInLocale: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allLanguageCodes` instead
    ///
    pub const AllLanguageCodes = allLanguageCodes;

    /// ### [Upstream resources](https://api.kde.org/klanguagename.html#allLanguageCodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allLanguageCodes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KLanguageName_AllLanguageCodes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KLanguageName.allLanguageCodes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KLanguageName.allLanguageCodes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
