const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html)
pub const QPlaceUser = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceUser,

    pub const _is_QPlaceUser = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceUser object in C++ memory
    ///
    pub fn new() QPlaceUser {
        return .{ .ptr = qtc.QPlaceUser_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceUser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceUser `
    ///
    pub fn new2(other: anytype) QPlaceUser {
        comptime _ = @TypeOf(other)._is_QPlaceUser;
        return .{ .ptr = qtc.QPlaceUser_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` other: QPlaceUser `
    ///
    pub fn operatorAssign(self: QPlaceUser, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceUser;
        qtc.QPlaceUser_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` other: QPlaceUser `
    ///
    pub fn swap(self: QPlaceUser, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceUser;
        qtc.QPlaceUser_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `userId` instead
    ///
    pub const UserId = userId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#userId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userId(self: QPlaceUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceUser_UserId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceUser.userId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserId` instead
    ///
    pub const SetUserId = setUserId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setUserId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn setUserId(self: QPlaceUser, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceUser_SetUserId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QPlaceUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceUser_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceUser.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QPlaceUser, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QPlaceUser_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#dtor.QPlaceUser)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceUser `
    ///
    pub fn delete(self: QPlaceUser) void {
        qtc.QPlaceUser_Delete(@ptrCast(self.ptr));
    }
};
