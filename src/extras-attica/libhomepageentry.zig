const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html)
pub const attica__homepageentry = struct {
    /// New constructs a new Attica::HomePageEntry object.
    ///
    pub fn New() QtC.Attica__HomePageEntry {
        return qtc.Attica__HomePageEntry_new();
    }

    /// New2 constructs a new Attica::HomePageEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__HomePageEntry `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__HomePageEntry {
        return qtc.Attica__HomePageEntry_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__HomePageEntry `
    ///
    /// ` other: QtC.Attica__HomePageEntry `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__HomePageEntry_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__HomePageEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__HomePageEntry_Type(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__homepageentry.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__HomePageEntry `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn SetType(self: ?*anyopaque, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__HomePageEntry_SetType(@ptrCast(self), typeVal_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__HomePageEntry `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__HomePageEntry_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepageentry.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__HomePageEntry `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__HomePageEntry_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__HomePageEntry `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Attica__HomePageEntry_Delete(@ptrCast(self));
    }
};
