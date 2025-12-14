const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kzipfileentry.html)
pub const kzipfileentry = struct {
    /// New constructs a new KZipFileEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` zip: QtC.KZip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` access: i32 `
    ///
    /// ` date: QtC.QDateTime `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` symlink: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` start: i64 `
    ///
    /// ` uncompressedSize: i64 `
    ///
    /// ` encoding: i32 `
    ///
    /// ` compressedSize: i64 `
    ///
    pub fn New(zip: ?*anyopaque, name: []const u8, access: i32, date: ?*anyopaque, user: []const u8, group: []const u8, symlink: []const u8, path: []const u8, start: i64, uncompressedSize: i64, encoding: i32, compressedSize: i64) QtC.KZipFileEntry {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        const symlink_str = qtc.libqt_string{
            .len = symlink.len,
            .data = symlink.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.KZipFileEntry_new(@ptrCast(zip), name_str, @intCast(access), @ptrCast(date), user_str, group_str, symlink_str, path_str, @intCast(start), @intCast(uncompressedSize), @intCast(encoding), @intCast(compressedSize));
    }

    /// New2 constructs a new KZipFileEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KZipFileEntry `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KZipFileEntry {
        return qtc.KZipFileEntry_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Encoding(self: ?*anyopaque) i32 {
        return qtc.KZipFileEntry_Encoding(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#compressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn CompressedSize(self: ?*anyopaque) i64 {
        return qtc.KZipFileEntry_CompressedSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setCompressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` compressedSize: i64 `
    ///
    pub fn SetCompressedSize(self: ?*anyopaque, compressedSize: i64) void {
        qtc.KZipFileEntry_SetCompressedSize(@ptrCast(self), @intCast(compressedSize));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setHeaderStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` headerstart: i64 `
    ///
    pub fn SetHeaderStart(self: ?*anyopaque, headerstart: i64) void {
        qtc.KZipFileEntry_SetHeaderStart(@ptrCast(self), @intCast(headerstart));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#headerStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn HeaderStart(self: ?*anyopaque) i64 {
        return qtc.KZipFileEntry_HeaderStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#crc32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Crc32(self: ?*anyopaque) u64 {
        return qtc.KZipFileEntry_Crc32(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setCRC32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` crc32: u64 `
    ///
    pub fn SetCRC32(self: ?*anyopaque, crc32: u64) void {
        qtc.KZipFileEntry_SetCRC32(@ptrCast(self), @intCast(crc32));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KZipFileEntry_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzipfileentry.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KZipFileEntry_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kzipfileentry.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]u8 `
    ///
    pub fn OnData(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]u8) void {
        qtc.KZipFileEntry_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KZipFileEntry_QBaseData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kzipfileentry.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn CreateDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.KZipFileEntry_CreateDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QIODevice `
    ///
    pub fn OnCreateDevice(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIODevice) void {
        qtc.KZipFileEntry_OnCreateDevice(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn QBaseCreateDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.KZipFileEntry_QBaseCreateDevice(@ptrCast(self));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.KArchiveFile_Position(@ptrCast(self));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.KArchiveFile_Size(@ptrCast(self));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` s: i64 `
    ///
    pub fn SetSize(self: ?*anyopaque, s: i64) void {
        qtc.KArchiveFile_SetSize(@ptrCast(self), @intCast(s));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn CopyTo(self: ?*anyopaque, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveFile_CopyTo(@ptrCast(self), dest_str);
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Date(self: ?*anyopaque) QtC.QDateTime {
        return qtc.KArchiveEntry_Date(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzipfileentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Permissions(self: ?*anyopaque) u16 {
        return @intCast(qtc.KArchiveEntry_Permissions(@ptrCast(self)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzipfileentry.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzipfileentry.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzipfileentry.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KZipFileEntry_IsFile(@ptrCast(self));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn QBaseIsFile(self: ?*anyopaque) bool {
        return qtc.KZipFileEntry_QBaseIsFile(@ptrCast(self));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZipFileEntry`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFile(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KZipFileEntry_OnIsFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KZipFileEntry_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KZipFileEntry_QBaseVirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZipFileEntry`
    ///
    /// ` callback: *const fn (self: QtC.KZipFileEntry, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KZipFileEntry_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn IsDirectory(self: ?*anyopaque) bool {
        return qtc.KZipFileEntry_IsDirectory(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn QBaseIsDirectory(self: ?*anyopaque) bool {
        return qtc.KZipFileEntry_QBaseIsDirectory(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZipFileEntry`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsDirectory(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KZipFileEntry_OnIsDirectory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn Archive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KZipFileEntry_Archive(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn QBaseArchive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KZipFileEntry_QBaseArchive(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZipFileEntry`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchive `
    ///
    pub fn OnArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchive) void {
        qtc.KZipFileEntry_OnArchive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#dtor.KZipFileEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KZipFileEntry `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KZipFileEntry_Delete(@ptrCast(self));
    }
};
