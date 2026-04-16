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

    /// New constructs a new KArchiveEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` archive: KArchive `
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
    pub fn New(archive: anytype, name: []const u8, access: i32, date: anytype, user: []const u8, group: []const u8, symlink: []const u8) KArchiveEntry {
        comptime _ = @TypeOf(archive)._is_KArchive;
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
        return .{ .ptr = qtc.KArchiveEntry_new(@ptrCast(archive.ptr), name_str, @bitCast(access), @ptrCast(date.ptr), user_str, group_str, symlink_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn Date(self: KArchiveEntry) QDateTime {
        return .{ .ptr = qtc.KArchiveEntry_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn Permissions(self: KArchiveEntry) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: KArchiveEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn IsFile(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_IsFile(@ptrCast(self.ptr));
    }

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
    pub fn OnIsFile(self: KArchiveEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveEntry_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsFile` instead
    ///
    pub const QBaseIsFile = SuperIsFile;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn SuperIsFile(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_SuperIsFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn IsDirectory(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_IsDirectory(@ptrCast(self.ptr));
    }

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
    pub fn OnIsDirectory(self: KArchiveEntry, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveEntry_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsDirectory` instead
    ///
    pub const QBaseIsDirectory = SuperIsDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn SuperIsDirectory(self: KArchiveEntry) bool {
        return qtc.KArchiveEntry_SuperIsDirectory(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn Archive(self: KArchiveEntry) KArchive {
        return .{ .ptr = qtc.KArchiveEntry_Archive(@ptrCast(self.ptr)) };
    }

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
    pub fn OnArchive(self: KArchiveEntry, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KArchiveEntry_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperArchive` instead
    ///
    pub const QBaseArchive = SuperArchive;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn SuperArchive(self: KArchiveEntry) KArchive {
        return .{ .ptr = qtc.KArchiveEntry_SuperArchive(@ptrCast(self.ptr)) };
    }

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
    pub fn VirtualHook(self: KArchiveEntry, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveEntry_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KArchiveEntry, callback: *const fn (KArchiveEntry, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveEntry_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

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
    pub fn SuperVirtualHook(self: KArchiveEntry, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveEntry_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#dtor.KArchiveEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KArchiveEntry `
    ///
    pub fn Delete(self: KArchiveEntry) void {
        qtc.KArchiveEntry_Delete(@ptrCast(self.ptr));
    }
};
