const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html)
pub const KAcceleratorManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAcceleratorManager,

    pub const _is_KAcceleratorManager = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAcceleratorManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn new(other: anytype) KAcceleratorManager {
        comptime _ = @TypeOf(other)._is_KAcceleratorManager;
        return .{ .ptr = qtc.KAcceleratorManager_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAcceleratorManager object and invalidate the source KAcceleratorManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn new2(other: anytype) KAcceleratorManager {
        comptime _ = @TypeOf(other)._is_KAcceleratorManager;
        return .{ .ptr = qtc.KAcceleratorManager_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KAcceleratorManager `
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn copyAssign(self: KAcceleratorManager, other: KAcceleratorManager) void {
        qtc.KAcceleratorManager_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KAcceleratorManager `
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn moveAssign(self: KAcceleratorManager, other: KAcceleratorManager) void {
        qtc.KAcceleratorManager_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `manage` instead
    ///
    pub const Manage = manage;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#manage)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn manage(widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KAcceleratorManager_Manage(@ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `lastManage` instead
    ///
    pub const LastManage = lastManage;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#last_manage)
    ///
    /// ## Parameter(s):
    ///
    /// ` added: []const u8 `
    ///
    /// ` changed: []const u8 `
    ///
    /// ` removed: []const u8 `
    ///
    pub fn lastManage(added: []const u8, changed: []const u8, removed: []const u8) void {
        const added_str = qtc.libqt_string{
            .len = added.len,
            .data = added.ptr,
        };
        const changed_str = qtc.libqt_string{
            .len = changed.len,
            .data = changed.ptr,
        };
        const removed_str = qtc.libqt_string{
            .len = removed.len,
            .data = removed.ptr,
        };
        qtc.KAcceleratorManager_LastManage(added_str, changed_str, removed_str);
    }

    /// ### DEPRECATED: Use `setNoAccel` instead
    ///
    pub const SetNoAccel = setNoAccel;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#setNoAccel)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn setNoAccel(widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KAcceleratorManager_SetNoAccel(@ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `addStandardActionNames` instead
    ///
    pub const AddStandardActionNames = addStandardActionNames;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#addStandardActionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn addStandardActionNames(allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("KAcceleratorManager.addStandardActionNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.KAcceleratorManager_AddStandardActionNames(names_list);
    }

    /// ### DEPRECATED: Use `manage2` instead
    ///
    pub const Manage2 = manage2;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#manage)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    /// ` programmers_mode: bool `
    ///
    pub fn manage2(widget: anytype, programmers_mode: bool) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KAcceleratorManager_Manage2(@ptrCast(widget.ptr), programmers_mode);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#dtor.KAcceleratorManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAcceleratorManager `
    ///
    pub fn delete(self: KAcceleratorManager) void {
        qtc.KAcceleratorManager_Delete(@ptrCast(self.ptr));
    }
};
