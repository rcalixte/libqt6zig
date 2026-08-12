const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QFileInfo = @import("libqt6").QFileInfo;
const QTimeZone = @import("libqt6").QTimeZone;
const qdirlisting_enums = enums;
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html)
pub const QDirListing = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDirListing,

    pub const _is_QDirListing = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDirListing object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn new(path: []const u8) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDirListing_new(path_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDirListing object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, path: []const u8, _nameFilters: []const []const u8) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDirListing.new2: Memory allocation failed");
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
        return .{ .ptr = qtc.QDirListing_new2(path_str, nameFilters_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDirListing object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` flags: flag of qdirlisting_enums.IteratorFlag `
    ///
    pub fn new3(path: []const u8, flags: i32) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDirListing_new3(path_str, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDirListing object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _nameFilters: []const []const u8 `
    ///
    /// ` flags: flag of qdirlisting_enums.IteratorFlag `
    ///
    pub fn new4(allocator: std.mem.Allocator, path: []const u8, _nameFilters: []const []const u8, flags: i32) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, _nameFilters.len) catch @panic("QDirListing.new4: Memory allocation failed");
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
        return .{ .ptr = qtc.QDirListing_new4(path_str, nameFilters_list, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ` other: QDirListing `
    ///
    pub fn swap(self: QDirListing, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDirListing;
        qtc.QDirListing_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `iteratorPath` instead
    ///
    pub const IteratorPath = iteratorPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#iteratorPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iteratorPath(self: QDirListing, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing_IteratorPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing.iteratorPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iteratorFlags` instead
    ///
    pub const IteratorFlags = iteratorFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#iteratorFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdirlisting_enums.IteratorFlag `
    ///
    pub fn iteratorFlags(self: QDirListing) i32 {
        return qtc.QDirListing_IteratorFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nameFilters` instead
    ///
    pub const NameFilters = nameFilters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#nameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nameFilters(self: QDirListing, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDirListing_NameFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDirListing.nameFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDirListing.nameFilters: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn begin(self: QDirListing) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cbegin` instead
    ///
    pub const Cbegin = cbegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn cbegin(self: QDirListing) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn end(self: QDirListing) QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cend` instead
    ///
    pub const Cend = cend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn cend(self: QDirListing) QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing_Cend(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn constBegin(self: QDirListing) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn constEnd(self: QDirListing) QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#dtor.QDirListing)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing `
    ///
    pub fn delete(self: QDirListing) void {
        qtc.QDirListing_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html)
pub const QDirListing__DirEntry = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDirListing__DirEntry,

    pub const _is_QDirListing__DirEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDirListing::DirEntry object in C++ memory
    ///
    pub fn new() QDirListing__DirEntry {
        return .{ .ptr = qtc.QDirListing__DirEntry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDirListing::DirEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn new2(other: anytype) QDirListing__DirEntry {
        comptime _ = @TypeOf(other)._is_QDirListing__DirEntry;
        return .{ .ptr = qtc.QDirListing__DirEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDirListing::DirEntry object and invalidate the source QDirListing::DirEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn new3(other: anytype) QDirListing__DirEntry {
        comptime _ = @TypeOf(other)._is_QDirListing__DirEntry;
        return .{ .ptr = qtc.QDirListing__DirEntry_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDirListing::DirEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDirListing__DirEntry `
    ///
    pub fn new4(param1: anytype) QDirListing__DirEntry {
        comptime _ = @TypeOf(param1)._is_QDirListing__DirEntry;
        return .{ .ptr = qtc.QDirListing__DirEntry_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn copyAssign(self: QDirListing__DirEntry, other: QDirListing__DirEntry) void {
        qtc.QDirListing__DirEntry_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn moveAssign(self: QDirListing__DirEntry, other: QDirListing__DirEntry) void {
        qtc.QDirListing__DirEntry_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `baseName` instead
    ///
    pub const BaseName = baseName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#baseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_BaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.baseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `completeBaseName` instead
    ///
    pub const CompleteBaseName = completeBaseName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#completeBaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn completeBaseName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_CompleteBaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.completeBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `suffix` instead
    ///
    pub const Suffix = suffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suffix(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bundleName` instead
    ///
    pub const BundleName = bundleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#bundleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bundleName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_BundleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.bundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `completeSuffix` instead
    ///
    pub const CompleteSuffix = completeSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#completeSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn completeSuffix(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_CompleteSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.completeSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isDir` instead
    ///
    pub const IsDir = isDir;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isDir(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsDir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isFile(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSymLink` instead
    ///
    pub const IsSymLink = isSymLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isSymLink(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsSymLink(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exists` instead
    ///
    pub const Exists = exists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn exists(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_Exists(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isHidden(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isReadable(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isWritable(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExecutable` instead
    ///
    pub const IsExecutable = isExecutable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn isExecutable(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsExecutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileInfo` instead
    ///
    pub const FileInfo = fileInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn fileInfo(self: QDirListing__DirEntry) QFileInfo {
        return .{ .ptr = qtc.QDirListing__DirEntry_FileInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `canonicalFilePath` instead
    ///
    pub const CanonicalFilePath = canonicalFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#canonicalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn canonicalFilePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_CanonicalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.canonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absoluteFilePath` instead
    ///
    pub const AbsoluteFilePath = absoluteFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absoluteFilePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_AbsoluteFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.absoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absolutePath` instead
    ///
    pub const AbsolutePath = absolutePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absolutePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDirListing__DirEntry.absolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn size(self: QDirListing__DirEntry) i64 {
        return qtc.QDirListing__DirEntry_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `birthTime` instead
    ///
    pub const BirthTime = birthTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn birthTime(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_BirthTime(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `metadataChangeTime` instead
    ///
    pub const MetadataChangeTime = metadataChangeTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn metadataChangeTime(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_MetadataChangeTime(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `lastModified` instead
    ///
    pub const LastModified = lastModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn lastModified(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_LastModified(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `lastRead` instead
    ///
    pub const LastRead = lastRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn lastRead(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_LastRead(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `fileTime` instead
    ///
    pub const FileTime = fileTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` typeVal: qfiledevice_enums.FileTime `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn fileTime(self: QDirListing__DirEntry, typeVal: i32, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_FileTime(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` param1: QDirListing__DirEntry `
    ///
    pub fn operatorAssign(self: QDirListing__DirEntry, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDirListing__DirEntry;
        qtc.QDirListing__DirEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn delete(self: QDirListing__DirEntry) void {
        qtc.QDirListing__DirEntry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-sentinel.html)
pub const QDirListing__sentinel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-sentinel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDirListing__sentinel,

    pub const _is_QDirListing__sentinel = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDirListing::sentinel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn new(other: anytype) QDirListing__sentinel {
        comptime _ = @TypeOf(other)._is_QDirListing__sentinel;
        return .{ .ptr = qtc.QDirListing__sentinel_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDirListing::sentinel object and invalidate the source QDirListing::sentinel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn new2(other: anytype) QDirListing__sentinel {
        comptime _ = @TypeOf(other)._is_QDirListing__sentinel;
        return .{ .ptr = qtc.QDirListing__sentinel_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDirListing::sentinel object in C++ memory
    ///
    pub fn new3() QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing__sentinel_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDirListing::sentinel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDirListing__sentinel `
    ///
    pub fn new4(param1: anytype) QDirListing__sentinel {
        comptime _ = @TypeOf(param1)._is_QDirListing__sentinel;
        return .{ .ptr = qtc.QDirListing__sentinel_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__sentinel `
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn copyAssign(self: QDirListing__sentinel, other: QDirListing__sentinel) void {
        qtc.QDirListing__sentinel_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__sentinel `
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn moveAssign(self: QDirListing__sentinel, other: QDirListing__sentinel) void {
        qtc.QDirListing__sentinel_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing__sentinel `
    ///
    pub fn delete(self: QDirListing__sentinel) void {
        qtc.QDirListing__sentinel_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html)
pub const QDirListing__const_iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDirListing__const_iterator,

    pub const _is_QDirListing__const_iterator = {};

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDirListing::const_iterator object and invalidate the source QDirListing::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__const_iterator `
    ///
    pub fn new3(other: anytype) QDirListing__const_iterator {
        comptime _ = @TypeOf(other)._is_QDirListing__const_iterator;
        return .{ .ptr = qtc.QDirListing__const_iterator_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    /// ` other: QDirListing__const_iterator `
    ///
    pub fn moveAssign(self: QDirListing__const_iterator, other: QDirListing__const_iterator) void {
        qtc.QDirListing__const_iterator_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    pub fn operatorMultiply(self: QDirListing__const_iterator) QDirListing__DirEntry {
        return .{ .ptr = qtc.QDirListing__const_iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    pub fn operatorPlusPlus(self: QDirListing__const_iterator) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing__const_iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QDirListing__const_iterator, param1: i32) void {
        qtc.QDirListing__const_iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    pub fn delete(self: QDirListing__const_iterator) void {
        qtc.QDirListing__const_iterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#public-types)
pub const enums = struct {
    pub const IteratorFlag = enum(i32) {
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
