const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/klibexec.html
pub const klibexec = struct {
    /// [Qt documentation](https://api-staging.kde.org/klibexec.html#pathFromAddress)
    ///
    /// ``` param1: []const u8, param2: ?*anyopaque, allocator: std.mem.Allocator ```
    pub fn PathFromAddress(param1: []const u8, param2: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KLibexec_PathFromAddress(param1_str, param2);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klibexec.PathFromAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klibexec.html#pathCandidates)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn PathCandidates(param1: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KLibexec_PathCandidates(param1_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("klibexec.PathCandidates: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klibexec.PathCandidates: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klibexec.html#path)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Path(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KLibexec_Path(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klibexec.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klibexec.html#kdeFrameworksPaths)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn KdeFrameworksPaths(param1: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KLibexec_KdeFrameworksPaths(param1_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("klibexec.KdeFrameworksPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klibexec.KdeFrameworksPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
