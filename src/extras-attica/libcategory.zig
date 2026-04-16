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

    /// New constructs a new Attica::Category object.
    ///
    pub fn New() Attica__Category {
        return .{ .ptr = qtc.Attica__Category_new() };
    }

    /// New2 constructs a new Attica::Category object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Category `
    ///
    pub fn New2(other: anytype) Attica__Category {
        comptime _ = @TypeOf(other)._is_Attica__Category;
        return .{ .ptr = qtc.Attica__Category_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` other: Attica__Category `
    ///
    pub fn OperatorAssign(self: Attica__Category, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Category;
        qtc.Attica__Category_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Category, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Category_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Category, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__category.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Category, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Category_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Category, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__category.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    pub fn IsValid(self: Attica__Category) bool {
        return qtc.Attica__Category_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetDisplayName(self: Attica__Category, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Category_SetDisplayName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: Attica__Category, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__category.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Category `
    ///
    pub fn Delete(self: Attica__Category) void {
        qtc.Attica__Category_Delete(@ptrCast(self.ptr));
    }
};
