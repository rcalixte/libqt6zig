const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kshell_enums = enums;
const std = @import("std");

/// https://api-staging.kde.org/kshell.html
pub const kshell = struct {
    /// [Qt documentation](https://api-staging.kde.org/kshell.html#splitArgs)
    ///
    /// ``` param1: []const u8, param2: flag of kshell_enums.Option, param3: *kshell_enums.Errors, allocator: std.mem.Allocator ```
    pub fn SplitArgs(param1: []const u8, param2: i64, param3: *i32, allocator: std.mem.Allocator) [][]const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KShell_SplitArgs(param1_str, @intCast(param2), @ptrCast(param3));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api-staging.kde.org/kshell.html#joinArgs)
    ///
    /// ``` param1: [][]const u8, allocator: std.mem.Allocator ```
    pub fn JoinArgs(param1: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        var param1_arr = allocator.alloc(qtc.libqt_string, param1.len) catch @panic("kshell.JoinArgs: Memory allocation failed");
        defer allocator.free(param1_arr);
        for (param1, 0..param1.len) |item, i| {
            param1_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = param1_arr.ptr,
        };
        const _str = qtc.KShell_JoinArgs(param1_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.JoinArgs: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kshell.html#quoteArg)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn QuoteArg(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KShell_QuoteArg(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.QuoteArg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kshell.html#tildeExpand)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn TildeExpand(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KShell_TildeExpand(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.TildeExpand: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kshell.html#tildeCollapse)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn TildeCollapse(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KShell_TildeCollapse(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kshell.TildeCollapse: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// https://api-staging.kde.org/kshell.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const NoOptions: i32 = 0;
        pub const TildeExpand: i32 = 1;
        pub const AbortOnMeta: i32 = 2;
    };

    pub const Errors = enum {
        pub const NoError: i32 = 0;
        pub const BadQuoting: i32 = 1;
        pub const FoundMeta: i32 = 2;
    };
};
