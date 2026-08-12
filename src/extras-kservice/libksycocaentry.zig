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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSycocaEntry object in C++ memory
    ///
    pub fn new() KSycocaEntry {
        return .{ .ptr = qtc.KSycocaEntry_new() };
    }

    /// ### DEPRECATED: Use `isType` instead
    ///
    pub const IsType = isType;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` t: ksycocatype_enums.KSycocaType `
    ///
    pub fn isType(self: KSycocaEntry, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `sycocaType` instead
    ///
    pub const SycocaType = sycocaType;

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
    pub fn sycocaType(self: KSycocaEntry) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KSycocaEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSycocaEntry.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `entryPath` instead
    ///
    pub const EntryPath = entryPath;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entryPath(self: KSycocaEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSycocaEntry.entryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `storageId` instead
    ///
    pub const StorageId = storageId;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#storageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn storageId(self: KSycocaEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_StorageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSycocaEntry.storageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn isValid(self: KSycocaEntry) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDeleted` instead
    ///
    pub const IsDeleted = isDeleted;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn isDeleted(self: KSycocaEntry) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDeleted` instead
    ///
    pub const SetDeleted = setDeleted;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    /// ` deleted: bool `
    ///
    pub fn setDeleted(self: KSycocaEntry, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self.ptr), deleted);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn isSeparator(self: KSycocaEntry) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#dtor.KSycocaEntry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSycocaEntry `
    ///
    pub fn delete(self: KSycocaEntry) void {
        qtc.KSycocaEntry_Delete(@ptrCast(self.ptr));
    }
};
