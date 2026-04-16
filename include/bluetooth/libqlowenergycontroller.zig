const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothDeviceInfo = @import("libqt6").QBluetoothDeviceInfo;
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QEvent = @import("libqt6").QEvent;
const QLowEnergyAdvertisingData = @import("libqt6").QLowEnergyAdvertisingData;
const QLowEnergyAdvertisingParameters = @import("libqt6").QLowEnergyAdvertisingParameters;
const QLowEnergyConnectionParameters = @import("libqt6").QLowEnergyConnectionParameters;
const QLowEnergyService = @import("libqt6").QLowEnergyService;
const QLowEnergyServiceData = @import("libqt6").QLowEnergyServiceData;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qlowenergycontroller_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html)
pub const QLowEnergyController = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyController,

    pub const _is_QLowEnergyController = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn MetaObject(self: QLowEnergyController) QMetaObject {
        return .{ .ptr = qtc.QLowEnergyController_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QLowEnergyController, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLowEnergyController_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QLowEnergyController, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLowEnergyController_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    pub fn CreateCentral(remoteDevice: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral(@ptrCast(remoteDevice.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    pub fn CreateCentral2(remoteDevice: anytype, localDevice: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral2(@ptrCast(remoteDevice.ptr), @ptrCast(localDevice.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    pub fn CreatePeripheral(localDevice: anytype) QLowEnergyController {
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral(@ptrCast(localDevice.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    pub fn CreatePeripheral2() QLowEnergyController {
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn LocalAddress(self: QLowEnergyController) QBluetoothAddress {
        return .{ .ptr = qtc.QLowEnergyController_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn RemoteAddress(self: QLowEnergyController) QBluetoothAddress {
        return .{ .ptr = qtc.QLowEnergyController_RemoteAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteDeviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn RemoteDeviceUuid(self: QLowEnergyController) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyController_RemoteDeviceUuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemoteName(self: QLowEnergyController, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyController_RemoteName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.RemoteName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.ControllerState `
    ///
    pub fn State(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddressType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn RemoteAddressType(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_RemoteAddressType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#setRemoteAddressType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` typeVal: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn SetRemoteAddressType(self: QLowEnergyController, typeVal: i32) void {
        qtc.QLowEnergyController_SetRemoteAddressType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectToDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn ConnectToDevice(self: QLowEnergyController) void {
        qtc.QLowEnergyController_ConnectToDevice(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnectFromDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn DisconnectFromDevice(self: QLowEnergyController) void {
        qtc.QLowEnergyController_DisconnectFromDevice(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoverServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn DiscoverServices(self: QLowEnergyController) void {
        qtc.QLowEnergyController_DiscoverServices(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#services)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Services(self: QLowEnergyController, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyController_Services(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("qlowenergycontroller.Services: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QBluetoothUuid `
    ///
    pub fn CreateServiceObject(self: QLowEnergyController, service: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QLowEnergyController_CreateServiceObject(@ptrCast(self.ptr), @ptrCast(service.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#startAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` parameters: QLowEnergyAdvertisingParameters `
    ///
    /// ` advertisingData: QLowEnergyAdvertisingData `
    ///
    pub fn StartAdvertising(self: QLowEnergyController, parameters: anytype, advertisingData: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyAdvertisingParameters;
        comptime _ = @TypeOf(advertisingData)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyController_StartAdvertising(@ptrCast(self.ptr), @ptrCast(parameters.ptr), @ptrCast(advertisingData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stopAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn StopAdvertising(self: QLowEnergyController) void {
        qtc.QLowEnergyController_StopAdvertising(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QLowEnergyServiceData `
    ///
    pub fn AddService(self: QLowEnergyController, service: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QLowEnergyServiceData;
        return .{ .ptr = qtc.QLowEnergyController_AddService(@ptrCast(self.ptr), @ptrCast(service.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#requestConnectionUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` parameters: QLowEnergyConnectionParameters `
    ///
    pub fn RequestConnectionUpdate(self: QLowEnergyController, parameters: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyController_RequestConnectionUpdate(@ptrCast(self.ptr), @ptrCast(parameters.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.Error `
    ///
    pub fn Error(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QLowEnergyController, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyController_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.Role `
    ///
    pub fn Role(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_Role(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Mtu(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_Mtu(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#readRssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn ReadRssi(self: QLowEnergyController) void {
        qtc.QLowEnergyController_ReadRssi(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Connected(self: QLowEnergyController) void {
        qtc.QLowEnergyController_Connected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnConnected(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Disconnected(self: QLowEnergyController) void {
        qtc.QLowEnergyController_Disconnected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` state: qlowenergycontroller_enums.ControllerState `
    ///
    pub fn StateChanged(self: QLowEnergyController, state: i32) void {
        qtc.QLowEnergyController_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, state: qlowenergycontroller_enums.ControllerState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` newError: qlowenergycontroller_enums.Error `
    ///
    pub fn ErrorOccurred(self: QLowEnergyController, newError: i32) void {
        qtc.QLowEnergyController_ErrorOccurred(@ptrCast(self.ptr), @bitCast(newError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, newError: qlowenergycontroller_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` mtu: i32 `
    ///
    pub fn MtuChanged(self: QLowEnergyController, mtu: i32) void {
        qtc.QLowEnergyController_MtuChanged(@ptrCast(self.ptr), @bitCast(mtu));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, mtu: i32) callconv(.c) void `
    ///
    pub fn OnMtuChanged(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_MtuChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` rssi: i16 `
    ///
    pub fn RssiRead(self: QLowEnergyController, rssi: i16) void {
        qtc.QLowEnergyController_RssiRead(@ptrCast(self.ptr), @bitCast(rssi));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, rssi: i16) callconv(.c) void `
    ///
    pub fn OnRssiRead(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i16) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_RssiRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` newService: QBluetoothUuid `
    ///
    pub fn ServiceDiscovered(self: QLowEnergyController, newService: anytype) void {
        comptime _ = @TypeOf(newService)._is_QBluetoothUuid;
        qtc.QLowEnergyController_ServiceDiscovered(@ptrCast(self.ptr), @ptrCast(newService.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, newService: QBluetoothUuid) callconv(.c) void `
    ///
    pub fn OnServiceDiscovered(self: QLowEnergyController, callback: *const fn (QLowEnergyController, QBluetoothUuid) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ServiceDiscovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn DiscoveryFinished(self: QLowEnergyController) void {
        qtc.QLowEnergyController_DiscoveryFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnDiscoveryFinished(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_DiscoveryFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` parameters: QLowEnergyConnectionParameters `
    ///
    pub fn ConnectionUpdated(self: QLowEnergyController, parameters: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyController_ConnectionUpdated(@ptrCast(self.ptr), @ptrCast(parameters.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, parameters: QLowEnergyConnectionParameters) callconv(.c) void `
    ///
    pub fn OnConnectionUpdated(self: QLowEnergyController, callback: *const fn (QLowEnergyController, QLowEnergyConnectionParameters) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ConnectionUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateCentral22(remoteDevice: anytype, parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral22(@ptrCast(remoteDevice.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateCentral3(remoteDevice: anytype, localDevice: anytype, parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral3(@ptrCast(remoteDevice.ptr), @ptrCast(localDevice.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreatePeripheral22(localDevice: anytype, parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral22(@ptrCast(localDevice.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn CreatePeripheral1(parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral1(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QBluetoothUuid `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateServiceObject2(self: QLowEnergyController, service: anytype, parent: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QBluetoothUuid;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreateServiceObject2(@ptrCast(self.ptr), @ptrCast(service.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#startAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` parameters: QLowEnergyAdvertisingParameters `
    ///
    /// ` advertisingData: QLowEnergyAdvertisingData `
    ///
    /// ` scanResponseData: QLowEnergyAdvertisingData `
    ///
    pub fn StartAdvertising3(self: QLowEnergyController, parameters: anytype, advertisingData: anytype, scanResponseData: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyAdvertisingParameters;
        comptime _ = @TypeOf(advertisingData)._is_QLowEnergyAdvertisingData;
        comptime _ = @TypeOf(scanResponseData)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyController_StartAdvertising3(@ptrCast(self.ptr), @ptrCast(parameters.ptr), @ptrCast(advertisingData.ptr), @ptrCast(scanResponseData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QLowEnergyServiceData `
    ///
    /// ` parent: QObject `
    ///
    pub fn AddService2(self: QLowEnergyController, service: anytype, parent: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QLowEnergyServiceData;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_AddService2(@ptrCast(self.ptr), @ptrCast(service.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QLowEnergyController, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QLowEnergyController, watched: anytype, event: anytype) bool {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QLowEnergyController, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QLowEnergyController, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn IsWidgetType(self: QLowEnergyController) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn IsWindowType(self: QLowEnergyController) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn IsQuickItemType(self: QLowEnergyController) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn SignalsBlocked(self: QLowEnergyController) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QLowEnergyController, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Thread(self: QLowEnergyController) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QLowEnergyController, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QLowEnergyController, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QLowEnergyController, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QLowEnergyController, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QLowEnergyController, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QLowEnergyController, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qlowenergycontroller.Children: Memory allocation failed");
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
    /// ` self: QLowEnergyController `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QLowEnergyController, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QLowEnergyController, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QLowEnergyController, obj: anytype) void {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QLowEnergyController, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QLowEnergyController `
    ///
    pub fn Disconnect3(self: QLowEnergyController) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QLowEnergyController, receiver: anytype) bool {
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
    /// ` self: QLowEnergyController `
    ///
    pub fn DumpObjectTree(self: QLowEnergyController) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn DumpObjectInfo(self: QLowEnergyController) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QLowEnergyController, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QLowEnergyController, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QLowEnergyController, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlowenergycontroller.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlowenergycontroller.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QLowEnergyController `
    ///
    pub fn BindingStorage(self: QLowEnergyController) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn BindingStorage2(self: QLowEnergyController) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Destroyed(self: QLowEnergyController) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Parent(self: QLowEnergyController) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QLowEnergyController, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn DeleteLater(self: QLowEnergyController) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QLowEnergyController, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QLowEnergyController, time: i64, timerType: i32) i32 {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QLowEnergyController, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QLowEnergyController, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QLowEnergyController, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QLowEnergyController, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QLowEnergyController, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QLowEnergyController, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QLowEnergyController, callback: *const fn (QLowEnergyController, QObject) callconv(.c) void) void {
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
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QLowEnergyController, callback: *const fn (QLowEnergyController, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#dtor.QLowEnergyController)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn Delete(self: QLowEnergyController) void {
        qtc.QLowEnergyController_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const UnknownError: i32 = 1;
        pub const UnknownRemoteDeviceError: i32 = 2;
        pub const NetworkError: i32 = 3;
        pub const InvalidBluetoothAdapterError: i32 = 4;
        pub const ConnectionError: i32 = 5;
        pub const AdvertisingError: i32 = 6;
        pub const RemoteHostClosedError: i32 = 7;
        pub const AuthorizationError: i32 = 8;
        pub const MissingPermissionsError: i32 = 9;
        pub const RssiReadError: i32 = 10;
    };

    pub const ControllerState = enum(i32) {
        pub const UnconnectedState: i32 = 0;
        pub const ConnectingState: i32 = 1;
        pub const ConnectedState: i32 = 2;
        pub const DiscoveringState: i32 = 3;
        pub const DiscoveredState: i32 = 4;
        pub const ClosingState: i32 = 5;
        pub const AdvertisingState: i32 = 6;
    };

    pub const RemoteAddressType = enum(i32) {
        pub const PublicAddress: i32 = 0;
        pub const RandomAddress: i32 = 1;
    };

    pub const Role = enum(i32) {
        pub const CentralRole: i32 = 0;
        pub const PeripheralRole: i32 = 1;
    };
};
