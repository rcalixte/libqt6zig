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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Distribution object in C++ memory
    ///
    pub fn new() Attica__Distribution {
        return .{ .ptr = qtc.Attica__Distribution_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Distribution object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Distribution `
    ///
    pub fn new2(other: anytype) Attica__Distribution {
        comptime _ = @TypeOf(other)._is_Attica__Distribution;
        return .{ .ptr = qtc.Attica__Distribution_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` other: Attica__Distribution `
    ///
    pub fn operatorAssign(self: Attica__Distribution, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Distribution;
        qtc.Attica__Distribution_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    pub fn id(self: Attica__Distribution) u32 {
        return qtc.Attica__Distribution_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` _id: u32 `
    ///
    pub fn setId(self: Attica__Distribution, _id: u32) void {
        qtc.Attica__Distribution_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Distribution, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Distribution_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Distribution.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-distribution.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Distribution `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Distribution, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Distribution_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Distribution `
    ///
    pub fn delete(self: Attica__Distribution) void {
        qtc.Attica__Distribution_Delete(@ptrCast(self.ptr));
    }
};
