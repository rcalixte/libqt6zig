const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const NETExtendedStrut = @import("libqt6").NETExtendedStrut;
const QRect = @import("libqt6").QRect;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kwindowinfo.html)
pub const KWindowInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWindowInfo,

    pub const _is_KWindowInfo = {};

    /// New constructs a new KWindowInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KWindowInfo `
    ///
    pub fn New(param1: anytype) KWindowInfo {
        comptime _ = @TypeOf(param1)._is_KWindowInfo;
        return .{ .ptr = qtc.KWindowInfo_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn Valid(self: KWindowInfo) bool {
        return qtc.KWindowInfo_Valid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#win)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn Win(self: KWindowInfo) usize {
        return qtc.KWindowInfo_Win(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn IsMinimized(self: KWindowInfo) bool {
        return qtc.KWindowInfo_IsMinimized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#extendedStrut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn ExtendedStrut(self: KWindowInfo) NETExtendedStrut {
        return .{ .ptr = qtc.KWindowInfo_ExtendedStrut(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VisibleName(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleNameWithState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VisibleNameWithState(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleNameWithState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleNameWithState: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VisibleIconName(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconNameWithState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VisibleIconNameWithState(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleIconNameWithState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.VisibleIconNameWithState: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwindowinfo.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnCurrentDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn IsOnCurrentDesktop(self: KWindowInfo) bool {
        return qtc.KWindowInfo_IsOnCurrentDesktop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` desktop: i32 `
    ///
    pub fn IsOnDesktop(self: KWindowInfo, desktop: i32) bool {
        return qtc.KWindowInfo_IsOnDesktop(@ptrCast(self.ptr), @bitCast(desktop));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#onAllDesktops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn OnAllDesktops(self: KWindowInfo) bool {
        return qtc.KWindowInfo_OnAllDesktops(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#desktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn Desktop(self: KWindowInfo) i32 {
        return qtc.KWindowInfo_Desktop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#activities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Activities(self: KWindowInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KWindowInfo_Activities(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn Geometry(self: KWindowInfo) QRect {
        return .{ .ptr = qtc.KWindowInfo_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn FrameGeometry(self: KWindowInfo) QRect {
        return .{ .ptr = qtc.KWindowInfo_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#transientFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn TransientFor(self: KWindowInfo) usize {
        return qtc.KWindowInfo_TransientFor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#groupLeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn GroupLeader(self: KWindowInfo) usize {
        return qtc.KWindowInfo_GroupLeader(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowClassClass(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowClassClass(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.WindowClassClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowClassName(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowClassName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.WindowClassName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.WindowRole: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#clientMachine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ClientMachine(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_ClientMachine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.ClientMachine: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopFileName(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_DesktopFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#gtkApplicationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GtkApplicationId(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_GtkApplicationId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.GtkApplicationId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn Pid(self: KWindowInfo) i32 {
        return qtc.KWindowInfo_Pid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuServiceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationMenuServiceName(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_ApplicationMenuServiceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.ApplicationMenuServiceName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuObjectPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationMenuObjectPath(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_ApplicationMenuObjectPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kwindowinfo.ApplicationMenuObjectPath: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` param1: KWindowInfo `
    ///
    pub fn OperatorAssign(self: KWindowInfo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KWindowInfo;
        qtc.KWindowInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` withdrawn_is_valid: bool `
    ///
    pub fn Valid1(self: KWindowInfo, withdrawn_is_valid: bool) bool {
        return qtc.KWindowInfo_Valid1(@ptrCast(self.ptr), withdrawn_is_valid);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#dtor.KWindowInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn Delete(self: KWindowInfo) void {
        qtc.KWindowInfo_Delete(@ptrCast(self.ptr));
    }
};
