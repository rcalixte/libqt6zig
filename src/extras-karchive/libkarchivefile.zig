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

    /// New constructs a new KArchiveFile object.
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
    /// ` pos: i64 `
    ///
    /// ` size: i64 `
    ///
    pub fn New(archive: anytype, name: []const u8, access: i32, date: anytype, user: []const u8, group: []const u8, symlink: []const u8, pos: i64, size: i64) KArchiveFile {
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
        return .{ .ptr = qtc.KArchiveFile_new(@ptrCast(archive.ptr), name_str, @bitCast(access), @ptrCast(date.ptr), user_str, group_str, symlink_str, @bitCast(pos), @bitCast(size)) };
    }

    /// New2 constructs a new KArchiveFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KArchiveFile `
    ///
    pub fn New2(param1: anytype) KArchiveFile {
        comptime _ = @TypeOf(param1)._is_KArchiveFile;
        return .{ .ptr = qtc.KArchiveFile_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn Position(self: KArchiveFile) i64 {
        return qtc.KArchiveFile_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn Size(self: KArchiveFile) i64 {
        return qtc.KArchiveFile_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` s: i64 `
    ///
    pub fn SetSize(self: KArchiveFile, s: i64) void {
        qtc.KArchiveFile_SetSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: KArchiveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KArchiveFile_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("karchivefile.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn OnData(self: KArchiveFile, callback: *const fn () callconv(.c) qtc.libqt_string) void {
        qtc.KArchiveFile_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

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
    pub fn SuperData(self: KArchiveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KArchiveFile_SuperData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("karchivefile.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn CreateDevice(self: KArchiveFile) QIODevice {
        return .{ .ptr = qtc.KArchiveFile_CreateDevice(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCreateDevice(self: KArchiveFile, callback: *const fn () callconv(.c) QIODevice) void {
        qtc.KArchiveFile_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateDevice` instead
    ///
    pub const QBaseCreateDevice = SuperCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn SuperCreateDevice(self: KArchiveFile) QIODevice {
        return .{ .ptr = qtc.KArchiveFile_SuperCreateDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn IsFile(self: KArchiveFile) bool {
        return qtc.KArchiveFile_IsFile(@ptrCast(self.ptr));
    }

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
    pub fn OnIsFile(self: KArchiveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveFile_OnIsFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsFile` instead
    ///
    pub const QBaseIsFile = SuperIsFile;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn SuperIsFile(self: KArchiveFile) bool {
        return qtc.KArchiveFile_SuperIsFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` dest: []const u8 `
    ///
    pub fn CopyTo(self: KArchiveFile, dest: []const u8) bool {
        const dest_str = qtc.libqt_string{
            .len = dest.len,
            .data = dest.ptr,
        };
        return qtc.KArchiveFile_CopyTo(@ptrCast(self.ptr), dest_str);
    }

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KArchiveFile, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveFile_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KArchiveFile, callback: *const fn (KArchiveFile, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KArchiveFile_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

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
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KArchiveFile, id: i32, data: ?*anyopaque) void {
        qtc.KArchiveFile_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from KArchiveEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/karchiveentry.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn Date(self: KArchiveFile) QDateTime {
        return .{ .ptr = qtc.KArchiveEntry_Date(@ptrCast(self.ptr)) };
    }

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
    pub fn Name(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Name(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile `
    ///
    pub fn Permissions(self: KArchiveFile) u32 {
        return @bitCast(qtc.KArchiveEntry_Permissions(@ptrCast(self.ptr)));
    }

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
    pub fn User(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_User(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_Group(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: KArchiveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchiveEntry_SymLinkTarget(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile `
    ///
    pub fn IsDirectory(self: KArchiveFile) bool {
        return qtc.KArchiveFile_IsDirectory(@ptrCast(self.ptr));
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
    /// ` self: KArchiveFile `
    ///
    pub fn SuperIsDirectory(self: KArchiveFile) bool {
        return qtc.KArchiveFile_SuperIsDirectory(@ptrCast(self.ptr));
    }

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
    pub fn OnIsDirectory(self: KArchiveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KArchiveFile_OnIsDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Archive(self: KArchiveFile) KArchive {
        return .{ .ptr = qtc.KArchiveFile_Archive(@ptrCast(self.ptr)) };
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
    /// ` self: KArchiveFile `
    ///
    pub fn SuperArchive(self: KArchiveFile) KArchive {
        return .{ .ptr = qtc.KArchiveFile_SuperArchive(@ptrCast(self.ptr)) };
    }

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
    pub fn OnArchive(self: KArchiveFile, callback: *const fn () callconv(.c) KArchive) void {
        qtc.KArchiveFile_OnArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/karchivefile.html#dtor.KArchiveFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KArchiveFile `
    ///
    pub fn Delete(self: KArchiveFile) void {
        qtc.KArchiveFile_Delete(@ptrCast(self.ptr));
    }
};
