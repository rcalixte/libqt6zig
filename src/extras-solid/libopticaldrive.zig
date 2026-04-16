const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const opticaldrive_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const solidnamespace_enums = @import("libsolidnamespace.zig").enums;
const std = @import("std");
const storagedrive_enums = @import("libstoragedrive.zig").enums;

/// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html)
pub const Solid__OpticalDrive = extern struct {
    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Solid__OpticalDrive,

    pub const _is_Solid__OpticalDrive = {};
    pub const _is_Solid__StorageDrive = {};
    pub const _is_Solid__DeviceInterface = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn MetaObject(self: Solid__OpticalDrive) QMetaObject {
        return .{ .ptr = qtc.Solid__OpticalDrive_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Solid__OpticalDrive, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__OpticalDrive_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Solid__OpticalDrive, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Solid__OpticalDrive_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__opticaldrive.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#deviceInterfaceType)
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn DeviceInterfaceType() i32 {
        return qtc.Solid__OpticalDrive_DeviceInterfaceType();
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#supportedMedia)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ## Returns:
    ///
    /// ` flag of opticaldrive_enums.MediumType `
    ///
    pub fn SupportedMedia(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__OpticalDrive_SupportedMedia(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#readSpeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn ReadSpeed(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__OpticalDrive_ReadSpeed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#writeSpeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn WriteSpeed(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__OpticalDrive_WriteSpeed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#writeSpeeds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WriteSpeeds(self: Solid__OpticalDrive, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Solid__OpticalDrive_WriteSpeeds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("solid__opticaldrive.WriteSpeeds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#eject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Eject(self: Solid__OpticalDrive) bool {
        return qtc.Solid__OpticalDrive_Eject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EjectPressed(self: Solid__OpticalDrive, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__OpticalDrive_EjectPressed(@ptrCast(self.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEjectPressed(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__OpticalDrive_Connect_EjectPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QVariant `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EjectDone(self: Solid__OpticalDrive, errorVal: i32, errorData: anytype, udi: []const u8) void {
        comptime _ = @TypeOf(errorData)._is_QVariant;
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__OpticalDrive_EjectDone(@ptrCast(self.ptr), @bitCast(errorVal), @ptrCast(errorData.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, errorVal: solidnamespace_enums.ErrorType, errorData: QVariant, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEjectDone(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, i32, QVariant, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__OpticalDrive_Connect_EjectDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EjectRequested(self: Solid__OpticalDrive, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__OpticalDrive_EjectRequested(@ptrCast(self.ptr), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEjectRequested(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__OpticalDrive_Connect_EjectRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__opticaldrive.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__opticaldrive.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#bus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ## Returns:
    ///
    /// ` storagedrive_enums.Bus `
    ///
    pub fn Bus(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__StorageDrive_Bus(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#driveType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ## Returns:
    ///
    /// ` storagedrive_enums.DriveType `
    ///
    pub fn DriveType(self: Solid__OpticalDrive) i32 {
        return qtc.Solid__StorageDrive_DriveType(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#isRemovable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsRemovable(self: Solid__OpticalDrive) bool {
        return qtc.Solid__StorageDrive_IsRemovable(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#isHotpluggable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsHotpluggable(self: Solid__OpticalDrive) bool {
        return qtc.Solid__StorageDrive_IsHotpluggable(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Size(self: Solid__OpticalDrive) usize {
        return qtc.Solid__StorageDrive_Size(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#isInUse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsInUse(self: Solid__OpticalDrive) bool {
        return qtc.Solid__StorageDrive_IsInUse(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeDetected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn TimeDetected(self: Solid__OpticalDrive) QDateTime {
        return .{ .ptr = qtc.Solid__StorageDrive_TimeDetected(@ptrCast(self.ptr)) };
    }

    /// Inherited from Solid::StorageDrive
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeMediaDetected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn TimeMediaDetected(self: Solid__OpticalDrive) QDateTime {
        return .{ .ptr = qtc.Solid__StorageDrive_TimeMediaDetected(@ptrCast(self.ptr)) };
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsValid(self: Solid__OpticalDrive) bool {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__opticaldrive.TypeToString: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__opticaldrive.TypeDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Solid__OpticalDrive, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Solid__OpticalDrive, watched: anytype, event: anytype) bool {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Solid__OpticalDrive, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__opticaldrive.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Solid__OpticalDrive, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsWidgetType(self: Solid__OpticalDrive) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsWindowType(self: Solid__OpticalDrive) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn IsQuickItemType(self: Solid__OpticalDrive) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn SignalsBlocked(self: Solid__OpticalDrive) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Solid__OpticalDrive, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Thread(self: Solid__OpticalDrive) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Solid__OpticalDrive, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Solid__OpticalDrive, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Solid__OpticalDrive, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Solid__OpticalDrive, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Solid__OpticalDrive, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Solid__OpticalDrive, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("solid__opticaldrive.Children: Memory allocation failed");
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Solid__OpticalDrive, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Solid__OpticalDrive, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Solid__OpticalDrive, obj: anytype) void {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Solid__OpticalDrive, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Disconnect3(self: Solid__OpticalDrive) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Solid__OpticalDrive, receiver: anytype) bool {
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
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn DumpObjectTree(self: Solid__OpticalDrive) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn DumpObjectInfo(self: Solid__OpticalDrive) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Solid__OpticalDrive, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Solid__OpticalDrive, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Solid__OpticalDrive, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("solid__opticaldrive.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("solid__opticaldrive.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn BindingStorage(self: Solid__OpticalDrive) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn BindingStorage2(self: Solid__OpticalDrive) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Destroyed(self: Solid__OpticalDrive) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Parent(self: Solid__OpticalDrive) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Solid__OpticalDrive, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn DeleteLater(self: Solid__OpticalDrive) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Solid__OpticalDrive, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Solid__OpticalDrive, time: i64, timerType: i32) i32 {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Solid__OpticalDrive, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Solid__OpticalDrive, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Solid__OpticalDrive, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Solid__OpticalDrive, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Solid__OpticalDrive, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Solid__OpticalDrive, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, QObject) callconv(.c) void) void {
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
    /// ` self: Solid__OpticalDrive `
    ///
    /// ` callback: *const fn (self: Solid__OpticalDrive, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Solid__OpticalDrive, callback: *const fn (Solid__OpticalDrive, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__OpticalDrive `
    ///
    pub fn Delete(self: Solid__OpticalDrive) void {
        qtc.Solid__OpticalDrive_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/solid-opticaldrive.html#public-types)
pub const enums = struct {
    pub const MediumType = enum(i32) {
        pub const UnknownMediumType: i32 = 0;
        pub const Cdr: i32 = 1;
        pub const Cdrw: i32 = 2;
        pub const Dvd: i32 = 4;
        pub const Dvdr: i32 = 8;
        pub const Dvdrw: i32 = 16;
        pub const Dvdram: i32 = 32;
        pub const Dvdplusr: i32 = 64;
        pub const Dvdplusrw: i32 = 128;
        pub const Dvdplusdl: i32 = 256;
        pub const Dvdplusdlrw: i32 = 512;
        pub const Bd: i32 = 1024;
        pub const Bdr: i32 = 2048;
        pub const Bdre: i32 = 4096;
        pub const HdDvd: i32 = 8192;
        pub const HdDvdr: i32 = 16384;
        pub const HdDvdrw: i32 = 32768;
    };
};
