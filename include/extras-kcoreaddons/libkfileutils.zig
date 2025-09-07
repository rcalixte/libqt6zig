const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kfileutils.html
pub const kfileutils = struct {
    /// [Qt documentation](https://api.kde.org/kfileutils.html#suggestName)
    ///
    /// ``` param1: QtC.QUrl, param2: []const u8, allocator: std.mem.Allocator ```
    pub fn SuggestName(param1: ?*anyopaque, param2: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const _str = qtc.KFileUtils_SuggestName(@ptrCast(param1), param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileutils.SuggestName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileutils.html#makeSuggestedName)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn MakeSuggestedName(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KFileUtils_MakeSuggestedName(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileutils.MakeSuggestedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileutils.html#findAllUniqueFiles)
    ///
    /// ``` param1: [][]const u8, param2: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FindAllUniqueFiles(param1: [][]const u8, param2: [][]const u8, allocator: std.mem.Allocator) [][]const u8 {
        var param1_arr = allocator.alloc(qtc.libqt_string, param1.len) catch @panic("kfileutils.FindAllUniqueFiles: Memory allocation failed");
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
        var param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kfileutils.FindAllUniqueFiles: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i| {
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileUtils_FindAllUniqueFiles(param1_list, param2_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
