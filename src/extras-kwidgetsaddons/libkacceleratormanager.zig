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

    /// New constructs a new KAcceleratorManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn New(other: anytype) KAcceleratorManager {
        comptime _ = @TypeOf(other)._is_KAcceleratorManager;
        return .{ .ptr = qtc.KAcceleratorManager_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KAcceleratorManager object and invalidates the source KAcceleratorManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn New2(other: anytype) KAcceleratorManager {
        comptime _ = @TypeOf(other)._is_KAcceleratorManager;
        return .{ .ptr = qtc.KAcceleratorManager_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KAcceleratorManager `
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn CopyAssign(self: KAcceleratorManager, other: KAcceleratorManager) void {
        qtc.KAcceleratorManager_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KAcceleratorManager `
    ///
    /// ` other: KAcceleratorManager `
    ///
    pub fn MoveAssign(self: KAcceleratorManager, other: KAcceleratorManager) void {
        qtc.KAcceleratorManager_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#manage)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn Manage(widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KAcceleratorManager_Manage(@ptrCast(widget.ptr));
    }

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
    pub fn LastManage(added: []const u8, changed: []const u8, removed: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#setNoAccel)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetNoAccel(widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KAcceleratorManager_SetNoAccel(@ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#addStandardActionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn AddStandardActionNames(allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("kacceleratormanager.AddStandardActionNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.KAcceleratorManager_AddStandardActionNames(names_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#manage)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    /// ` programmers_mode: bool `
    ///
    pub fn Manage2(widget: anytype, programmers_mode: bool) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KAcceleratorManager_Manage2(@ptrCast(widget.ptr), programmers_mode);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kacceleratormanager.html#dtor.KAcceleratorManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KAcceleratorManager `
    ///
    pub fn Delete(self: KAcceleratorManager) void {
        qtc.KAcceleratorManager_Delete(@ptrCast(self.ptr));
    }
};
