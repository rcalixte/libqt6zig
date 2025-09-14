const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const solidnamespace_enums = @import("libsolidnamespace.zig").enums;
const std = @import("std");

/// https://api.kde.org/solid-storageaccess.html
pub const solid__storageaccess = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Solid__StorageAccess_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Solid__StorageAccess, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__StorageAccess_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Solid__StorageAccess, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Solid__StorageAccess_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Solid__StorageAccess_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#deviceInterfaceType)
    ///
    ///
    ///
    /// Returns: ``` deviceinterface_enums.Type ```
    pub fn DeviceInterfaceType() i32 {
        return qtc.Solid__StorageAccess_DeviceInterfaceType();
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#isAccessible)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsAccessible(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_IsAccessible(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#filePath)
    ///
    /// ``` self: QtC.Solid__StorageAccess, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__StorageAccess_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#isIgnored)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsIgnored(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_IsIgnored(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#isEncrypted)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsEncrypted(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_IsEncrypted(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#setup)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Setup(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Setup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#teardown)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Teardown(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Teardown(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#canCheck)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn CanCheck(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_CanCheck(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#check)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Check(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Check(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#canRepair)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn CanRepair(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_CanRepair(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#repair)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Repair(self: ?*anyopaque) bool {
        return qtc.Solid__StorageAccess_Repair(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
    ///
    /// ``` self: QtC.Solid__StorageAccess, accessible: bool, udi: []const u8 ```
    pub fn AccessibilityChanged(self: ?*anyopaque, accessible: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_AccessibilityChanged(@ptrCast(self), accessible, udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, accessible: bool, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnAccessibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_AccessibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#setupDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: []const u8 ```
    pub fn SetupDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_SetupDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#setupDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetupDone(self: ?*anyopaque, slot: fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_SetupDone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#teardownDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: []const u8 ```
    pub fn TeardownDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_TeardownDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#teardownDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnTeardownDone(self: ?*anyopaque, slot: fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_TeardownDone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#setupRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, udi: []const u8 ```
    pub fn SetupRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_SetupRequested(@ptrCast(self), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#setupRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetupRequested(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_SetupRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#teardownRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, udi: []const u8 ```
    pub fn TeardownRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_TeardownRequested(@ptrCast(self), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#teardownRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnTeardownRequested(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_TeardownRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#checkRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, udi: []const u8 ```
    pub fn CheckRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_CheckRequested(@ptrCast(self), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#checkRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnCheckRequested(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_CheckRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#checkDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: []const u8 ```
    pub fn CheckDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_CheckDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#checkDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnCheckDone(self: ?*anyopaque, slot: fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_CheckDone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#repairRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, udi: []const u8 ```
    pub fn RepairRequested(self: ?*anyopaque, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_RepairRequested(@ptrCast(self), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#repairRequested)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnRepairRequested(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_RepairRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#repairDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: []const u8 ```
    pub fn RepairDone(self: ?*anyopaque, errorVal: i32, errorData: QtC.QVariant, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_RepairDone(@ptrCast(self), @intCast(errorVal), @ptrCast(errorData), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-storageaccess.html#repairDone)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnRepairDone(self: ?*anyopaque, slot: fn (?*anyopaque, i32, QtC.QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_RepairDone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Solid__StorageAccess_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Solid__StorageAccess_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ``` typeVal: deviceinterface_enums.Type, allocator: std.mem.Allocator ```
    pub fn TypeToString(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__DeviceInterface_TypeToString(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.TypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#stringToType)
    ///
    /// ``` typeVal: []const u8 ```
    ///
    /// Returns: ``` deviceinterface_enums.Type ```
    pub fn StringToType(typeVal: []const u8) i32 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.Solid__DeviceInterface_StringToType(typeVal_str);
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeDescription)
    ///
    /// ``` typeVal: deviceinterface_enums.Type, allocator: std.mem.Allocator ```
    pub fn TypeDescription(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__DeviceInterface_TypeDescription(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.TypeDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.Solid__StorageAccess, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.Solid__StorageAccess, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Solid__StorageAccess, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::storageaccess.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Solid__StorageAccess, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Solid__StorageAccess, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Solid__StorageAccess, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Solid__StorageAccess, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Solid__StorageAccess, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Solid__StorageAccess, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Solid__StorageAccess, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("solid::storageaccess.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Solid__StorageAccess, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Solid__StorageAccess, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Solid__StorageAccess, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Solid__StorageAccess, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Solid__StorageAccess, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Solid__StorageAccess, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Solid__StorageAccess, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("solid::storageaccess.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("solid::storageaccess.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Solid__StorageAccess, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Solid__StorageAccess, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Solid__StorageAccess, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Solid__StorageAccess, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__StorageAccess, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Solid__StorageAccess, slot: fn (self: QtC.Solid__StorageAccess, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Solid__StorageAccess ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Solid__StorageAccess_Delete(@ptrCast(self));
    }
};
