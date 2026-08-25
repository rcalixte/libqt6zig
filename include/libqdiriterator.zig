const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDir = @import("libqt6").QDir;
const QFileInfo = @import("libqt6").QFileInfo;
const qdir_enums = @import("libqdir.zig").enums;
const qdiriterator_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html)
pub const QDirIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDirIterator,

    pub const _is_QDirIterator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QDir `
    ///
    pub fn new(dir: anytype) QDirIterator {
        comptime _ = @TypeOf(dir)._is_QDir;
        return .{ .ptr = qtc.QDirIterator_new(@ptrCast(dir.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    pub fn new2(_path: []const u8) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDirIterator_new2(path_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` filter: flag of qdir_enums.Filter `
    ///
    pub fn new3(_path: []const u8, filter: i32) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDirIterator_new3(path_str, @bitCast(filter)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    pub fn new4(allocator: std.mem.Allocator, _path: []const u8, nameFilters: []const []const u8) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("QDirIterator.new4: Memory allocation failed");
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
        return .{ .ptr = qtc.QDirIterator_new4(path_str, nameFilters_list) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QDir `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn new5(dir: anytype, flags: i32) QDirIterator {
        comptime _ = @TypeOf(dir)._is_QDir;
        return .{ .ptr = qtc.QDirIterator_new5(@ptrCast(dir.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn new6(_path: []const u8, flags: i32) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDirIterator_new6(path_str, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    /// ` filter: flag of qdir_enums.Filter `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn new7(_path: []const u8, filter: i32, flags: i32) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDirIterator_new7(path_str, @bitCast(filter), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    pub fn new8(allocator: std.mem.Allocator, _path: []const u8, nameFilters: []const []const u8, filters: i32) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("QDirIterator.new8: Memory allocation failed");
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
        return .{ .ptr = qtc.QDirIterator_new8(path_str, nameFilters_list, @bitCast(filters)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QDirIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn new9(allocator: std.mem.Allocator, _path: []const u8, nameFilters: []const []const u8, filters: i32, flags: i32) QDirIterator {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("QDirIterator.new9: Memory allocation failed");
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
        return .{ .ptr = qtc.QDirIterator_new9(path_str, nameFilters_list, @bitCast(filters), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn next(self: QDirIterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_Next(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirIterator.next: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextFileInfo` instead
    ///
    pub const NextFileInfo = nextFileInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#nextFileInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    pub fn nextFileInfo(self: QDirIterator) QFileInfo {
        return .{ .ptr = qtc.QDirIterator_NextFileInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasNext` instead
    ///
    pub const HasNext = hasNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    pub fn hasNext(self: QDirIterator) bool {
        return qtc.QDirIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QDirIterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirIterator.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: QDirIterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirIterator.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileInfo` instead
    ///
    pub const FileInfo = fileInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#fileInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    pub fn fileInfo(self: QDirIterator) QFileInfo {
        return .{ .ptr = qtc.QDirIterator_FileInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QDirIterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirIterator.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#dtor.QDirIterator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirIterator `
    ///
    pub fn delete(self: QDirIterator) void {
        qtc.QDirIterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#public-types)
pub const enums = struct {
    pub const IteratorFlag = enum {
        pub const NoIteratorFlags: i32 = 0;
        pub const FollowSymlinks: i32 = 1;
        pub const Subdirectories: i32 = 2;
    };
};
