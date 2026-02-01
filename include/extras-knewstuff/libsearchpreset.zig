const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const searchpreset_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html)
pub const knscore__searchpreset = struct {
    /// New constructs a new KNSCore::SearchPreset object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KNSCore__SearchPreset `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KNSCore__SearchPreset {
        return qtc.KNSCore__SearchPreset_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__SearchPreset `
    ///
    pub fn Request(self: ?*anyopaque) QtC.KNSCore__SearchRequest {
        return qtc.KNSCore__SearchPreset_Request(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchPreset_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__searchpreset.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchPreset_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__searchpreset.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__SearchPreset `
    ///
    /// ## Returns:
    ///
    /// ` searchpreset_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.KNSCore__SearchPreset_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#providerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__SearchPreset_ProviderId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__searchpreset.ProviderId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KNSCore__SearchPreset `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__SearchPreset_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-searchpreset.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
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
