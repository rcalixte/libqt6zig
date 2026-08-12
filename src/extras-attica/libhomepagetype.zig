const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html)
pub const Attica__HomePageType = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__HomePageType,

    pub const _is_Attica__HomePageType = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::HomePageType object in C++ memory
    ///
    pub fn new() Attica__HomePageType {
        return .{ .ptr = qtc.Attica__HomePageType_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::HomePageType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__HomePageType `
    ///
    pub fn new2(other: anytype) Attica__HomePageType {
        comptime _ = @TypeOf(other)._is_Attica__HomePageType;
        return .{ .ptr = qtc.Attica__HomePageType_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` other: Attica__HomePageType `
    ///
    pub fn operatorAssign(self: Attica__HomePageType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__HomePageType;
        qtc.Attica__HomePageType_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    pub fn id(self: Attica__HomePageType) u32 {
        return qtc.Attica__HomePageType_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` _id: u32 `
    ///
    pub fn setId(self: Attica__HomePageType, _id: u32) void {
        qtc.Attica__HomePageType_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__HomePageType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__HomePageType_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__HomePageType.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__HomePageType, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__HomePageType_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__HomePageType `
    ///
    pub fn delete(self: Attica__HomePageType) void {
        qtc.Attica__HomePageType_Delete(@ptrCast(self.ptr));
    }
};
