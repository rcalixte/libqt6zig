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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFileInfo object in C++ memory
    ///
    pub fn new() QFileInfo {
        return .{ .ptr = qtc.QFileInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFileInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn new2(file: []const u8) QFileInfo {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QFileInfo_new2(file_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFileInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: QFileDevice `
    ///
    pub fn new3(file: anytype) QFileInfo {
        comptime _ = @TypeOf(file)._is_QFileDevice;
        return .{ .ptr = qtc.QFileInfo_new3(@ptrCast(file.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QFileInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _dir: QDir `
    ///
    /// ` file: []const u8 `
    ///
    pub fn new4(_dir: anytype, file: []const u8) QFileInfo {
        comptime _ = @TypeOf(_dir)._is_QDir;
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QFileInfo_new4(@ptrCast(_dir.ptr), file_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QFileInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileinfo: QFileInfo `
    ///
    pub fn new5(fileinfo: anytype) QFileInfo {
        comptime _ = @TypeOf(fileinfo)._is_QFileInfo;
        return .{ .ptr = qtc.QFileInfo_new5(@ptrCast(fileinfo.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` fileinfo: QFileInfo `
    ///
    pub fn operatorAssign(self: QFileInfo, fileinfo: anytype) void {
        comptime _ = @TypeOf(fileinfo)._is_QFileInfo;
        qtc.QFileInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(fileinfo.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` other: QFileInfo `
    ///
    pub fn swap(self: QFileInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFileInfo;
        qtc.QFileInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setFile` instead
    ///
    pub const SetFile = setFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` file: []const u8 `
    ///
    pub fn setFile(self: QFileInfo, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `setFile2` instead
    ///
    pub const SetFile2 = setFile2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` file: QFileDevice `
    ///
    pub fn setFile2(self: QFileInfo, file: anytype) void {
        comptime _ = @TypeOf(file)._is_QFileDevice;
        qtc.QFileInfo_SetFile2(@ptrCast(self.ptr), @ptrCast(file.ptr));
    }

    /// ### DEPRECATED: Use `setFile3` instead
    ///
    pub const SetFile3 = setFile3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` _dir: QDir `
    ///
    /// ` file: []const u8 `
    ///
    pub fn setFile3(self: QFileInfo, _dir: anytype, file: []const u8) void {
        comptime _ = @TypeOf(_dir)._is_QDir;
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile3(@ptrCast(self.ptr), @ptrCast(_dir.ptr), file_str);
    }

    /// ### DEPRECATED: Use `exists` instead
    ///
    pub const Exists = exists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn exists(self: QFileInfo) bool {
        return qtc.QFileInfo_Exists(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exists2` instead
    ///
    pub const Exists2 = exists2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn exists2(file: []const u8) bool {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.QFileInfo_Exists2(file_str);
    }

    /// ### DEPRECATED: Use `refresh` instead
    ///
    pub const Refresh = refresh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn refresh(self: QFileInfo) void {
        qtc.QFileInfo_Refresh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absoluteFilePath` instead
    ///
    pub const AbsoluteFilePath = absoluteFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absoluteFilePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_AbsoluteFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.absoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `canonicalFilePath` instead
    ///
    pub const CanonicalFilePath = canonicalFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn canonicalFilePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CanonicalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.canonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `baseName` instead
    ///
    pub const BaseName = baseName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_BaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.baseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `completeBaseName` instead
    ///
    pub const CompleteBaseName = completeBaseName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn completeBaseName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CompleteBaseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.completeBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `suffix` instead
    ///
    pub const Suffix = suffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suffix(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bundleName` instead
    ///
    pub const BundleName = bundleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bundleName(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_BundleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.bundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `completeSuffix` instead
    ///
    pub const CompleteSuffix = completeSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn completeSuffix(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CompleteSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.completeSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absolutePath` instead
    ///
    pub const AbsolutePath = absolutePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absolutePath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.absolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `canonicalPath` instead
    ///
    pub const CanonicalPath = canonicalPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn canonicalPath(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_CanonicalPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.canonicalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dir` instead
    ///
    pub const Dir = dir;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn dir(self: QFileInfo) QDir {
        return .{ .ptr = qtc.QFileInfo_Dir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `absoluteDir` instead
    ///
    pub const AbsoluteDir = absoluteDir;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn absoluteDir(self: QFileInfo) QDir {
        return .{ .ptr = qtc.QFileInfo_AbsoluteDir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isReadable(self: QFileInfo) bool {
        return qtc.QFileInfo_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isWritable(self: QFileInfo) bool {
        return qtc.QFileInfo_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExecutable` instead
    ///
    pub const IsExecutable = isExecutable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isExecutable(self: QFileInfo) bool {
        return qtc.QFileInfo_IsExecutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isHidden(self: QFileInfo) bool {
        return qtc.QFileInfo_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNativePath` instead
    ///
    pub const IsNativePath = isNativePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isNativePath(self: QFileInfo) bool {
        return qtc.QFileInfo_IsNativePath(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRelative` instead
    ///
    pub const IsRelative = isRelative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isRelative(self: QFileInfo) bool {
        return qtc.QFileInfo_IsRelative(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAbsolute` instead
    ///
    pub const IsAbsolute = isAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isAbsolute(self: QFileInfo) bool {
        return qtc.QFileInfo_IsAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeAbsolute` instead
    ///
    pub const MakeAbsolute = makeAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn makeAbsolute(self: QFileInfo) bool {
        return qtc.QFileInfo_MakeAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isFile(self: QFileInfo) bool {
        return qtc.QFileInfo_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDir` instead
    ///
    pub const IsDir = isDir;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isDir(self: QFileInfo) bool {
        return qtc.QFileInfo_IsDir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSymLink` instead
    ///
    pub const IsSymLink = isSymLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isSymLink(self: QFileInfo) bool {
        return qtc.QFileInfo_IsSymLink(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSymbolicLink` instead
    ///
    pub const IsSymbolicLink = isSymbolicLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isSymbolicLink(self: QFileInfo) bool {
        return qtc.QFileInfo_IsSymbolicLink(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isShortcut` instead
    ///
    pub const IsShortcut = isShortcut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isShortcut(self: QFileInfo) bool {
        return qtc.QFileInfo_IsShortcut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAlias` instead
    ///
    pub const IsAlias = isAlias;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isAlias(self: QFileInfo) bool {
        return qtc.QFileInfo_IsAlias(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isJunction` instead
    ///
    pub const IsJunction = isJunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isJunction(self: QFileInfo) bool {
        return qtc.QFileInfo_IsJunction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRoot` instead
    ///
    pub const IsRoot = isRoot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isRoot(self: QFileInfo) bool {
        return qtc.QFileInfo_IsRoot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBundle` instead
    ///
    pub const IsBundle = isBundle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn isBundle(self: QFileInfo) bool {
        return qtc.QFileInfo_IsBundle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `symLinkTarget` instead
    ///
    pub const SymLinkTarget = symLinkTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn symLinkTarget(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.symLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readSymLink` instead
    ///
    pub const ReadSymLink = readSymLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#readSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readSymLink(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_ReadSymLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.readSymLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `junctionTarget` instead
    ///
    pub const JunctionTarget = junctionTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn junctionTarget(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_JunctionTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.junctionTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `owner` instead
    ///
    pub const Owner = owner;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#owner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn owner(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Owner(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ownerId` instead
    ///
    pub const OwnerId = ownerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn ownerId(self: QFileInfo) u32 {
        return qtc.QFileInfo_OwnerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: QFileInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileInfo_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileInfo.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `groupId` instead
    ///
    pub const GroupId = groupId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn groupId(self: QFileInfo) u32 {
        return qtc.QFileInfo_GroupId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `permission` instead
    ///
    pub const Permission = permission;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` _permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn permission(self: QFileInfo, _permissions: i32) bool {
        return qtc.QFileInfo_Permission(@ptrCast(self.ptr), @bitCast(_permissions));
    }

    /// ### DEPRECATED: Use `permissions` instead
    ///
    pub const Permissions = permissions;

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
    pub fn permissions(self: QFileInfo) i32 {
        return qtc.QFileInfo_Permissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn size(self: QFileInfo) i64 {
        return qtc.QFileInfo_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `birthTime` instead
    ///
    pub const BirthTime = birthTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn birthTime(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_BirthTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metadataChangeTime` instead
    ///
    pub const MetadataChangeTime = metadataChangeTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn metadataChangeTime(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_MetadataChangeTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastModified` instead
    ///
    pub const LastModified = lastModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn lastModified(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_LastModified(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastRead` instead
    ///
    pub const LastRead = lastRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn lastRead(self: QFileInfo) QDateTime {
        return .{ .ptr = qtc.QFileInfo_LastRead(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fileTime` instead
    ///
    pub const FileTime = fileTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    pub fn fileTime(self: QFileInfo, time: i32) QDateTime {
        return .{ .ptr = qtc.QFileInfo_FileTime(@ptrCast(self.ptr), @bitCast(time)) };
    }

    /// ### DEPRECATED: Use `birthTime2` instead
    ///
    pub const BirthTime2 = birthTime2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn birthTime2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_BirthTime2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `metadataChangeTime2` instead
    ///
    pub const MetadataChangeTime2 = metadataChangeTime2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn metadataChangeTime2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_MetadataChangeTime2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `lastModified2` instead
    ///
    pub const LastModified2 = lastModified2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn lastModified2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_LastModified2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `lastRead2` instead
    ///
    pub const LastRead2 = lastRead2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` tz: QTimeZone `
    ///
    pub fn lastRead2(self: QFileInfo, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_LastRead2(@ptrCast(self.ptr), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `fileTime2` instead
    ///
    pub const FileTime2 = fileTime2;

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
    pub fn fileTime2(self: QFileInfo, time: i32, tz: anytype) QDateTime {
        comptime _ = @TypeOf(tz)._is_QTimeZone;
        return .{ .ptr = qtc.QFileInfo_FileTime2(@ptrCast(self.ptr), @bitCast(time), @ptrCast(tz.ptr)) };
    }

    /// ### DEPRECATED: Use `caching` instead
    ///
    pub const Caching = caching;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#caching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn caching(self: QFileInfo) bool {
        return qtc.QFileInfo_Caching(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCaching` instead
    ///
    pub const SetCaching = setCaching;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    /// ` on: bool `
    ///
    pub fn setCaching(self: QFileInfo, on: bool) void {
        qtc.QFileInfo_SetCaching(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `stat` instead
    ///
    pub const Stat = stat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileInfo `
    ///
    pub fn stat(self: QFileInfo) void {
        qtc.QFileInfo_Stat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dtor.QFileInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFileInfo `
    ///
    pub fn delete(self: QFileInfo) void {
        qtc.QFileInfo_Delete(@ptrCast(self.ptr));
    }
};
