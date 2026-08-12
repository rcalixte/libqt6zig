const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QFileInfo = @import("libqt6").QFileInfo;
const qdir_enums = enums;
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html)
pub const QDir = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDir,

    pub const _is_QDir = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDir object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDir `
    ///
    pub fn new(param1: anytype) QDir {
        comptime _ = @TypeOf(param1)._is_QDir;
        return .{ .ptr = qtc.QDir_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDir object in C++ memory
    ///
    pub fn new2() QDir {
        return .{ .ptr = qtc.QDir_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDir object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` nameFilter: []const u8 `
    ///
    pub fn new3(_path: []const u8, nameFilter: []const u8) QDir {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        return .{ .ptr = qtc.QDir_new3(path_str, nameFilter_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDir object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    pub fn new4(_path: []const u8) QDir {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDir_new4(path_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDir object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn new5(_path: []const u8, nameFilter: []const u8, sort: i32) QDir {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        return .{ .ptr = qtc.QDir_new5(path_str, nameFilter_str, @bitCast(sort)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QDir object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` nameFilter: []const u8 `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    /// ` _filter: flag of qdir_enums.Filter `
    ///
    pub fn new6(_path: []const u8, nameFilter: []const u8, sort: i32, _filter: i32) QDir {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        return .{ .ptr = qtc.QDir_new6(path_str, nameFilter_str, @bitCast(sort), @bitCast(_filter)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` param1: QDir `
    ///
    pub fn operatorAssign(self: QDir, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDir;
        qtc.QDir_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` other: QDir `
    ///
    pub fn swap(self: QDir, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDir;
        qtc.QDir_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn setPath(self: QDir, _path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        qtc.QDir_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absolutePath` instead
    ///
    pub const AbsolutePath = absolutePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absolutePath(self: QDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.absolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `canonicalPath` instead
    ///
    pub const CanonicalPath = canonicalPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#canonicalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn canonicalPath(self: QDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_CanonicalPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.canonicalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSearchPaths` instead
    ///
    pub const SetSearchPaths = setSearchPaths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` _searchPaths: []const []const u8 `
    ///
    pub fn setSearchPaths(allocator: std.mem.Allocator, prefix: []const u8, _searchPaths: []const []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const searchPaths_arr = allocator.alloc(qtc.libqt_string, _searchPaths.len) catch @panic("QDir.setSearchPaths: Memory allocation failed");
        defer allocator.free(searchPaths_arr);
        for (_searchPaths, 0.._searchPaths.len) |str_item, i|
            searchPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const searchPaths_list = qtc.libqt_list{
            .len = _searchPaths.len,
            .data = searchPaths_arr.ptr,
        };
        qtc.QDir_SetSearchPaths(prefix_str, searchPaths_list);
    }

    /// ### DEPRECATED: Use `addSearchPath` instead
    ///
    pub const AddSearchPath = addSearchPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#addSearchPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn addSearchPath(prefix: []const u8, _path: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        qtc.QDir_AddSearchPath(prefix_str, path_str);
    }

    /// ### DEPRECATED: Use `searchPaths` instead
    ///
    pub const SearchPaths = searchPaths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#searchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn searchPaths(allocator: std.mem.Allocator, prefix: []const u8) []const []const u8 {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_SearchPaths(prefix_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.searchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.searchPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `dirName` instead
    ///
    pub const DirName = dirName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#dirName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dirName(self: QDir, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_DirName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.dirName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn filePath(self: QDir, allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QDir_FilePath(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absoluteFilePath` instead
    ///
    pub const AbsoluteFilePath = absoluteFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn absoluteFilePath(self: QDir, allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QDir_AbsoluteFilePath(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.absoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `relativeFilePath` instead
    ///
    pub const RelativeFilePath = relativeFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#relativeFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn relativeFilePath(self: QDir, allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QDir_RelativeFilePath(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.relativeFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toNativeSeparators` instead
    ///
    pub const ToNativeSeparators = toNativeSeparators;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#toNativeSeparators)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pathName: []const u8 `
    ///
    pub fn toNativeSeparators(allocator: std.mem.Allocator, pathName: []const u8) []const u8 {
        const pathName_str = qtc.libqt_string{
            .len = pathName.len,
            .data = pathName.ptr,
        };
        var _str = qtc.QDir_ToNativeSeparators(pathName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.toNativeSeparators: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromNativeSeparators` instead
    ///
    pub const FromNativeSeparators = fromNativeSeparators;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#fromNativeSeparators)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pathName: []const u8 `
    ///
    pub fn fromNativeSeparators(allocator: std.mem.Allocator, pathName: []const u8) []const u8 {
        const pathName_str = qtc.libqt_string{
            .len = pathName.len,
            .data = pathName.ptr,
        };
        var _str = qtc.QDir_FromNativeSeparators(pathName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.fromNativeSeparators: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cd` instead
    ///
    pub const Cd = cd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` _dirName: []const u8 `
    ///
    pub fn cd(self: QDir, _dirName: []const u8) bool {
        const dirName_str = qtc.libqt_string{
            .len = _dirName.len,
            .data = _dirName.ptr,
        };
        return qtc.QDir_Cd(@ptrCast(self.ptr), dirName_str);
    }

    /// ### DEPRECATED: Use `cdUp` instead
    ///
    pub const CdUp = cdUp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cdUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn cdUp(self: QDir) bool {
        return qtc.QDir_CdUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nameFilters` instead
    ///
    pub const NameFilters = nameFilters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#nameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nameFilters(self: QDir, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_NameFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.nameFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.nameFilters: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setNameFilters` instead
    ///
    pub const SetNameFilters = setNameFilters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setNameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    pub fn setNameFilters(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8) void {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.setNameFilters: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        qtc.QDir_SetNameFilters(@ptrCast(self.ptr), nameFilters_list);
    }

    /// ### DEPRECATED: Use `filter` instead
    ///
    pub const Filter = filter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#filter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdir_enums.Filter `
    ///
    pub fn filter(self: QDir) i32 {
        return qtc.QDir_Filter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilter` instead
    ///
    pub const SetFilter = setFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` _filter: flag of qdir_enums.Filter `
    ///
    pub fn setFilter(self: QDir, _filter: i32) void {
        qtc.QDir_SetFilter(@ptrCast(self.ptr), @bitCast(_filter));
    }

    /// ### DEPRECATED: Use `sorting` instead
    ///
    pub const Sorting = sorting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#sorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdir_enums.SortFlag `
    ///
    pub fn sorting(self: QDir) i32 {
        return qtc.QDir_Sorting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSorting` instead
    ///
    pub const SetSorting = setSorting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setSorting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn setSorting(self: QDir, sort: i32) void {
        qtc.QDir_SetSorting(@ptrCast(self.ptr), @bitCast(sort));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn count(self: QDir) isize {
        return qtc.QDir_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn isEmpty(self: QDir) bool {
        return qtc.QDir_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn operatorSubscript(self: QDir, allocator: std.mem.Allocator, param1: isize) []const u8 {
        var _str = qtc.QDir_OperatorSubscript(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.operatorSubscript: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nameFiltersFromString` instead
    ///
    pub const NameFiltersFromString = nameFiltersFromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#nameFiltersFromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` nameFilter: []const u8 `
    ///
    pub fn nameFiltersFromString(allocator: std.mem.Allocator, nameFilter: []const u8) []const []const u8 {
        const nameFilter_str = qtc.libqt_string{
            .len = nameFilter.len,
            .data = nameFilter.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_NameFiltersFromString(nameFilter_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.nameFiltersFromString: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.nameFiltersFromString: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryList` instead
    ///
    pub const EntryList = entryList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entryList(self: QDir, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_EntryList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.entryList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.entryList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryList2` instead
    ///
    pub const EntryList2 = entryList2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    pub fn entryList2(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8) []const []const u8 {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.entryList2: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryList2(@ptrCast(self.ptr), nameFilters_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.entryList2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.entryList2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryInfoList` instead
    ///
    pub const EntryInfoList = entryInfoList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entryInfoList(self: QDir, allocator: std.mem.Allocator) []QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.entryInfoList: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `entryInfoList2` instead
    ///
    pub const EntryInfoList2 = entryInfoList2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    pub fn entryInfoList2(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8) []QFileInfo {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.entryInfoList2: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList2(@ptrCast(self.ptr), nameFilters_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.entryInfoList2: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `mkdir` instead
    ///
    pub const Mkdir = mkdir;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` _dirName: []const u8 `
    ///
    pub fn mkdir(self: QDir, _dirName: []const u8) bool {
        const dirName_str = qtc.libqt_string{
            .len = _dirName.len,
            .data = _dirName.ptr,
        };
        return qtc.QDir_Mkdir(@ptrCast(self.ptr), dirName_str);
    }

    /// ### DEPRECATED: Use `mkdir2` instead
    ///
    pub const Mkdir2 = mkdir2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` _dirName: []const u8 `
    ///
    /// ` permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn mkdir2(self: QDir, _dirName: []const u8, permissions: i32) bool {
        const dirName_str = qtc.libqt_string{
            .len = _dirName.len,
            .data = _dirName.ptr,
        };
        return qtc.QDir_Mkdir2(@ptrCast(self.ptr), dirName_str, @bitCast(permissions));
    }

    /// ### DEPRECATED: Use `rmdir` instead
    ///
    pub const Rmdir = rmdir;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rmdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` _dirName: []const u8 `
    ///
    pub fn rmdir(self: QDir, _dirName: []const u8) bool {
        const dirName_str = qtc.libqt_string{
            .len = _dirName.len,
            .data = _dirName.ptr,
        };
        return qtc.QDir_Rmdir(@ptrCast(self.ptr), dirName_str);
    }

    /// ### DEPRECATED: Use `mkpath` instead
    ///
    pub const Mkpath = mkpath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkpath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` dirPath: []const u8 `
    ///
    pub fn mkpath(self: QDir, dirPath: []const u8) bool {
        const dirPath_str = qtc.libqt_string{
            .len = dirPath.len,
            .data = dirPath.ptr,
        };
        return qtc.QDir_Mkpath(@ptrCast(self.ptr), dirPath_str);
    }

    /// ### DEPRECATED: Use `rmpath` instead
    ///
    pub const Rmpath = rmpath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rmpath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` dirPath: []const u8 `
    ///
    pub fn rmpath(self: QDir, dirPath: []const u8) bool {
        const dirPath_str = qtc.libqt_string{
            .len = dirPath.len,
            .data = dirPath.ptr,
        };
        return qtc.QDir_Rmpath(@ptrCast(self.ptr), dirPath_str);
    }

    /// ### DEPRECATED: Use `removeRecursively` instead
    ///
    pub const RemoveRecursively = removeRecursively;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#removeRecursively)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn removeRecursively(self: QDir) bool {
        return qtc.QDir_RemoveRecursively(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn isReadable(self: QDir) bool {
        return qtc.QDir_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exists` instead
    ///
    pub const Exists = exists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn exists(self: QDir) bool {
        return qtc.QDir_Exists(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRoot` instead
    ///
    pub const IsRoot = isRoot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn isRoot(self: QDir) bool {
        return qtc.QDir_IsRoot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRelativePath` instead
    ///
    pub const IsRelativePath = isRelativePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRelativePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    pub fn isRelativePath(_path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return qtc.QDir_IsRelativePath(path_str);
    }

    /// ### DEPRECATED: Use `isAbsolutePath` instead
    ///
    pub const IsAbsolutePath = isAbsolutePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    pub fn isAbsolutePath(_path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return qtc.QDir_IsAbsolutePath(path_str);
    }

    /// ### DEPRECATED: Use `isRelative` instead
    ///
    pub const IsRelative = isRelative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn isRelative(self: QDir) bool {
        return qtc.QDir_IsRelative(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAbsolute` instead
    ///
    pub const IsAbsolute = isAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn isAbsolute(self: QDir) bool {
        return qtc.QDir_IsAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeAbsolute` instead
    ///
    pub const MakeAbsolute = makeAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#makeAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn makeAbsolute(self: QDir) bool {
        return qtc.QDir_MakeAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn remove(self: QDir, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QDir_Remove(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `rename` instead
    ///
    pub const Rename = rename;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` oldName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn rename(self: QDir, oldName: []const u8, newName: []const u8) bool {
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QDir_Rename(@ptrCast(self.ptr), oldName_str, newName_str);
    }

    /// ### DEPRECATED: Use `exists2` instead
    ///
    pub const Exists2 = exists2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` name: []const u8 `
    ///
    pub fn exists2(self: QDir, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDir_Exists2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `drives` instead
    ///
    pub const Drives = drives;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#drives)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn drives(allocator: std.mem.Allocator) []QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_Drives();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.drives: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listSeparator` instead
    ///
    pub const ListSeparator = listSeparator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#listSeparator)
    ///
    pub fn listSeparator() QChar {
        return .{ .ptr = qtc.QDir_ListSeparator() };
    }

    /// ### DEPRECATED: Use `separator` instead
    ///
    pub const Separator = separator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#separator)
    ///
    pub fn separator() QChar {
        return .{ .ptr = qtc.QDir_Separator() };
    }

    /// ### DEPRECATED: Use `setCurrent` instead
    ///
    pub const SetCurrent = setCurrent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setCurrent)
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    pub fn setCurrent(_path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return qtc.QDir_SetCurrent(path_str);
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#current)
    ///
    pub fn current() QDir {
        return .{ .ptr = qtc.QDir_Current() };
    }

    /// ### DEPRECATED: Use `currentPath` instead
    ///
    pub const CurrentPath = currentPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#currentPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_CurrentPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.currentPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `home` instead
    ///
    pub const Home = home;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#home)
    ///
    pub fn home() QDir {
        return .{ .ptr = qtc.QDir_Home() };
    }

    /// ### DEPRECATED: Use `homePath` instead
    ///
    pub const HomePath = homePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#homePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homePath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_HomePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.homePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `root` instead
    ///
    pub const Root = root;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#root)
    ///
    pub fn root() QDir {
        return .{ .ptr = qtc.QDir_Root() };
    }

    /// ### DEPRECATED: Use `rootPath` instead
    ///
    pub const RootPath = rootPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rootPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rootPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_RootPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.rootPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `temp` instead
    ///
    pub const Temp = temp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#temp)
    ///
    pub fn temp() QDir {
        return .{ .ptr = qtc.QDir_Temp() };
    }

    /// ### DEPRECATED: Use `tempPath` instead
    ///
    pub const TempPath = tempPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#tempPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tempPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDir_TempPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.tempPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: []const []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn match(allocator: std.mem.Allocator, filters: []const []const u8, fileName: []const u8) bool {
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("QDir.match: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |str_item, i|
            filters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
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

    /// ### DEPRECATED: Use `match2` instead
    ///
    pub const Match2 = match2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` _filter: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn match2(_filter: []const u8, fileName: []const u8) bool {
        const filter_str = qtc.libqt_string{
            .len = _filter.len,
            .data = _filter.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QDir_Match2(filter_str, fileName_str);
    }

    /// ### DEPRECATED: Use `cleanPath` instead
    ///
    pub const CleanPath = cleanPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cleanPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn cleanPath(allocator: std.mem.Allocator, _path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        var _str = qtc.QDir_CleanPath(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDir.cleanPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `refresh` instead
    ///
    pub const Refresh = refresh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    pub fn refresh(self: QDir) void {
        qtc.QDir_Refresh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty1` instead
    ///
    pub const IsEmpty1 = isEmpty1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn isEmpty1(self: QDir, filters: i32) bool {
        return qtc.QDir_IsEmpty1(@ptrCast(self.ptr), @bitCast(filters));
    }

    /// ### DEPRECATED: Use `entryList1` instead
    ///
    pub const EntryList1 = entryList1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn entryList1(self: QDir, allocator: std.mem.Allocator, filters: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_EntryList1(@ptrCast(self.ptr), @bitCast(filters));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.entryList1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.entryList1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryList22` instead
    ///
    pub const EntryList22 = entryList22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn entryList22(self: QDir, allocator: std.mem.Allocator, filters: i32, sort: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDir_EntryList22(@ptrCast(self.ptr), @bitCast(filters), @bitCast(sort));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.entryList22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.entryList22: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryList23` instead
    ///
    pub const EntryList23 = entryList23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn entryList23(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8, filters: i32) []const []const u8 {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.entryList23: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryList23(@ptrCast(self.ptr), nameFilters_list, @bitCast(filters));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.entryList23: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.entryList23: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryList3` instead
    ///
    pub const EntryList3 = entryList3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn entryList3(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8, filters: i32, sort: i32) []const []const u8 {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.entryList3: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryList3(@ptrCast(self.ptr), nameFilters_list, @bitCast(filters), @bitCast(sort));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDir.entryList3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDir.entryList3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entryInfoList1` instead
    ///
    pub const EntryInfoList1 = entryInfoList1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn entryInfoList1(self: QDir, allocator: std.mem.Allocator, filters: i32) []QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList1(@ptrCast(self.ptr), @bitCast(filters));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.entryInfoList1: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `entryInfoList22` instead
    ///
    pub const EntryInfoList22 = entryInfoList22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn entryInfoList22(self: QDir, allocator: std.mem.Allocator, filters: i32, sort: i32) []QFileInfo {
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList22(@ptrCast(self.ptr), @bitCast(filters), @bitCast(sort));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.entryInfoList22: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `entryInfoList23` instead
    ///
    pub const EntryInfoList23 = entryInfoList23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn entryInfoList23(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8, filters: i32) []QFileInfo {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.entryInfoList23: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList23(@ptrCast(self.ptr), nameFilters_list, @bitCast(filters));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.entryInfoList23: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `entryInfoList3` instead
    ///
    pub const EntryInfoList3 = entryInfoList3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDir `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` sort: flag of qdir_enums.SortFlag `
    ///
    pub fn entryInfoList3(self: QDir, allocator: std.mem.Allocator, _nameFilters: []const []const u8, filters: i32, sort: i32) []QFileInfo {
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDir.entryInfoList3: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (_nameFilters, 0.._nameFilters.len) |str_item, i|
            nameFilters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = _nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QDir_EntryInfoList3(@ptrCast(self.ptr), nameFilters_list, @bitCast(filters), @bitCast(sort));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QFileInfo, _arr.len) catch @panic("QDir.entryInfoList3: Memory allocation failed");
        const _data_val: [*]QtC.QFileInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdir.html#dtor.QDir)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDir `
    ///
    pub fn delete(self: QDir) void {
        qtc.QDir_Delete(@ptrCast(self.ptr));
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
