const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kshell_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kshell.html)
pub const KShell = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kshell.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KShell,

    pub const _is_KShell = {};

    /// ### [Upstream resources](https://api.kde.org/kshell.html#splitArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: flag of kshell_enums.Option `
    ///
    /// ` param3: *kshell_enums.Errors `
    ///
    pub fn SplitArgs(allocator: std.mem.Allocator, param1: []const u8, param2: i32, param3: *i32) []const []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KShell_SplitArgs(param1_str, @bitCast(param2), @ptrCast(param3));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kshell.SplitArgs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kshell.SplitArgs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kshell.html#joinArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const []const u8 `
    ///
    pub fn JoinArgs(allocator: std.mem.Allocator, param1: []const []const u8) []const u8 {
        const param1_arr = allocator.alloc(qtc.libqt_string, param1.len) catch @panic("kshell.JoinArgs: Memory allocation failed");
        defer allocator.free(param1_arr);
        for (param1, 0..param1.len) |item, i|
            param1_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = param1_arr.ptr,
        };
        var _str = qtc.KShell_JoinArgs(param1_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.JoinArgs: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kshell.html#quoteArg)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn QuoteArg(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KShell_QuoteArg(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.QuoteArg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kshell.html#tildeExpand)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TildeExpand(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KShell_TildeExpand(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.TildeExpand: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kshell.html#tildeCollapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TildeCollapse(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KShell_TildeCollapse(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.TildeCollapse: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kshell.html#public-types)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const NoOptions: i32 = 0;
        pub const TildeExpand: i32 = 1;
        pub const AbortOnMeta: i32 = 2;
    };

    pub const Errors = enum(i32) {
        pub const NoError: i32 = 0;
        pub const BadQuoting: i32 = 1;
        pub const FoundMeta: i32 = 2;
    };
};
