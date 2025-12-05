const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-folder.html)
pub const attica__folder = struct {
    /// New constructs a new Attica::Folder object.
    ///
    pub fn New() QtC.Attica__Folder {
        return qtc.Attica__Folder_new();
    }

    /// New2 constructs a new Attica::Folder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Folder `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Folder {
        return qtc.Attica__Folder_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` other: QtC.Attica__Folder `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Folder_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Folder_SetId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Folder_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::folder.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Folder_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Folder_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::folder.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setMessageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` messageCount: i32 `
    ///
    pub fn SetMessageCount(self: ?*anyopaque, messageCount: i32) void {
        qtc.Attica__Folder_SetMessageCount(@ptrCast(self), @intCast(messageCount));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#messageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    pub fn MessageCount(self: ?*anyopaque) i32 {
        return qtc.Attica__Folder_MessageCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn SetType(self: ?*anyopaque, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__Folder_SetType(@ptrCast(self), typeVal_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Folder_Type(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::folder.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Folder_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Folder `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Folder_Delete(@ptrCast(self));
    }
};
