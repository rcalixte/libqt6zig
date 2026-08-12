const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchive = @import("libqt6").KArchive;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchivefile.html)
pub const KArchiveFile = extern struct {
    /// ### [Upstream resources](https://api.kde.org/karchivefile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KArchiveFile,

    pub const _is_KArchiveFile = {};
    pub const _is_KArchiveEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KArchiveFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _archive: KArchive `
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
    /// ` pos: i64 `
    ///
    /// ` _size: i64 `
    ///
    pub fn new(_archive: anytype, _name: []const u8, access: i32, _date: anytype, _user: []const u8, _group: []const u8, symlink: []const u8, pos: i64, _size: i64) KArchiveFile {
        comptime _ = @TypeOf(_archive)._is_KArchive;
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
        return .{ .ptr = qtc.KArchiveFile_new(@ptrCast(_archive.ptr), name_str, @bitCast(access), @ptrCast(_date.ptr), user_str, group_str, symlink_str, @bitCast(pos), @bitCast(_size)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KArchiveFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KArchiveFile `
    ///
    pub fn new2(param1: anytype) KArchiveFile {
        comptime _ = @TypeOf(param1)._is_KArchiveFile;
        return .{ .ptr = qtc.KArchiveFile_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn position(self: KArchiveFile) i64 {
        return qtc.KArchiveFile_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn size(self: KArchiveFile) i64 {
        return qtc.KArchiveFile_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` s: i64 `
    ///
    pub fn setSize(self: KArchiveFile, s: i64) void {
        qtc.KArchiveFile_SetSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: KArchiveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KArchiveFile_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KArchiveFile.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_string `
    ///
    pub fn onData(self: KArchiveFile, callback: *const fn () callconv(.c) qtc.libqt_string) void {
        qtc.KArchiveFile_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superData(self: KArchiveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KArchiveFile_SuperData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KArchiveFile.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createDevice` instead
    ///
    pub const CreateDevice = createDevice;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn createDevice(self: KArchiveFile) QIODevice {
        return .{ .ptr = qtc.KArchiveFile_CreateDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateDevice` instead
    ///
    pub const OnCreateDevice = onCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` callback: *const fn () callconv(.c) QIODevice `
    ///
    pub fn onCreateDevice(self: KArchiveFile, callback: *const fn () callconv(.c) QIODevice) void {
        qtc.KArchiveFile_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateDevice` instead
    ///
    pub const SuperCreateDevice = superCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn superCreateDevice(self: KArchiveFile) QIODevice {
        return .{ .ptr = qtc.KArchiveFile_SuperCreateDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn isFile(self: KArchiveFile) bool {
        return qtc.KArchiveFile_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFile` instead
    ///
    pub const OnIsFile = onIsFile;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFile(self: KArchiveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveFile_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsFile` instead
    ///
    pub const SuperIsFile = superIsFile;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn superIsFile(self: KArchiveFile) bool {
        return qtc.KArchiveFile_SuperIsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn copyTo(self: KArchiveFile, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveFile_CopyTo(@ptrCast(self.ptr), dest_str);
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` id: i32 `
    ///
    /// ` _data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KArchiveFile, id: i32, _data: ?*anyopaque) void {
        qtc.KArchiveFile_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(_data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` callback: *const fn (self: KArchiveFile, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KArchiveFile, callback: *const fn (KArchiveFile, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveFile_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` id: i32 `
    ///
    /// ` _data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KArchiveFile, id: i32, _data: ?*anyopaque) void {
        qtc.KArchiveFile_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(_data));
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
    /// ` self: KArchiveFile `
    ///
    pub fn date(self: KArchiveFile) QDateTime {
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
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveFile.name: Memory allocation failed");
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
    /// ` self: KArchiveFile `
    ///
    pub fn permissions(self: KArchiveFile) u32 {
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
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveFile.user: Memory allocation failed");
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
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveFile.group: Memory allocation failed");
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
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn symLinkTarget(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveFile.symLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KArchiveFile `
    ///
    pub fn isDirectory(self: KArchiveFile) bool {
        return qtc.KArchiveFile_IsDirectory(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile `
    ///
    pub fn superIsDirectory(self: KArchiveFile) bool {
        return qtc.KArchiveFile_SuperIsDirectory(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsDirectory(self: KArchiveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveFile_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KArchiveFile `
    ///
    pub fn archive(self: KArchiveFile) KArchive {
        return .{ .ptr = qtc.KArchiveFile_Archive(@ptrCast(self.ptr)) };
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
    /// ` self: KArchiveFile `
    ///
    pub fn superArchive(self: KArchiveFile) KArchive {
        return .{ .ptr = qtc.KArchiveFile_SuperArchive(@ptrCast(self.ptr)) };
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
    /// ` self: KArchiveFile`
    ///
    /// ` callback: *const fn () callconv(.c) KArchive `
    ///
    pub fn onArchive(self: KArchiveFile, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KArchiveFile_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#dtor.KArchiveFile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn delete(self: KArchiveFile) void {
        qtc.KArchiveFile_Delete(@ptrCast(self.ptr));
    }
};
