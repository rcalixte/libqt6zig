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

    /// New constructs a new QPlaceUser object.
    ///
    pub fn New() QPlaceUser {
        return .{ .ptr = qtc.QPlaceUser_new() };
    }

    /// New2 constructs a new QPlaceUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceUser `
    ///
    pub fn New2(other: anytype) QPlaceUser {
        comptime _ = @TypeOf(other)._is_QPlaceUser;
        return .{ .ptr = qtc.QPlaceUser_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` other: QPlaceUser `
    ///
    pub fn OperatorAssign(self: QPlaceUser, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceUser;
        qtc.QPlaceUser_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` other: QPlaceUser `
    ///
    pub fn Swap(self: QPlaceUser, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceUser;
        qtc.QPlaceUser_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#userId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserId(self: QPlaceUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceUser_UserId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceuser.UserId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setUserId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetUserId(self: QPlaceUser, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceUser_SetUserId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QPlaceUser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceUser_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceuser.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceUser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QPlaceUser, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QPlaceUser_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#dtor.QPlaceUser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceUser `
    ///
    pub fn Delete(self: QPlaceUser) void {
        qtc.QPlaceUser_Delete(@ptrCast(self.ptr));
    }
};
