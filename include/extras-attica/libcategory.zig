const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-category.html)
pub const Attica__Category = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-category.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Category,

    pub const _is_Attica__Category = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Category object in C++ memory
    ///
    pub fn new() Attica__Category {
        return .{ .ptr = qtc.Attica__Category_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Category object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Category `
    ///
    pub fn new2(other: anytype) Attica__Category {
        comptime _ = @TypeOf(other)._is_Attica__Category;
        return .{ .ptr = qtc.Attica__Category_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` other: Attica__Category `
    ///
    pub fn operatorAssign(self: Attica__Category, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Category;
        qtc.Attica__Category_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Category, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Category_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Category, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Category.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Category, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Category_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Category, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Category.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    pub fn isValid(self: Attica__Category) bool {
        return qtc.Attica__Category_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisplayName` instead
    ///
    pub const SetDisplayName = setDisplayName;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setDisplayName(self: Attica__Category, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Category_SetDisplayName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: Attica__Category, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Category.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Category `
    ///
    pub fn delete(self: Attica__Category) void {
        qtc.Attica__Category_Delete(@ptrCast(self.ptr));
    }
};
