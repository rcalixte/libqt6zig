const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const solidnamespace_enums = @import("libsolidnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html)
pub const solid__storageaccess = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Solid__StorageAccess_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__StorageAccess_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Solid__StorageAccess_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#deviceInterfaceType)
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn DeviceInterfaceType() i32 {
        return qtc.Solid__StorageAccess_DeviceInterfaceType();
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#isAccessible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsAccessible(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_IsAccessible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__StorageAccess_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#isIgnored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsIgnored(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_IsIgnored(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#isEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsEncrypted(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_IsEncrypted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Setup(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Setup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Teardown(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Teardown(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#canCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn CanCheck(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_CanCheck(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#check)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Check(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Check(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#canRepair)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn CanRepair(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_CanRepair(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repair)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Repair(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Repair(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` accessible: bool `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn AccessibilityChanged(self: ?*anyopaque, accessible: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_AccessibilityChanged(@ptrCast(self), accessible, udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, accessible: bool, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAccessibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_AccessibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QtC.QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn SetupDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_SetupDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetupDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_SetupDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QtC.QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TeardownDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_TeardownDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTeardownDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_TeardownDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn SetupRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_SetupRequested(@ptrCast(self), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetupRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_SetupRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TeardownRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_TeardownRequested(@ptrCast(self), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTeardownRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_TeardownRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CheckRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_CheckRequested(@ptrCast(self), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCheckRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_CheckRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QtC.QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CheckDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_CheckDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCheckDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_CheckDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn RepairRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_RepairRequested(@ptrCast(self), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRepairRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_RepairRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QtC.QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn RepairDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_RepairDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRepairDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_RepairDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypeToString(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeToString(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.TypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn StringToType(typeVal: []const u8) i32 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.Solid__DeviceInterface_StringToType(typeVal_str);
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypeDescription(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeDescription(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.TypeDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("solid__storageaccess.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("solid__storageaccess.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("solid__storageaccess.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: QtC.Solid__StorageAccess, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Solid__StorageAccess `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Solid__StorageAccess_Delete(@ptrCast(self));
    }
};
