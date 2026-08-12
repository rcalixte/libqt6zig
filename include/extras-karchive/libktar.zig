const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KArchiveDirectory = @import("libqt6").KArchiveDirectory;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktar.html)
pub const KTar = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTar,

    pub const _is_KTar = {};
    pub const _is_KArchive = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn new(filename: []const u8) KTar {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.KTar_new(filename_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dev: QIODevice `
    ///
    pub fn new2(dev: anytype) KTar {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return .{ .ptr = qtc.KTar_new2(@ptrCast(dev.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KTar `
    ///
    pub fn new3(param1: anytype) KTar {
        comptime _ = @TypeOf(param1)._is_KTar;
        return .{ .ptr = qtc.KTar_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KTar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` mimetype: []const u8 `
    ///
    pub fn new4(filename: []const u8, mimetype: []const u8) KTar {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const mimetype_str = qtc.libqt_string{
            .len = mimetype.len,
            .data = mimetype.ptr,
        };
        return .{ .ptr = qtc.KTar_new4(filename_str, mimetype_str) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTar.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOrigFileName` instead
    ///
    pub const SetOrigFileName = setOrigFileName;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#setOrigFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` _fileName: []u8 `
    ///
    pub fn setOrigFileName(self: KTar, _fileName: []u8) void {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.KTar_SetOrigFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `doWriteSymLink` instead
    ///
    pub const DoWriteSymLink = doWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doWriteSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
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
    pub fn doWriteSymLink(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KTar_DoWriteSymLink(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `onDoWriteSymLink` instead
    ///
    pub const OnDoWriteSymLink = onDoWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doWriteSymLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, name: [*:0]const u8, target: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn onDoWriteSymLink(self: KTar, callback: *const fn (KTar, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KTar_OnDoWriteSymLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoWriteSymLink` instead
    ///
    pub const SuperDoWriteSymLink = superDoWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doWriteSymLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
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
    pub fn superDoWriteSymLink(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KTar_SuperDoWriteSymLink(@ptrCast(self.ptr), name_str, target_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `doWriteDir` instead
    ///
    pub const DoWriteDir = doWriteDir;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doWriteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
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
    pub fn doWriteDir(self: KTar, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KTar_DoWriteDir(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `onDoWriteDir` instead
    ///
    pub const OnDoWriteDir = onDoWriteDir;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doWriteDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn onDoWriteDir(self: KTar, callback: *const fn (KTar, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KTar_OnDoWriteDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoWriteDir` instead
    ///
    pub const SuperDoWriteDir = superDoWriteDir;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doWriteDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
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
    pub fn superDoWriteDir(self: KTar, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KTar_SuperDoWriteDir(@ptrCast(self.ptr), name_str, user_str, group_str, perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `doPrepareWriting` instead
    ///
    pub const DoPrepareWriting = doPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doPrepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
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
    pub fn doPrepareWriting(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KTar_DoPrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `onDoPrepareWriting` instead
    ///
    pub const OnDoPrepareWriting = onDoPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doPrepareWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, size: i64, perm: u32, atime: QDateTime, mtime: QDateTime, ctime: QDateTime) callconv(.c) bool `
    ///
    pub fn onDoPrepareWriting(self: KTar, callback: *const fn (KTar, [*:0]const u8, [*:0]const u8, [*:0]const u8, i64, u32, QDateTime, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KTar_OnDoPrepareWriting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoPrepareWriting` instead
    ///
    pub const SuperDoPrepareWriting = superDoPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doPrepareWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
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
    pub fn superDoPrepareWriting(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
        return qtc.KTar_SuperDoPrepareWriting(@ptrCast(self.ptr), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime.ptr), @ptrCast(mtime.ptr), @ptrCast(ctime.ptr));
    }

    /// ### DEPRECATED: Use `doFinishWriting` instead
    ///
    pub const DoFinishWriting = doFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doFinishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` size: i64 `
    ///
    pub fn doFinishWriting(self: KTar, size: i64) bool {
        return qtc.KTar_DoFinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onDoFinishWriting` instead
    ///
    pub const OnDoFinishWriting = onDoFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doFinishWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, size: i64) callconv(.c) bool `
    ///
    pub fn onDoFinishWriting(self: KTar, callback: *const fn (KTar, i64) callconv(.c) bool) void {
        qtc.KTar_OnDoFinishWriting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoFinishWriting` instead
    ///
    pub const SuperDoFinishWriting = superDoFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#doFinishWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` size: i64 `
    ///
    pub fn superDoFinishWriting(self: KTar, size: i64) bool {
        return qtc.KTar_SuperDoFinishWriting(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `openArchive` instead
    ///
    pub const OpenArchive = openArchive;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#openArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openArchive(self: KTar, _mode: i32) bool {
        return qtc.KTar_OpenArchive(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onOpenArchive` instead
    ///
    pub const OnOpenArchive = onOpenArchive;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#openArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpenArchive(self: KTar, callback: *const fn (KTar, i32) callconv(.c) bool) void {
        qtc.KTar_OnOpenArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenArchive` instead
    ///
    pub const SuperOpenArchive = superOpenArchive;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#openArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpenArchive(self: KTar, _mode: i32) bool {
        return qtc.KTar_SuperOpenArchive(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `closeArchive` instead
    ///
    pub const CloseArchive = closeArchive;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#closeArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    pub fn closeArchive(self: KTar) bool {
        return qtc.KTar_CloseArchive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseArchive` instead
    ///
    pub const OnCloseArchive = onCloseArchive;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#closeArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCloseArchive(self: KTar, callback: *const fn () callconv(.c) bool) void {
        qtc.KTar_OnCloseArchive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseArchive` instead
    ///
    pub const SuperCloseArchive = superCloseArchive;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#closeArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    pub fn superCloseArchive(self: KTar) bool {
        return qtc.KTar_SuperCloseArchive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createDevice` instead
    ///
    pub const CreateDevice = createDevice;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#createDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn createDevice(self: KTar, _mode: i32) bool {
        return qtc.KTar_CreateDevice(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onCreateDevice` instead
    ///
    pub const OnCreateDevice = onCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#createDevice)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onCreateDevice(self: KTar, callback: *const fn (KTar, i32) callconv(.c) bool) void {
        qtc.KTar_OnCreateDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateDevice` instead
    ///
    pub const SuperCreateDevice = superCreateDevice;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#createDevice)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superCreateDevice(self: KTar, _mode: i32) bool {
        return qtc.KTar_SuperCreateDevice(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KTar, id: i32, data: ?*anyopaque) void {
        qtc.KTar_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTar `
    ///
    /// ` callback: *const fn (self: KTar, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KTar, callback: *const fn (KTar, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KTar_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTar `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KTar, id: i32, data: ?*anyopaque) void {
        qtc.KTar_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTar.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTar.tr3: Memory allocation failed");
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
    /// ` self: KTar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KTar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTar.errorString: Memory allocation failed");
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
    /// ` self: KTar `
    ///
    pub fn isOpen(self: KTar) bool {
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
    /// ` self: KTar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn mode(self: KTar) i32 {
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
    /// ` self: KTar `
    ///
    pub fn device(self: KTar) QIODevice {
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
    /// ` self: KTar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: KTar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTar.fileName: Memory allocation failed");
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
    /// ` self: KTar `
    ///
    pub fn directory(self: KTar) KArchiveDirectory {
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
    /// ` self: KTar `
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn addLocalFile(self: KTar, _fileName: []const u8, destName: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` path: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn addLocalDirectory(self: KTar, path: []const u8, destName: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    pub fn writeDir(self: KTar, name: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    pub fn writeSymLink(self: KTar, name: []const u8, target: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeFile(self: KTar, name: []const u8, data: []u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn prepareWriting(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64) bool {
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
    /// ` self: KTar `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn writeData(self: KTar, data: [:0]const u8, size: i64) bool {
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
    /// ` self: KTar `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeData2(self: KTar, data: []u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` size: i64 `
    ///
    pub fn finishWriting(self: KTar, size: i64) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeDir2(self: KTar, name: []const u8, user: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeDir3(self: KTar, name: []const u8, user: []const u8, group: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeDir4(self: KTar, name: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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
    /// ` self: KTar `
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
    pub fn writeDir5(self: KTar, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn writeDir6(self: KTar, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn writeDir7(self: KTar, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeSymLink3(self: KTar, name: []const u8, target: []const u8, user: []const u8) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn writeSymLink4(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8) bool {
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
    /// ` self: KTar `
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
    pub fn writeSymLink5(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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
    /// ` self: KTar `
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
    pub fn writeSymLink6(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn writeSymLink7(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn writeSymLink8(self: KTar, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn writeFile3(self: KTar, name: []const u8, data: []u8, perm: u32) bool {
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
    /// ` self: KTar `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn writeFile4(self: KTar, name: []const u8, data: []u8, perm: u32, user: []const u8) bool {
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
    /// ` self: KTar `
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
    pub fn writeFile5(self: KTar, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8) bool {
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
    /// ` self: KTar `
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
    pub fn writeFile6(self: KTar, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn writeFile7(self: KTar, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn writeFile8(self: KTar, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn prepareWriting5(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32) bool {
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
    /// ` self: KTar `
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
    pub fn prepareWriting6(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn prepareWriting7(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype) bool {
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
    /// ` self: KTar `
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
    pub fn prepareWriting8(self: KTar, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: anytype, mtime: anytype, ctime: anytype) bool {
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
    /// ` self: KTar `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: KTar, _mode: i32) bool {
        return qtc.KTar_Open(@ptrCast(self.ptr), @bitCast(_mode));
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
    /// ` self: KTar `
    ///
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: KTar, _mode: i32) bool {
        return qtc.KTar_SuperOpen(@ptrCast(self.ptr), @bitCast(_mode));
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn (self: KTar, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpen(self: KTar, callback: *const fn (KTar, i32) callconv(.c) bool) void {
        qtc.KTar_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    pub fn close(self: KTar) bool {
        return qtc.KTar_Close(@ptrCast(self.ptr));
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
    /// ` self: KTar `
    ///
    pub fn superClose(self: KTar) bool {
        return qtc.KTar_SuperClose(@ptrCast(self.ptr));
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onClose(self: KTar, callback: *const fn () callconv(.c) bool) void {
        qtc.KTar_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    pub fn rootDir(self: KTar) KArchiveDirectory {
        return .{ .ptr = qtc.KTar_RootDir(@ptrCast(self.ptr)) };
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
    /// ` self: KTar `
    ///
    pub fn superRootDir(self: KTar) KArchiveDirectory {
        return .{ .ptr = qtc.KTar_SuperRootDir(@ptrCast(self.ptr)) };
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn () callconv(.c) KArchiveDirectory `
    ///
    pub fn onRootDir(self: KTar, callback: *const fn () callconv(.c) KArchiveDirectory) void {
        qtc.KTar_OnRootDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn doWriteData(self: KTar, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KTar_DoWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
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
    /// ` self: KTar `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn superDoWriteData(self: KTar, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KTar_SuperDoWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(size));
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn (self: KTar, data: [*:0]const u8, size: i64) callconv(.c) bool `
    ///
    pub fn onDoWriteData(self: KTar, callback: *const fn (KTar, [*:0]const u8, i64) callconv(.c) bool) void {
        qtc.KTar_OnDoWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn setErrorString(self: KTar, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KTar_SetErrorString(@ptrCast(self.ptr), errorStr_str);
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
    /// ` self: KTar `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn superSetErrorString(self: KTar, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KTar_SuperSetErrorString(@ptrCast(self.ptr), errorStr_str);
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn (self: KTar, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: KTar, callback: *const fn (KTar, [*:0]const u8) callconv(.c) void) void {
        qtc.KTar_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    /// ` path: []const u8 `
    ///
    pub fn findOrCreate(self: KTar, path: []const u8) KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KTar_FindOrCreate(@ptrCast(self.ptr), path_str) };
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
    /// ` self: KTar `
    ///
    /// ` path: []const u8 `
    ///
    pub fn superFindOrCreate(self: KTar, path: []const u8) KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KTar_SuperFindOrCreate(@ptrCast(self.ptr), path_str) };
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn (self: KTar, path: [*:0]const u8) callconv(.c) KArchiveDirectory `
    ///
    pub fn onFindOrCreate(self: KTar, callback: *const fn (KTar, [*:0]const u8) callconv(.c) KArchiveDirectory) void {
        qtc.KTar_OnFindOrCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn setDevice(self: KTar, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KTar_SetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
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
    /// ` self: KTar `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn superSetDevice(self: KTar, dev: anytype) void {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        qtc.KTar_SuperSetDevice(@ptrCast(self.ptr), @ptrCast(dev.ptr));
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn (self: KTar, dev: QIODevice) callconv(.c) void `
    ///
    pub fn onSetDevice(self: KTar, callback: *const fn (KTar, QIODevice) callconv(.c) void) void {
        qtc.KTar_OnSetDevice(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTar `
    ///
    /// ` _rootDir: KArchiveDirectory `
    ///
    pub fn setRootDir(self: KTar, _rootDir: anytype) void {
        comptime _ = @TypeOf(_rootDir)._is_KArchiveDirectory;
        qtc.KTar_SetRootDir(@ptrCast(self.ptr), @ptrCast(_rootDir.ptr));
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
    /// ` self: KTar `
    ///
    /// ` _rootDir: KArchiveDirectory `
    ///
    pub fn superSetRootDir(self: KTar, _rootDir: anytype) void {
        comptime _ = @TypeOf(_rootDir)._is_KArchiveDirectory;
        qtc.KTar_SuperSetRootDir(@ptrCast(self.ptr), @ptrCast(_rootDir.ptr));
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
    /// ` self: KTar`
    ///
    /// ` callback: *const fn (self: KTar, rootDir: KArchiveDirectory) callconv(.c) void `
    ///
    pub fn onSetRootDir(self: KTar, callback: *const fn (KTar, KArchiveDirectory) callconv(.c) void) void {
        qtc.KTar_OnSetRootDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ktar.html#dtor.KTar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTar `
    ///
    pub fn delete(self: KTar) void {
        qtc.KTar_Delete(@ptrCast(self.ptr));
    }
};
