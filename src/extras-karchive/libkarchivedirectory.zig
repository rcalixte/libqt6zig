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

    /// New constructs a new KArchiveDirectory object.
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
    pub fn New(archive: anytype, name: []const u8, access: i32, date: anytype, user: []const u8, group: []const u8, symlink: []const u8) KArchiveDirectory {
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
        return .{ .ptr = qtc.KArchiveDirectory_new(@ptrCast(archive.ptr), name_str, @bitCast(access), @ptrCast(date.ptr), user_str, group_str, symlink_str) };
    }

    /// New2 constructs a new KArchiveDirectory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KArchiveDirectory `
    ///
    pub fn New2(param1: anytype) KArchiveDirectory {
        comptime _ = @TypeOf(param1)._is_KArchiveDirectory;
        return .{ .ptr = qtc.KArchiveDirectory_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#entries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Entries(self: KArchiveDirectory, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KArchiveDirectory_Entries(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Entry(self: KArchiveDirectory, name: []const u8) KArchiveEntry {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KArchiveDirectory_Entry(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#file)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn File(self: KArchiveDirectory, name: []const u8) KArchiveFile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KArchiveDirectory_File(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn AddEntry(self: KArchiveDirectory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        qtc.KArchiveDirectory_AddEntry(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntryV2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn AddEntryV2(self: KArchiveDirectory, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        return qtc.KArchiveDirectory_AddEntryV2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn RemoveEntry(self: KArchiveDirectory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        qtc.KArchiveDirectory_RemoveEntry(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntryV2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` param1: KArchiveEntry `
    ///
    pub fn RemoveEntryV2(self: KArchiveDirectory, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_KArchiveEntry;
        return qtc.KArchiveDirectory_RemoveEntryV2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn IsDirectory(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_IsDirectory(@ptrCast(self.ptr));
    }

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
    pub fn OnIsDirectory(self: KArchiveDirectory, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveDirectory_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn SuperIsDirectory(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_SuperIsDirectory(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn CopyTo(self: KArchiveDirectory, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveDirectory_CopyTo(@ptrCast(self.ptr), dest_str);
    }

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
    pub fn VirtualHook(self: KArchiveDirectory, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveDirectory_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KArchiveDirectory, callback: *const fn (KArchiveDirectory, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveDirectory_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KArchiveDirectory, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveDirectory_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn CopyTo2(self: KArchiveDirectory, dest: []const u8, recursive: bool) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveDirectory_CopyTo2(@ptrCast(self.ptr), dest_str, recursive);
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveDirectory `
    ///
    pub fn Date(self: KArchiveDirectory) QDateTime {
        return .{ .ptr = qtc.KArchiveEntry_Date(@ptrCast(self.ptr)) };
    }

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
    pub fn Name(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn Permissions(self: KArchiveDirectory) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self.ptr)));
    }

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
    pub fn User(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
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
    /// ` self: KArchiveDirectory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: KArchiveDirectory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn IsFile(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_IsFile(@ptrCast(self.ptr));
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn SuperIsFile(self: KArchiveDirectory) bool {
        return qtc.KArchiveDirectory_SuperIsFile(@ptrCast(self.ptr));
    }

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
    pub fn OnIsFile(self: KArchiveDirectory, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveDirectory_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Archive(self: KArchiveDirectory) KArchive {
        return .{ .ptr = qtc.KArchiveDirectory_Archive(@ptrCast(self.ptr)) };
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn SuperArchive(self: KArchiveDirectory) KArchive {
        return .{ .ptr = qtc.KArchiveDirectory_SuperArchive(@ptrCast(self.ptr)) };
    }

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
    pub fn OnArchive(self: KArchiveDirectory, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KArchiveDirectory_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KArchiveDirectory `
    ///
    pub fn Delete(self: KArchiveDirectory) void {
        qtc.KArchiveDirectory_Delete(@ptrCast(self.ptr));
    }
};
