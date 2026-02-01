const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kzip_enums = enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kzip.html)
pub const kzip = struct {
    /// New constructs a new KZip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn New(filename: []const u8) QtC.KZip {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };

        return qtc.KZip_new(filename_str);
    }

    /// New2 constructs a new KZip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn New2(dev: ?*anyopaque) QtC.KZip {
        return qtc.KZip_new2(@ptrCast(dev));
    }

    /// New3 constructs a new KZip object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KZip `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.KZip {
        return qtc.KZip_new3(@ptrCast(param1));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzip.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#setExtraField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` ef: kzip_enums.ExtraField `
    ///
    pub fn SetExtraField(self: ?*anyopaque, ef: i32) void {
        qtc.KZip_SetExtraField(@ptrCast(self), @intCast(ef));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#extraField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ## Returns:
    ///
    /// ` kzip_enums.ExtraField `
    ///
    pub fn ExtraField(self: ?*anyopaque) i32 {
        return qtc.KZip_ExtraField(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#setCompression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` c: kzip_enums.Compression `
    ///
    pub fn SetCompression(self: ?*anyopaque, c: i32) void {
        qtc.KZip_SetCompression(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#compression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ## Returns:
    ///
    /// ` kzip_enums.Compression `
    ///
    pub fn Compression(self: ?*anyopaque) i32 {
        return qtc.KZip_Compression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteSymLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
        return qtc.KZip_DoWriteSymLink(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteSymLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, name: [*:0]const u8, target: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u16, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteSymLink(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, u16, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KZip_OnDoWriteSymLink(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteSymLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
        return qtc.KZip_QBaseDoWriteSymLink(@ptrCast(self), name_str, target_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doPrepareWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
    /// ` creationTime: QtC.QDateTime `
    ///
    pub fn DoPrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, creationTime: ?*anyopaque) bool {
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
        return qtc.KZip_DoPrepareWriting(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(creationTime));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doPrepareWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, size: i64, perm: u16, atime: QtC.QDateTime, mtime: QtC.QDateTime, creationTime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoPrepareWriting(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, i64, u16, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KZip_OnDoPrepareWriting(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doPrepareWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
    /// ` creationTime: QtC.QDateTime `
    ///
    pub fn QBaseDoPrepareWriting(self: ?*anyopaque, name: []const u8, user: []const u8, group: []const u8, size: i64, perm: u16, atime: ?*anyopaque, mtime: ?*anyopaque, creationTime: ?*anyopaque) bool {
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
        return qtc.KZip_QBaseDoPrepareWriting(@ptrCast(self), name_str, user_str, group_str, @intCast(size), perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(creationTime));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doFinishWriting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` size: i64 `
    ///
    pub fn DoFinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.KZip_DoFinishWriting(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doFinishWriting)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoFinishWriting(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.KZip_OnDoFinishWriting(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doFinishWriting)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` size: i64 `
    ///
    pub fn QBaseDoFinishWriting(self: ?*anyopaque, size: i64) bool {
        return qtc.KZip_QBaseDoFinishWriting(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn DoWriteData(self: ?*anyopaque, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KZip_DoWriteData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, data: [*:0]const u8, size: i64) callconv(.c) bool `
    ///
    pub fn OnDoWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) bool) void {
        qtc.KZip_OnDoWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn QBaseDoWriteData(self: ?*anyopaque, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KZip_QBaseDoWriteData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#openArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenArchive(self: ?*anyopaque, mode: i32) bool {
        return qtc.KZip_OpenArchive(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#openArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpenArchive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KZip_OnOpenArchive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#openArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseOpenArchive(self: ?*anyopaque, mode: i32) bool {
        return qtc.KZip_QBaseOpenArchive(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#closeArchive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn CloseArchive(self: ?*anyopaque) bool {
        return qtc.KZip_CloseArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#closeArchive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCloseArchive(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KZip_OnCloseArchive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#closeArchive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn QBaseCloseArchive(self: ?*anyopaque) bool {
        return qtc.KZip_QBaseCloseArchive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
        return qtc.KZip_DoWriteDir(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, name: [*:0]const u8, user: [*:0]const u8, group: [*:0]const u8, perm: u16, atime: QtC.QDateTime, mtime: QtC.QDateTime, ctime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnDoWriteDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, u16, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KZip_OnDoWriteDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#doWriteDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
        return qtc.KZip_QBaseDoWriteDir(@ptrCast(self), name_str, user_str, group_str, perm, @ptrCast(atime), @ptrCast(mtime), @ptrCast(ctime));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KZip_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` callback: *const fn (self: QtC.KZip, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KZip_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KZip_QBaseVirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzip.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzip.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzip.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KArchive_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kzip.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#directory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: [:0]const u8, size: i64) bool {
        const data_Cstring = data.ptr;
        return qtc.KArchive_WriteData(@ptrCast(self), data_Cstring, @intCast(size));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
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
    /// ` self: QtC.KZip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.KZip_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.KZip_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn (self: QtC.KZip, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KZip_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.KZip_Close(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn QBaseClose(self: ?*anyopaque) bool {
        return qtc.KZip_QBaseClose(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KZip_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn RootDir(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.KZip_RootDir(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn QBaseRootDir(self: ?*anyopaque) QtC.KArchiveDirectory {
        return qtc.KZip_QBaseRootDir(@ptrCast(self));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#rootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KArchiveDirectory `
    ///
    pub fn OnRootDir(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KArchiveDirectory) void {
        qtc.KZip_OnRootDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn CreateDevice(self: ?*anyopaque, mode: i32) bool {
        return qtc.KZip_CreateDevice(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseCreateDevice(self: ?*anyopaque, mode: i32) bool {
        return qtc.KZip_QBaseCreateDevice(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#createDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn (self: QtC.KZip, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnCreateDevice(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KZip_OnCreateDevice(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KZip_SetErrorString(@ptrCast(self), errorStr_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.KZip_QBaseSetErrorString(@ptrCast(self), errorStr_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn (self: QtC.KZip, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KZip_OnSetErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` path: []const u8 `
    ///
    pub fn FindOrCreate(self: ?*anyopaque, path: []const u8) QtC.KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KZip_FindOrCreate(@ptrCast(self), path_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` path: []const u8 `
    ///
    pub fn QBaseFindOrCreate(self: ?*anyopaque, path: []const u8) QtC.KArchiveDirectory {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KZip_QBaseFindOrCreate(@ptrCast(self), path_str);
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn (self: QtC.KZip, path: [*:0]const u8) callconv(.c) QtC.KArchiveDirectory `
    ///
    pub fn OnFindOrCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.KArchiveDirectory) void {
        qtc.KZip_OnFindOrCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.KZip_SetDevice(@ptrCast(self), @ptrCast(dev));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    pub fn QBaseSetDevice(self: ?*anyopaque, dev: ?*anyopaque) void {
        qtc.KZip_QBaseSetDevice(@ptrCast(self), @ptrCast(dev));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setDevice)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn (self: QtC.KZip, dev: QtC.QIODevice) callconv(.c) void `
    ///
    pub fn OnSetDevice(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KZip_OnSetDevice(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` rootDir: QtC.KArchiveDirectory `
    ///
    pub fn SetRootDir(self: ?*anyopaque, rootDir: ?*anyopaque) void {
        qtc.KZip_SetRootDir(@ptrCast(self), @ptrCast(rootDir));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KZip `
    ///
    /// ` rootDir: QtC.KArchiveDirectory `
    ///
    pub fn QBaseSetRootDir(self: ?*anyopaque, rootDir: ?*anyopaque) void {
        qtc.KZip_QBaseSetRootDir(@ptrCast(self), @ptrCast(rootDir));
    }

    /// Inherited from KArchive
    ///
    /// ### [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KZip`
    ///
    /// ` callback: *const fn (self: QtC.KZip, rootDir: QtC.KArchiveDirectory) callconv(.c) void `
    ///
    pub fn OnSetRootDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KZip_OnSetRootDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kzip.html#dtor.KZip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KZip `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KZip_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kzip.html#public-types)
pub const enums = struct {
    pub const ExtraField = enum(i32) {
        pub const NoExtraField: i32 = 0;
        pub const ModificationTime: i32 = 1;
        pub const DefaultExtraField: i32 = 1;
    };

    pub const Compression = enum(i32) {
        pub const NoCompression: i32 = 0;
        pub const DeflateCompression: i32 = 1;
    };
};
