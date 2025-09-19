const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-homepageentry.html
pub const attica__homepageentry = struct {
    /// New constructs a new Attica::HomePageEntry object.
    ///
    ///
    pub fn New() QtC.Attica__HomePageEntry {
        return qtc.Attica__HomePageEntry_new();
    }

    /// New2 constructs a new Attica::HomePageEntry object.
    ///
    /// ``` other: QtC.Attica__HomePageEntry ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__HomePageEntry {
        return qtc.Attica__HomePageEntry_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepageentry.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__HomePageEntry, other: QtC.Attica__HomePageEntry ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__HomePageEntry_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepageentry.html#type)
    ///
    /// ``` self: QtC.Attica__HomePageEntry, allocator: std.mem.Allocator ```
    pub fn Type(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__HomePageEntry_Type(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::homepageentry.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-homepageentry.html#setType)
    ///
    /// ``` self: QtC.Attica__HomePageEntry, typeVal: []const u8 ```
    pub fn SetType(self: ?*anyopaque, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__HomePageEntry_SetType(@ptrCast(self), typeVal_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-homepageentry.html#url)
    ///
    /// ``` self: QtC.Attica__HomePageEntry ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__HomePageEntry_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepageentry.html#setUrl)
    ///
    /// ``` self: QtC.Attica__HomePageEntry, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__HomePageEntry_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__HomePageEntry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__HomePageEntry_Delete(@ptrCast(self));
    }
};
