const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-distribution.html
pub const attica__distribution = struct {
    /// New constructs a new Attica::Distribution object.
    ///
    ///
    pub fn New() QtC.Attica__Distribution {
        return qtc.Attica__Distribution_new();
    }

    /// New2 constructs a new Attica::Distribution object.
    ///
    /// ``` other: QtC.Attica__Distribution ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Distribution {
        return qtc.Attica__Distribution_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-distribution.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Distribution, other: QtC.Attica__Distribution ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Distribution_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-distribution.html#id)
    ///
    /// ``` self: QtC.Attica__Distribution ```
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.Attica__Distribution_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-distribution.html#setId)
    ///
    /// ``` self: QtC.Attica__Distribution, id: u32 ```
    pub fn SetId(self: ?*anyopaque, id: u32) void {
        qtc.Attica__Distribution_SetId(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://api.kde.org/attica-distribution.html#name)
    ///
    /// ``` self: QtC.Attica__Distribution, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Distribution_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::distribution.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-distribution.html#setName)
    ///
    /// ``` self: QtC.Attica__Distribution, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Distribution_SetName(@ptrCast(self), name_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Distribution ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Distribution_Delete(@ptrCast(self));
    }
};
