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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::License object in C++ memory
    ///
    pub fn new() Attica__License {
        return .{ .ptr = qtc.Attica__License_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::License object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__License `
    ///
    pub fn new2(other: anytype) Attica__License {
        comptime _ = @TypeOf(other)._is_Attica__License;
        return .{ .ptr = qtc.Attica__License_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` other: Attica__License `
    ///
    pub fn operatorAssign(self: Attica__License, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__License;
        qtc.Attica__License_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    pub fn id(self: Attica__License) u32 {
        return qtc.Attica__License_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` _id: u32 `
    ///
    pub fn setId(self: Attica__License, _id: u32) void {
        qtc.Attica__License_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__License, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__License_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__License.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__License, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__License_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    pub fn url(self: Attica__License) QUrl {
        return .{ .ptr = qtc.Attica__License_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-license.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__License `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: Attica__License, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.Attica__License_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__License `
    ///
    pub fn delete(self: Attica__License) void {
        qtc.Attica__License_Delete(@ptrCast(self.ptr));
    }
};
