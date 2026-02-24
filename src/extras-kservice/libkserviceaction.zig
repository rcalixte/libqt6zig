const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kserviceaction.html)
pub const kserviceaction = struct {
    /// New constructs a new KServiceAction object.
    ///
    pub fn New() QtC.KServiceAction {
        return qtc.KServiceAction_new();
    }

    /// New2 constructs a new KServiceAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KServiceAction `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KServiceAction {
        return qtc.KServiceAction_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    /// ` other: QtC.KServiceAction `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KServiceAction_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    /// ` userData: QtC.QVariant `
    ///
    pub fn SetData(self: ?*anyopaque, userData: ?*anyopaque) void {
        qtc.KServiceAction_SetData(@ptrCast(self), @ptrCast(userData));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    pub fn Data(self: ?*anyopaque) QtC.QVariant {
        return qtc.KServiceAction_Data(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Exec(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Exec(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    pub fn NoDisplay(self: ?*anyopaque) bool {
        return qtc.KServiceAction_NoDisplay(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceAction `
    ///
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KServiceAction_IsSeparator(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#dtor.KServiceAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KServiceAction `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KServiceAction_Delete(@ptrCast(self));
    }
};
