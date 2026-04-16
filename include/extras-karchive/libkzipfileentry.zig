const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchive = @import("libqt6").KArchive;
const KZip = @import("libqt6").KZip;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kzipfileentry.html)
pub const KZipFileEntry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KZipFileEntry,

    pub const _is_KZipFileEntry = {};
    pub const _is_KArchiveFile = {};
    pub const _is_KArchiveEntry = {};

    /// New constructs a new KZipFileEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` zip: KZip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` access: i32 `
    ///
    /// ` date: QDateTime `
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
    pub fn New(zip: anytype, name: []const u8, access: i32, date: anytype, user: []const u8, group: []const u8, symlink: []const u8, path: []const u8, start: i64, uncompressedSize: i64, encoding: i32, compressedSize: i64) KZipFileEntry {
        comptime _ = @TypeOf(zip)._is_KZip;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(date)._is_QDateTime;
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
        return .{ .ptr = qtc.KZipFileEntry_new(@ptrCast(zip.ptr), name_str, @bitCast(access), @ptrCast(date.ptr), user_str, group_str, symlink_str, path_str, @bitCast(start), @bitCast(uncompressedSize), @bitCast(encoding), @bitCast(compressedSize)) };
    }

    /// New2 constructs a new KZipFileEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KZipFileEntry `
    ///
    pub fn New2(param1: anytype) KZipFileEntry {
        comptime _ = @TypeOf(param1)._is_KZipFileEntry;
        return .{ .ptr = qtc.KZipFileEntry_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Encoding(self: KZipFileEntry) i32 {
        return qtc.KZipFileEntry_Encoding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#compressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn CompressedSize(self: KZipFileEntry) i64 {
        return qtc.KZipFileEntry_CompressedSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setCompressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` compressedSize: i64 `
    ///
    pub fn SetCompressedSize(self: KZipFileEntry, compressedSize: i64) void {
        qtc.KZipFileEntry_SetCompressedSize(@ptrCast(self.ptr), @bitCast(compressedSize));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setHeaderStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` headerstart: i64 `
    ///
    pub fn SetHeaderStart(self: KZipFileEntry, headerstart: i64) void {
        qtc.KZipFileEntry_SetHeaderStart(@ptrCast(self.ptr), @bitCast(headerstart));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#headerStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn HeaderStart(self: KZipFileEntry) i64 {
        return qtc.KZipFileEntry_HeaderStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#crc32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Crc32(self: KZipFileEntry) usize {
        return qtc.KZipFileEntry_Crc32(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setCRC32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` crc32: usize `
    ///
    pub fn SetCRC32(self: KZipFileEntry, crc32: usize) void {
        qtc.KZipFileEntry_SetCRC32(@ptrCast(self.ptr), @bitCast(crc32));
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KZipFileEntry_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzipfileentry.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: KZipFileEntry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KZipFileEntry_Data(@ptrCast(self.ptr));
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
    /// ` self: KZipFileEntry `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_string `
    ///
    pub fn OnData(self: KZipFileEntry, callback: *const fn () callconv(.c) qtc.libqt_string) void {
        qtc.KZipFileEntry_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperData(self: KZipFileEntry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KZipFileEntry_SuperData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kzipfileentry.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn CreateDevice(self: KZipFileEntry) QIODevice {
        return .{ .ptr = qtc.KZipFileEntry_CreateDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` callback: *const fn () callconv(.c) QIODevice `
    ///
    pub fn OnCreateDevice(self: KZipFileEntry, callback: *const fn () callconv(.c) QIODevice) void {
        qtc.KZipFileEntry_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateDevice` instead
    ///
    pub const QBaseCreateDevice = SuperCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn SuperCreateDevice(self: KZipFileEntry) QIODevice {
        return .{ .ptr = qtc.KZipFileEntry_SuperCreateDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Position(self: KZipFileEntry) i64 {
        return qtc.KArchiveFile_Position(@ptrCast(self.ptr));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Size(self: KZipFileEntry) i64 {
        return qtc.KArchiveFile_Size(@ptrCast(self.ptr));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` s: i64 `
    ///
    pub fn SetSize(self: KZipFileEntry, s: i64) void {
        qtc.KArchiveFile_SetSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn CopyTo(self: KZipFileEntry, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveFile_CopyTo(@ptrCast(self.ptr), dest_str);
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Date(self: KZipFileEntry) QDateTime {
        return .{ .ptr = qtc.KArchiveEntry_Date(@ptrCast(self.ptr)) };
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
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
    /// ` self: KZipFileEntry `
    ///
    pub fn Permissions(self: KZipFileEntry) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self.ptr)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
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
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
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
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
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
    /// ` self: KZipFileEntry `
    ///
    pub fn IsFile(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsFile` instead
    ///
    pub const QBaseIsFile = SuperIsFile;

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn SuperIsFile(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_SuperIsFile(@ptrCast(self.ptr));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KZipFileEntry`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFile(self: KZipFileEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KZipFileEntry_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KZipFileEntry, id: i32, data: ?*anyopaque) void {
        qtc.KZipFileEntry_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KZipFileEntry, id: i32, data: ?*anyopaque) void {
        qtc.KZipFileEntry_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KZipFileEntry`
    ///
    /// ` callback: *const fn (self: KZipFileEntry, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KZipFileEntry, callback: *const fn (KZipFileEntry, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KZipFileEntry_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn IsDirectory(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_IsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsDirectory` instead
    ///
    pub const QBaseIsDirectory = SuperIsDirectory;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn SuperIsDirectory(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_SuperIsDirectory(@ptrCast(self.ptr));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KZipFileEntry`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsDirectory(self: KZipFileEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KZipFileEntry_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Archive(self: KZipFileEntry) KArchive {
        return .{ .ptr = qtc.KZipFileEntry_Archive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperArchive` instead
    ///
    pub const QBaseArchive = SuperArchive;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn SuperArchive(self: KZipFileEntry) KArchive {
        return .{ .ptr = qtc.KZipFileEntry_SuperArchive(@ptrCast(self.ptr)) };
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KZipFileEntry`
    ///
    /// ` callback: *const fn () callconv(.c) KArchive `
    ///
    pub fn OnArchive(self: KZipFileEntry, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KZipFileEntry_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#dtor.KZipFileEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn Delete(self: KZipFileEntry) void {
        qtc.KZipFileEntry_Delete(@ptrCast(self.ptr));
    }
};
