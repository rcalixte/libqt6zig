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

    /// ### DEPRECATED: Use `splitArgs` instead
    ///
    pub const SplitArgs = splitArgs;

    /// ### [Upstream resources](https://api.kde.org/kshell.html#splitArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` cmd: []const u8 `
    ///
    /// ` flags: flag of kshell_enums.Option `
    ///
    /// ` err: *kshell_enums.Errors `
    ///
    pub fn splitArgs(allocator: std.mem.Allocator, cmd: []const u8, flags: i32, err: *i32) []const []const u8 {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KShell_SplitArgs(cmd_str, @bitCast(flags), @ptrCast(err));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KShell.splitArgs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KShell.splitArgs: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `joinArgs` instead
    ///
    pub const JoinArgs = joinArgs;

    /// ### [Upstream resources](https://api.kde.org/kshell.html#joinArgs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn joinArgs(allocator: std.mem.Allocator, args: []const []const u8) []const u8 {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("KShell.joinArgs: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        var _str = qtc.KShell_JoinArgs(args_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KShell.joinArgs: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `quoteArg` instead
    ///
    pub const QuoteArg = quoteArg;

    /// ### [Upstream resources](https://api.kde.org/kshell.html#quoteArg)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn quoteArg(allocator: std.mem.Allocator, arg: []const u8) []const u8 {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        var _str = qtc.KShell_QuoteArg(arg_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KShell.quoteArg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tildeExpand` instead
    ///
    pub const TildeExpand = tildeExpand;

    /// ### [Upstream resources](https://api.kde.org/kshell.html#tildeExpand)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn tildeExpand(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.KShell_TildeExpand(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KShell.tildeExpand: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tildeCollapse` instead
    ///
    pub const TildeCollapse = tildeCollapse;

    /// ### [Upstream resources](https://api.kde.org/kshell.html#tildeCollapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn tildeCollapse(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.KShell_TildeCollapse(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KShell.tildeCollapse: Memory allocation failed");
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
