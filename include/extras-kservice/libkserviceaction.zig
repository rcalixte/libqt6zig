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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KServiceAction object in C++ memory
    ///
    pub fn new() KServiceAction {
        return .{ .ptr = qtc.KServiceAction_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KServiceAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceAction `
    ///
    pub fn new2(other: anytype) KServiceAction {
        comptime _ = @TypeOf(other)._is_KServiceAction;
        return .{ .ptr = qtc.KServiceAction_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` other: KServiceAction `
    ///
    pub fn operatorAssign(self: KServiceAction, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KServiceAction;
        qtc.KServiceAction_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` userData: QVariant `
    ///
    pub fn setData(self: KServiceAction, userData: anytype) void {
        comptime _ = @TypeOf(userData)._is_QVariant;
        qtc.KServiceAction_SetData(@ptrCast(self.ptr), @ptrCast(userData.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    pub fn data(self: KServiceAction) QVariant {
        return .{ .ptr = qtc.KServiceAction_Data(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceAction.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceAction.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceAction.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn exec(self: KServiceAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceAction_Exec(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceAction.exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `noDisplay` instead
    ///
    pub const NoDisplay = noDisplay;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    pub fn noDisplay(self: KServiceAction) bool {
        return qtc.KServiceAction_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceAction `
    ///
    pub fn isSeparator(self: KServiceAction) bool {
        return qtc.KServiceAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kserviceaction.html#dtor.KServiceAction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceAction `
    ///
    pub fn delete(self: KServiceAction) void {
        qtc.KServiceAction_Delete(@ptrCast(self.ptr));
    }
};
