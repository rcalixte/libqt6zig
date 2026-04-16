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

    /// New constructs a new Attica::HomePageType object.
    ///
    pub fn New() Attica__HomePageType {
        return .{ .ptr = qtc.Attica__HomePageType_new() };
    }

    /// New2 constructs a new Attica::HomePageType object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__HomePageType `
    ///
    pub fn New2(other: anytype) Attica__HomePageType {
        comptime _ = @TypeOf(other)._is_Attica__HomePageType;
        return .{ .ptr = qtc.Attica__HomePageType_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` other: Attica__HomePageType `
    ///
    pub fn OperatorAssign(self: Attica__HomePageType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__HomePageType;
        qtc.Attica__HomePageType_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    pub fn Id(self: Attica__HomePageType) u32 {
        return qtc.Attica__HomePageType_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` id: u32 `
    ///
    pub fn SetId(self: Attica__HomePageType, id: u32) void {
        qtc.Attica__HomePageType_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__HomePageType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__HomePageType_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__homepagetype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-homepagetype.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__HomePageType `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__HomePageType, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__HomePageType_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__HomePageType `
    ///
    pub fn Delete(self: Attica__HomePageType) void {
        qtc.Attica__HomePageType_Delete(@ptrCast(self.ptr));
    }
};
