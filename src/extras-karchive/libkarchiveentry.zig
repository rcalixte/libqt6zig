const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchive = @import("libqt6").KArchive;
const QDateTime = @import("libqt6").QDateTime;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchiveentry.html)
pub const KArchiveEntry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KArchiveEntry,

    pub const _is_KArchiveEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KArchiveEntry object in C++ memory
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
    pub fn new(_archive: anytype, _name: []const u8, access: i32, _date: anytype, _user: []const u8, _group: []const u8, symlink: []const u8) KArchiveEntry {
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
        return .{ .ptr = qtc.KArchiveEntry_new(@ptrCast(_archive.ptr), name_str, @bitCast(access), @ptrCast(_date.ptr), user_str, group_str, symlink_str) };
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn date(self: KArchiveEntry) QDateTime {
        return .{ .ptr = qtc.KArchiveEntry_Date(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveEntry.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `permissions` instead
    ///
    pub const Permissions = permissions;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn permissions(self: KArchiveEntry) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveEntry.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveEntry.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `symLinkTarget` instead
    ///
    pub const SymLinkTarget = symLinkTarget;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn symLinkTarget(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KArchiveEntry.symLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn isFile(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFile` instead
    ///
    pub const OnIsFile = onIsFile;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFile(self: KArchiveEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveEntry_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsFile` instead
    ///
    pub const SuperIsFile = superIsFile;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn superIsFile(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_SuperIsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDirectory` instead
    ///
    pub const IsDirectory = isDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn isDirectory(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_IsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsDirectory` instead
    ///
    pub const OnIsDirectory = onIsDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsDirectory(self: KArchiveEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveEntry_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsDirectory` instead
    ///
    pub const SuperIsDirectory = superIsDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn superIsDirectory(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_SuperIsDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `archive` instead
    ///
    pub const Archive = archive;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn archive(self: KArchiveEntry) KArchive {
        return .{ .ptr = qtc.KArchiveEntry_Archive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onArchive` instead
    ///
    pub const OnArchive = onArchive;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` callback: *const fn () callconv(.c) KArchive `
    ///
    pub fn onArchive(self: KArchiveEntry, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KArchiveEntry_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superArchive` instead
    ///
    pub const SuperArchive = superArchive;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn superArchive(self: KArchiveEntry) KArchive {
        return .{ .ptr = qtc.KArchiveEntry_SuperArchive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KArchiveEntry, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveEntry_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` callback: *const fn (self: KArchiveEntry, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KArchiveEntry, callback: *const fn (KArchiveEntry, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveEntry_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KArchiveEntry, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveEntry_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#dtor.KArchiveEntry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn delete(self: KArchiveEntry) void {
        qtc.KArchiveEntry_Delete(@ptrCast(self.ptr));
    }
};
