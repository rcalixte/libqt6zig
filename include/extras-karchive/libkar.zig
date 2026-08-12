const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchiveDirectory = @import("libqt6").KArchiveDirectory;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kar.html)
pub const KAr = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAr,

    pub const _is_KAr = {};
    pub const _is_KArchive = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAr object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn new(filename: []const u8) KAr {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.KAr_new(filename_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAr object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dev: QIODevice `
    ///
    pub fn new2(dev: anytype) KAr {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return .{ .ptr = qtc.KAr_new2(@ptrCast(dev.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KAr object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KAr `
    ///
    pub fn new3(param1: anytype) KAr {
        comptime _ = @TypeOf(param1)._is_KAr;
        return .{ .ptr = qtc.KAr_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAr.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `doPrepareWriting` instead
    ///
    pub const DoPrepareWriting = doPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doPrepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn doPrepareWriting(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KAr_DoPrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `onDoPrepareWriting` instead
    ///
    pub const OnDoPrepareWriting = onDoPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doPrepareWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn (self: KAr, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, size: i64, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn onDoPrepareWriting(self: KAr, callback: *const fn (KAr, [*:0]const u8, [*:0]const u8, [*:0]const u8, i64, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KAr_OnDoPrepareWriting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoPrepareWriting` instead
    ///
    pub const SuperDoPrepareWriting = superDoPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doPrepareWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn superDoPrepareWriting(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KAr_SuperDoPrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `doFinishWriting` instead
    ///
    pub const DoFinishWriting = doFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doFinishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` size: i64 `
    ///
    pub fn doFinishWriting(self: KAr, size: i64) bool {
        return qtc.KAr_DoFinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onDoFinishWriting` instead
    ///
    pub const OnDoFinishWriting = onDoFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doFinishWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn (self: KAr, size: i64) callconv(.c) bool `
    ///
    pub fn onDoFinishWriting(self: KAr, callback: *const fn (KAr, i64) callconv(.c) bool) void {
        qtc.KAr_OnDoFinishWriting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoFinishWriting` instead
    ///
    pub const SuperDoFinishWriting = superDoFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doFinishWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` size: i64 `
    ///
    pub fn superDoFinishWriting(self: KAr, size: i64) bool {
        return qtc.KAr_SuperDoFinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `doWriteDir` instead
    ///
    pub const DoWriteDir = doWriteDir;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doWriteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn doWriteDir(self: KAr, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KAr_DoWriteDir(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `onDoWriteDir` instead
    ///
    pub const OnDoWriteDir = onDoWriteDir;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doWriteDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn (self: KAr, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn onDoWriteDir(self: KAr, callback: *const fn (KAr, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KAr_OnDoWriteDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoWriteDir` instead
    ///
    pub const SuperDoWriteDir = superDoWriteDir;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doWriteDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn superDoWriteDir(self: KAr, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KAr_SuperDoWriteDir(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `doWriteSymLink` instead
    ///
    pub const DoWriteSymLink = doWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doWriteSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn doWriteSymLink(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KAr_DoWriteSymLink(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `onDoWriteSymLink` instead
    ///
    pub const OnDoWriteSymLink = onDoWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doWriteSymLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn (self: KAr, name: [*:0]const u8, target: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn onDoWriteSymLink(self: KAr, callback: *const fn (KAr, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KAr_OnDoWriteSymLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoWriteSymLink` instead
    ///
    pub const SuperDoWriteSymLink = superDoWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/kar.html#doWriteSymLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn superDoWriteSymLink(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KAr_SuperDoWriteSymLink(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `openArchive` instead
    ///
    pub const OpenArchive = openArchive;

    /// ### [Upstream resources](https://api.kde.org/kar.html#openArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openArchive(self: KAr, _mode: i32) bool {
        return qtc.KAr_OpenArchive(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onOpenArchive` instead
    ///
    pub const OnOpenArchive = onOpenArchive;

    /// ### [Upstream resources](https://api.kde.org/kar.html#openArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn (self: KAr, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpenArchive(self: KAr, callback: *const fn (KAr, i32) callconv(.c) bool) void {
        qtc.KAr_OnOpenArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenArchive` instead
    ///
    pub const SuperOpenArchive = superOpenArchive;

    /// ### [Upstream resources](https://api.kde.org/kar.html#openArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpenArchive(self: KAr, _mode: i32) bool {
        return qtc.KAr_SuperOpenArchive(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `closeArchive` instead
    ///
    pub const CloseArchive = closeArchive;

    /// ### [Upstream resources](https://api.kde.org/kar.html#closeArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn closeArchive(self: KAr) bool {
        return qtc.KAr_CloseArchive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseArchive` instead
    ///
    pub const OnCloseArchive = onCloseArchive;

    /// ### [Upstream resources](https://api.kde.org/kar.html#closeArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCloseArchive(self: KAr, callback: *const fn () callconv(.c) bool) void {
        qtc.KAr_OnCloseArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseArchive` instead
    ///
    pub const SuperCloseArchive = superCloseArchive;

    /// ### [Upstream resources](https://api.kde.org/kar.html#closeArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn superCloseArchive(self: KAr) bool {
        return qtc.KAr_SuperCloseArchive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/kar.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KAr, id: i32, data: ?*anyopaque) void {
        qtc.KAr_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kar.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr `
    ///
    /// ` callback: *const fn (self: KAr, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KAr, callback: *const fn (KAr, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KAr_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kar.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KAr, id: i32, data: ?*anyopaque) void {
        qtc.KAr_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAr.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAr.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KAr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAr.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn isOpen(self: KAr) bool {
        return qtc.KArchive_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn mode(self: KAr) i32 {
        return qtc.KArchive_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn device(self: KAr) QIODevice {
        return .{ .ptr = qtc.KArchive_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: KAr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAr.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `directory` instead
    ///
    pub const Directory = directory;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn directory(self: KAr) KArchiveDirectory {
        return .{ .ptr = qtc.KArchive_Directory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addLocalFile` instead
    ///
    pub const AddLocalFile = addLocalFile;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn addLocalFile(self: KAr, _fileName: []const u8, destName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalFile(@ptrCast(self.ptr), fileName_str, destName_str);
    }

    /// ### DEPRECATED: Use `addLocalDirectory` instead
    ///
    pub const AddLocalDirectory = addLocalDirectory;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` path: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn addLocalDirectory(self: KAr, path: []const u8, destName: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeDir` instead
    ///
    pub const WriteDir = writeDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    pub fn writeDir(self: KAr, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KArchive_WriteDir(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `writeSymLink` instead
    ///
    pub const WriteSymLink = writeSymLink;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    pub fn writeSymLink(self: KAr, name: []const u8, target: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeFile` instead
    ///
    pub const WriteFile = writeFile;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeFile(self: KAr, name: []const u8, data: []u8) bool {
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

    /// ### DEPRECATED: Use `prepareWriting` instead
    ///
    pub const PrepareWriting = prepareWriting;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn prepareWriting(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64) bool {
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

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn writeData(self: KAr, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KArchive_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `writeData2` instead
    ///
    pub const WriteData2 = writeData2;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeData2(self: KAr, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteData2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `finishWriting` instead
    ///
    pub const FinishWriting = finishWriting;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` size: i64 `
    ///
    pub fn finishWriting(self: KAr, size: i64) bool {
        return qtc.KArchive_FinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `writeDir2` instead
    ///
    pub const WriteDir2 = writeDir2;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeDir2(self: KAr, name: []const u8, user: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeDir3` instead
    ///
    pub const WriteDir3 = writeDir3;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeDir3(self: KAr, name: []const u8, user: []const u8, group: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeDir4` instead
    ///
    pub const WriteDir4 = writeDir4;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeDir4(self: KAr, name: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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

    /// ### DEPRECATED: Use `writeDir5` instead
    ///
    pub const WriteDir5 = writeDir5;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeDir5(self: KAr, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeDir6` instead
    ///
    pub const WriteDir6 = writeDir6;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeDir6(self: KAr, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeDir7` instead
    ///
    pub const WriteDir7 = writeDir7;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeDir7(self: KAr, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeSymLink3` instead
    ///
    pub const WriteSymLink3 = writeSymLink3;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeSymLink3(self: KAr, name: []const u8, target: []const u8, user: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeSymLink4` instead
    ///
    pub const WriteSymLink4 = writeSymLink4;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeSymLink4(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeSymLink5` instead
    ///
    pub const WriteSymLink5 = writeSymLink5;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeSymLink5(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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

    /// ### DEPRECATED: Use `writeSymLink6` instead
    ///
    pub const WriteSymLink6 = writeSymLink6;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeSymLink6(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeSymLink7` instead
    ///
    pub const WriteSymLink7 = writeSymLink7;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeSymLink7(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeSymLink8` instead
    ///
    pub const WriteSymLink8 = writeSymLink8;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeSymLink8(self: KAr, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeFile3` instead
    ///
    pub const WriteFile3 = writeFile3;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeFile3(self: KAr, name: []const u8, data: []u8, perm: u32) bool {
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

    /// ### DEPRECATED: Use `writeFile4` instead
    ///
    pub const WriteFile4 = writeFile4;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeFile4(self: KAr, name: []const u8, data: []u8, perm: u32, user: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeFile5` instead
    ///
    pub const WriteFile5 = writeFile5;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeFile5(self: KAr, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8) bool {
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

    /// ### DEPRECATED: Use `writeFile6` instead
    ///
    pub const WriteFile6 = writeFile6;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeFile6(self: KAr, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeFile7` instead
    ///
    pub const WriteFile7 = writeFile7;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeFile7(self: KAr, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype) bool {
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

    /// ### DEPRECATED: Use `writeFile8` instead
    ///
    pub const WriteFile8 = writeFile8;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn writeFile8(self: KAr, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype, ctime: anytype) bool {
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

    /// ### DEPRECATED: Use `prepareWriting5` instead
    ///
    pub const PrepareWriting5 = prepareWriting5;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn prepareWriting5(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32) bool {
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

    /// ### DEPRECATED: Use `prepareWriting6` instead
    ///
    pub const PrepareWriting6 = prepareWriting6;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn prepareWriting6(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype) bool {
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

    /// ### DEPRECATED: Use `prepareWriting7` instead
    ///
    pub const PrepareWriting7 = prepareWriting7;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn prepareWriting7(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype) bool {
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

    /// ### DEPRECATED: Use `prepareWriting8` instead
    ///
    pub const PrepareWriting8 = prepareWriting8;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
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
    pub fn prepareWriting8(self: KAr, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: KAr, _mode: i32) bool {
        return qtc.KAr_Open(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: KAr, _mode: i32) bool {
        return qtc.KAr_SuperOpen(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpen(self: KAr, callback: *const fn (KAr, i32) callconv(.c) bool) void {
        qtc.KAr_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn close(self: KAr) bool {
        return qtc.KAr_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn superClose(self: KAr) bool {
        return qtc.KAr_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onClose(self: KAr, callback: *const fn () callconv(.c) bool) void {
        qtc.KAr_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rootDir` instead
    ///
    pub const RootDir = rootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn rootDir(self: KAr) KArchiveDirectory {
        return .{ .ptr = qtc.KAr_RootDir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superRootDir` instead
    ///
    pub const SuperRootDir = superRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    pub fn superRootDir(self: KAr) KArchiveDirectory {
        return .{ .ptr = qtc.KAr_SuperRootDir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRootDir` instead
    ///
    pub const OnRootDir = onRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn () callconv(.c) KArchiveDirectory `
    ///
    pub fn onRootDir(self: KAr, callback: *const fn () callconv(.c) KArchiveDirectory) void {
        qtc.KAr_OnRootDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doWriteData` instead
    ///
    pub const DoWriteData = doWriteData;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn doWriteData(self: KAr, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KAr_DoWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `superDoWriteData` instead
    ///
    pub const SuperDoWriteData = superDoWriteData;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn superDoWriteData(self: KAr, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KAr_SuperDoWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
    }

    /// ### DEPRECATED: Use `onDoWriteData` instead
    ///
    pub const OnDoWriteData = onDoWriteData;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, data: [*:0]const u8, size: i64) callconv(.c) bool `
    ///
    pub fn onDoWriteData(self: KAr, callback: *const fn (KAr, [*:0]const u8, i64) callconv(.c) bool) void {
        qtc.KAr_OnDoWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createDevice` instead
    ///
    pub const CreateDevice = createDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn createDevice(self: KAr, _mode: i32) bool {
        return qtc.KAr_CreateDevice(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `superCreateDevice` instead
    ///
    pub const SuperCreateDevice = superCreateDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superCreateDevice(self: KAr, _mode: i32) bool {
        return qtc.KAr_SuperCreateDevice(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onCreateDevice` instead
    ///
    pub const OnCreateDevice = onCreateDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onCreateDevice(self: KAr, callback: *const fn (KAr, i32) callconv(.c) bool) void {
        qtc.KAr_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorString` instead
    ///
    pub const SetErrorString = setErrorString;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn setErrorString(self: KAr, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KAr_SetErrorString(@ptrCast(self.ptr), errorStr_str);
    }

    /// ### DEPRECATED: Use `superSetErrorString` instead
    ///
    pub const SuperSetErrorString = superSetErrorString;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn superSetErrorString(self: KAr, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KAr_SuperSetErrorString(@ptrCast(self.ptr), errorStr_str);
    }

    /// ### DEPRECATED: Use `onSetErrorString` instead
    ///
    pub const OnSetErrorString = onSetErrorString;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: KAr, callback: *const fn (KAr, [*:0]const u8) callconv(.c) void) void {
        qtc.KAr_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `findOrCreate` instead
    ///
    pub const FindOrCreate = findOrCreate;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` path: []const u8 `
    ///
    pub fn findOrCreate(self: KAr, path: []const u8) KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KAr_FindOrCreate(@ptrCast(self.ptr), path_str) };
    }

    /// ### DEPRECATED: Use `superFindOrCreate` instead
    ///
    pub const SuperFindOrCreate = superFindOrCreate;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` path: []const u8 `
    ///
    pub fn superFindOrCreate(self: KAr, path: []const u8) KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KAr_SuperFindOrCreate(@ptrCast(self.ptr), path_str) };
    }

    /// ### DEPRECATED: Use `onFindOrCreate` instead
    ///
    pub const OnFindOrCreate = onFindOrCreate;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, path: [*:0]const u8) callconv(.c) KArchiveDirectory `
    ///
    pub fn onFindOrCreate(self: KAr, callback: *const fn (KAr, [*:0]const u8) callconv(.c) KArchiveDirectory) void {
        qtc.KAr_OnFindOrCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn setDevice(self: KAr, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KAr_SetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### DEPRECATED: Use `superSetDevice` instead
    ///
    pub const SuperSetDevice = superSetDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn superSetDevice(self: KAr, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KAr_SuperSetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### DEPRECATED: Use `onSetDevice` instead
    ///
    pub const OnSetDevice = onSetDevice;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, dev: QIODevice) callconv(.c) void `
    ///
    pub fn onSetDevice(self: KAr, callback: *const fn (KAr, QIODevice) callconv(.c) void) void {
        qtc.KAr_OnSetDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setRootDir` instead
    ///
    pub const SetRootDir = setRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _rootDir: KArchiveDirectory `
    ///
    pub fn setRootDir(self: KAr, _rootDir: anytype) void {
        comptime _ = @TypeOf(_rootDir)._is_KArchiveDirectory;
        qtc.KAr_SetRootDir(@ptrCast(self.ptr), @ptrCast(_rootDir.ptr));
    }

    /// ### DEPRECATED: Use `superSetRootDir` instead
    ///
    pub const SuperSetRootDir = superSetRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAr `
    ///
    /// ` _rootDir: KArchiveDirectory `
    ///
    pub fn superSetRootDir(self: KAr, _rootDir: anytype) void {
        comptime _ = @TypeOf(_rootDir)._is_KArchiveDirectory;
        qtc.KAr_SuperSetRootDir(@ptrCast(self.ptr), @ptrCast(_rootDir.ptr));
    }

    /// ### DEPRECATED: Use `onSetRootDir` instead
    ///
    pub const OnSetRootDir = onSetRootDir;

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAr`
    ///
    /// ` callback: *const fn (self: KAr, rootDir: KArchiveDirectory) callconv(.c) void `
    ///
    pub fn onSetRootDir(self: KAr, callback: *const fn (KAr, KArchiveDirectory) callconv(.c) void) void {
        qtc.KAr_OnSetRootDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kar.html#dtor.KAr)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAr `
    ///
    pub fn delete(self: KAr) void {
        qtc.KAr_Delete(@ptrCast(self.ptr));
    }
};
