const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksycocaentry.html)
pub const KSycocaEntry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSycocaEntry,

    pub const _is_KSycocaEntry = {};
    pub const _is_QSharedData = {};

    /// New constructs a new KSycocaEntry object.
    ///
    pub fn New() KSycocaEntry {
        return .{ .ptr = qtc.KSycocaEntry_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` t: ksycocatype_enums.KSycocaType `
    ///
    pub fn IsType(self: KSycocaEntry, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ## Returns:
    ///
    /// ` ksycocatype_enums.KSycocaType `
    ///
    pub fn SycocaType(self: KSycocaEntry) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KSycocaEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksycocaentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryPath(self: KSycocaEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksycocaentry.EntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#storageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StorageId(self: KSycocaEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_StorageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksycocaentry.StorageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn IsValid(self: KSycocaEntry) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn IsDeleted(self: KSycocaEntry) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` deleted: bool `
    ///
    pub fn SetDeleted(self: KSycocaEntry, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self.ptr), deleted);
    }

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn IsSeparator(self: KSycocaEntry) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#dtor.KSycocaEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn Delete(self: KSycocaEntry) void {
        qtc.KSycocaEntry_Delete(@ptrCast(self.ptr));
    }
};
