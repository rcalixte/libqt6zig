const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdirlisting.html
pub const qdirlisting = struct {
    /// New constructs a new QDirListing object.
    ///
    /// ``` path: []const u8 ```
    pub fn New(path: []const u8) QtC.QDirListing {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDirListing_new(path_str);
    }

    /// New2 constructs a new QDirListing object.
    ///
    /// ``` path: []const u8, nameFilters: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New2(path: []const u8, nameFilters: [][]const u8, allocator: std.mem.Allocator) QtC.QDirListing {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var nameFilters_arr = allocator.alloc(qtc.struct_libqt_string, nameFilters.len) catch @panic("qdirlisting.: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.struct_libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };

        return qtc.QDirListing_new2(path_str, nameFilters_list);
    }

    /// New3 constructs a new QDirListing object.
    ///
    /// ``` path: []const u8, flags: i32 ```
    pub fn New3(path: []const u8, flags: i64) QtC.QDirListing {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDirListing_new3(path_str, @intCast(flags));
    }

    /// New4 constructs a new QDirListing object.
    ///
    /// ``` path: []const u8, nameFilters: [][]const u8, flags: i32, allocator: std.mem.Allocator ```
    pub fn New4(path: []const u8, nameFilters: [][]const u8, flags: i64, allocator: std.mem.Allocator) QtC.QDirListing {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var nameFilters_arr = allocator.alloc(qtc.struct_libqt_string, nameFilters.len) catch @panic("qdirlisting.: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i| {
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const nameFilters_list = qtc.struct_libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };

        return qtc.QDirListing_new4(path_str, nameFilters_list, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#swap)
    ///
    /// ``` self: QtC.QDirListing, other: QtC.QDirListing ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDirListing_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#iteratorPath)
    ///
    /// ``` self: QtC.QDirListing, allocator: std.mem.Allocator ```
    pub fn IteratorPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing_IteratorPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting.IteratorPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#iteratorFlags)
    ///
    /// ``` self: QtC.QDirListing ```
    pub fn IteratorFlags(self: ?*anyopaque) i64 {
        return qtc.QDirListing_IteratorFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#nameFilters)
    ///
    /// ``` self: QtC.QDirListing, allocator: std.mem.Allocator ```
    pub fn NameFilters(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QDirListing_NameFilters(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdirlisting.NameFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdirlisting.NameFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#end)
    ///
    /// ``` self: QtC.QDirListing ```
    pub fn End(self: ?*anyopaque) QtC.QDirListing__sentinel {
        return qtc.QDirListing_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#cend)
    ///
    /// ``` self: QtC.QDirListing ```
    pub fn Cend(self: ?*anyopaque) QtC.QDirListing__sentinel {
        return qtc.QDirListing_Cend(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#constEnd)
    ///
    /// ``` self: QtC.QDirListing ```
    pub fn ConstEnd(self: ?*anyopaque) QtC.QDirListing__sentinel {
        return qtc.QDirListing_ConstEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#dtor.QDirListing)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDirListing ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDirListing_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdirlisting-direntry.html
pub const qdirlisting__direntry = struct {
    /// New constructs a new QDirListing::DirEntry object.
    ///
    /// ``` other: QtC.QDirListing__DirEntry ```
    pub fn New(other: ?*anyopaque) QtC.QDirListing__DirEntry {
        return qtc.QDirListing__DirEntry_new(@ptrCast(other));
    }

    /// New2 constructs a new QDirListing::DirEntry object and invalidates the source QDirListing::DirEntry object.
    ///
    /// ``` other: QtC.QDirListing__DirEntry ```
    pub fn New2(other: ?*anyopaque) QtC.QDirListing__DirEntry {
        return qtc.QDirListing__DirEntry_new2(@ptrCast(other));
    }

    /// New3 constructs a new QDirListing::DirEntry object.
    ///
    /// ``` param1: QtC.QDirListing__DirEntry ```
    pub fn New3(param1: ?*anyopaque) QtC.QDirListing__DirEntry {
        return qtc.QDirListing__DirEntry_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QDirListing::DirEntry object.
    ///
    ///
    pub fn New4() QtC.QDirListing__DirEntry {
        return qtc.QDirListing__DirEntry_new4();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QDirListing__DirEntry, other: QtC.QDirListing__DirEntry ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDirListing__DirEntry_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QDirListing__DirEntry, other: QtC.QDirListing__DirEntry ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDirListing__DirEntry_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#fileName)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#baseName)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn BaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_BaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.BaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#completeBaseName)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn CompleteBaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_CompleteBaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.CompleteBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#suffix)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn Suffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_Suffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#bundleName)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn BundleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_BundleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.BundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#completeSuffix)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn CompleteSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_CompleteSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.CompleteSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#filePath)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isDir)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsDir(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsDir(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isFile)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsFile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isSymLink)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsSymLink(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsSymLink(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#exists)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_Exists(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isHidden)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isReadable)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsReadable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isWritable)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isExecutable)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn IsExecutable(self: ?*anyopaque) bool {
        return qtc.QDirListing__DirEntry_IsExecutable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#fileInfo)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn FileInfo(self: ?*anyopaque) QtC.QFileInfo {
        return qtc.QDirListing__DirEntry_FileInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#canonicalFilePath)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn CanonicalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_CanonicalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.CanonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#absoluteFilePath)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn AbsoluteFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_AbsoluteFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#absolutePath)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, allocator: std.mem.Allocator ```
    pub fn AbsolutePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirListing__DirEntry_AbsolutePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting::direntry.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#size)
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QDirListing__DirEntry_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#birthTime)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, tz: QtC.QTimeZone ```
    pub fn BirthTime(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QDirListing__DirEntry_BirthTime(@ptrCast(self), @ptrCast(tz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#metadataChangeTime)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, tz: QtC.QTimeZone ```
    pub fn MetadataChangeTime(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QDirListing__DirEntry_MetadataChangeTime(@ptrCast(self), @ptrCast(tz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#lastModified)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, tz: QtC.QTimeZone ```
    pub fn LastModified(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QDirListing__DirEntry_LastModified(@ptrCast(self), @ptrCast(tz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#lastRead)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, tz: QtC.QTimeZone ```
    pub fn LastRead(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QDirListing__DirEntry_LastRead(@ptrCast(self), @ptrCast(tz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#fileTime)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, typeVal: qfiledevice_enums.FileTime, tz: QtC.QTimeZone ```
    pub fn FileTime(self: ?*anyopaque, typeVal: i64, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QDirListing__DirEntry_FileTime(@ptrCast(self), @intCast(typeVal), @ptrCast(tz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#operator=)
    ///
    /// ``` self: QtC.QDirListing__DirEntry, param1: QtC.QDirListing__DirEntry ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDirListing__DirEntry_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDirListing__DirEntry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDirListing__DirEntry_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdirlisting-sentinel.html
pub const qdirlisting__sentinel = struct {
    /// New constructs a new QDirListing::sentinel object.
    ///
    /// ``` other: QtC.QDirListing__sentinel ```
    pub fn New(other: ?*anyopaque) QtC.QDirListing__sentinel {
        return qtc.QDirListing__sentinel_new(@ptrCast(other));
    }

    /// New2 constructs a new QDirListing::sentinel object and invalidates the source QDirListing::sentinel object.
    ///
    /// ``` other: QtC.QDirListing__sentinel ```
    pub fn New2(other: ?*anyopaque) QtC.QDirListing__sentinel {
        return qtc.QDirListing__sentinel_new2(@ptrCast(other));
    }

    /// New3 constructs a new QDirListing::sentinel object.
    ///
    ///
    pub fn New3() QtC.QDirListing__sentinel {
        return qtc.QDirListing__sentinel_new3();
    }

    /// New4 constructs a new QDirListing::sentinel object.
    ///
    /// ``` param1: QtC.QDirListing__sentinel ```
    pub fn New4(param1: ?*anyopaque) QtC.QDirListing__sentinel {
        return qtc.QDirListing__sentinel_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QDirListing__sentinel, other: QtC.QDirListing__sentinel ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDirListing__sentinel_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QDirListing__sentinel, other: QtC.QDirListing__sentinel ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDirListing__sentinel_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDirListing__sentinel ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDirListing__sentinel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdirlisting.html#types
pub const enums = struct {
    pub const IteratorFlag = enum {
        pub const Default: i32 = 0;
        pub const ExcludeFiles: i32 = 4;
        pub const ExcludeDirs: i32 = 8;
        pub const ExcludeSpecial: i32 = 16;
        pub const ResolveSymlinks: i32 = 32;
        pub const FilesOnly: i32 = 24;
        pub const DirsOnly: i32 = 20;
        pub const IncludeHidden: i32 = 64;
        pub const IncludeDotAndDotDot: i32 = 128;
        pub const CaseSensitive: i32 = 256;
        pub const Recursive: i32 = 1024;
        pub const FollowDirSymlinks: i32 = 2048;
    };
};
