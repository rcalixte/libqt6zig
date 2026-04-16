const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothHostInfo = @import("libqt6").QBluetoothHostInfo;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qbluetoothlocaldevice_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html)
pub const QBluetoothLocalDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothLocalDevice,

    pub const _is_QBluetoothLocalDevice = {};
    pub const _is_QObject = {};

    /// New constructs a new QBluetoothLocalDevice object.
    ///
    pub fn New() QBluetoothLocalDevice {
        return .{ .ptr = qtc.QBluetoothLocalDevice_new() };
    }

    /// New2 constructs a new QBluetoothLocalDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn New2(address: anytype) QBluetoothLocalDevice {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QBluetoothLocalDevice_new2(@ptrCast(address.ptr)) };
    }

    /// New3 constructs a new QBluetoothLocalDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QBluetoothLocalDevice {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothLocalDevice_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QBluetoothLocalDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(address: anytype, parent: anytype) QBluetoothLocalDevice {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothLocalDevice_new4(@ptrCast(address.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn MetaObject(self: QBluetoothLocalDevice) QMetaObject {
        return .{ .ptr = qtc.QBluetoothLocalDevice_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QBluetoothLocalDevice, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBluetoothLocalDevice_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn SuperMetaObject(self: QBluetoothLocalDevice) QMetaObject {
        return .{ .ptr = qtc.QBluetoothLocalDevice_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBluetoothLocalDevice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothLocalDevice_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBluetoothLocalDevice_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBluetoothLocalDevice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothLocalDevice_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QBluetoothLocalDevice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothLocalDevice_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBluetoothLocalDevice_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QBluetoothLocalDevice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothLocalDevice_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothlocaldevice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn IsValid(self: QBluetoothLocalDevice) bool {
        return qtc.QBluetoothLocalDevice_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#requestPairing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` pairing: qbluetoothlocaldevice_enums.Pairing `
    ///
    pub fn RequestPairing(self: QBluetoothLocalDevice, address: anytype, pairing: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothLocalDevice_RequestPairing(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(pairing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#pairingStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothlocaldevice_enums.Pairing `
    ///
    pub fn PairingStatus(self: QBluetoothLocalDevice, address: anytype) i32 {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        return qtc.QBluetoothLocalDevice_PairingStatus(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#setHostMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` mode: qbluetoothlocaldevice_enums.HostMode `
    ///
    pub fn SetHostMode(self: QBluetoothLocalDevice, mode: i32) void {
        qtc.QBluetoothLocalDevice_SetHostMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#hostMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothlocaldevice_enums.HostMode `
    ///
    pub fn HostMode(self: QBluetoothLocalDevice) i32 {
        return qtc.QBluetoothLocalDevice_HostMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#connectedDevices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConnectedDevices(self: QBluetoothLocalDevice, allocator: std.mem.Allocator) []QBluetoothAddress {
        const _arr: qtc.libqt_list = qtc.QBluetoothLocalDevice_ConnectedDevices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothAddress, _arr.len) catch @panic("qbluetoothlocaldevice.ConnectedDevices: Memory allocation failed");
        const _data: [*]QtC.QBluetoothAddress = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#powerOn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn PowerOn(self: QBluetoothLocalDevice) void {
        qtc.QBluetoothLocalDevice_PowerOn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QBluetoothLocalDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothLocalDevice_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothlocaldevice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Address(self: QBluetoothLocalDevice) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothLocalDevice_Address(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#allDevices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllDevices(allocator: std.mem.Allocator) []QBluetoothHostInfo {
        const _arr: qtc.libqt_list = qtc.QBluetoothLocalDevice_AllDevices();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothHostInfo, _arr.len) catch @panic("qbluetoothlocaldevice.AllDevices: Memory allocation failed");
        const _data: [*]QtC.QBluetoothHostInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#hostModeStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` state: qbluetoothlocaldevice_enums.HostMode `
    ///
    pub fn HostModeStateChanged(self: QBluetoothLocalDevice, state: i32) void {
        qtc.QBluetoothLocalDevice_HostModeStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#hostModeStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, state: qbluetoothlocaldevice_enums.HostMode) callconv(.c) void `
    ///
    pub fn OnHostModeStateChanged(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, i32) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_Connect_HostModeStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn DeviceConnected(self: QBluetoothLocalDevice, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothLocalDevice_DeviceConnected(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceConnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, address: QBluetoothAddress) callconv(.c) void `
    ///
    pub fn OnDeviceConnected(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QBluetoothAddress) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_Connect_DeviceConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn DeviceDisconnected(self: QBluetoothLocalDevice, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothLocalDevice_DeviceDisconnected(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceDisconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, address: QBluetoothAddress) callconv(.c) void `
    ///
    pub fn OnDeviceDisconnected(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QBluetoothAddress) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_Connect_DeviceDisconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#pairingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` pairing: qbluetoothlocaldevice_enums.Pairing `
    ///
    pub fn PairingFinished(self: QBluetoothLocalDevice, address: anytype, pairing: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothLocalDevice_PairingFinished(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(pairing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#pairingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, address: QBluetoothAddress, pairing: qbluetoothlocaldevice_enums.Pairing) callconv(.c) void `
    ///
    pub fn OnPairingFinished(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QBluetoothAddress, i32) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_Connect_PairingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` errorVal: qbluetoothlocaldevice_enums.Error `
    ///
    pub fn ErrorOccurred(self: QBluetoothLocalDevice, errorVal: i32) void {
        qtc.QBluetoothLocalDevice_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, errorVal: qbluetoothlocaldevice_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, i32) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothlocaldevice.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothlocaldevice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QBluetoothLocalDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothlocaldevice.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QBluetoothLocalDevice, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn IsWidgetType(self: QBluetoothLocalDevice) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn IsWindowType(self: QBluetoothLocalDevice) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn IsQuickItemType(self: QBluetoothLocalDevice) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn SignalsBlocked(self: QBluetoothLocalDevice) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QBluetoothLocalDevice, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Thread(self: QBluetoothLocalDevice) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBluetoothLocalDevice, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QBluetoothLocalDevice, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QBluetoothLocalDevice, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QBluetoothLocalDevice, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QBluetoothLocalDevice, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QBluetoothLocalDevice, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qbluetoothlocaldevice.Children: Memory allocation failed");
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBluetoothLocalDevice, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QBluetoothLocalDevice, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QBluetoothLocalDevice, obj: anytype) void {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBluetoothLocalDevice, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Disconnect3(self: QBluetoothLocalDevice) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QBluetoothLocalDevice, receiver: anytype) bool {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn DumpObjectTree(self: QBluetoothLocalDevice) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn DumpObjectInfo(self: QBluetoothLocalDevice) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QBluetoothLocalDevice, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QBluetoothLocalDevice, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QBluetoothLocalDevice, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qbluetoothlocaldevice.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qbluetoothlocaldevice.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn BindingStorage(self: QBluetoothLocalDevice) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn BindingStorage2(self: QBluetoothLocalDevice) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Destroyed(self: QBluetoothLocalDevice) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Parent(self: QBluetoothLocalDevice) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QBluetoothLocalDevice, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn DeleteLater(self: QBluetoothLocalDevice) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QBluetoothLocalDevice, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QBluetoothLocalDevice, time: i64, timerType: i32) i32 {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBluetoothLocalDevice, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QBluetoothLocalDevice, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QBluetoothLocalDevice, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QBluetoothLocalDevice, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QBluetoothLocalDevice, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QBluetoothLocalDevice, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBluetoothLocalDevice, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothLocalDevice_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBluetoothLocalDevice, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothLocalDevice_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothLocalDevice_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBluetoothLocalDevice, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothLocalDevice_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBluetoothLocalDevice, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothLocalDevice_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothLocalDevice_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBluetoothLocalDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothLocalDevice_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBluetoothLocalDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothLocalDevice_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QTimerEvent) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QBluetoothLocalDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothLocalDevice_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QBluetoothLocalDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothLocalDevice_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QChildEvent) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBluetoothLocalDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothLocalDevice_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBluetoothLocalDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothLocalDevice_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QEvent) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QBluetoothLocalDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothLocalDevice_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QBluetoothLocalDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothLocalDevice_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QBluetoothLocalDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothLocalDevice_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QBluetoothLocalDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothLocalDevice_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothLocalDevice_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Sender(self: QBluetoothLocalDevice) QObject {
        return .{ .ptr = qtc.QBluetoothLocalDevice_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn SuperSender(self: QBluetoothLocalDevice) QObject {
        return .{ .ptr = qtc.QBluetoothLocalDevice_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QBluetoothLocalDevice, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBluetoothLocalDevice_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn SenderSignalIndex(self: QBluetoothLocalDevice) i32 {
        return qtc.QBluetoothLocalDevice_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn SuperSenderSignalIndex(self: QBluetoothLocalDevice) i32 {
        return qtc.QBluetoothLocalDevice_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QBluetoothLocalDevice, callback: *const fn () callconv(.c) i32) void {
        qtc.QBluetoothLocalDevice_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QBluetoothLocalDevice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothLocalDevice_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QBluetoothLocalDevice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothLocalDevice_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBluetoothLocalDevice_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QBluetoothLocalDevice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothLocalDevice_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QBluetoothLocalDevice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothLocalDevice_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice`
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, QMetaMethod) callconv(.c) bool) void {
        qtc.QBluetoothLocalDevice_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    /// ` callback: *const fn (self: QBluetoothLocalDevice, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QBluetoothLocalDevice, callback: *const fn (QBluetoothLocalDevice, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#dtor.QBluetoothLocalDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothLocalDevice `
    ///
    pub fn Delete(self: QBluetoothLocalDevice) void {
        qtc.QBluetoothLocalDevice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#public-types)
pub const enums = struct {
    pub const Pairing = enum(i32) {
        pub const Unpaired: i32 = 0;
        pub const Paired: i32 = 1;
        pub const AuthorizedPaired: i32 = 2;
    };

    pub const HostMode = enum(i32) {
        pub const HostPoweredOff: i32 = 0;
        pub const HostConnectable: i32 = 1;
        pub const HostDiscoverable: i32 = 2;
        pub const HostDiscoverableLimitedInquiry: i32 = 3;
    };

    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const PairingError: i32 = 1;
        pub const MissingPermissionsError: i32 = 2;
        pub const UnknownError: i32 = 100;
    };
};
