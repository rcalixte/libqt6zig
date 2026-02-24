const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdir_enums = enums;
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html)
pub const qdir = struct {
    /// New constructs a new QDir object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QDir `
    ///
    pub fn New(param1: ?*anyopaque) QtC.QDir {
        return qtc.QDir_new(@ptrCast(param1));
    }

    /// New2 constructs a new QDir object.
    ///
    pub fn New2() QtC.QDir {
        return qtc.QDir_new2();
    }

    /// New3 constructs a new QDir object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilter: []const u8 `
    ///
    pub fn New3(path: []const u8, nameFilter: []const u8) QtC.QDir {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };

        return qtc.QDir_new3(path_str, nameFilter_str);
    }

    /// New4 constructs a new QDir object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn New4(path: []const u8) QtC.QDir {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDir_new4(path_str);
    }

    /// New5 constructs a new QDir object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn New5(path: []const u8, nameFilter: []const u8, sort: i32) QtC.QDir {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };

        return qtc.QDir_new5(path_str, nameFilter_str, @bitCast(sort));
    }

    /// New6 constructs a new QDir object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    /// ` filter: flag of qdir_enums.Filter `
    ///
    pub fn New6(path: []const u8, nameFilter: []const u8, sort: i32, filter: i32) QtC.QDir {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };

        return qtc.QDir_new6(path_str, nameFilter_str, @bitCast(sort), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` param1: QtC.QDir `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDir_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` other: QtC.QDir `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDir_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDir_SetPath(@ptrCast(self), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsolutePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_AbsolutePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#canonicalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CanonicalPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_CanonicalPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.CanonicalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` searchPaths: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetSearchPaths(prefix: []const u8, searchPaths: []const []const u8, allocator: std.mem.Allocator) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const searchPaths_arr = allocator.alloc(qtc.libqt_string, searchPaths.len) catch @panic("qdir.SetSearchPaths: Memory allocation failed");
        defer allocator.free(searchPaths_arr);
        for (searchPaths, 0..searchPaths.len) |item, i| {
            searchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const searchPaths_list = qtc.libqt_list{
            .len = searchPaths.len,
            .data = searchPaths_arr.ptr,
        };
        qtc.QDir_SetSearchPaths(prefix_str, searchPaths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#addSearchPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    pub fn AddSearchPath(prefix: []const u8, path: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDir_AddSearchPath(prefix_str, path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#searchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchPaths(prefix: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_SearchPaths(prefix_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.SearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.SearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#dirName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DirName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_DirName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.DirName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QDir_FilePath(@ptrCast(self), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsoluteFilePath(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QDir_AbsoluteFilePath(@ptrCast(self), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#relativeFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RelativeFilePath(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QDir_RelativeFilePath(@ptrCast(self), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.RelativeFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#toNativeSeparators)
    ///
    /// ## Parameter(s):
    ///
    /// ` pathName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToNativeSeparators(pathName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const pathName_str = qtc.libqt_string{
            .len = pathName.len,
            .data = pathName.ptr,
        };
        var _str = qtc.QDir_ToNativeSeparators(pathName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.ToNativeSeparators: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#fromNativeSeparators)
    ///
    /// ## Parameter(s):
    ///
    /// ` pathName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FromNativeSeparators(pathName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const pathName_str = qtc.libqt_string{
            .len = pathName.len,
            .data = pathName.ptr,
        };
        var _str = qtc.QDir_FromNativeSeparators(pathName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.FromNativeSeparators: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` dirName: []const u8 `
    ///
    pub fn Cd(self: ?*anyopaque, dirName: []const u8) bool {
        const dirName_str = qtc.libqt_string{
            .len = dirName.len,
            .data = dirName.ptr,
        };
        return qtc.QDir_Cd(@ptrCast(self), dirName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cdUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn CdUp(self: ?*anyopaque) bool {
        return qtc.QDir_CdUp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#nameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NameFilters(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_NameFilters(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.NameFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.NameFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setNameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetNameFilters(self: ?*anyopaque, nameFilters: []const []const u8, allocator: std.mem.Allocator) void {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.SetNameFilters: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        qtc.QDir_SetNameFilters(@ptrCast(self), nameFilters_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#filter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdir_enums.Filter `
    ///
    pub fn Filter(self: ?*anyopaque) i32 {
        return qtc.QDir_Filter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` filter: flag of qdir_enums.Filter `
    ///
    pub fn SetFilter(self: ?*anyopaque, filter: i32) void {
        qtc.QDir_SetFilter(@ptrCast(self), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#sorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdir_enums.SortFlag `
    ///
    pub fn Sorting(self: ?*anyopaque) i32 {
        return qtc.QDir_Sorting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn SetSorting(self: ?*anyopaque, sort: i32) void {
        qtc.QDir_SetSorting(@ptrCast(self), @bitCast(sort));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QDir_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QDir_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` param1: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_OperatorSubscript(@ptrCast(self), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.OperatorSubscript: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#nameFiltersFromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NameFiltersFromString(nameFilter: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_NameFiltersFromString(nameFilter_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.NameFiltersFromString: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.NameFiltersFromString: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryList(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_EntryList(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.EntryList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.EntryList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryList2(self: ?*anyopaque, nameFilters: []const []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.EntryList2: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryList2(@ptrCast(self), nameFilters_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.EntryList2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.EntryList2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryInfoList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.EntryInfoList: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryInfoList2(self: ?*anyopaque, nameFilters: []const []const u8, allocator: std.mem.Allocator) []QtC.QFileInfo {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.EntryInfoList2: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList2(@ptrCast(self), nameFilters_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.EntryInfoList2: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` dirName: []const u8 `
    ///
    pub fn Mkdir(self: ?*anyopaque, dirName: []const u8) bool {
        const dirName_str = qtc.libqt_string{
            .len = dirName.len,
            .data = dirName.ptr,
        };
        return qtc.QDir_Mkdir(@ptrCast(self), dirName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` dirName: []const u8 `
    ///
    /// ` permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn Mkdir2(self: ?*anyopaque, dirName: []const u8, permissions: i32) bool {
        const dirName_str = qtc.libqt_string{
            .len = dirName.len,
            .data = dirName.ptr,
        };
        return qtc.QDir_Mkdir2(@ptrCast(self), dirName_str, @bitCast(permissions));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rmdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` dirName: []const u8 `
    ///
    pub fn Rmdir(self: ?*anyopaque, dirName: []const u8) bool {
        const dirName_str = qtc.libqt_string{
            .len = dirName.len,
            .data = dirName.ptr,
        };
        return qtc.QDir_Rmdir(@ptrCast(self), dirName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkpath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` dirPath: []const u8 `
    ///
    pub fn Mkpath(self: ?*anyopaque, dirPath: []const u8) bool {
        const dirPath_str = qtc.libqt_string{
            .len = dirPath.len,
            .data = dirPath.ptr,
        };
        return qtc.QDir_Mkpath(@ptrCast(self), dirPath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rmpath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` dirPath: []const u8 `
    ///
    pub fn Rmpath(self: ?*anyopaque, dirPath: []const u8) bool {
        const dirPath_str = qtc.libqt_string{
            .len = dirPath.len,
            .data = dirPath.ptr,
        };
        return qtc.QDir_Rmpath(@ptrCast(self), dirPath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#removeRecursively)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn RemoveRecursively(self: ?*anyopaque) bool {
        return qtc.QDir_RemoveRecursively(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QDir_IsReadable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QDir_Exists(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn IsRoot(self: ?*anyopaque) bool {
        return qtc.QDir_IsRoot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRelativePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn IsRelativePath(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDir_IsRelativePath(path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn IsAbsolutePath(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDir_IsAbsolutePath(path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn IsRelative(self: ?*anyopaque) bool {
        return qtc.QDir_IsRelative(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn IsAbsolute(self: ?*anyopaque) bool {
        return qtc.QDir_IsAbsolute(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#makeAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn MakeAbsolute(self: ?*anyopaque) bool {
        return qtc.QDir_MakeAbsolute(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Remove(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QDir_Remove(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` oldName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Rename(self: ?*anyopaque, oldName: []const u8, newName: []const u8) bool {
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QDir_Rename(@ptrCast(self), oldName_str, newName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Exists2(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDir_Exists2(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#drives)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Drives(allocator: std.mem.Allocator) []QtC.QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_Drives();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.Drives: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#listSeparator)
    ///
    pub fn ListSeparator() QtC.QChar {
        return qtc.QDir_ListSeparator();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#separator)
    ///
    pub fn Separator() QtC.QChar {
        return qtc.QDir_Separator();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setCurrent)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetCurrent(path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDir_SetCurrent(path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#current)
    ///
    pub fn Current() QtC.QDir {
        return qtc.QDir_Current();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#currentPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_CurrentPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.CurrentPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#home)
    ///
    pub fn Home() QtC.QDir {
        return qtc.QDir_Home();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#homePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HomePath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_HomePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.HomePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#root)
    ///
    pub fn Root() QtC.QDir {
        return qtc.QDir_Root();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rootPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RootPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_RootPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.RootPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#temp)
    ///
    pub fn Temp() QtC.QDir {
        return qtc.QDir_Temp();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#tempPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TempPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_TempPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.TempPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` filters: []const []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Match(filters: []const []const u8, fileName: []const u8, allocator: std.mem.Allocator) bool {
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("qdir.Match: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i| {
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QDir_Match(filters_list, fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` filter: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Match2(filter: []const u8, fileName: []const u8) bool {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QDir_Match2(filter_str, fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cleanPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CleanPath(path: []const u8, allocator: std.mem.Allocator) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.QDir_CleanPath(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdir.CleanPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.QDir_Refresh(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn IsEmpty1(self: ?*anyopaque, filters: i32) bool {
        return qtc.QDir_IsEmpty1(@ptrCast(self), @bitCast(filters));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryList1(self: ?*anyopaque, filters: i32, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_EntryList1(@ptrCast(self), @bitCast(filters));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.EntryList1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.EntryList1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryList22(self: ?*anyopaque, filters: i32, sort: i32, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_EntryList22(@ptrCast(self), @bitCast(filters), @bitCast(sort));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.EntryList22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.EntryList22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryList23(self: ?*anyopaque, nameFilters: []const []const u8, filters: i32, allocator: std.mem.Allocator) []const []const u8 {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.EntryList23: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryList23(@ptrCast(self), nameFilters_list, @bitCast(filters));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.EntryList23: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.EntryList23: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryList3(self: ?*anyopaque, nameFilters: []const []const u8, filters: i32, sort: i32, allocator: std.mem.Allocator) []const []const u8 {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.EntryList3: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryList3(@ptrCast(self), nameFilters_list, @bitCast(filters), @bitCast(sort));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdir.EntryList3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdir.EntryList3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryInfoList1(self: ?*anyopaque, filters: i32, allocator: std.mem.Allocator) []QtC.QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList1(@ptrCast(self), @bitCast(filters));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.EntryInfoList1: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryInfoList22(self: ?*anyopaque, filters: i32, sort: i32, allocator: std.mem.Allocator) []QtC.QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList22(@ptrCast(self), @bitCast(filters), @bitCast(sort));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.EntryInfoList22: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryInfoList23(self: ?*anyopaque, nameFilters: []const []const u8, filters: i32, allocator: std.mem.Allocator) []QtC.QFileInfo {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.EntryInfoList23: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList23(@ptrCast(self), nameFilters_list, @bitCast(filters));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.EntryInfoList23: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDir `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryInfoList3(self: ?*anyopaque, nameFilters: []const []const u8, filters: i32, sort: i32, allocator: std.mem.Allocator) []QtC.QFileInfo {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdir.EntryInfoList3: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList3(@ptrCast(self), nameFilters_list, @bitCast(filters), @bitCast(sort));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QFileInfo, _arr.len) catch @panic("qdir.EntryInfoList3: Memory allocation failed");
        const _data: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#dtor.QDir)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDir `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDir_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#public-types)
pub const enums = struct {
    pub const Filter = enum(i32) {
        pub const Dirs: i32 = 1;
        pub const Files: i32 = 2;
        pub const Drives: i32 = 4;
        pub const NoSymLinks: i32 = 8;
        pub const AllEntries: i32 = 7;
        pub const TypeMask: i32 = 15;
        pub const Readable: i32 = 16;
        pub const Writable: i32 = 32;
        pub const Executable: i32 = 64;
        pub const PermissionMask: i32 = 112;
        pub const Modified: i32 = 128;
        pub const Hidden: i32 = 256;
        pub const System: i32 = 512;
        pub const AccessMask: i32 = 1008;
        pub const AllDirs: i32 = 1024;
        pub const CaseSensitive: i32 = 2048;
        pub const NoDot: i32 = 8192;
        pub const NoDotDot: i32 = 16384;
        pub const NoDotAndDotDot: i32 = 24576;
        pub const NoFilter: i32 = -1;
    };

    pub const SortFlag = enum(i32) {
        pub const Name: i32 = 0;
        pub const Time: i32 = 1;
        pub const Size: i32 = 2;
        pub const Unsorted: i32 = 3;
        pub const SortByMask: i32 = 3;
        pub const DirsFirst: i32 = 4;
        pub const Reversed: i32 = 8;
        pub const IgnoreCase: i32 = 16;
        pub const DirsLast: i32 = 32;
        pub const LocaleAware: i32 = 64;
        pub const Type: i32 = 128;
        pub const NoSort: i32 = -1;
    };
};
