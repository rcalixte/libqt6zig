const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QDir = @import("libqt6").QDir;
const QFileDevice = @import("libqt6").QFileDevice;
const QTimeZone = @import("libqt6").QTimeZone;
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)
pub const QFileInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFileInfo,

    pub const _is_QFileInfo = {};

    /// New constructs a new QFileInfo object.
    ///
    pub fn New() QFileInfo {
        return .{ .ptr = qtc.QFileInfo_new() };
    }

    /// New2 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn New2(file: []const u8) QFileInfo {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QFileInfo_new2(file_str) };
    }

    /// New3 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: QFileDevice `
    ///
    pub fn New3(file: anytype) QFileInfo {
        comptime _ = @TypeOf(file)._is_QFileDevice;
        return .{ .ptr = qtc.QFileInfo_new3(@ptrCast(file.ptr)) };
    }

    /// New4 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QDir `
    ///
    /// ` file: []const u8 `
    ///
    pub fn New4(dir: anytype, file: []const u8) QFileInfo {
        comptime _ = @TypeOf(dir)._is_QDir;
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QFileInfo_new4(@ptrCast(dir.ptr), file_str) };
    }

    /// New5 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileinfo: QFileInfo `
    ///
    pub fn New5(fileinfo: anytype) QFileInfo {
        comptime _ = @TypeOf(fileinfo)._is_QFileInfo;
        return .{ .ptr = qtc.QFileInfo_new5(@ptrCast(fileinfo.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` fileinfo: QFileInfo `
    ///
    pub fn OperatorAssign(self: QFileInfo, fileinfo: anytype) void {
        comptime _ = @TypeOf(fileinfo)._is_QFileInfo;
        qtc.QFileInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(fileinfo.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` other: QFileInfo `
    ///
    pub fn Swap(self: QFileInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFileInfo;
        qtc.QFileInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetFile(self: QFileInfo, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile(@ptrCast(self.ptr), file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` file: QFileDevice `
    ///
    pub fn SetFile2(self: QFileInfo, file: anytype) void {
        comptime _ = @TypeOf(file)._is_QFileDevice;
        qtc.QFileInfo_SetFile2(@ptrCast(self.ptr), @ptrCast(file.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` dir: QDir `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetFile3(self: QFileInfo, dir: anytype, file: []const u8) void {
        comptime _ = @TypeOf(dir)._is_QDir;
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile3(@ptrCast(self.ptr), @ptrCast(dir.ptr), file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Exists(self: QFileInfo) bool {
        return qtc.QFileInfo_Exists(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn Exists2(file: []const u8) bool {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.QFileInfo_Exists2(file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Refresh(self: QFileInfo) void {
        qtc.QFileInfo_Refresh(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsoluteFilePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_AbsoluteFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CanonicalFilePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CanonicalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BaseName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_BaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompleteBaseName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CompleteBaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BundleName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_BundleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompleteSuffix(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CompleteSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsolutePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CanonicalPath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CanonicalPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Dir(self: QFileInfo) QDir {
        return .{ .ptr = qtc.QFileInfo_Dir(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn AbsoluteDir(self: QFileInfo) QDir {
        return .{ .ptr = qtc.QFileInfo_AbsoluteDir(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsReadable(self: QFileInfo) bool {
        return qtc.QFileInfo_IsReadable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsWritable(self: QFileInfo) bool {
        return qtc.QFileInfo_IsWritable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsExecutable(self: QFileInfo) bool {
        return qtc.QFileInfo_IsExecutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsHidden(self: QFileInfo) bool {
        return qtc.QFileInfo_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsNativePath(self: QFileInfo) bool {
        return qtc.QFileInfo_IsNativePath(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsRelative(self: QFileInfo) bool {
        return qtc.QFileInfo_IsRelative(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsAbsolute(self: QFileInfo) bool {
        return qtc.QFileInfo_IsAbsolute(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn MakeAbsolute(self: QFileInfo) bool {
        return qtc.QFileInfo_MakeAbsolute(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsFile(self: QFileInfo) bool {
        return qtc.QFileInfo_IsFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsDir(self: QFileInfo) bool {
        return qtc.QFileInfo_IsDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsSymLink(self: QFileInfo) bool {
        return qtc.QFileInfo_IsSymLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsSymbolicLink(self: QFileInfo) bool {
        return qtc.QFileInfo_IsSymbolicLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsShortcut(self: QFileInfo) bool {
        return qtc.QFileInfo_IsShortcut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsAlias(self: QFileInfo) bool {
        return qtc.QFileInfo_IsAlias(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsJunction(self: QFileInfo) bool {
        return qtc.QFileInfo_IsJunction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsRoot(self: QFileInfo) bool {
        return qtc.QFileInfo_IsRoot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn IsBundle(self: QFileInfo) bool {
        return qtc.QFileInfo_IsBundle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#readSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadSymLink(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_ReadSymLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.ReadSymLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn JunctionTarget(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_JunctionTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.JunctionTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#owner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Owner(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Owner(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn OwnerId(self: QFileInfo) u32 {
        return qtc.QFileInfo_OwnerId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn GroupId(self: QFileInfo) u32 {
        return qtc.QFileInfo_GroupId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn Permission(self: QFileInfo, permissions: i32) bool {
        return qtc.QFileInfo_Permission(@ptrCast(self.ptr), @bitCast(permissions));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn Permissions(self: QFileInfo) i32 {
        return qtc.QFileInfo_Permissions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Size(self: QFileInfo) i64 {
        return qtc.QFileInfo_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn BirthTime(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_BirthTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn MetadataChangeTime(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_MetadataChangeTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn LastModified(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_LastModified(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn LastRead(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_LastRead(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    pub fn FileTime(self: QFileInfo, time: i32) QDateTime {
        return .{ .ptr = qtc.QFileInfo_FileTime(@ptrCast(self.ptr), @bitCast(time)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn BirthTime2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_BirthTime2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn MetadataChangeTime2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_MetadataChangeTime2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn LastModified2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_LastModified2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn LastRead2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_LastRead2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn FileTime2(self: QFileInfo, time: i32, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_FileTime2(@ptrCast(self.ptr), @bitCast(time), @ptrCast(tz.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#caching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Caching(self: QFileInfo) bool {
        return qtc.QFileInfo_Caching(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` on: bool `
    ///
    pub fn SetCaching(self: QFileInfo, on: bool) void {
        qtc.QFileInfo_SetCaching(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Stat(self: QFileInfo) void {
        qtc.QFileInfo_Stat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dtor.QFileInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFileInfo `
    ///
    pub fn Delete(self: QFileInfo) void {
        qtc.QFileInfo_Delete(@ptrCast(self.ptr));
    }
};
