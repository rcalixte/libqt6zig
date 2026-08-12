const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchive = @import("libqt6").KArchive;
const KArchiveEntry = @import("libqt6").KArchiveEntry;
const KArchiveFile = @import("libqt6").KArchiveFile;
const QDateTime = @import("libqt6").QDateTime;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchivedirectory.html)
pub const KArchiveDirectory = extern struct {
    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KArchiveDirectory,

    pub const _is_KArchiveDirectory = {};
    pub const _is_KArchiveEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KArchiveDirectory object in C++ memory
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
    pub fn new(_archive: anytype, _name: []const u8, access: i32, _date: anytype, _user: []const u8, _group: []const u8, symlink: []const u8) KArchiveDirectory {
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
        return .{ .ptr = qtc.KArchiveDirectory_new(@ptrCast(_archive.ptr), name_str, @bitCast(access), @ptrCast(_date.ptr), user_str, group_str, symlink_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KArchiveDirectory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KArchiveDirectory `
    ///
    pub fn new2(param1: anytype) KArchiveDirectory {
        comptime _ = @TypeOf(param1)._is_KArchiveDirectory;
        return .{ .ptr = qtc.KArchiveDirectory_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `entries` instead
    ///
    pub const Entries = entries;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#entries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entries(self: KArchiveDirectory, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KArchiveDirectory_Entries(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KArchiveDirectory.entries: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KArchiveDirectory.entries: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `entry` instead
    ///
    pub const Entry = entry;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#entry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn entry(self: KArchiveDirectory, _name: []const u8) KArchiveEntry {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KArchiveDirectory_Entry(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `file` instead
    ///
    pub const File = file;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#file)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn file(self: KArchiveDirectory, _name: []const u8) KArchiveFile {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KArchiveDirectory_File(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addEntry` instead
    ///
    pub const AddEntry = addEntry;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn addEntry(self: KArchiveDirectory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        qtc.KArchiveDirectory_AddEntry(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `addEntryV2` instead
    ///
    pub const AddEntryV2 = addEntryV2;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntryV2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn addEntryV2(self: KArchiveDirectory, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        return qtc.KArchiveDirectory_AddEntryV2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeEntry` instead
    ///
    pub const RemoveEntry = removeEntry;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn removeEntry(self: KArchiveDirectory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        qtc.KArchiveDirectory_RemoveEntry(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeEntryV2` instead
    ///
    pub const RemoveEntryV2 = removeEntryV2;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntryV2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn removeEntryV2(self: KArchiveDirectory, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        return qtc.KArchiveDirectory_RemoveEntryV2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isDirectory` instead
    ///
    pub const IsDirectory = isDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn isDirectory(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_IsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsDirectory` instead
    ///
    pub const OnIsDirectory = onIsDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsDirectory(self: KArchiveDirectory, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveDirectory_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsDirectory` instead
    ///
    pub const SuperIsDirectory = superIsDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn superIsDirectory(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_SuperIsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyTo` instead
    ///
    pub const CopyTo = copyTo;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn copyTo(self: KArchiveDirectory, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveDirectory_CopyTo(@ptrCast(self.ptr), dest_str);
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KArchiveDirectory, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveDirectory_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` callback: *const fn (self: KArchiveDirectory, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KArchiveDirectory, callback: *const fn (KArchiveDirectory, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveDirectory_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KArchiveDirectory, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveDirectory_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `copyTo2` instead
    ///
    pub const CopyTo2 = copyTo2;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` dest: []const u8 `
    ///
    /// ` recursive: bool `
    ///
    pub fn copyTo2(self: KArchiveDirectory, dest: []const u8, recursive: bool) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveDirectory_CopyTo2(@ptrCast(self.ptr), dest_str, recursive);
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn date(self: KArchiveDirectory) QDateTime {
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveDirectory.name: Memory allocation failed");
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn permissions(self: KArchiveDirectory) u32 {
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveDirectory.user: Memory allocation failed");
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveDirectory.group: Memory allocation failed");
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn symLinkTarget(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveDirectory.symLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn isFile(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsFile` instead
    ///
    pub const SuperIsFile = superIsFile;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn superIsFile(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_SuperIsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFile` instead
    ///
    pub const OnIsFile = onIsFile;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveDirectory`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFile(self: KArchiveDirectory, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveDirectory_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn archive(self: KArchiveDirectory) KArchive {
        return .{ .ptr = qtc.KArchiveDirectory_Archive(@ptrCast(self.ptr)) };
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn superArchive(self: KArchiveDirectory) KArchive {
        return .{ .ptr = qtc.KArchiveDirectory_SuperArchive(@ptrCast(self.ptr)) };
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
    /// ` self: KArchiveDirectory`
    ///
    /// ` callback: *const fn () callconv(.c) KArchive `
    ///
    pub fn onArchive(self: KArchiveDirectory, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KArchiveDirectory_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#dtor.KArchiveDirectory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn delete(self: KArchiveDirectory) void {
        qtc.KArchiveDirectory_Delete(@ptrCast(self.ptr));
    }
};
