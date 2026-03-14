const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlowenergycontroller_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html)
pub const qlowenergycontroller = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLowEnergyController_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLowEnergyController_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLowEnergyController_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QtC.QBluetoothDeviceInfo `
    ///
    pub fn CreateCentral(remoteDevice: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreateCentral(@ptrCast(remoteDevice));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QtC.QBluetoothDeviceInfo `
    ///
    /// ` localDevice: QtC.QBluetoothAddress `
    ///
    pub fn CreateCentral2(remoteDevice: ?*anyopaque, localDevice: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreateCentral2(@ptrCast(remoteDevice), @ptrCast(localDevice));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` localDevice: QtC.QBluetoothAddress `
    ///
    pub fn CreatePeripheral(localDevice: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreatePeripheral(@ptrCast(localDevice));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    pub fn CreatePeripheral2() QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreatePeripheral2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn LocalAddress(self: ?*anyopaque) QtC.QBluetoothAddress {
        return qtc.QLowEnergyController_LocalAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn RemoteAddress(self: ?*anyopaque) QtC.QBluetoothAddress {
        return qtc.QLowEnergyController_RemoteAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteDeviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn RemoteDeviceUuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyController_RemoteDeviceUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemoteName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyController_RemoteName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.RemoteName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.ControllerState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyController_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddressType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn RemoteAddressType(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyController_RemoteAddressType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#setRemoteAddressType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` typeVal: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn SetRemoteAddressType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QLowEnergyController_SetRemoteAddressType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectToDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn ConnectToDevice(self: ?*anyopaque) void {
        qtc.QLowEnergyController_ConnectToDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnectFromDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn DisconnectFromDevice(self: ?*anyopaque) void {
        qtc.QLowEnergyController_DisconnectFromDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoverServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn DiscoverServices(self: ?*anyopaque) void {
        qtc.QLowEnergyController_DiscoverServices(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#services)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Services(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyController_Services(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBluetoothUuid, _arr.len) catch @panic("qlowenergycontroller.Services: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` service: QtC.QBluetoothUuid `
    ///
    pub fn CreateServiceObject(self: ?*anyopaque, service: ?*anyopaque) QtC.QLowEnergyService {
        return qtc.QLowEnergyController_CreateServiceObject(@ptrCast(self), @ptrCast(service));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#startAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` parameters: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` advertisingData: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn StartAdvertising(self: ?*anyopaque, parameters: ?*anyopaque, advertisingData: ?*anyopaque) void {
        qtc.QLowEnergyController_StartAdvertising(@ptrCast(self), @ptrCast(parameters), @ptrCast(advertisingData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stopAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn StopAdvertising(self: ?*anyopaque) void {
        qtc.QLowEnergyController_StopAdvertising(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` service: QtC.QLowEnergyServiceData `
    ///
    pub fn AddService(self: ?*anyopaque, service: ?*anyopaque) QtC.QLowEnergyService {
        return qtc.QLowEnergyController_AddService(@ptrCast(self), @ptrCast(service));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#requestConnectionUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` parameters: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn RequestConnectionUpdate(self: ?*anyopaque, parameters: ?*anyopaque) void {
        qtc.QLowEnergyController_RequestConnectionUpdate(@ptrCast(self), @ptrCast(parameters));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyController_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyController_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.Role `
    ///
    pub fn Role(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyController_Role(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn Mtu(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyController_Mtu(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#readRssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn ReadRssi(self: ?*anyopaque) void {
        qtc.QLowEnergyController_ReadRssi(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn Connected(self: ?*anyopaque) void {
        qtc.QLowEnergyController_Connected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_Connected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn Disconnected(self: ?*anyopaque) void {
        qtc.QLowEnergyController_Disconnected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_Disconnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` state: qlowenergycontroller_enums.ControllerState `
    ///
    pub fn StateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QLowEnergyController_StateChanged(@ptrCast(self), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, state: qlowenergycontroller_enums.ControllerState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_StateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` newError: qlowenergycontroller_enums.Error `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, newError: i32) void {
        qtc.QLowEnergyController_ErrorOccurred(@ptrCast(self), @bitCast(newError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, newError: qlowenergycontroller_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` mtu: i32 `
    ///
    pub fn MtuChanged(self: ?*anyopaque, mtu: i32) void {
        qtc.QLowEnergyController_MtuChanged(@ptrCast(self), @bitCast(mtu));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, mtu: i32) callconv(.c) void `
    ///
    pub fn OnMtuChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_MtuChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` rssi: i16 `
    ///
    pub fn RssiRead(self: ?*anyopaque, rssi: i16) void {
        qtc.QLowEnergyController_RssiRead(@ptrCast(self), @bitCast(rssi));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, rssi: i16) callconv(.c) void `
    ///
    pub fn OnRssiRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i16) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_RssiRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` newService: QtC.QBluetoothUuid `
    ///
    pub fn ServiceDiscovered(self: ?*anyopaque, newService: ?*anyopaque) void {
        qtc.QLowEnergyController_ServiceDiscovered(@ptrCast(self), @ptrCast(newService));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, newService: QtC.QBluetoothUuid) callconv(.c) void `
    ///
    pub fn OnServiceDiscovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ServiceDiscovered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn DiscoveryFinished(self: ?*anyopaque) void {
        qtc.QLowEnergyController_DiscoveryFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnDiscoveryFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_DiscoveryFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` parameters: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn ConnectionUpdated(self: ?*anyopaque, parameters: ?*anyopaque) void {
        qtc.QLowEnergyController_ConnectionUpdated(@ptrCast(self), @ptrCast(parameters));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, parameters: QtC.QLowEnergyConnectionParameters) callconv(.c) void `
    ///
    pub fn OnConnectionUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ConnectionUpdated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycontroller.Tr2: Memory allocation failed");
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
    /// ` remoteDevice: QtC.QBluetoothDeviceInfo `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateCentral22(remoteDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreateCentral22(@ptrCast(remoteDevice), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QtC.QBluetoothDeviceInfo `
    ///
    /// ` localDevice: QtC.QBluetoothAddress `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateCentral3(remoteDevice: ?*anyopaque, localDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreateCentral3(@ptrCast(remoteDevice), @ptrCast(localDevice), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` localDevice: QtC.QBluetoothAddress `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreatePeripheral22(localDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreatePeripheral22(@ptrCast(localDevice), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreatePeripheral1(parent: ?*anyopaque) QtC.QLowEnergyController {
        return qtc.QLowEnergyController_CreatePeripheral1(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` service: QtC.QBluetoothUuid `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn CreateServiceObject2(self: ?*anyopaque, service: ?*anyopaque, parent: ?*anyopaque) QtC.QLowEnergyService {
        return qtc.QLowEnergyController_CreateServiceObject2(@ptrCast(self), @ptrCast(service), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#startAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` parameters: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` advertisingData: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` scanResponseData: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn StartAdvertising3(self: ?*anyopaque, parameters: ?*anyopaque, advertisingData: ?*anyopaque, scanResponseData: ?*anyopaque) void {
        qtc.QLowEnergyController_StartAdvertising3(@ptrCast(self), @ptrCast(parameters), @ptrCast(advertisingData), @ptrCast(scanResponseData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` service: QtC.QLowEnergyServiceData `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn AddService2(self: ?*anyopaque, service: ?*anyopaque, parent: ?*anyopaque) QtC.QLowEnergyService {
        return qtc.QLowEnergyController_AddService2(@ptrCast(self), @ptrCast(service), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlowenergycontroller.Children: Memory allocation failed");
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
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
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
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
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
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
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyController, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QLowEnergyController `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyController_Delete(@ptrCast(self));
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
