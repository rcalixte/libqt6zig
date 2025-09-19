const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-homepagetype.html
pub const attica__homepagetype = struct {
    /// New constructs a new Attica::HomePageType object.
    ///
    ///
    pub fn New() QtC.Attica__HomePageType {
        return qtc.Attica__HomePageType_new();
    }

    /// New2 constructs a new Attica::HomePageType object.
    ///
    /// ``` other: QtC.Attica__HomePageType ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__HomePageType {
        return qtc.Attica__HomePageType_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepagetype.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__HomePageType, other: QtC.Attica__HomePageType ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__HomePageType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepagetype.html#id)
    ///
    /// ``` self: QtC.Attica__HomePageType ```
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.Attica__HomePageType_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepagetype.html#setId)
    ///
    /// ``` self: QtC.Attica__HomePageType, id: u32 ```
    pub fn SetId(self: ?*anyopaque, id: u32) void {
        qtc.Attica__HomePageType_SetId(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://api.kde.org/attica-homepagetype.html#name)
    ///
    /// ``` self: QtC.Attica__HomePageType, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__HomePageType_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::homepagetype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-homepagetype.html#setName)
    ///
    /// ``` self: QtC.Attica__HomePageType, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__HomePageType_SetName(@ptrCast(self), name_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__HomePageType ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__HomePageType_Delete(@ptrCast(self));
    }
};
