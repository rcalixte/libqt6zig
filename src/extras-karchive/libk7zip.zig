const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/k7zip.html)
pub const k7zip = struct {
    /// New constructs a new K7Zip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn New(filename: []const u8) QtC.K7Zip {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };

        return qtc.K7Zip_new(filename_str);
    }

    /// New2 constructs a new K7Zip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn New2(dev: ?*anyopaque) QtC.K7Zip {
        return qtc.K7Zip_new2(@ptrCast(dev));
    }

    /// New3 constructs a new K7Zip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.K7Zip `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.K7Zip {
        return qtc.K7Zip_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("k7zip.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.K7Zip_SetPassword(@ptrCast(self), password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#passwordNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    pub fn PasswordNeeded(self: ?*anyopaque) bool {
        return qtc.K7Zip_PasswordNeeded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn DoWriteSymLink(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.K7Zip_DoWriteSymLink(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteSymLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, name: [*:0]const u8, target: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteSymLink(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.K7Zip_OnDoWriteSymLink(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoWriteSymLink` instead
    ///
    pub const QBaseDoWriteSymLink = SuperDoWriteSymLink;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteSymLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn SuperDoWriteSymLink(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.K7Zip_SuperDoWriteSymLink(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn DoWriteDir(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.K7Zip_DoWriteDir(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u32, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, u32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.K7Zip_OnDoWriteDir(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoWriteDir` instead
    ///
    pub const QBaseDoWriteDir = SuperDoWriteDir;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn SuperDoWriteDir(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.K7Zip_SuperDoWriteDir(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doPrepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn DoPrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.K7Zip_DoPrepareWriting(@ptrCast(self), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doPrepareWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, size: i64, perm: u32, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoPrepareWriting(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, i64, u32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.K7Zip_OnDoPrepareWriting(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoPrepareWriting` instead
    ///
    pub const QBaseDoPrepareWriting = SuperDoPrepareWriting;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doPrepareWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn SuperDoPrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.K7Zip_SuperDoPrepareWriting(@ptrCast(self), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doFinishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` size: i64 `
    ///
    pub fn DoFinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.K7Zip_DoFinishWriting(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doFinishWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoFinishWriting(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.K7Zip_OnDoFinishWriting(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoFinishWriting` instead
    ///
    pub const QBaseDoFinishWriting = SuperDoFinishWriting;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doFinishWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperDoFinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.K7Zip_SuperDoFinishWriting(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn DoWriteData(self: ?*anyopaque, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.K7Zip_DoWriteData(@ptrCast(self), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, data: [*:0]const u8, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) bool) void {
        qtc.K7Zip_OnDoWriteData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoWriteData` instead
    ///
    pub const QBaseDoWriteData = SuperDoWriteData;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#doWriteData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperDoWriteData(self: ?*anyopaque, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.K7Zip_SuperDoWriteData(@ptrCast(self), data_Cstring, @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#openArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenArchive(self: ?*anyopaque, mode: i32) bool {
        return qtc.K7Zip_OpenArchive(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#openArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpenArchive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.K7Zip_OnOpenArchive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenArchive` instead
    ///
    pub const QBaseOpenArchive = SuperOpenArchive;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#openArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpenArchive(self: ?*anyopaque, mode: i32) bool {
        return qtc.K7Zip_SuperOpenArchive(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#closeArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    pub fn CloseArchive(self: ?*anyopaque) bool {
        return qtc.K7Zip_CloseArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#closeArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCloseArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.K7Zip_OnCloseArchive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseArchive` instead
    ///
    pub const QBaseCloseArchive = SuperCloseArchive;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#closeArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    pub fn SuperCloseArchive(self: ?*anyopaque) bool {
        return qtc.K7Zip_SuperCloseArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.K7Zip_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.K7Zip_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.K7Zip_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("k7zip.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("k7zip.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("k7zip.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("k7zip.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteFile(self: ?*anyopaque, name: []const u8, data: []u8) bool {
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
    /// ` self: QtC.K7Zip `
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
        return qtc.KArchive_PrepareWriting(@ptrCast(self), name_str, user_str, group_str, @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KArchive_WriteData(@ptrCast(self), data_Cstring, @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteData2(self: ?*anyopaque, data: []u8) bool {
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` size: i64 `
    ///
    pub fn FinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.KArchive_FinishWriting(@ptrCast(self), @bitCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn WriteDir4(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    pub fn WriteDir5(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn WriteDir6(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn WriteDir7(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    /// ` self: QtC.K7Zip `
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
    pub fn WriteSymLink5(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    pub fn WriteSymLink6(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn WriteSymLink7(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn WriteSymLink8(self: ?*anyopaque, name: []const u8, target: []const u8, user: []const u8, group: []const u8, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    pub fn WriteFile3(self: ?*anyopaque, name: []const u8, data: []u8, perm: u32) bool {
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` name: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` perm: u32 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn WriteFile4(self: ?*anyopaque, name: []const u8, data: []u8, perm: u32, user: []const u8) bool {
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
    /// ` self: QtC.K7Zip `
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
    pub fn WriteFile5(self: ?*anyopaque, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    pub fn WriteFile6(self: ?*anyopaque, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn WriteFile7(self: ?*anyopaque, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn WriteFile8(self: ?*anyopaque, name: []const u8, data: []u8, perm: u32, user: []const u8, group: []const u8, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
    /// ` self: QtC.K7Zip `
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
    pub fn PrepareWriting5(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32) bool {
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
        return qtc.KArchive_PrepareWriting5(@ptrCast(self), name_str, user_str, group_str, @bitCast(size), perm);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    pub fn PrepareWriting6(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: ?*anyopaque) bool {
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
        return qtc.KArchive_PrepareWriting6(@ptrCast(self), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn PrepareWriting7(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque) bool {
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
        return qtc.KArchive_PrepareWriting7(@ptrCast(self), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime), @ptrCast(mtime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
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
    /// ` atime: QtC.QDateTime `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    /// ` ctime: QtC.QDateTime `
    ///
    pub fn PrepareWriting8(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u32, atime: ?*anyopaque, mtime: ?*anyopaque, ctime: ?*anyopaque) bool {
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
        return qtc.KArchive_PrepareWriting8(@ptrCast(self), name_str, user_str, group_str, @bitCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.K7Zip_Open(@ptrCast(self), @bitCast(mode));
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.K7Zip_SuperOpen(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.K7Zip_OnOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.K7Zip_Close(@ptrCast(self));
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
    /// ` self: QtC.K7Zip `
    ///
    pub fn SuperClose(self: ?*anyopaque) bool {
        return qtc.K7Zip_SuperClose(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.K7Zip_OnClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    pub fn RootDir(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.K7Zip_RootDir(@ptrCast(self));
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
    /// ` self: QtC.K7Zip `
    ///
    pub fn SuperRootDir(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.K7Zip_SuperRootDir(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchiveDirectory `
    ///
    pub fn OnRootDir(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchiveDirectory) void {
        qtc.K7Zip_OnRootDir(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn CreateDevice(self: ?*anyopaque, mode: i32) bool {
        return qtc.K7Zip_CreateDevice(@ptrCast(self), @bitCast(mode));
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperCreateDevice(self: ?*anyopaque, mode: i32) bool {
        return qtc.K7Zip_SuperCreateDevice(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnCreateDevice(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.K7Zip_OnCreateDevice(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.K7Zip_SetErrorString(@ptrCast(self), errorStr_str);
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn SuperSetErrorString(self: ?*anyopaque, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.K7Zip_SuperSetErrorString(@ptrCast(self), errorStr_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.K7Zip_OnSetErrorString(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` path: []const u8 `
    ///
    pub fn FindOrCreate(self: ?*anyopaque, path: []const u8) QtC.KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.K7Zip_FindOrCreate(@ptrCast(self), path_str);
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SuperFindOrCreate(self: ?*anyopaque, path: []const u8) QtC.KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.K7Zip_SuperFindOrCreate(@ptrCast(self), path_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, path: [*:0]const u8) callconv(.c) QtC.KArchiveDirectory `
    ///
    pub fn OnFindOrCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KArchiveDirectory) void {
        qtc.K7Zip_OnFindOrCreate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.K7Zip_SetDevice(@ptrCast(self), @ptrCast(dev));
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn SuperSetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.K7Zip_SuperSetDevice(@ptrCast(self), @ptrCast(dev));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, dev: QtC.QIODevice) callconv(.c) void `
    ///
    pub fn OnSetDevice(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.K7Zip_OnSetDevice(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.K7Zip `
    ///
    /// ` rootDir: QtC.KArchiveDirectory `
    ///
    pub fn SetRootDir(self: ?*anyopaque, rootDir: ?*anyopaque) void {
        qtc.K7Zip_SetRootDir(@ptrCast(self), @ptrCast(rootDir));
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
    /// ` self: QtC.K7Zip `
    ///
    /// ` rootDir: QtC.KArchiveDirectory `
    ///
    pub fn SuperSetRootDir(self: ?*anyopaque, rootDir: ?*anyopaque) void {
        qtc.K7Zip_SuperSetRootDir(@ptrCast(self), @ptrCast(rootDir));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.K7Zip`
    ///
    /// ` callback: *const fn (self: QtC.K7Zip, rootDir: QtC.KArchiveDirectory) callconv(.c) void `
    ///
    pub fn OnSetRootDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.K7Zip_OnSetRootDir(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/k7zip.html#dtor.K7Zip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.K7Zip `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.K7Zip_Delete(@ptrCast(self));
    }
};
