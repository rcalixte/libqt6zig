const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/krecentdirs.html)
pub const KRecentDirs = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krecentdirs.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRecentDirs,

    pub const _is_KRecentDirs = {};

    /// ### DEPRECATED: Use `list` instead
    ///
    pub const List = list;

    /// ### [Upstream resources](https://api.kde.org/krecentdirs.html#list)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileClass: []const u8 `
    ///
    pub fn list(allocator: std.mem.Allocator, fileClass: []const u8) []const []const u8 {
        const fileClass_str = qtc.libqt_string{
            .len = fileClass.len,
            .data = fileClass.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KRecentDirs_List(fileClass_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KRecentDirs.list: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KRecentDirs.list: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `dir` instead
    ///
    pub const Dir = dir;

    /// ### [Upstream resources](https://api.kde.org/krecentdirs.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileClass: []const u8 `
    ///
    pub fn dir(allocator: std.mem.Allocator, fileClass: []const u8) []const u8 {
        const fileClass_str = qtc.libqt_string{
            .len = fileClass.len,
            .data = fileClass.ptr,
        };
        var _str = qtc.KRecentDirs_Dir(fileClass_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KRecentDirs.dir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `add` instead
    ///
    pub const Add = add;

    /// ### [Upstream resources](https://api.kde.org/krecentdirs.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileClass: []const u8 `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn add(fileClass: []const u8, directory: []const u8) void {
        const fileClass_str = qtc.libqt_string{
            .len = fileClass.len,
            .data = fileClass.ptr,
        };
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.KRecentDirs_Add(fileClass_str, directory_str);
    }
};
