const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klibexec.html)
pub const KLibexec = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klibexec.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLibexec,

    pub const _is_KLibexec = {};

    /// ### DEPRECATED: Use `pathFromAddress` instead
    ///
    pub const PathFromAddress = pathFromAddress;

    /// ### [Upstream resources](https://api.kde.org/klibexec.html#pathFromAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` relativePath: []const u8 `
    ///
    /// ` address: ?*anyopaque `
    ///
    pub fn pathFromAddress(allocator: std.mem.Allocator, relativePath: []const u8, address: ?*anyopaque) []const u8 {
        const relativePath_str = qtc.libqt_string{
            .len = relativePath.len,
            .data = relativePath.ptr,
        };
        var _str = qtc.KLibexec_PathFromAddress(relativePath_str, @ptrCast(address));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLibexec.pathFromAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pathCandidates` instead
    ///
    pub const PathCandidates = pathCandidates;

    /// ### [Upstream resources](https://api.kde.org/klibexec.html#pathCandidates)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` relativePath: []const u8 `
    ///
    pub fn pathCandidates(allocator: std.mem.Allocator, relativePath: []const u8) []const []const u8 {
        const relativePath_str = qtc.libqt_string{
            .len = relativePath.len,
            .data = relativePath.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KLibexec_PathCandidates(relativePath_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KLibexec.pathCandidates: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KLibexec.pathCandidates: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://api.kde.org/klibexec.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` relativePath: []const u8 `
    ///
    pub fn path(allocator: std.mem.Allocator, relativePath: []const u8) []const u8 {
        const relativePath_str = qtc.libqt_string{
            .len = relativePath.len,
            .data = relativePath.ptr,
        };
        var _str = qtc.KLibexec_Path(relativePath_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KLibexec.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `kdeFrameworksPaths` instead
    ///
    pub const KdeFrameworksPaths = kdeFrameworksPaths;

    /// ### [Upstream resources](https://api.kde.org/klibexec.html#kdeFrameworksPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` relativePath: []const u8 `
    ///
    pub fn kdeFrameworksPaths(allocator: std.mem.Allocator, relativePath: []const u8) []const []const u8 {
        const relativePath_str = qtc.libqt_string{
            .len = relativePath.len,
            .data = relativePath.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KLibexec_KdeFrameworksPaths(relativePath_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KLibexec.kdeFrameworksPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KLibexec.kdeFrameworksPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
