const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html)
pub const qplaceuser = struct {
    /// New constructs a new QPlaceUser object.
    ///
    pub fn New() QtC.QPlaceUser {
        return qtc.QPlaceUser_new();
    }

    /// New2 constructs a new QPlaceUser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceUser `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceUser {
        return qtc.QPlaceUser_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    /// ` other: QtC.QPlaceUser `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceUser_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    /// ` other: QtC.QPlaceUser `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceUser_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#userId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceUser_UserId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceuser.UserId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setUserId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetUserId(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceUser_SetUserId(@ptrCast(self), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceUser_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaceuser.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QPlaceUser_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#dtor.QPlaceUser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceUser `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceUser_Delete(@ptrCast(self));
    }
};
