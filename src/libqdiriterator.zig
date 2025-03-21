const C = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qdiriterator.html
pub const qdiriterator = struct {
    /// New constructs a new QDirIterator object.
    ///
    /// ``` dir: ?*C.QDir ```
    pub fn New(dir: ?*anyopaque) ?*C.QDirIterator {
        return C.QDirIterator_new(@ptrCast(dir));
    }

    /// New2 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8 ```
    pub fn New2(path: []const u8) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };

        return C.QDirIterator_new2(path_str);
    }

    /// New3 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8, filter: i32 ```
    pub fn New3(path: []const u8, filter: i64) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };

        return C.QDirIterator_new3(path_str, @intCast(filter));
    }

    /// New4 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8, nameFilters: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New4(path: []const u8, nameFilters: [][]const u8, allocator: std.mem.Allocator) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        var nameFilters_arr = allocator.alloc(C.struct_libqt_string, nameFilters.len) catch @panic("Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, _i| {
            nameFilters_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const nameFilters_list = C.struct_libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };

        return C.QDirIterator_new4(path_str, nameFilters_list);
    }

    /// New5 constructs a new QDirIterator object.
    ///
    /// ``` dir: ?*C.QDir, flags: i32 ```
    pub fn New5(dir: ?*anyopaque, flags: i64) ?*C.QDirIterator {
        return C.QDirIterator_new5(@ptrCast(dir), @intCast(flags));
    }

    /// New6 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8, flags: i32 ```
    pub fn New6(path: []const u8, flags: i64) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };

        return C.QDirIterator_new6(path_str, @intCast(flags));
    }

    /// New7 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8, filter: i32, flags: i32 ```
    pub fn New7(path: []const u8, filter: i64, flags: i64) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };

        return C.QDirIterator_new7(path_str, @intCast(filter), @intCast(flags));
    }

    /// New8 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8, nameFilters: [][]const u8, filters: i32, allocator: std.mem.Allocator ```
    pub fn New8(path: []const u8, nameFilters: [][]const u8, filters: i64, allocator: std.mem.Allocator) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        var nameFilters_arr = allocator.alloc(C.struct_libqt_string, nameFilters.len) catch @panic("Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, _i| {
            nameFilters_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const nameFilters_list = C.struct_libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };

        return C.QDirIterator_new8(path_str, nameFilters_list, @intCast(filters));
    }

    /// New9 constructs a new QDirIterator object.
    ///
    /// ``` path: []const u8, nameFilters: [][]const u8, filters: i32, flags: i32, allocator: std.mem.Allocator ```
    pub fn New9(path: []const u8, nameFilters: [][]const u8, filters: i64, flags: i64, allocator: std.mem.Allocator) ?*C.QDirIterator {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        var nameFilters_arr = allocator.alloc(C.struct_libqt_string, nameFilters.len) catch @panic("Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, _i| {
            nameFilters_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const nameFilters_list = C.struct_libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };

        return C.QDirIterator_new9(path_str, nameFilters_list, @intCast(filters), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#next)
    ///
    /// ``` self: ?*C.QDirIterator, allocator: std.mem.Allocator ```
    pub fn Next(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDirIterator_Next(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#nextFileInfo)
    ///
    /// ``` self: ?*C.QDirIterator ```
    pub fn NextFileInfo(self: ?*anyopaque) ?*C.QFileInfo {
        return C.QDirIterator_NextFileInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#hasNext)
    ///
    /// ``` self: ?*C.QDirIterator ```
    pub fn HasNext(self: ?*anyopaque) bool {
        return C.QDirIterator_HasNext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileName)
    ///
    /// ``` self: ?*C.QDirIterator, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDirIterator_FileName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#filePath)
    ///
    /// ``` self: ?*C.QDirIterator, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDirIterator_FilePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileInfo)
    ///
    /// ``` self: ?*C.QDirIterator ```
    pub fn FileInfo(self: ?*anyopaque) ?*C.QFileInfo {
        return C.QDirIterator_FileInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#path)
    ///
    /// ``` self: ?*C.QDirIterator, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDirIterator_Path(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDirIterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDirIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdiriterator.html#types
pub const enums = struct {
    pub const IteratorFlag = enum {
        pub const NoIteratorFlags: i32 = 0;
        pub const FollowSymlinks: i32 = 1;
        pub const Subdirectories: i32 = 2;
    };
};
