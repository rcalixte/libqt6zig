const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-license.html)
pub const Attica__License = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-license.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__License,

    pub const _is_Attica__License = {};

    /// New constructs a new Attica::License object.
    ///
    pub fn New() Attica__License {
        return .{ .ptr = qtc.Attica__License_new() };
    }

    /// New2 constructs a new Attica::License object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__License `
    ///
    pub fn New2(other: anytype) Attica__License {
        comptime _ = @TypeOf(other)._is_Attica__License;
        return .{ .ptr = qtc.Attica__License_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` other: Attica__License `
    ///
    pub fn OperatorAssign(self: Attica__License, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__License;
        qtc.Attica__License_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    pub fn Id(self: Attica__License) u32 {
        return qtc.Attica__License_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` id: u32 `
    ///
    pub fn SetId(self: Attica__License, id: u32) void {
        qtc.Attica__License_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__License, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__License_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__license.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__License, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__License_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    pub fn Url(self: Attica__License) QUrl {
        return .{ .ptr = qtc.Attica__License_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: Attica__License, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__License_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__License `
    ///
    pub fn Delete(self: Attica__License) void {
        qtc.Attica__License_Delete(@ptrCast(self.ptr));
    }
};
