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

    /// ### DEPRECATED: Use `suggestName` instead
    ///
    pub const SuggestName = suggestName;

    /// ### [Upstream resources](https://api.kde.org/kfileutils.html#suggestName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` baseURL: QUrl `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn suggestName(allocator: std.mem.Allocator, baseURL: anytype, oldName: []const u8) []const u8 {
        comptime _ = @TypeOf(baseURL)._is_QUrl;
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        var _str = qtc.KFileUtils_SuggestName(@ptrCast(baseURL.ptr), oldName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileUtils.suggestName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `makeSuggestedName` instead
    ///
    pub const MakeSuggestedName = makeSuggestedName;

    /// ### [Upstream resources](https://api.kde.org/kfileutils.html#makeSuggestedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn makeSuggestedName(allocator: std.mem.Allocator, oldName: []const u8) []const u8 {
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        var _str = qtc.KFileUtils_MakeSuggestedName(oldName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileUtils.makeSuggestedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `findAllUniqueFiles` instead
    ///
    pub const FindAllUniqueFiles = findAllUniqueFiles;

    /// ### [Upstream resources](https://api.kde.org/kfileutils.html#findAllUniqueFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dirs: []const []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    pub fn findAllUniqueFiles(allocator: std.mem.Allocator, dirs: []const []const u8, nameFilters: []const []const u8) []const []const u8 {
        const dirs_arr = allocator.alloc(qtc.libqt_string, dirs.len) catch @panic("KFileUtils.findAllUniqueFiles: Memory allocation failed");
        defer allocator.free(dirs_arr);
        for (dirs, 0..dirs.len) |str_item, i|
            dirs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const dirs_list = qtc.libqt_list{
            .len = dirs.len,
            .data = dirs_arr.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("KFileUtils.findAllUniqueFiles: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KFileUtils_FindAllUniqueFiles(dirs_list, nameFilters_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileUtils.findAllUniqueFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileUtils.findAllUniqueFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
