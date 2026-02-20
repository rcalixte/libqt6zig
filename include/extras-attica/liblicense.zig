const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-license.html)
pub const attica__license = struct {
    /// New constructs a new Attica::License object.
    ///
    pub fn New() QtC.Attica__License {
        return qtc.Attica__License_new();
    }

    /// New2 constructs a new Attica::License object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__License `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__License {
        return qtc.Attica__License_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    /// ` other: QtC.Attica__License `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__License_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.Attica__License_Id(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    /// ` id: u32 `
    ///
    pub fn SetId(self: ?*anyopaque, id: u32) void {
        qtc.Attica__License_SetId(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__License_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__license.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__License_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__License_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__License `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__License_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__License `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__License_Delete(@ptrCast(self));
    }
};
