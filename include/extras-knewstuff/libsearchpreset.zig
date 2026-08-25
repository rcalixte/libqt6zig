const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KNSCore__SearchRequest = @import("libqt6").KNSCore__SearchRequest;
const searchpreset_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html)
pub const KNSCore__SearchPreset = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__SearchPreset,

    pub const _is_KNSCore__SearchPreset = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::SearchPreset object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__SearchPreset `
    ///
    pub fn new(param1: anytype) KNSCore__SearchPreset {
        comptime _ = @TypeOf(param1)._is_KNSCore__SearchPreset;
        return .{ .ptr = qtc.KNSCore__SearchPreset_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchPreset `
    ///
    pub fn request(self: KNSCore__SearchPreset) KNSCore__SearchRequest {
        return .{ .ptr = qtc.KNSCore__SearchPreset_Request(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KNSCore__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchPreset_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__SearchPreset.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KNSCore__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchPreset_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__SearchPreset.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchPreset `
    ///
    /// ## Returns:
    ///
    /// ` searchpreset_enums.Type `
    ///
    pub fn type0(self: KNSCore__SearchPreset) i32 {
        return qtc.KNSCore__SearchPreset_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `providerId` instead
    ///
    pub const ProviderId = providerId;

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#providerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providerId(self: KNSCore__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchPreset_ProviderId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__SearchPreset.providerId: Memory allocation failed");
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
    /// ` self: KNSCore__SearchPreset `
    ///
    pub fn delete(self: KNSCore__SearchPreset) void {
        qtc.KNSCore__SearchPreset_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const NoPresetType: i32 = 0;
        pub const GoBack: i32 = 1;
        pub const Root: i32 = 2;
        pub const Start: i32 = 3;
        pub const Popular: i32 = 4;
        pub const Featured: i32 = 5;
        pub const Recommended: i32 = 6;
        pub const Shelf: i32 = 7;
        pub const Subscription: i32 = 8;
        pub const New: i32 = 9;
        pub const FolderUp: i32 = 10;
        pub const AllEntries: i32 = 11;
    };
};
