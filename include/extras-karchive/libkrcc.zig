const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchiveDirectory = @import("libqt6").KArchiveDirectory;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/krcc.html)
pub const KRcc = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krcc.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRcc,

    pub const _is_KRcc = {};
    pub const _is_KArchive = {};

    /// New constructs a new KRcc object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn New(filename: []const u8) KRcc {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.KRcc_new(filename_str) };
    }

    /// New2 constructs a new KRcc object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KRcc `
    ///
    pub fn New2(param1: anytype) KRcc {
        comptime _ = @TypeOf(param1)._is_KRcc;
        return .{ .ptr = qtc.KRcc_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krcc.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn DoPrepareWriting(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KRcc_DoPrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn (self: KRcc, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, size: i64, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoPrepareWriting(self: KRcc, callback: *const fn (KRcc, [*:0]const u8, [*:0]const u8, [*:0]const u8, i64, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KRcc_OnDoPrepareWriting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoPrepareWriting` instead
    ///
    pub const QBaseDoPrepareWriting = SuperDoPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn SuperDoPrepareWriting(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KRcc_SuperDoPrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` size: i64 `
    ///
    pub fn DoFinishWriting(self: KRcc, size: i64) bool {
        return qtc.KRcc_DoFinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn (self: KRcc, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoFinishWriting(self: KRcc, callback: *const fn (KRcc, i64) callconv(.c) bool) void {
        qtc.KRcc_OnDoFinishWriting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoFinishWriting` instead
    ///
    pub const QBaseDoFinishWriting = SuperDoFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperDoFinishWriting(self: KRcc, size: i64) bool {
        return qtc.KRcc_SuperDoFinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn DoWriteDir(self: KRcc, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KRcc_DoWriteDir(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn (self: KRcc, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteDir(self: KRcc, callback: *const fn (KRcc, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KRcc_OnDoWriteDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoWriteDir` instead
    ///
    pub const QBaseDoWriteDir = SuperDoWriteDir;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn SuperDoWriteDir(self: KRcc, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KRcc_SuperDoWriteDir(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn DoWriteSymLink(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KRcc_DoWriteSymLink(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn (self: KRcc, name: [*:0]const u8, target: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteSymLink(self: KRcc, callback: *const fn (KRcc, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KRcc_OnDoWriteSymLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoWriteSymLink` instead
    ///
    pub const QBaseDoWriteSymLink = SuperDoWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn SuperDoWriteSymLink(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KRcc_SuperDoWriteSymLink(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#openArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenArchive(self: KRcc, mode: i32) bool {
        return qtc.KRcc_OpenArchive(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#openArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn (self: KRcc, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpenArchive(self: KRcc, callback: *const fn (KRcc, i32) callconv(.c) bool) void {
        qtc.KRcc_OnOpenArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenArchive` instead
    ///
    pub const QBaseOpenArchive = SuperOpenArchive;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#openArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpenArchive(self: KRcc, mode: i32) bool {
        return qtc.KRcc_SuperOpenArchive(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn CloseArchive(self: KRcc) bool {
        return qtc.KRcc_CloseArchive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCloseArchive(self: KRcc, callback: *const fn () callconv(.c) bool) void {
        qtc.KRcc_OnCloseArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseArchive` instead
    ///
    pub const QBaseCloseArchive = SuperCloseArchive;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn SuperCloseArchive(self: KRcc) bool {
        return qtc.KRcc_SuperCloseArchive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KRcc, id: i32, data: ?*anyopaque) void {
        qtc.KRcc_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc `
    ///
    /// ` callback: *const fn (self: KRcc, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KRcc, callback: *const fn (KRcc, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KRcc_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KRcc, id: i32, data: ?*anyopaque) void {
        qtc.KRcc_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krcc.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krcc.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KRcc, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krcc.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn IsOpen(self: KRcc) bool {
        return qtc.KArchive_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Mode(self: KRcc) i32 {
        return qtc.KArchive_Mode(@ptrCast(self.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn Device(self: KRcc) QIODevice {
        return .{ .ptr = qtc.KArchive_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: KRcc, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krcc.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn Directory(self: KRcc) KArchiveDirectory {
        return .{ .ptr = qtc.KArchive_Directory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn AddLocalFile(self: KRcc, fileName: []const u8, destName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalFile(@ptrCast(self.ptr), fileName_str, destName_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` path: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn AddLocalDirectory(self: KRcc, path: []const u8, destName: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalDirectory(@ptrCast(self.ptr), path_str, destName_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteDir(self: KRcc, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KArchive_WriteDir(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    pub fn WriteSymLink(self: KRcc, name: []const u8, target: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KArchive_WriteSymLink(@ptrCast(self.ptr), name_str, target_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteFile(self: KRcc, name: []const u8, data: []u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteFile(@ptrCast(self.ptr), name_str, data_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn PrepareWriting(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64) bool {
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
        return qtc.KArchive_PrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn WriteData(self: KRcc, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KArchive_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteData2(self: KRcc, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteData2(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` size: i64 `
    ///
    pub fn FinishWriting(self: KRcc, size: i64) bool {
        return qtc.KArchive_FinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteDir2(self: KRcc, name: []const u8, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteDir2(@ptrCast(self.ptr), name_str, user_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn WriteDir3(self: KRcc, name: []const u8, user: []const u8, group: []const u8) bool {
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
        return qtc.KArchive_WriteDir3(@ptrCast(self.ptr), name_str, user_str, group_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn WriteDir4(self: KRcc, name: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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
        return qtc.KArchive_WriteDir4(@ptrCast(self.ptr), name_str, user_str, group_str, perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn WriteDir5(self: KRcc, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_WriteDir5(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn WriteDir6(self: KRcc, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_WriteDir6(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn WriteDir7(self: KRcc, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_WriteDir7(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteSymLink3(self: KRcc, name: []const u8, target: []const u8, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteSymLink3(@ptrCast(self.ptr), name_str, target_str, user_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn WriteSymLink4(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteSymLink4(@ptrCast(self.ptr), name_str, target_str, user_str, group_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn WriteSymLink5(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteSymLink5(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn WriteSymLink6(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_WriteSymLink6(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn WriteSymLink7(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_WriteSymLink7(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn WriteSymLink8(self: KRcc, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_WriteSymLink8(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn WriteFile3(self: KRcc, name: []const u8, data: []u8, perm: u32) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteFile3(@ptrCast(self.ptr), name_str, data_str, perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteFile4(self: KRcc, name: []const u8, data: []u8, perm: u32, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteFile4(@ptrCast(self.ptr), name_str, data_str, perm, user_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn WriteFile5(self: KRcc, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KArchive_WriteFile5(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn WriteFile6(self: KRcc, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_WriteFile6(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str, @ptrCast(atime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn WriteFile7(self: KRcc, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_WriteFile7(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn WriteFile8(self: KRcc, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype, ctime: anytype) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_WriteFile8(@ptrCast(self.ptr), name_str, data_str, perm, user_str, group_str, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    pub fn PrepareWriting5(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32) bool {
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
        return qtc.KArchive_PrepareWriting5(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    pub fn PrepareWriting6(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        return qtc.KArchive_PrepareWriting6(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn PrepareWriting7(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return qtc.KArchive_PrepareWriting7(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QDateTime `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` ctime: QDateTime `
    ///
    pub fn PrepareWriting8(self: KRcc, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        comptime _ = @TypeOf(atime)._is_QDateTime;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        comptime _ = @TypeOf(ctime)._is_QDateTime;
        return qtc.KArchive_PrepareWriting8(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: KRcc, mode: i32) bool {
        return qtc.KRcc_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: KRcc, mode: i32) bool {
        return qtc.KRcc_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: KRcc, callback: *const fn (KRcc, i32) callconv(.c) bool) void {
        qtc.KRcc_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn Close(self: KRcc) bool {
        return qtc.KRcc_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn SuperClose(self: KRcc) bool {
        return qtc.KRcc_SuperClose(@ptrCast(self.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnClose(self: KRcc, callback: *const fn () callconv(.c) bool) void {
        qtc.KRcc_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn RootDir(self: KRcc) KArchiveDirectory {
        return .{ .ptr = qtc.KRcc_RootDir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRootDir` instead
    ///
    pub const QBaseRootDir = SuperRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    pub fn SuperRootDir(self: KRcc) KArchiveDirectory {
        return .{ .ptr = qtc.KRcc_SuperRootDir(@ptrCast(self.ptr)) };
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn () callconv(.c) KArchiveDirectory `
    ///
    pub fn OnRootDir(self: KRcc, callback: *const fn () callconv(.c) KArchiveDirectory) void {
        qtc.KRcc_OnRootDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn DoWriteData(self: KRcc, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KRcc_DoWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `SuperDoWriteData` instead
    ///
    pub const QBaseDoWriteData = SuperDoWriteData;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperDoWriteData(self: KRcc, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KRcc_SuperDoWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, data: [*:0]const u8, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoWriteData(self: KRcc, callback: *const fn (KRcc, [*:0]const u8, i64) callconv(.c) bool) void {
        qtc.KRcc_OnDoWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn CreateDevice(self: KRcc, mode: i32) bool {
        return qtc.KRcc_CreateDevice(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCreateDevice` instead
    ///
    pub const QBaseCreateDevice = SuperCreateDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperCreateDevice(self: KRcc, mode: i32) bool {
        return qtc.KRcc_SuperCreateDevice(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnCreateDevice(self: KRcc, callback: *const fn (KRcc, i32) callconv(.c) bool) void {
        qtc.KRcc_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn SetErrorString(self: KRcc, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KRcc_SetErrorString(@ptrCast(self.ptr), errorStr_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorString` instead
    ///
    pub const QBaseSetErrorString = SuperSetErrorString;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn SuperSetErrorString(self: KRcc, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KRcc_SuperSetErrorString(@ptrCast(self.ptr), errorStr_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: KRcc, callback: *const fn (KRcc, [*:0]const u8) callconv(.c) void) void {
        qtc.KRcc_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` path: []const u8 `
    ///
    pub fn FindOrCreate(self: KRcc, path: []const u8) KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KRcc_FindOrCreate(@ptrCast(self.ptr), path_str) };
    }

    /// ### DEPRECATED: Use `SuperFindOrCreate` instead
    ///
    pub const QBaseFindOrCreate = SuperFindOrCreate;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SuperFindOrCreate(self: KRcc, path: []const u8) KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KRcc_SuperFindOrCreate(@ptrCast(self.ptr), path_str) };
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, path: [*:0]const u8) callconv(.c) KArchiveDirectory `
    ///
    pub fn OnFindOrCreate(self: KRcc, callback: *const fn (KRcc, [*:0]const u8) callconv(.c) KArchiveDirectory) void {
        qtc.KRcc_OnFindOrCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn SetDevice(self: KRcc, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KRcc_SetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetDevice` instead
    ///
    pub const QBaseSetDevice = SuperSetDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn SuperSetDevice(self: KRcc, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KRcc_SuperSetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, dev: QIODevice) callconv(.c) void `
    ///
    pub fn OnSetDevice(self: KRcc, callback: *const fn (KRcc, QIODevice) callconv(.c) void) void {
        qtc.KRcc_OnSetDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` rootDir: KArchiveDirectory `
    ///
    pub fn SetRootDir(self: KRcc, rootDir: anytype) void {
        comptime _ = @TypeOf(rootDir)._is_KArchiveDirectory;
        qtc.KRcc_SetRootDir(@ptrCast(self.ptr), @ptrCast(rootDir.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetRootDir` instead
    ///
    pub const QBaseSetRootDir = SuperSetRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRcc `
    ///
    /// ` rootDir: KArchiveDirectory `
    ///
    pub fn SuperSetRootDir(self: KRcc, rootDir: anytype) void {
        comptime _ = @TypeOf(rootDir)._is_KArchiveDirectory;
        qtc.KRcc_SuperSetRootDir(@ptrCast(self.ptr), @ptrCast(rootDir.ptr));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRcc`
    ///
    /// ` callback: *const fn (self: KRcc, rootDir: KArchiveDirectory) callconv(.c) void `
    ///
    pub fn OnSetRootDir(self: KRcc, callback: *const fn (KRcc, KArchiveDirectory) callconv(.c) void) void {
        qtc.KRcc_OnSetRootDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/krcc.html#dtor.KRcc)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KRcc `
    ///
    pub fn Delete(self: KRcc) void {
        qtc.KRcc_Delete(@ptrCast(self.ptr));
    }
};
