const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchiveentry.html)
pub const karchiveentry = struct {
    /// New constructs a new KArchiveEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` archive: QtC.KArchive `
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
    pub fn New(archive: ?*anyopaque, name: []const u8, access: i32, date: ?*anyopaque, user: []const u8, group: []const u8, symlink: []const u8) QtC.KArchiveEntry {
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

        return qtc.KArchiveEntry_new(@ptrCast(archive), name_str, @bitCast(access), @ptrCast(date), user_str, group_str, symlink_str);
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn Date(self: ?*anyopaque) QtC.QDateTime {
        return qtc.KArchiveEntry_Date(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn Permissions(self: ?*anyopaque) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchiveentry.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KArchiveEntry_IsFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFile(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveEntry_OnIsFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn SuperIsFile(self: ?*anyopaque) bool {
        return qtc.KArchiveEntry_SuperIsFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn IsDirectory(self: ?*anyopaque) bool {
        return qtc.KArchiveEntry_IsDirectory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsDirectory(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveEntry_OnIsDirectory(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn SuperIsDirectory(self: ?*anyopaque) bool {
        return qtc.KArchiveEntry_SuperIsDirectory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn Archive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KArchiveEntry_Archive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchive `
    ///
    pub fn OnArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchive) void {
        qtc.KArchiveEntry_OnArchive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn SuperArchive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KArchiveEntry_SuperArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveEntry_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` callback: *const fn (self: QtC.KArchiveEntry, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveEntry_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KArchiveEntry `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveEntry_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
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
    /// ` self: QtC.KArchiveEntry `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KArchiveEntry_Delete(@ptrCast(self));
    }
};
