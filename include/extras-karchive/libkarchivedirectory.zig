const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchivedirectory.html)
pub const karchivedirectory = struct {
    /// New constructs a new KArchiveDirectory object.
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
    pub fn New(archive: ?*anyopaque, name: []const u8, access: i32, date: ?*anyopaque, user: []const u8, group: []const u8, symlink: []const u8) QtC.KArchiveDirectory {
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

        return qtc.KArchiveDirectory_new(@ptrCast(archive), name_str, @bitCast(access), @ptrCast(date), user_str, group_str, symlink_str);
    }

    /// New2 constructs a new KArchiveDirectory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KArchiveDirectory `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.KArchiveDirectory_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#entries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Entries(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KArchiveDirectory_Entries(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("karchivedirectory.Entries: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("karchivedirectory.Entries: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#entry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Entry(self: ?*anyopaque, name: []const u8) QtC.KArchiveEntry {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KArchiveDirectory_Entry(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#file)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn File(self: ?*anyopaque, name: []const u8) QtC.KArchiveFile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KArchiveDirectory_File(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` param1: QtC.KArchiveEntry `
    ///
    pub fn AddEntry(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KArchiveDirectory_AddEntry(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntryV2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` param1: QtC.KArchiveEntry `
    ///
    pub fn AddEntryV2(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KArchiveDirectory_AddEntryV2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` param1: QtC.KArchiveEntry `
    ///
    pub fn RemoveEntry(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KArchiveDirectory_RemoveEntry(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntryV2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` param1: QtC.KArchiveEntry `
    ///
    pub fn RemoveEntryV2(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KArchiveDirectory_RemoveEntryV2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn IsDirectory(self: ?*anyopaque) bool {
        return qtc.KArchiveDirectory_IsDirectory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsDirectory(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveDirectory_OnIsDirectory(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsDirectory` instead
    ///
    pub const QBaseIsDirectory = SuperIsDirectory;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn SuperIsDirectory(self: ?*anyopaque) bool {
        return qtc.KArchiveDirectory_SuperIsDirectory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn CopyTo(self: ?*anyopaque, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveDirectory_CopyTo(@ptrCast(self), dest_str);
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveDirectory_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` callback: *const fn (self: QtC.KArchiveDirectory, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveDirectory_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveDirectory_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` dest: []const u8 `
    ///
    /// ` recursive: bool `
    ///
    pub fn CopyTo2(self: ?*anyopaque, dest: []const u8, recursive: bool) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveDirectory_CopyTo2(@ptrCast(self), dest_str, recursive);
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
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
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivedirectory.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn Permissions(self: ?*anyopaque) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivedirectory.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivedirectory.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivedirectory.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KArchiveDirectory_IsFile(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsFile` instead
    ///
    pub const QBaseIsFile = SuperIsFile;

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn SuperIsFile(self: ?*anyopaque) bool {
        return qtc.KArchiveDirectory_SuperIsFile(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveDirectory`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFile(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveDirectory_OnIsFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn Archive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KArchiveDirectory_Archive(@ptrCast(self));
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
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn SuperArchive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KArchiveDirectory_SuperArchive(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveDirectory`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchive `
    ///
    pub fn OnArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchive) void {
        qtc.KArchiveDirectory_OnArchive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#dtor.KArchiveDirectory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KArchiveDirectory `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KArchiveDirectory_Delete(@ptrCast(self));
    }
};
