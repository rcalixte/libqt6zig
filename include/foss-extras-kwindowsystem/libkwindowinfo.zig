const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kwindowinfo.html
pub const kwindowinfo = struct {
    /// New constructs a new KWindowInfo object.
    ///
    /// ``` param1: QtC.KWindowInfo ```
    pub fn New(param1: ?*anyopaque) QtC.KWindowInfo {
        return qtc.KWindowInfo_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#valid)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn Valid(self: ?*anyopaque) bool {
        return qtc.KWindowInfo_Valid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#win)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn Win(self: ?*anyopaque) usize {
        return qtc.KWindowInfo_Win(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#isMinimized)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.KWindowInfo_IsMinimized(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#extendedStrut)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn ExtendedStrut(self: ?*anyopaque) QtC.NETExtendedStrut {
        return qtc.KWindowInfo_ExtendedStrut(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleName)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn VisibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWindowInfo_VisibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleNameWithState)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn VisibleNameWithState(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWindowInfo_VisibleNameWithState(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleNameWithState: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#name)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWindowInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleIconName)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn VisibleIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWindowInfo_VisibleIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleIconNameWithState)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn VisibleIconNameWithState(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWindowInfo_VisibleIconNameWithState(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleIconNameWithState: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#iconName)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KWindowInfo_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#isOnCurrentDesktop)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn IsOnCurrentDesktop(self: ?*anyopaque) bool {
        return qtc.KWindowInfo_IsOnCurrentDesktop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#isOnDesktop)
    ///
    /// ``` self: QtC.KWindowInfo, desktop: i32 ```
    pub fn IsOnDesktop(self: ?*anyopaque, desktop: i32) bool {
        return qtc.KWindowInfo_IsOnDesktop(@ptrCast(self), @intCast(desktop));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#onAllDesktops)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn OnAllDesktops(self: ?*anyopaque) bool {
        return qtc.KWindowInfo_OnAllDesktops(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#desktop)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn Desktop(self: ?*anyopaque) i32 {
        return qtc.KWindowInfo_Desktop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#activities)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn Activities(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KWindowInfo_Activities(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kwindowinfo.Activities: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kwindowinfo.Activities: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#geometry)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.KWindowInfo_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#frameGeometry)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.KWindowInfo_FrameGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#transientFor)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn TransientFor(self: ?*anyopaque) usize {
        return qtc.KWindowInfo_TransientFor(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#groupLeader)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn GroupLeader(self: ?*anyopaque) usize {
        return qtc.KWindowInfo_GroupLeader(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#windowClassClass)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn WindowClassClass(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowClassClass(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.WindowClassClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#windowClassName)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn WindowClassName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowClassName(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.WindowClassName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#windowRole)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.WindowRole: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#clientMachine)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn ClientMachine(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_ClientMachine(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.ClientMachine: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#desktopFileName)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn DesktopFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_DesktopFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#gtkApplicationId)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn GtkApplicationId(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_GtkApplicationId(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.GtkApplicationId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#pid)
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn Pid(self: ?*anyopaque) i32 {
        return qtc.KWindowInfo_Pid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#applicationMenuServiceName)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn ApplicationMenuServiceName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_ApplicationMenuServiceName(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.ApplicationMenuServiceName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#applicationMenuObjectPath)
    ///
    /// ``` self: QtC.KWindowInfo, allocator: std.mem.Allocator ```
    pub fn ApplicationMenuObjectPath(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KWindowInfo_ApplicationMenuObjectPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.ApplicationMenuObjectPath: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#operator-eq)
    ///
    /// ``` self: QtC.KWindowInfo, param1: QtC.KWindowInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KWindowInfo_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#valid)
    ///
    /// ``` self: QtC.KWindowInfo, withdrawn_is_valid: bool ```
    pub fn Valid1(self: ?*anyopaque, withdrawn_is_valid: bool) bool {
        return qtc.KWindowInfo_Valid1(@ptrCast(self), withdrawn_is_valid);
    }

    /// [Qt documentation](https://api.kde.org/kwindowinfo.html#dtor.KWindowInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KWindowInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KWindowInfo_Delete(@ptrCast(self));
    }
};
