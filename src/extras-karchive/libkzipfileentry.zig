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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KZipFileEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` zip: KZip `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` access: i32 `
    ///
    /// ` _date: QDateTime `
    ///
    /// ` _user: []const u8 `
    ///
    /// ` _group: []const u8 `
    ///
    /// ` symlink: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` start: i64 `
    ///
    /// ` uncompressedSize: i64 `
    ///
    /// ` _encoding: i32 `
    ///
    /// ` _compressedSize: i64 `
    ///
    pub fn new(zip: anytype, _name: []const u8, access: i32, _date: anytype, _user: []const u8, _group: []const u8, symlink: []const u8, _path: []const u8, start: i64, uncompressedSize: i64, _encoding: i32, _compressedSize: i64) KZipFileEntry {
        comptime _ = @TypeOf(zip)._is_KZip;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_date)._is_QDateTime;
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const symlink_str = qtc.libqt_string{
            .len = symlink.len,
            .data = symlink.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.KZipFileEntry_new(@ptrCast(zip.ptr), name_str, @bitCast(access), @ptrCast(_date.ptr), user_str, group_str, symlink_str, path_str, @bitCast(start), @bitCast(uncompressedSize), @bitCast(_encoding), @bitCast(_compressedSize)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KZipFileEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KZipFileEntry `
    ///
    pub fn new2(param1: anytype) KZipFileEntry {
        comptime _ = @TypeOf(param1)._is_KZipFileEntry;
        return .{ .ptr = qtc.KZipFileEntry_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `encoding` instead
    ///
    pub const Encoding = encoding;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn encoding(self: KZipFileEntry) i32 {
        return qtc.KZipFileEntry_Encoding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `compressedSize` instead
    ///
    pub const CompressedSize = compressedSize;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#compressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn compressedSize(self: KZipFileEntry) i64 {
        return qtc.KZipFileEntry_CompressedSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompressedSize` instead
    ///
    pub const SetCompressedSize = setCompressedSize;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setCompressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` _compressedSize: i64 `
    ///
    pub fn setCompressedSize(self: KZipFileEntry, _compressedSize: i64) void {
        qtc.KZipFileEntry_SetCompressedSize(@ptrCast(self.ptr), @bitCast(_compressedSize));
    }

    /// ### DEPRECATED: Use `setHeaderStart` instead
    ///
    pub const SetHeaderStart = setHeaderStart;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setHeaderStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` headerstart: i64 `
    ///
    pub fn setHeaderStart(self: KZipFileEntry, headerstart: i64) void {
        qtc.KZipFileEntry_SetHeaderStart(@ptrCast(self.ptr), @bitCast(headerstart));
    }

    /// ### DEPRECATED: Use `headerStart` instead
    ///
    pub const HeaderStart = headerStart;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#headerStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn headerStart(self: KZipFileEntry) i64 {
        return qtc.KZipFileEntry_HeaderStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `crc32` instead
    ///
    pub const Crc32 = crc32;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#crc32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn crc32(self: KZipFileEntry) usize {
        return qtc.KZipFileEntry_Crc32(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCRC32` instead
    ///
    pub const SetCRC32 = setCRC32;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#setCRC32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` _crc32: usize `
    ///
    pub fn setCRC32(self: KZipFileEntry, _crc32: usize) void {
        qtc.KZipFileEntry_SetCRC32(@ptrCast(self.ptr), @bitCast(_crc32));
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KZipFileEntry_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KZipFileEntry.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: KZipFileEntry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KZipFileEntry_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KZipFileEntry.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

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
    pub fn onData(self: KZipFileEntry, callback: *const fn () callconv(.c) qtc.libqt_string) void {
        qtc.KZipFileEntry_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

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
    pub fn superData(self: KZipFileEntry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KZipFileEntry_SuperData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KZipFileEntry.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createDevice` instead
    ///
    pub const CreateDevice = createDevice;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn createDevice(self: KZipFileEntry) QIODevice {
        return .{ .ptr = qtc.KZipFileEntry_CreateDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateDevice` instead
    ///
    pub const OnCreateDevice = onCreateDevice;

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
    pub fn onCreateDevice(self: KZipFileEntry, callback: *const fn () callconv(.c) QIODevice) void {
        qtc.KZipFileEntry_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateDevice` instead
    ///
    pub const SuperCreateDevice = superCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn superCreateDevice(self: KZipFileEntry) QIODevice {
        return .{ .ptr = qtc.KZipFileEntry_SuperCreateDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn position(self: KZipFileEntry) i64 {
        return qtc.KArchiveFile_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from KArchiveFile
    ///
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn size(self: KZipFileEntry) i64 {
        return qtc.KArchiveFile_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

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
    pub fn setSize(self: KZipFileEntry, s: i64) void {
        qtc.KArchiveFile_SetSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

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
    pub fn copyTo(self: KZipFileEntry, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveFile_CopyTo(@ptrCast(self.ptr), dest_str);
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn date(self: KZipFileEntry) QDateTime {
        return .{ .ptr = qtc.KArchiveEntry_Date(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KZipFileEntry.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `permissions` instead
    ///
    pub const Permissions = permissions;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn permissions(self: KZipFileEntry) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

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
    pub fn user(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KZipFileEntry.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

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
    pub fn group(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KZipFileEntry.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `symLinkTarget` instead
    ///
    pub const SymLinkTarget = symLinkTarget;

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
    pub fn symLinkTarget(self: KZipFileEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KZipFileEntry.symLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

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
    pub fn isFile(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsFile` instead
    ///
    pub const SuperIsFile = superIsFile;

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
    pub fn superIsFile(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_SuperIsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFile` instead
    ///
    pub const OnIsFile = onIsFile;

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
    pub fn onIsFile(self: KZipFileEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KZipFileEntry_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    /// ` _data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KZipFileEntry, id: i32, _data: ?*anyopaque) void {
        qtc.KZipFileEntry_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(_data));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    /// ` _data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KZipFileEntry, id: i32, _data: ?*anyopaque) void {
        qtc.KZipFileEntry_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(_data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: KZipFileEntry, callback: *const fn (KZipFileEntry, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KZipFileEntry_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isDirectory` instead
    ///
    pub const IsDirectory = isDirectory;

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
    pub fn isDirectory(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_IsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsDirectory` instead
    ///
    pub const SuperIsDirectory = superIsDirectory;

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
    pub fn superIsDirectory(self: KZipFileEntry) bool {
        return qtc.KZipFileEntry_SuperIsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsDirectory` instead
    ///
    pub const OnIsDirectory = onIsDirectory;

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
    pub fn onIsDirectory(self: KZipFileEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KZipFileEntry_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `archive` instead
    ///
    pub const Archive = archive;

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
    pub fn archive(self: KZipFileEntry) KArchive {
        return .{ .ptr = qtc.KZipFileEntry_Archive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superArchive` instead
    ///
    pub const SuperArchive = superArchive;

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
    pub fn superArchive(self: KZipFileEntry) KArchive {
        return .{ .ptr = qtc.KZipFileEntry_SuperArchive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onArchive` instead
    ///
    pub const OnArchive = onArchive;

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
    pub fn onArchive(self: KZipFileEntry, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KZipFileEntry_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kzipfileentry.html#dtor.KZipFileEntry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KZipFileEntry `
    ///
    pub fn delete(self: KZipFileEntry) void {
        qtc.KZipFileEntry_Delete(@ptrCast(self.ptr));
    }
};
