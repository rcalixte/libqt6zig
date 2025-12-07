const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)
pub const qfileinfo = struct {
    /// New constructs a new QFileInfo object.
    ///
    pub fn New() QtC.QFileInfo {
        return qtc.QFileInfo_new();
    }

    /// New2 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn New2(file: []const u8) QtC.QFileInfo {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QFileInfo_new2(file_str);
    }

    /// New3 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: QtC.QFileDevice `
    ///
    pub fn New3(file: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileInfo_new3(@ptrCast(file));
    }

    /// New4 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QtC.QDir `
    ///
    /// ` file: []const u8 `
    ///
    pub fn New4(dir: ?*anyopaque, file: []const u8) QtC.QFileInfo {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QFileInfo_new4(@ptrCast(dir), file_str);
    }

    /// New5 constructs a new QFileInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileinfo: QtC.QFileInfo `
    ///
    pub fn New5(fileinfo: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileInfo_new5(@ptrCast(fileinfo));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` fileinfo: QtC.QFileInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, fileinfo: ?*anyopaque) void {
        qtc.QFileInfo_OperatorAssign(@ptrCast(self), @ptrCast(fileinfo));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` other: QtC.QFileInfo `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFileInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile(@ptrCast(self), file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` file: QtC.QFileDevice `
    ///
    pub fn SetFile2(self: ?*anyopaque, file: ?*anyopaque) void {
        qtc.QFileInfo_SetFile2(@ptrCast(self), @ptrCast(file));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` dir: QtC.QDir `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetFile3(self: ?*anyopaque, dir: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile3(@ptrCast(self), @ptrCast(dir), file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QFileInfo_Exists(@ptrCast(self));
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
    /// ` self: QtC.QFileInfo `
    ///
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.QFileInfo_Refresh(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsoluteFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_AbsoluteFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CanonicalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CanonicalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_BaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompleteBaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CompleteBaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Suffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BundleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_BundleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CompleteSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CompleteSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsolutePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_AbsolutePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CanonicalPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CanonicalPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn Dir(self: ?*anyopaque) QtC.QDir {
        return qtc.QFileInfo_Dir(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn AbsoluteDir(self: ?*anyopaque) QtC.QDir {
        return qtc.QFileInfo_AbsoluteDir(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsReadable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsWritable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsExecutable(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsExecutable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsHidden(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsNativePath(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsNativePath(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsRelative(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsRelative(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsAbsolute(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsAbsolute(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn MakeAbsolute(self: ?*anyopaque) bool {
        return qtc.QFileInfo_MakeAbsolute(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsDir(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsDir(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsSymLink(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsSymLink(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsSymbolicLink(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsSymbolicLink(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsShortcut(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsShortcut(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsAlias(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsAlias(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsJunction(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsJunction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsRoot(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsRoot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn IsBundle(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsBundle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#readSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadSymLink(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_ReadSymLink(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.ReadSymLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn JunctionTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_JunctionTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.JunctionTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#owner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Owner(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Owner(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn OwnerId(self: ?*anyopaque) u32 {
        return qtc.QFileInfo_OwnerId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn GroupId(self: ?*anyopaque) u32 {
        return qtc.QFileInfo_GroupId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn Permission(self: ?*anyopaque, permissions: i32) bool {
        return qtc.QFileInfo_Permission(@ptrCast(self), @intCast(permissions));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn Permissions(self: ?*anyopaque) i32 {
        return qtc.QFileInfo_Permissions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QFileInfo_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn BirthTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_BirthTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn MetadataChangeTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_MetadataChangeTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn LastModified(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastModified(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn LastRead(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastRead(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    pub fn FileTime(self: ?*anyopaque, time: i32) QtC.QDateTime {
        return qtc.QFileInfo_FileTime(@ptrCast(self), @intCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` tz: QtC.QTimeZone `
    ///
    pub fn BirthTime2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_BirthTime2(@ptrCast(self), @ptrCast(tz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` tz: QtC.QTimeZone `
    ///
    pub fn MetadataChangeTime2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_MetadataChangeTime2(@ptrCast(self), @ptrCast(tz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` tz: QtC.QTimeZone `
    ///
    pub fn LastModified2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastModified2(@ptrCast(self), @ptrCast(tz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` tz: QtC.QTimeZone `
    ///
    pub fn LastRead2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastRead2(@ptrCast(self), @ptrCast(tz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    /// ` tz: QtC.QTimeZone `
    ///
    pub fn FileTime2(self: ?*anyopaque, time: i32, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_FileTime2(@ptrCast(self), @intCast(time), @ptrCast(tz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#caching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn Caching(self: ?*anyopaque) bool {
        return qtc.QFileInfo_Caching(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    /// ` on: bool `
    ///
    pub fn SetCaching(self: ?*anyopaque, on: bool) void {
        qtc.QFileInfo_SetCaching(@ptrCast(self), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn Stat(self: ?*anyopaque) void {
        qtc.QFileInfo_Stat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dtor.QFileInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFileInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileInfo_Delete(@ptrCast(self));
    }
};
