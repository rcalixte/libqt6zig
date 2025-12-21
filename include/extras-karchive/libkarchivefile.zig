const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/karchivefile.html)
pub const karchivefile = struct {
    /// New constructs a new KArchiveFile object.
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
    /// ` pos: i64 `
    ///
    /// ` size: i64 `
    ///
    pub fn New(archive: ?*anyopaque, name: []const u8, access: i32, date: ?*anyopaque, user: []const u8, group: []const u8, symlink: []const u8, pos: i64, size: i64) QtC.KArchiveFile {
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

        return qtc.KArchiveFile_new(@ptrCast(archive), name_str, @intCast(access), @ptrCast(date), user_str, group_str, symlink_str, @intCast(pos), @intCast(size));
    }

    /// New2 constructs a new KArchiveFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KArchiveFile `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KArchiveFile {
        return qtc.KArchiveFile_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.KArchiveFile_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.KArchiveFile_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` s: i64 `
    ///
    pub fn SetSize(self: ?*anyopaque, s: i64) void {
        qtc.KArchiveFile_SetSize(@ptrCast(self), @intCast(s));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KArchiveFile_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("karchivefile.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]u8 `
    ///
    pub fn OnData(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]u8) void {
        qtc.KArchiveFile_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KArchiveFile_QBaseData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("karchivefile.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn CreateDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.KArchiveFile_CreateDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QIODevice `
    ///
    pub fn OnCreateDevice(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIODevice) void {
        qtc.KArchiveFile_OnCreateDevice(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn QBaseCreateDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.KArchiveFile_QBaseCreateDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KArchiveFile_IsFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFile(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveFile_OnIsFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn QBaseIsFile(self: ?*anyopaque) bool {
        return qtc.KArchiveFile_QBaseIsFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
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

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveFile_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` callback: *const fn (self: QtC.KArchiveFile, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveFile_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveFile_QBaseVirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
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
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivefile.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
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
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivefile.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivefile.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("karchivefile.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn IsDirectory(self: ?*anyopaque) bool {
        return qtc.KArchiveFile_IsDirectory(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn QBaseIsDirectory(self: ?*anyopaque) bool {
        return qtc.KArchiveFile_QBaseIsDirectory(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsDirectory(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveFile_OnIsDirectory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn Archive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KArchiveFile_Archive(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn QBaseArchive(self: ?*anyopaque) QtC.KArchive {
        return qtc.KArchiveFile_QBaseArchive(@ptrCast(self));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KArchiveFile`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchive `
    ///
    pub fn OnArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchive) void {
        qtc.KArchiveFile_OnArchive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#dtor.KArchiveFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KArchiveFile `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KArchiveFile_Delete(@ptrCast(self));
    }
};
