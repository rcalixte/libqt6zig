const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-category.html)
pub const attica__category = struct {
    /// New constructs a new Attica::Category object.
    ///
    pub fn New() QtC.Attica__Category {
        return qtc.Attica__Category_new();
    }

    /// New2 constructs a new Attica::Category object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Category `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Category {
        return qtc.Attica__Category_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` other: QtC.Attica__Category `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Category_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Category_SetId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__category.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Category_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__category.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Category_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#setDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetDisplayName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Category_SetDisplayName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-category.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Category `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Category_DisplayName(@ptrCast(self));
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
    /// ` self: QtC.Attica__Category `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Attica__Category_Delete(@ptrCast(self));
    }
};
