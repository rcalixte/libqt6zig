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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Folder object in C++ memory
    ///
    pub fn new() Attica__Folder {
        return .{ .ptr = qtc.Attica__Folder_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Folder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Folder `
    ///
    pub fn new2(other: anytype) Attica__Folder {
        comptime _ = @TypeOf(other)._is_Attica__Folder;
        return .{ .ptr = qtc.Attica__Folder_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` other: Attica__Folder `
    ///
    pub fn operatorAssign(self: Attica__Folder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Folder;
        qtc.Attica__Folder_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Folder, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Folder_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Folder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Folder_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Folder.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Folder, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Folder_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Folder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Folder_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Folder.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMessageCount` instead
    ///
    pub const SetMessageCount = setMessageCount;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setMessageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` _messageCount: i32 `
    ///
    pub fn setMessageCount(self: Attica__Folder, _messageCount: i32) void {
        qtc.Attica__Folder_SetMessageCount(@ptrCast(self.ptr), @bitCast(_messageCount));
    }

    /// ### DEPRECATED: Use `messageCount` instead
    ///
    pub const MessageCount = messageCount;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#messageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    pub fn messageCount(self: Attica__Folder) i32 {
        return qtc.Attica__Folder_MessageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn setType(self: Attica__Folder, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__Folder_SetType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn type0(self: Attica__Folder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Folder_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Folder.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-folder.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Folder `
    ///
    pub fn isValid(self: Attica__Folder) bool {
        return qtc.Attica__Folder_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Folder `
    ///
    pub fn delete(self: Attica__Folder) void {
        qtc.Attica__Folder_Delete(@ptrCast(self.ptr));
    }
};
