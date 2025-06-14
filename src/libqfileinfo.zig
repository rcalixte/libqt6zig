const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfileinfo.html
pub const qfileinfo = struct {
    /// New constructs a new QFileInfo object.
    ///
    ///
    pub fn New() QtC.QFileInfo {
        return qtc.QFileInfo_new();
    }

    /// New2 constructs a new QFileInfo object.
    ///
    /// ``` file: []const u8 ```
    pub fn New2(file: []const u8) QtC.QFileInfo {
        const file_str = qtc.struct_libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QFileInfo_new2(file_str);
    }

    /// New3 constructs a new QFileInfo object.
    ///
    /// ``` file: QtC.QFileDevice ```
    pub fn New3(file: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileInfo_new3(@ptrCast(file));
    }

    /// New4 constructs a new QFileInfo object.
    ///
    /// ``` dir: QtC.QDir, file: []const u8 ```
    pub fn New4(dir: ?*anyopaque, file: []const u8) QtC.QFileInfo {
        const file_str = qtc.struct_libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QFileInfo_new4(@ptrCast(dir), file_str);
    }

    /// New5 constructs a new QFileInfo object.
    ///
    /// ``` fileinfo: QtC.QFileInfo ```
    pub fn New5(fileinfo: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileInfo_new5(@ptrCast(fileinfo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator=)
    ///
    /// ``` self: QtC.QFileInfo, fileinfo: QtC.QFileInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, fileinfo: ?*anyopaque) void {
        qtc.QFileInfo_OperatorAssign(@ptrCast(self), @ptrCast(fileinfo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#swap)
    ///
    /// ``` self: QtC.QFileInfo, other: QtC.QFileInfo ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFileInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator==)
    ///
    /// ``` self: QtC.QFileInfo, fileinfo: QtC.QFileInfo ```
    pub fn OperatorEqual(self: ?*anyopaque, fileinfo: ?*anyopaque) bool {
        return qtc.QFileInfo_OperatorEqual(@ptrCast(self), @ptrCast(fileinfo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator!=)
    ///
    /// ``` self: QtC.QFileInfo, fileinfo: QtC.QFileInfo ```
    pub fn OperatorNotEqual(self: ?*anyopaque, fileinfo: ?*anyopaque) bool {
        return qtc.QFileInfo_OperatorNotEqual(@ptrCast(self), @ptrCast(fileinfo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ``` self: QtC.QFileInfo, file: []const u8 ```
    pub fn SetFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.struct_libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile(@ptrCast(self), file_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ``` self: QtC.QFileInfo, file: QtC.QFileDevice ```
    pub fn SetFileWithFile(self: ?*anyopaque, file: ?*anyopaque) void {
        qtc.QFileInfo_SetFileWithFile(@ptrCast(self), @ptrCast(file));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
    ///
    /// ``` self: QtC.QFileInfo, dir: QtC.QDir, file: []const u8 ```
    pub fn SetFile2(self: ?*anyopaque, dir: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.struct_libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QFileInfo_SetFile2(@ptrCast(self), @ptrCast(dir), file_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QFileInfo_Exists(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
    ///
    /// ``` file: []const u8 ```
    pub fn ExistsWithFile(file: []const u8) bool {
        const file_str = qtc.struct_libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.QFileInfo_ExistsWithFile(file_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.QFileInfo_Refresh(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn AbsoluteFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_AbsoluteFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn CanonicalFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CanonicalFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn BaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_BaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn CompleteBaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CompleteBaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteBaseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn Suffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Suffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn BundleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_BundleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BundleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn CompleteSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CompleteSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#path)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn AbsolutePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_AbsolutePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn CanonicalPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CanonicalPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#dir)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Dir(self: ?*anyopaque) QtC.QDir {
        return qtc.QFileInfo_Dir(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn AbsoluteDir(self: ?*anyopaque) QtC.QDir {
        return qtc.QFileInfo_AbsoluteDir(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsReadable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsExecutable(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsExecutable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsNativePath(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsNativePath(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsRelative(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsRelative(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsAbsolute(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsAbsolute(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn MakeAbsolute(self: ?*anyopaque) bool {
        return qtc.QFileInfo_MakeAbsolute(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsFile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsDir(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsDir(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsSymLink(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsSymLink(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsSymbolicLink(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsSymbolicLink(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsShortcut(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsShortcut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsAlias(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsAlias(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsJunction(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsJunction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsRoot(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn IsBundle(self: ?*anyopaque) bool {
        return qtc.QFileInfo_IsBundle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn JunctionTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_JunctionTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.JunctionTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#owner)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn Owner(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Owner(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn OwnerId(self: ?*anyopaque) u32 {
        return qtc.QFileInfo_OwnerId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#group)
    ///
    /// ``` self: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn GroupId(self: ?*anyopaque) u32 {
        return qtc.QFileInfo_GroupId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permission)
    ///
    /// ``` self: QtC.QFileInfo, permissions: i32 ```
    pub fn Permission(self: ?*anyopaque, permissions: i64) bool {
        return qtc.QFileInfo_Permission(@ptrCast(self), @intCast(permissions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Permissions(self: ?*anyopaque) i64 {
        return qtc.QFileInfo_Permissions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#size)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QFileInfo_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn BirthTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_BirthTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn MetadataChangeTime(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_MetadataChangeTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn LastModified(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn LastRead(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastRead(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
    ///
    /// ``` self: QtC.QFileInfo, time: qfiledevice_enums.FileTime ```
    pub fn FileTime(self: ?*anyopaque, time: i64) QtC.QDateTime {
        return qtc.QFileInfo_FileTime(@ptrCast(self), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#caching)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Caching(self: ?*anyopaque) bool {
        return qtc.QFileInfo_Caching(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
    ///
    /// ``` self: QtC.QFileInfo, on: bool ```
    pub fn SetCaching(self: ?*anyopaque, on: bool) void {
        qtc.QFileInfo_SetCaching(@ptrCast(self), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#stat)
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn Stat(self: ?*anyopaque) void {
        qtc.QFileInfo_Stat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#dtor.QFileInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFileInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileInfo_Delete(@ptrCast(self));
    }
};
