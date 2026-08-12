const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html)
pub const Attica__HomePageEntry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__HomePageEntry,

    pub const _is_Attica__HomePageEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::HomePageEntry object in C++ memory
    ///
    pub fn new() Attica__HomePageEntry {
        return .{ .ptr = qtc.Attica__HomePageEntry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::HomePageEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__HomePageEntry `
    ///
    pub fn new2(other: anytype) Attica__HomePageEntry {
        comptime _ = @TypeOf(other)._is_Attica__HomePageEntry;
        return .{ .ptr = qtc.Attica__HomePageEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` other: Attica__HomePageEntry `
    ///
    pub fn operatorAssign(self: Attica__HomePageEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__HomePageEntry;
        qtc.Attica__HomePageEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn type0(self: Attica__HomePageEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__HomePageEntry_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__HomePageEntry.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn setType(self: Attica__HomePageEntry, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__HomePageEntry_SetType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    pub fn url(self: Attica__HomePageEntry) QUrl {
        return .{ .ptr = qtc.Attica__HomePageEntry_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: Attica__HomePageEntry, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.Attica__HomePageEntry_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    pub fn delete(self: Attica__HomePageEntry) void {
        qtc.Attica__HomePageEntry_Delete(@ptrCast(self.ptr));
    }
};
