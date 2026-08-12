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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KDesktopFileAction object in C++ memory
    ///
    pub fn new() KDesktopFileAction {
        return .{ .ptr = qtc.KDesktopFileAction_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KDesktopFileAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` _icon: []const u8 `
    ///
    /// ` _exec: []const u8 `
    ///
    /// ` _desktopFilePath: []const u8 `
    ///
    pub fn new2(_name: []const u8, text: []const u8, _icon: []const u8, _exec: []const u8, _desktopFilePath: []const u8) KDesktopFileAction {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        const exec_str = qtc.libqt_string{
            .len = _exec.len,
            .data = _exec.ptr,
        };
        const desktopFilePath_str = qtc.libqt_string{
            .len = _desktopFilePath.len,
            .data = _desktopFilePath.ptr,
        };
        return .{ .ptr = qtc.KDesktopFileAction_new2(name_str, text_str, icon_str, exec_str, desktopFilePath_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KDesktopFileAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KDesktopFileAction `
    ///
    pub fn new3(other: anytype) KDesktopFileAction {
        comptime _ = @TypeOf(other)._is_KDesktopFileAction;
        return .{ .ptr = qtc.KDesktopFileAction_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` other: KDesktopFileAction `
    ///
    pub fn operatorAssign(self: KDesktopFileAction, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KDesktopFileAction;
        qtc.KDesktopFileAction_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `actionsKey` instead
    ///
    pub const ActionsKey = actionsKey;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#actionsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionsKey(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_ActionsKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFileAction.actionsKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `desktopFilePath` instead
    ///
    pub const DesktopFilePath = desktopFilePath;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#desktopFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopFilePath(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_DesktopFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFileAction.desktopFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFileAction.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFileAction.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn exec(self: KDesktopFileAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDesktopFileAction_Exec(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDesktopFileAction.exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDesktopFileAction `
    ///
    pub fn isSeparator(self: KDesktopFileAction) bool {
        return qtc.KDesktopFileAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kdesktopfileaction.html#dtor.KDesktopFileAction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KDesktopFileAction `
    ///
    pub fn delete(self: KDesktopFileAction) void {
        qtc.KDesktopFileAction_Delete(@ptrCast(self.ptr));
    }
};
