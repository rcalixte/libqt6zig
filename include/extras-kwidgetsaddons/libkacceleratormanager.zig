const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kacceleratormanager.html
pub const kacceleratormanager = struct {
    /// New constructs a new KAcceleratorManager object.
    ///
    /// ``` other: QtC.KAcceleratorManager ```
    pub fn New(other: ?*anyopaque) QtC.KAcceleratorManager {
        return qtc.KAcceleratorManager_new(@ptrCast(other));
    }

    /// New2 constructs a new KAcceleratorManager object and invalidates the source KAcceleratorManager object.
    ///
    /// ``` other: QtC.KAcceleratorManager ```
    pub fn New2(other: ?*anyopaque) QtC.KAcceleratorManager {
        return qtc.KAcceleratorManager_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KAcceleratorManager, other: QtC.KAcceleratorManager ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KAcceleratorManager_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KAcceleratorManager, other: QtC.KAcceleratorManager ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KAcceleratorManager_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kacceleratormanager.html#manage)
    ///
    /// ``` widget: QtC.QWidget ```
    pub fn Manage(widget: ?*anyopaque) void {
        qtc.KAcceleratorManager_Manage(@ptrCast(widget));
    }

    /// [Qt documentation](https://api.kde.org/kacceleratormanager.html#last_manage)
    ///
    /// ``` added: []const u8, changed: []const u8, removed: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/kacceleratormanager.html#setNoAccel)
    ///
    /// ``` widget: QtC.QWidget ```
    pub fn SetNoAccel(widget: ?*anyopaque) void {
        qtc.KAcceleratorManager_SetNoAccel(@ptrCast(widget));
    }

    /// [Qt documentation](https://api.kde.org/kacceleratormanager.html#addStandardActionNames)
    ///
    /// ``` names: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddStandardActionNames(names: [][]const u8, allocator: std.mem.Allocator) void {
        var names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("kacceleratormanager.AddStandardActionNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.KAcceleratorManager_AddStandardActionNames(names_list);
    }

    /// [Qt documentation](https://api.kde.org/kacceleratormanager.html#manage)
    ///
    /// ``` widget: QtC.QWidget, programmers_mode: bool ```
    pub fn Manage2(widget: ?*anyopaque, programmers_mode: bool) void {
        qtc.KAcceleratorManager_Manage2(@ptrCast(widget), programmers_mode);
    }

    /// [Qt documentation](https://api.kde.org/kacceleratormanager.html#dtor.KAcceleratorManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KAcceleratorManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KAcceleratorManager_Delete(@ptrCast(self));
    }
};
