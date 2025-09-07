const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kdesktopfileaction.html
pub const kdesktopfileaction = struct {
    /// New constructs a new KDesktopFileAction object.
    ///
    ///
    pub fn New() QtC.KDesktopFileAction {
        return qtc.KDesktopFileAction_new();
    }

    /// New2 constructs a new KDesktopFileAction object.
    ///
    /// ``` name: []const u8, text: []const u8, icon: []const u8, exec: []const u8, desktopFilePath: []const u8 ```
    pub fn New2(name: []const u8, text: []const u8, icon: []const u8, exec: []const u8, desktopFilePath: []const u8) QtC.KDesktopFileAction {
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

        return qtc.KDesktopFileAction_new2(name_str, text_str, icon_str, exec_str, desktopFilePath_str);
    }

    /// New3 constructs a new KDesktopFileAction object.
    ///
    /// ``` other: QtC.KDesktopFileAction ```
    pub fn New3(other: ?*anyopaque) QtC.KDesktopFileAction {
        return qtc.KDesktopFileAction_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#operator-eq)
    ///
    /// ``` self: QtC.KDesktopFileAction, other: QtC.KDesktopFileAction ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KDesktopFileAction_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#actionsKey)
    ///
    /// ``` self: QtC.KDesktopFileAction, allocator: std.mem.Allocator ```
    pub fn ActionsKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFileAction_ActionsKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.ActionsKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#desktopFilePath)
    ///
    /// ``` self: QtC.KDesktopFileAction, allocator: std.mem.Allocator ```
    pub fn DesktopFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFileAction_DesktopFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.DesktopFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#name)
    ///
    /// ``` self: QtC.KDesktopFileAction, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFileAction_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#icon)
    ///
    /// ``` self: QtC.KDesktopFileAction, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFileAction_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#exec)
    ///
    /// ``` self: QtC.KDesktopFileAction, allocator: std.mem.Allocator ```
    pub fn Exec(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KDesktopFileAction_Exec(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdesktopfileaction.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#isSeparator)
    ///
    /// ``` self: QtC.KDesktopFileAction ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KDesktopFileAction_IsSeparator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#dtor.KDesktopFileAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KDesktopFileAction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KDesktopFileAction_Delete(@ptrCast(self));
    }
};
