const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// https://api.kde.org/ksycocaentry.html
pub const ksycocaentry = struct {
    /// New constructs a new KSycocaEntry object.
    ///
    ///
    pub fn New() QtC.KSycocaEntry {
        return qtc.KSycocaEntry_new();
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ``` self: QtC.KSycocaEntry, t: ksycocatype_enums.KSycocaType ```
    pub fn IsType(self: ?*anyopaque, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ``` self: QtC.KSycocaEntry ```
    ///
    /// Returns: ``` ksycocatype_enums.KSycocaType ```
    pub fn SycocaType(self: ?*anyopaque) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ``` self: QtC.KSycocaEntry, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksycocaentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ``` self: QtC.KSycocaEntry, allocator: std.mem.Allocator ```
    pub fn EntryPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksycocaentry.EntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#storageId)
    ///
    /// ``` self: QtC.KSycocaEntry, allocator: std.mem.Allocator ```
    pub fn StorageId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_StorageId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksycocaentry.StorageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ``` self: QtC.KSycocaEntry ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ``` self: QtC.KSycocaEntry ```
    pub fn IsDeleted(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ``` self: QtC.KSycocaEntry, deleted: bool ```
    pub fn SetDeleted(self: ?*anyopaque, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self), deleted);
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ``` self: QtC.KSycocaEntry ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#dtor.KSycocaEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSycocaEntry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSycocaEntry_Delete(@ptrCast(self));
    }
};
