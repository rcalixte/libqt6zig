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

    /// New constructs a new Attica::HomePageEntry object.
    ///
    pub fn New() Attica__HomePageEntry {
        return .{ .ptr = qtc.Attica__HomePageEntry_new() };
    }

    /// New2 constructs a new Attica::HomePageEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__HomePageEntry `
    ///
    pub fn New2(other: anytype) Attica__HomePageEntry {
        comptime _ = @TypeOf(other)._is_Attica__HomePageEntry;
        return .{ .ptr = qtc.Attica__HomePageEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` other: Attica__HomePageEntry `
    ///
    pub fn OperatorAssign(self: Attica__HomePageEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__HomePageEntry;
        qtc.Attica__HomePageEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: Attica__HomePageEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__HomePageEntry_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__homepageentry.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn SetType(self: Attica__HomePageEntry, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__HomePageEntry_SetType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    pub fn Url(self: Attica__HomePageEntry) QUrl {
        return .{ .ptr = qtc.Attica__HomePageEntry_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: Attica__HomePageEntry, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__HomePageEntry_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__HomePageEntry `
    ///
    pub fn Delete(self: Attica__HomePageEntry) void {
        qtc.Attica__HomePageEntry_Delete(@ptrCast(self.ptr));
    }
};
