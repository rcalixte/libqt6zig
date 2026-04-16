const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const solidnamespace_enums = @import("libsolidnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html)
pub const Solid__StorageAccess = extern struct {
    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Solid__StorageAccess,

    pub const _is_Solid__StorageAccess = {};
    pub const _is_Solid__DeviceInterface = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn MetaObject(self: Solid__StorageAccess) QMetaObject {
        return .{ .ptr = qtc.Solid__StorageAccess_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Solid__StorageAccess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__StorageAccess_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Solid__StorageAccess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Solid__StorageAccess_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
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
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsAccessible(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_IsAccessible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: Solid__StorageAccess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__StorageAccess_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__storageaccess.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#isIgnored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsIgnored(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_IsIgnored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#isEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsEncrypted(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_IsEncrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Setup(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_Setup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Teardown(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_Teardown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#canCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn CanCheck(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_CanCheck(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#check)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Check(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_Check(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#canRepair)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn CanRepair(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_CanRepair(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repair)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Repair(self: Solid__StorageAccess) bool {
        return qtc.Solid__StorageAccess_Repair(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` accessible: bool `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn AccessibilityChanged(self: Solid__StorageAccess, accessible: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_AccessibilityChanged(@ptrCast(self.ptr), accessible, udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, accessible: bool, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAccessibilityChanged(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_AccessibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn SetupDone(self: Solid__StorageAccess, errorVal: i32, errorData: anytype, udi: []const u8) void {
        comptime _ = @TypeOf(errorData)._is_QVariant;
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_SetupDone(@ptrCast(self.ptr), @bitCast(errorVal), @ptrCast(errorData.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetupDone(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, i32, QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_SetupDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TeardownDone(self: Solid__StorageAccess, errorVal: i32, errorData: anytype, udi: []const u8) void {
        comptime _ = @TypeOf(errorData)._is_QVariant;
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_TeardownDone(@ptrCast(self.ptr), @bitCast(errorVal), @ptrCast(errorData.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTeardownDone(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, i32, QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_TeardownDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn SetupRequested(self: Solid__StorageAccess, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_SetupRequested(@ptrCast(self.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetupRequested(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_SetupRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TeardownRequested(self: Solid__StorageAccess, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_TeardownRequested(@ptrCast(self.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTeardownRequested(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_TeardownRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CheckRequested(self: Solid__StorageAccess, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_CheckRequested(@ptrCast(self.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCheckRequested(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_CheckRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CheckDone(self: Solid__StorageAccess, errorVal: i32, errorData: anytype, udi: []const u8) void {
        comptime _ = @TypeOf(errorData)._is_QVariant;
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_CheckDone(@ptrCast(self.ptr), @bitCast(errorVal), @ptrCast(errorData.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCheckDone(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, i32, QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_CheckDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn RepairRequested(self: Solid__StorageAccess, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_RepairRequested(@ptrCast(self.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRepairRequested(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_RepairRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn RepairDone(self: Solid__StorageAccess, errorVal: i32, errorData: anytype, udi: []const u8) void {
        comptime _ = @TypeOf(errorData)._is_QVariant;
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__StorageAccess_RepairDone(@ptrCast(self.ptr), @bitCast(errorVal), @ptrCast(errorData.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, errorVal: solidnamespace_enums.ErrorType, errorData: QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRepairDone(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, i32, QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__StorageAccess_Connect_RepairDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
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
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsValid(self: Solid__StorageAccess) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    pub fn TypeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeToString(@bitCast(typeVal));
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    pub fn TypeDescription(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeDescription(@bitCast(typeVal));
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
    /// ` self: Solid__StorageAccess `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Solid__StorageAccess, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Solid__StorageAccess, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Solid__StorageAccess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: Solid__StorageAccess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Solid__StorageAccess, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsWidgetType(self: Solid__StorageAccess) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsWindowType(self: Solid__StorageAccess) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn IsQuickItemType(self: Solid__StorageAccess) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn SignalsBlocked(self: Solid__StorageAccess) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Solid__StorageAccess, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Thread(self: Solid__StorageAccess) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Solid__StorageAccess, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Solid__StorageAccess, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Solid__StorageAccess, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Solid__StorageAccess, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Solid__StorageAccess, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Solid__StorageAccess, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("solid__storageaccess.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Solid__StorageAccess, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Solid__StorageAccess, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Solid__StorageAccess, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Solid__StorageAccess, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Disconnect3(self: Solid__StorageAccess) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Solid__StorageAccess, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn DumpObjectTree(self: Solid__StorageAccess) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn DumpObjectInfo(self: Solid__StorageAccess) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Solid__StorageAccess, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Solid__StorageAccess, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Solid__StorageAccess, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Solid__StorageAccess `
    ///
    pub fn BindingStorage(self: Solid__StorageAccess) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn BindingStorage2(self: Solid__StorageAccess) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Destroyed(self: Solid__StorageAccess) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Parent(self: Solid__StorageAccess) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Solid__StorageAccess, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn DeleteLater(self: Solid__StorageAccess) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Solid__StorageAccess, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Solid__StorageAccess, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Solid__StorageAccess, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Solid__StorageAccess, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Solid__StorageAccess, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Solid__StorageAccess, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Solid__StorageAccess, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Solid__StorageAccess, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    /// ` callback: *const fn (self: Solid__StorageAccess, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Solid__StorageAccess, callback: *const fn (Solid__StorageAccess, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__StorageAccess `
    ///
    pub fn Delete(self: Solid__StorageAccess) void {
        qtc.Solid__StorageAccess_Delete(@ptrCast(self.ptr));
    }
};
