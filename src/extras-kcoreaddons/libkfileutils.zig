const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfileutils.html)
pub const KFileUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfileutils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileUtils,

    pub const _is_KFileUtils = {};

    /// ### [Upstream resources](https://api.kde.org/kfileutils.html#suggestName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn SuggestName(allocator: std.mem.Allocator, param1: anytype, param2: []const u8) []const u8 {
        comptime _ = @TypeOf(param1)._is_QUrl;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var _str = qtc.KFileUtils_SuggestName(@ptrCast(param1.ptr), param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileutils.SuggestName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileutils.html#makeSuggestedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn MakeSuggestedName(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KFileUtils_MakeSuggestedName(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileutils.MakeSuggestedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileutils.html#findAllUniqueFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const []const u8 `
    ///
    /// ` param2: []const []const u8 `
    ///
    pub fn FindAllUniqueFiles(allocator: std.mem.Allocator, param1: []const []const u8, param2: []const []const u8) []const []const u8 {
        const param1_arr = allocator.alloc(qtc.libqt_string, param1.len) catch @panic("kfileutils.FindAllUniqueFiles: Memory allocation failed");
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
        const param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kfileutils.FindAllUniqueFiles: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i|
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileUtils_FindAllUniqueFiles(param1_list, param2_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfileutils.FindAllUniqueFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileutils.FindAllUniqueFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
