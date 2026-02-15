const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdir_enums = @import("libqdir.zig").enums;
const qdiriterator_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html)
pub const qdiriterator = struct {
    /// New constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QtC.QDir `
    ///
    pub fn New(dir: ?*anyopaque) QtC.QDirIterator {
        return qtc.QDirIterator_new(@ptrCast(dir));
    }

    /// New2 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn New2(path: []const u8) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDirIterator_new2(path_str);
    }

    /// New3 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` filter: flag of qdir_enums.Filter `
    ///
    pub fn New3(path: []const u8, filter: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDirIterator_new3(path_str, @intCast(filter));
    }

    /// New4 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New4(path: []const u8, nameFilters: []const []const u8, allocator: std.mem.Allocator) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdiriterator.New4: Memory allocation failed");
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

        return qtc.QDirIterator_new4(path_str, nameFilters_list);
    }

    /// New5 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QtC.QDir `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn New5(dir: ?*anyopaque, flags: i32) QtC.QDirIterator {
        return qtc.QDirIterator_new5(@ptrCast(dir), @intCast(flags));
    }

    /// New6 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn New6(path: []const u8, flags: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDirIterator_new6(path_str, @intCast(flags));
    }

    /// New7 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` filter: flag of qdir_enums.Filter `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    pub fn New7(path: []const u8, filter: i32, flags: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDirIterator_new7(path_str, @intCast(filter), @intCast(flags));
    }

    /// New8 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New8(path: []const u8, nameFilters: []const []const u8, filters: i32, allocator: std.mem.Allocator) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdiriterator.New8: Memory allocation failed");
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

        return qtc.QDirIterator_new8(path_str, nameFilters_list, @intCast(filters));
    }

    /// New9 constructs a new QDirIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` filters: flag of qdir_enums.Filter `
    ///
    /// ` flags: flag of qdiriterator_enums.IteratorFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New9(path: []const u8, nameFilters: []const []const u8, filters: i32, flags: i32, allocator: std.mem.Allocator) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdiriterator.New9: Memory allocation failed");
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

        return qtc.QDirIterator_new9(path_str, nameFilters_list, @intCast(filters), @intCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Next(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_Next(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.Next: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#nextFileInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    pub fn NextFileInfo(self: ?*anyopaque) QtC.QFileInfo {
        return qtc.QDirIterator_NextFileInfo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    pub fn HasNext(self: ?*anyopaque) bool {
        return qtc.QDirIterator_HasNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#fileInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    pub fn FileInfo(self: ?*anyopaque) QtC.QFileInfo {
        return qtc.QDirIterator_FileInfo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDirIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirIterator_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#dtor.QDirIterator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDirIterator `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDirIterator_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdiriterator.html#public-types)
pub const enums = struct {
    pub const IteratorFlag = enum(i32) {
        pub const NoIteratorFlags: i32 = 0;
        pub const FollowSymlinks: i32 = 1;
        pub const Subdirectories: i32 = 2;
    };
};
