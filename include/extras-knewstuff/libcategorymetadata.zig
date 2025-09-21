const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/knscore-categorymetadata.html
pub const knscore__categorymetadata = struct {
    /// New constructs a new KNSCore::CategoryMetadata object.
    ///
    /// ``` param1: QtC.KNSCore__CategoryMetadata ```
    pub fn New(param1: ?*anyopaque) QtC.KNSCore__CategoryMetadata {
        return qtc.KNSCore__CategoryMetadata_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/knscore-categorymetadata.html#id)
    ///
    /// ``` self: QtC.KNSCore__CategoryMetadata, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__CategoryMetadata_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::categorymetadata.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-categorymetadata.html#name)
    ///
    /// ``` self: QtC.KNSCore__CategoryMetadata, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__CategoryMetadata_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::categorymetadata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-categorymetadata.html#displayName)
    ///
    /// ``` self: QtC.KNSCore__CategoryMetadata, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__CategoryMetadata_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::categorymetadata.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__CategoryMetadata ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__CategoryMetadata_Delete(@ptrCast(self));
    }
};
