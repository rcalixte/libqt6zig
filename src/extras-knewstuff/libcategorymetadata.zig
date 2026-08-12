const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-categorymetadata.html)
pub const KNSCore__CategoryMetadata = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-categorymetadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__CategoryMetadata,

    pub const _is_KNSCore__CategoryMetadata = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::CategoryMetadata object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__CategoryMetadata `
    ///
    pub fn new(param1: anytype) KNSCore__CategoryMetadata {
        comptime _ = @TypeOf(param1)._is_KNSCore__CategoryMetadata;
        return .{ .ptr = qtc.KNSCore__CategoryMetadata_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/knscore-categorymetadata.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KNSCore__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__CategoryMetadata_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__CategoryMetadata.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-categorymetadata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__CategoryMetadata_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__CategoryMetadata.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/knscore-categorymetadata.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KNSCore__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__CategoryMetadata_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__CategoryMetadata.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__CategoryMetadata `
    ///
    pub fn delete(self: KNSCore__CategoryMetadata) void {
        qtc.KNSCore__CategoryMetadata_Delete(@ptrCast(self.ptr));
    }
};
