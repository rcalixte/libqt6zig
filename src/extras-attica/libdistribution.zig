const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-distribution.html)
pub const Attica__Distribution = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Distribution,

    pub const _is_Attica__Distribution = {};

    /// New constructs a new Attica::Distribution object.
    ///
    pub fn New() Attica__Distribution {
        return .{ .ptr = qtc.Attica__Distribution_new() };
    }

    /// New2 constructs a new Attica::Distribution object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Distribution `
    ///
    pub fn New2(other: anytype) Attica__Distribution {
        comptime _ = @TypeOf(other)._is_Attica__Distribution;
        return .{ .ptr = qtc.Attica__Distribution_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` other: Attica__Distribution `
    ///
    pub fn OperatorAssign(self: Attica__Distribution, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Distribution;
        qtc.Attica__Distribution_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    pub fn Id(self: Attica__Distribution) u32 {
        return qtc.Attica__Distribution_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` id: u32 `
    ///
    pub fn SetId(self: Attica__Distribution, id: u32) void {
        qtc.Attica__Distribution_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Distribution, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Distribution_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__distribution.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Distribution, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Distribution_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Distribution `
    ///
    pub fn Delete(self: Attica__Distribution) void {
        qtc.Attica__Distribution_Delete(@ptrCast(self.ptr));
    }
};
