const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-folder.html)
pub const Attica__Folder = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-folder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Folder,

    pub const _is_Attica__Folder = {};

    /// New constructs a new Attica::Folder object.
    ///
    pub fn New() Attica__Folder {
        return .{ .ptr = qtc.Attica__Folder_new() };
    }

    /// New2 constructs a new Attica::Folder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Folder `
    ///
    pub fn New2(other: anytype) Attica__Folder {
        comptime _ = @TypeOf(other)._is_Attica__Folder;
        return .{ .ptr = qtc.Attica__Folder_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` other: Attica__Folder `
    ///
    pub fn OperatorAssign(self: Attica__Folder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Folder;
        qtc.Attica__Folder_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Folder, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Folder_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Folder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Folder_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__folder.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Folder, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Folder_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Folder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Folder_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__folder.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setMessageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` messageCount: i32 `
    ///
    pub fn SetMessageCount(self: Attica__Folder, messageCount: i32) void {
        qtc.Attica__Folder_SetMessageCount(@ptrCast(self.ptr), @bitCast(messageCount));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#messageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    pub fn MessageCount(self: Attica__Folder) i32 {
        return qtc.Attica__Folder_MessageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn SetType(self: Attica__Folder, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__Folder_SetType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: Attica__Folder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Folder_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__folder.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    pub fn IsValid(self: Attica__Folder) bool {
        return qtc.Attica__Folder_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Folder `
    ///
    pub fn Delete(self: Attica__Folder) void {
        qtc.Attica__Folder_Delete(@ptrCast(self.ptr));
    }
};
