const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kserviceaction.html)
pub const KServiceAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KServiceAction,

    pub const _is_KServiceAction = {};

    /// New constructs a new KServiceAction object.
    ///
    pub fn New() KServiceAction {
        return .{ .ptr = qtc.KServiceAction_new() };
    }

    /// New2 constructs a new KServiceAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceAction `
    ///
    pub fn New2(other: anytype) KServiceAction {
        comptime _ = @TypeOf(other)._is_KServiceAction;
        return .{ .ptr = qtc.KServiceAction_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` other: KServiceAction `
    ///
    pub fn OperatorAssign(self: KServiceAction, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KServiceAction;
        qtc.KServiceAction_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` userData: QVariant `
    ///
    pub fn SetData(self: KServiceAction, userData: anytype) void {
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.KServiceAction_SetData(@ptrCast(self.ptr), @ptrCast(userData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    pub fn Data(self: KServiceAction) QVariant {
        return .{ .ptr = qtc.KServiceAction_Data(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Exec(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Exec(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kserviceaction.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    pub fn NoDisplay(self: KServiceAction) bool {
        return qtc.KServiceAction_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    pub fn IsSeparator(self: KServiceAction) bool {
        return qtc.KServiceAction_IsSeparator(@ptrCast(self.ptr));
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
    /// ` self: KServiceAction `
    ///
    pub fn Delete(self: KServiceAction) void {
        qtc.KServiceAction_Delete(@ptrCast(self.ptr));
    }
};
