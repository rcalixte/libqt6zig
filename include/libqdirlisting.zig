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

    /// New constructs a new QDirListing object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn New(path: []const u8) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDirListing_new(path_str) };
    }

    /// New2 constructs a new QDirListing object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    pub fn New2(allocator: std.mem.Allocator, path: []const u8, nameFilters: []const []const u8) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdirlisting.New2: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i|
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        return .{ .ptr = qtc.QDirListing_new2(path_str, nameFilters_list) };
    }

    /// New3 constructs a new QDirListing object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    /// ` flags: flag of qdirlisting_enums.IteratorFlag `
    ///
    pub fn New3(path: []const u8, flags: i32) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDirListing_new3(path_str, @bitCast(flags)) };
    }

    /// New4 constructs a new QDirListing object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    /// ` nameFilters: []const []const u8 `
    ///
    /// ` flags: flag of qdirlisting_enums.IteratorFlag `
    ///
    pub fn New4(allocator: std.mem.Allocator, path: []const u8, nameFilters: []const []const u8, flags: i32) QDirListing {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const nameFilters_arr = allocator.alloc(qtc.libqt_string, nameFilters.len) catch @panic("qdirlisting.New4: Memory allocation failed");
        defer allocator.free(nameFilters_arr);
        for (nameFilters, 0..nameFilters.len) |item, i|
            nameFilters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const nameFilters_list = qtc.libqt_list{
            .len = nameFilters.len,
            .data = nameFilters_arr.ptr,
        };
        return .{ .ptr = qtc.QDirListing_new4(path_str, nameFilters_list, @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ` other: QDirListing `
    ///
    pub fn Swap(self: QDirListing, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDirListing;
        qtc.QDirListing_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#iteratorPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IteratorPath(self: QDirListing, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing_IteratorPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting.IteratorPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn IteratorFlags(self: QDirListing) i32 {
        return qtc.QDirListing_IteratorFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#nameFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NameFilters(self: QDirListing, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDirListing_NameFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn Begin(self: QDirListing) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn Cbegin(self: QDirListing) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn End(self: QDirListing) QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn Cend(self: QDirListing) QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing_Cend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn ConstBegin(self: QDirListing) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing `
    ///
    pub fn ConstEnd(self: QDirListing) QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting.html#dtor.QDirListing)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing `
    ///
    pub fn Delete(self: QDirListing) void {
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

    /// New constructs a new QDirListing::DirEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn New(other: anytype) QDirListing__DirEntry {
        comptime _ = @TypeOf(other)._is_QDirListing__DirEntry;
        return .{ .ptr = qtc.QDirListing__DirEntry_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QDirListing::DirEntry object and invalidates the source QDirListing::DirEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn New2(other: anytype) QDirListing__DirEntry {
        comptime _ = @TypeOf(other)._is_QDirListing__DirEntry;
        return .{ .ptr = qtc.QDirListing__DirEntry_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QDirListing::DirEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDirListing__DirEntry `
    ///
    pub fn New3(param1: anytype) QDirListing__DirEntry {
        comptime _ = @TypeOf(param1)._is_QDirListing__DirEntry;
        return .{ .ptr = qtc.QDirListing__DirEntry_new3(@ptrCast(param1.ptr)) };
    }

    /// New4 constructs a new QDirListing::DirEntry object.
    ///
    pub fn New4() QDirListing__DirEntry {
        return .{ .ptr = qtc.QDirListing__DirEntry_new4() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn CopyAssign(self: QDirListing__DirEntry, other: QDirListing__DirEntry) void {
        qtc.QDirListing__DirEntry_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` other: QDirListing__DirEntry `
    ///
    pub fn MoveAssign(self: QDirListing__DirEntry, other: QDirListing__DirEntry) void {
        qtc.QDirListing__DirEntry_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#baseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BaseName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_BaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.BaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#completeBaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompleteBaseName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_CompleteBaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.CompleteBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#bundleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BundleName(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_BundleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.BundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#completeSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompleteSuffix(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_CompleteSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.CompleteSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsDir(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsFile(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsSymLink(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsSymLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn Exists(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_Exists(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsHidden(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsReadable(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsReadable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsWritable(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsWritable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn IsExecutable(self: QDirListing__DirEntry) bool {
        return qtc.QDirListing__DirEntry_IsExecutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn FileInfo(self: QDirListing__DirEntry) QFileInfo {
        return .{ .ptr = qtc.QDirListing__DirEntry_FileInfo(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#canonicalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CanonicalFilePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_CanonicalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.CanonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsoluteFilePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_AbsoluteFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsolutePath(self: QDirListing__DirEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDirListing__DirEntry_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdirlisting__direntry.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn Size(self: QDirListing__DirEntry) i64 {
        return qtc.QDirListing__DirEntry_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn BirthTime(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_BirthTime(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn MetadataChangeTime(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_MetadataChangeTime(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn LastModified(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_LastModified(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn LastRead(self: QDirListing__DirEntry, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_LastRead(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

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
    pub fn FileTime(self: QDirListing__DirEntry, typeVal: i32, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QDirListing__DirEntry_FileTime(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-direntry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    /// ` param1: QDirListing__DirEntry `
    ///
    pub fn OperatorAssign(self: QDirListing__DirEntry, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDirListing__DirEntry;
        qtc.QDirListing__DirEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing__DirEntry `
    ///
    pub fn Delete(self: QDirListing__DirEntry) void {
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

    /// New constructs a new QDirListing::sentinel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn New(other: anytype) QDirListing__sentinel {
        comptime _ = @TypeOf(other)._is_QDirListing__sentinel;
        return .{ .ptr = qtc.QDirListing__sentinel_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QDirListing::sentinel object and invalidates the source QDirListing::sentinel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn New2(other: anytype) QDirListing__sentinel {
        comptime _ = @TypeOf(other)._is_QDirListing__sentinel;
        return .{ .ptr = qtc.QDirListing__sentinel_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QDirListing::sentinel object.
    ///
    pub fn New3() QDirListing__sentinel {
        return .{ .ptr = qtc.QDirListing__sentinel_new3() };
    }

    /// New4 constructs a new QDirListing::sentinel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDirListing__sentinel `
    ///
    pub fn New4(param1: anytype) QDirListing__sentinel {
        comptime _ = @TypeOf(param1)._is_QDirListing__sentinel;
        return .{ .ptr = qtc.QDirListing__sentinel_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__sentinel `
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn CopyAssign(self: QDirListing__sentinel, other: QDirListing__sentinel) void {
        qtc.QDirListing__sentinel_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__sentinel `
    ///
    /// ` other: QDirListing__sentinel `
    ///
    pub fn MoveAssign(self: QDirListing__sentinel, other: QDirListing__sentinel) void {
        qtc.QDirListing__sentinel_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing__sentinel `
    ///
    pub fn Delete(self: QDirListing__sentinel) void {
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

    /// New2 constructs a new QDirListing::const_iterator object and invalidates the source QDirListing::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDirListing__const_iterator `
    ///
    pub fn New2(other: anytype) QDirListing__const_iterator {
        comptime _ = @TypeOf(other)._is_QDirListing__const_iterator;
        return .{ .ptr = qtc.QDirListing__const_iterator_new2(@ptrCast(other.ptr)) };
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    /// ` other: QDirListing__const_iterator `
    ///
    pub fn MoveAssign(self: QDirListing__const_iterator, other: QDirListing__const_iterator) void {
        qtc.QDirListing__const_iterator_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    pub fn OperatorMultiply(self: QDirListing__const_iterator) QDirListing__DirEntry {
        return .{ .ptr = qtc.QDirListing__const_iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    pub fn OperatorPlusPlus(self: QDirListing__const_iterator) QDirListing__const_iterator {
        return .{ .ptr = qtc.QDirListing__const_iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdirlisting-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QDirListing__const_iterator, param1: i32) void {
        qtc.QDirListing__const_iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDirListing__const_iterator `
    ///
    pub fn Delete(self: QDirListing__const_iterator) void {
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
