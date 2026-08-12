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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KWindowInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KWindowInfo `
    ///
    pub fn new(param1: anytype) KWindowInfo {
        comptime _ = @TypeOf(param1)._is_KWindowInfo;
        return .{ .ptr = qtc.KWindowInfo_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `valid` instead
    ///
    pub const Valid = valid;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn valid(self: KWindowInfo) bool {
        return qtc.KWindowInfo_Valid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `win` instead
    ///
    pub const Win = win;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#win)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn win(self: KWindowInfo) usize {
        return qtc.KWindowInfo_Win(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMinimized` instead
    ///
    pub const IsMinimized = isMinimized;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn isMinimized(self: KWindowInfo) bool {
        return qtc.KWindowInfo_IsMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `extendedStrut` instead
    ///
    pub const ExtendedStrut = extendedStrut;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#extendedStrut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn extendedStrut(self: KWindowInfo) NETExtendedStrut {
        return .{ .ptr = qtc.KWindowInfo_ExtendedStrut(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `visibleName` instead
    ///
    pub const VisibleName = visibleName;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn visibleName(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWindowInfo.visibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `visibleNameWithState` instead
    ///
    pub const VisibleNameWithState = visibleNameWithState;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleNameWithState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn visibleNameWithState(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleNameWithState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWindowInfo.visibleNameWithState: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWindowInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `visibleIconName` instead
    ///
    pub const VisibleIconName = visibleIconName;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn visibleIconName(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWindowInfo.visibleIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `visibleIconNameWithState` instead
    ///
    pub const VisibleIconNameWithState = visibleIconNameWithState;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconNameWithState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn visibleIconNameWithState(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_VisibleIconNameWithState(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWindowInfo.visibleIconNameWithState: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KWindowInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KWindowInfo_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KWindowInfo.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOnCurrentDesktop` instead
    ///
    pub const IsOnCurrentDesktop = isOnCurrentDesktop;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnCurrentDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn isOnCurrentDesktop(self: KWindowInfo) bool {
        return qtc.KWindowInfo_IsOnCurrentDesktop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOnDesktop` instead
    ///
    pub const IsOnDesktop = isOnDesktop;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` _desktop: i32 `
    ///
    pub fn isOnDesktop(self: KWindowInfo, _desktop: i32) bool {
        return qtc.KWindowInfo_IsOnDesktop(@ptrCast(self.ptr), @bitCast(_desktop));
    }

    /// ### DEPRECATED: Use `onAllDesktops` instead
    ///
    pub const OnAllDesktops = onAllDesktops;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#onAllDesktops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn onAllDesktops(self: KWindowInfo) bool {
        return qtc.KWindowInfo_OnAllDesktops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `desktop` instead
    ///
    pub const Desktop = desktop;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#desktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn desktop(self: KWindowInfo) i32 {
        return qtc.KWindowInfo_Desktop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activities` instead
    ///
    pub const Activities = activities;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#activities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activities(self: KWindowInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KWindowInfo_Activities(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KWindowInfo.activities: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KWindowInfo.activities: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn geometry(self: KWindowInfo) QRect {
        return .{ .ptr = qtc.KWindowInfo_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn frameGeometry(self: KWindowInfo) QRect {
        return .{ .ptr = qtc.KWindowInfo_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `transientFor` instead
    ///
    pub const TransientFor = transientFor;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#transientFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn transientFor(self: KWindowInfo) usize {
        return qtc.KWindowInfo_TransientFor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `groupLeader` instead
    ///
    pub const GroupLeader = groupLeader;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#groupLeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn groupLeader(self: KWindowInfo) usize {
        return qtc.KWindowInfo_GroupLeader(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowClassClass` instead
    ///
    pub const WindowClassClass = windowClassClass;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowClassClass(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowClassClass(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.windowClassClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowClassName` instead
    ///
    pub const WindowClassName = windowClassName;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowClassName(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowClassName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.windowClassName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowRole` instead
    ///
    pub const WindowRole = windowRole;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.windowRole: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clientMachine` instead
    ///
    pub const ClientMachine = clientMachine;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#clientMachine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn clientMachine(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_ClientMachine(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.clientMachine: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `desktopFileName` instead
    ///
    pub const DesktopFileName = desktopFileName;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopFileName(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_DesktopFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.desktopFileName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `gtkApplicationId` instead
    ///
    pub const GtkApplicationId = gtkApplicationId;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#gtkApplicationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gtkApplicationId(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_GtkApplicationId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.gtkApplicationId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pid` instead
    ///
    pub const Pid = pid;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn pid(self: KWindowInfo) i32 {
        return qtc.KWindowInfo_Pid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `applicationMenuServiceName` instead
    ///
    pub const ApplicationMenuServiceName = applicationMenuServiceName;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuServiceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationMenuServiceName(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_ApplicationMenuServiceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.applicationMenuServiceName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `applicationMenuObjectPath` instead
    ///
    pub const ApplicationMenuObjectPath = applicationMenuObjectPath;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuObjectPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationMenuObjectPath(self: KWindowInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KWindowInfo_ApplicationMenuObjectPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KWindowInfo.applicationMenuObjectPath: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` param1: KWindowInfo `
    ///
    pub fn operatorAssign(self: KWindowInfo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KWindowInfo;
        qtc.KWindowInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `valid1` instead
    ///
    pub const Valid1 = valid1;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWindowInfo `
    ///
    /// ` withdrawn_is_valid: bool `
    ///
    pub fn valid1(self: KWindowInfo, withdrawn_is_valid: bool) bool {
        return qtc.KWindowInfo_Valid1(@ptrCast(self.ptr), withdrawn_is_valid);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kwindowinfo.html#dtor.KWindowInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KWindowInfo `
    ///
    pub fn delete(self: KWindowInfo) void {
        qtc.KWindowInfo_Delete(@ptrCast(self.ptr));
    }
};
