const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html)
pub const KDesktopFileAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDesktopFileAction,

    pub const _is_KDesktopFileAction = {};

    /// New constructs a new KDesktopFileAction object.
    ///
    pub fn New() KDesktopFileAction {
        return .{ .ptr = qtc.KDesktopFileAction_new() };
    }

    /// New2 constructs a new KDesktopFileAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    /// ` exec: []const u8 `
    ///
    /// ` desktopFilePath: []const u8 `
    ///
    pub fn New2(name: []const u8, text: []const u8, icon: []const u8, exec: []const u8, desktopFilePath: []const u8) KDesktopFileAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        const exec_str = qtc.libqt_string{
            .len = exec.len,
            .data = exec.ptr,
        };
        const desktopFilePath_str = qtc.libqt_string{
            .len = desktopFilePath.len,
            .data = desktopFilePath.ptr,
        };
        return .{ .ptr = qtc.KDesktopFileAction_new2(name_str, text_str, icon_str, exec_str, desktopFilePath_str) };
    }

    /// New3 constructs a new KDesktopFileAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KDesktopFileAction `
    ///
    pub fn New3(other: anytype) KDesktopFileAction {
        comptime _ = @TypeOf(other)._is_KDesktopFileAction;
        return .{ .ptr = qtc.KDesktopFileAction_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` other: KDesktopFileAction `
    ///
    pub fn OperatorAssign(self: KDesktopFileAction, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KDesktopFileAction;
        qtc.KDesktopFileAction_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#actionsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsKey(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_ActionsKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.ActionsKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#desktopFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopFilePath(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_DesktopFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.DesktopFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Exec(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_Exec(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    pub fn IsSeparator(self: KDesktopFileAction) bool {
        return qtc.KDesktopFileAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#dtor.KDesktopFileAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDesktopFileAction `
    ///
    pub fn Delete(self: KDesktopFileAction) void {
        qtc.KDesktopFileAction_Delete(@ptrCast(self.ptr));
    }
};
