const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/krcc.html)
pub const krcc = struct {
    /// New constructs a new KRcc object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn New(filename: []const u8) QtC.KRcc {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };

        return qtc.KRcc_new(filename_str);
    }

    /// New2 constructs a new KRcc object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KRcc `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KRcc {
        return qtc.KRcc_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn DoPrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KRcc_DoPrepareWriting(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn (self: QtC.KRcc, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, size: i64, perm: u16, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoPrepareWriting(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, i64, u16, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRcc_OnDoPrepareWriting(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn QBaseDoPrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KRcc_QBaseDoPrepareWriting(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` size: i64 `
    ///
    pub fn DoFinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.KRcc_DoFinishWriting(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn (self: QtC.KRcc, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoFinishWriting(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.KRcc_OnDoFinishWriting(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` size: i64 `
    ///
    pub fn QBaseDoFinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.KRcc_QBaseDoFinishWriting(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn DoWriteDir(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KRcc_DoWriteDir(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn (self: QtC.KRcc, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u16, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, u16, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRcc_OnDoWriteDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn QBaseDoWriteDir(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KRcc_QBaseDoWriteDir(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn DoWriteSymLink(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KRcc_DoWriteSymLink(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn (self: QtC.KRcc, name: [*:0]const u8, target: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u16, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteSymLink(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, u16, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRcc_OnDoWriteSymLink(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn QBaseDoWriteSymLink(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KRcc_QBaseDoWriteSymLink(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#openArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenArchive(self: ?*anyopaque, mode: i32) bool {
        return qtc.KRcc_OpenArchive(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#openArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn (self: QtC.KRcc, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpenArchive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRcc_OnOpenArchive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#openArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseOpenArchive(self: ?*anyopaque, mode: i32) bool {
        return qtc.KRcc_QBaseOpenArchive(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn CloseArchive(self: ?*anyopaque) bool {
        return qtc.KRcc_CloseArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCloseArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KRcc_OnCloseArchive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn QBaseCloseArchive(self: ?*anyopaque) bool {
        return qtc.KRcc_QBaseCloseArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KRcc_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` callback: *const fn (self: QtC.KRcc, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KRcc_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KRcc_QBaseVirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: []const u8 `
    ///
    /// ` disambiguation: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` sourceText: []const u8 `
    ///
    /// ` disambiguation: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
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
    /// ` self: QtC.KRcc `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self));
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
    /// ` self: QtC.KRcc `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.KArchive_IsOpen(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.KArchive_Mode(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.KArchive_Device(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self));
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
    /// ` self: QtC.KRcc `
    ///
    pub fn Directory(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.KArchive_Directory(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn AddLocalFile(self: ?*anyopaque, fileName: []const u8, destName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalFile(@ptrCast(self), fileName_str, destName_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` path: []const u8 `
    ///
    /// ` destName: []const u8 `
    ///
    pub fn AddLocalDirectory(self: ?*anyopaque, path: []const u8, destName: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const destName_str = qtc.libqt_string{
            .len = destName.len,
            .data = destName.ptr,
        };
        return qtc.KArchive_AddLocalDirectory(@ptrCast(self), path_str, destName_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteDir(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KArchive_WriteDir(@ptrCast(self), name_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    pub fn WriteSymLink(self: ?*anyopaque, name: []const u8, target: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KArchive_WriteSymLink(@ptrCast(self), name_str, target_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn WriteFile(self: ?*anyopaque, name: []const u8, data: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteFile(@ptrCast(self), name_str, data_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn PrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64) bool {
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
        return qtc.KArchive_PrepareWriting(@ptrCast(self), name_str, user_str, group_str, @intCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` data: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: []const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KArchive_WriteData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` data: []const u8 `
    ///
    pub fn WriteData2(self: ?*anyopaque, data: []const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteData2(@ptrCast(self), data_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` size: i64 `
    ///
    pub fn FinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.KArchive_FinishWriting(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteDir2(self: ?*anyopaque, name: []const u8, user: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return qtc.KArchive_WriteDir2(@ptrCast(self), name_str, user_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn WriteDir3(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8) bool {
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
        return qtc.KArchive_WriteDir3(@ptrCast(self), name_str, user_str, group_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    pub fn WriteDir4(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u16) bool {
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
        return qtc.KArchive_WriteDir4(@ptrCast(self), name_str, user_str, group_str, perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    pub fn WriteDir5(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteDir5(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn WriteDir6(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteDir6(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn WriteDir7(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteDir7(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteSymLink3(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8) bool {
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
        return qtc.KArchive_WriteSymLink3(@ptrCast(self), name_str, target_str, user_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn WriteSymLink4(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8) bool {
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
        return qtc.KArchive_WriteSymLink4(@ptrCast(self), name_str, target_str, user_str, group_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    pub fn WriteSymLink5(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u16) bool {
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
        return qtc.KArchive_WriteSymLink5(@ptrCast(self), name_str, target_str, user_str, group_str, perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    pub fn WriteSymLink6(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteSymLink6(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn WriteSymLink7(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteSymLink7(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` target: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn WriteSymLink8(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteSymLink8(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    pub fn WriteFile3(self: ?*anyopaque, name: []const u8, data: []const u8, perm: u16) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KArchive_WriteFile3(@ptrCast(self), name_str, data_str, perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteFile4(self: ?*anyopaque, name: []const u8, data: []const u8, perm: u16, user: []const u8) bool {
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
        return qtc.KArchive_WriteFile4(@ptrCast(self), name_str, data_str, perm, user_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn WriteFile5(self: ?*anyopaque, name: []const u8, data: []const u8, perm: u16, user: []const u8, group: []const u8) bool {
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
        return qtc.KArchive_WriteFile5(@ptrCast(self), name_str, data_str, perm, user_str, group_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    pub fn WriteFile6(self: ?*anyopaque, name: []const u8, data: []const u8, perm: u16, user: []const u8, group: []const u8, atime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteFile6(@ptrCast(self), name_str, data_str, perm, user_str, group_str, @ptrCast(atime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn WriteFile7(self: ?*anyopaque, name: []const u8, data: []const u8, perm: u16, user: []const u8, group: []const u8, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteFile7(@ptrCast(self), name_str, data_str, perm, user_str, group_str, @ptrCast(atime), @ptrCast(mtime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    /// ` perm: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn WriteFile8(self: ?*anyopaque, name: []const u8, data: []const u8, perm: u16, user: []const u8, group: []const u8, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KArchive_WriteFile8(@ptrCast(self), name_str, data_str, perm, user_str, group_str, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u16 `
    ///
    pub fn PrepareWriting5(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16) bool {
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
        return qtc.KArchive_PrepareWriting5(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    pub fn PrepareWriting6(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque) bool {
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
        return qtc.KArchive_PrepareWriting6(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn PrepareWriting7(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
        return qtc.KArchive_PrepareWriting7(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime), @ptrCast(mtime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` size: i64 `
    ///
    /// ` perm: u16 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn PrepareWriting8(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KArchive_PrepareWriting8(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.KRcc_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.KRcc_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRcc_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.KRcc_Close(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn QBaseClose(self: ?*anyopaque) bool {
        return qtc.KRcc_QBaseClose(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KRcc_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn RootDir(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.KRcc_RootDir(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn QBaseRootDir(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.KRcc_QBaseRootDir(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchiveDirectory `
    ///
    pub fn OnRootDir(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchiveDirectory) void {
        qtc.KRcc_OnRootDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` data: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn DoWriteData(self: ?*anyopaque, data: []const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KRcc_DoWriteData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` data: []const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn QBaseDoWriteData(self: ?*anyopaque, data: []const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KRcc_QBaseDoWriteData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, data: [*:0]const u8, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) bool) void {
        qtc.KRcc_OnDoWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn CreateDevice(self: ?*anyopaque, mode: i32) bool {
        return qtc.KRcc_CreateDevice(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseCreateDevice(self: ?*anyopaque, mode: i32) bool {
        return qtc.KRcc_QBaseCreateDevice(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnCreateDevice(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRcc_OnCreateDevice(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KRcc_SetErrorString(@ptrCast(self), errorStr_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KRcc_QBaseSetErrorString(@ptrCast(self), errorStr_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KRcc_OnSetErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` path: []const u8 `
    ///
    pub fn FindOrCreate(self: ?*anyopaque, path: []const u8) QtC.KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KRcc_FindOrCreate(@ptrCast(self), path_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` path: []const u8 `
    ///
    pub fn QBaseFindOrCreate(self: ?*anyopaque, path: []const u8) QtC.KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KRcc_QBaseFindOrCreate(@ptrCast(self), path_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, path: [*:0]const u8) callconv(.c) QtC.KArchiveDirectory `
    ///
    pub fn OnFindOrCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KArchiveDirectory) void {
        qtc.KRcc_OnFindOrCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.KRcc_SetDevice(@ptrCast(self), @ptrCast(dev));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn QBaseSetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.KRcc_QBaseSetDevice(@ptrCast(self), @ptrCast(dev));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, dev: QtC.QIODevice) callconv(.c) void `
    ///
    pub fn OnSetDevice(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRcc_OnSetDevice(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` rootDir: QtC.KArchiveDirectory `
    ///
    pub fn SetRootDir(self: ?*anyopaque, rootDir: ?*anyopaque) void {
        qtc.KRcc_SetRootDir(@ptrCast(self), @ptrCast(rootDir));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KRcc `
    ///
    /// ` rootDir: QtC.KArchiveDirectory `
    ///
    pub fn QBaseSetRootDir(self: ?*anyopaque, rootDir: ?*anyopaque) void {
        qtc.KRcc_QBaseSetRootDir(@ptrCast(self), @ptrCast(rootDir));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KRcc`
    ///
    /// ` callback: *const fn (self: QtC.KRcc, rootDir: QtC.KArchiveDirectory) callconv(.c) void `
    ///
    pub fn OnSetRootDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRcc_OnSetRootDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krcc.html#dtor.KRcc)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KRcc `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRcc_Delete(@ptrCast(self));
    }
};
