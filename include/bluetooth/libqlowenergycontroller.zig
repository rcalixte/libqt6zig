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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn metaObject(self: QLowEnergyController) QMetaObject {
        return .{ .ptr = qtc.QLowEnergyController_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QLowEnergyController, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLowEnergyController_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QLowEnergyController, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLowEnergyController_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyController.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createCentral` instead
    ///
    pub const CreateCentral = createCentral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    pub fn createCentral(remoteDevice: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral(@ptrCast(remoteDevice.ptr)) };
    }

    /// ### DEPRECATED: Use `createCentral2` instead
    ///
    pub const CreateCentral2 = createCentral2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    pub fn createCentral2(remoteDevice: anytype, localDevice: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral2(@ptrCast(remoteDevice.ptr), @ptrCast(localDevice.ptr)) };
    }

    /// ### DEPRECATED: Use `createPeripheral` instead
    ///
    pub const CreatePeripheral = createPeripheral;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    pub fn createPeripheral(localDevice: anytype) QLowEnergyController {
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral(@ptrCast(localDevice.ptr)) };
    }

    /// ### DEPRECATED: Use `createPeripheral2` instead
    ///
    pub const CreatePeripheral2 = createPeripheral2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    pub fn createPeripheral2() QLowEnergyController {
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral2() };
    }

    /// ### DEPRECATED: Use `localAddress` instead
    ///
    pub const LocalAddress = localAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn localAddress(self: QLowEnergyController) QBluetoothAddress {
        return .{ .ptr = qtc.QLowEnergyController_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `remoteAddress` instead
    ///
    pub const RemoteAddress = remoteAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn remoteAddress(self: QLowEnergyController) QBluetoothAddress {
        return .{ .ptr = qtc.QLowEnergyController_RemoteAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `remoteDeviceUuid` instead
    ///
    pub const RemoteDeviceUuid = remoteDeviceUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteDeviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn remoteDeviceUuid(self: QLowEnergyController) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyController_RemoteDeviceUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `remoteName` instead
    ///
    pub const RemoteName = remoteName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn remoteName(self: QLowEnergyController, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyController_RemoteName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyController.remoteName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remoteAddressType` instead
    ///
    pub const RemoteAddressType = remoteAddressType;

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
    pub fn remoteAddressType(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_RemoteAddressType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRemoteAddressType` instead
    ///
    pub const SetRemoteAddressType = setRemoteAddressType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#setRemoteAddressType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` typeVal: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn setRemoteAddressType(self: QLowEnergyController, typeVal: i32) void {
        qtc.QLowEnergyController_SetRemoteAddressType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `connectToDevice` instead
    ///
    pub const ConnectToDevice = connectToDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectToDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn connectToDevice(self: QLowEnergyController) void {
        qtc.QLowEnergyController_ConnectToDevice(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnectFromDevice` instead
    ///
    pub const DisconnectFromDevice = disconnectFromDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnectFromDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn disconnectFromDevice(self: QLowEnergyController) void {
        qtc.QLowEnergyController_DisconnectFromDevice(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `discoverServices` instead
    ///
    pub const DiscoverServices = discoverServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoverServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn discoverServices(self: QLowEnergyController) void {
        qtc.QLowEnergyController_DiscoverServices(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `services` instead
    ///
    pub const Services = services;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#services)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn services(self: QLowEnergyController, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyController_Services(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QLowEnergyController.services: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `createServiceObject` instead
    ///
    pub const CreateServiceObject = createServiceObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QBluetoothUuid `
    ///
    pub fn createServiceObject(self: QLowEnergyController, service: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QLowEnergyController_CreateServiceObject(@ptrCast(self.ptr), @ptrCast(service.ptr)) };
    }

    /// ### DEPRECATED: Use `startAdvertising` instead
    ///
    pub const StartAdvertising = startAdvertising;

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
    pub fn startAdvertising(self: QLowEnergyController, parameters: anytype, advertisingData: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyAdvertisingParameters;
        comptime _ = @TypeOf(advertisingData)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyController_StartAdvertising(@ptrCast(self.ptr), @ptrCast(parameters.ptr), @ptrCast(advertisingData.ptr));
    }

    /// ### DEPRECATED: Use `stopAdvertising` instead
    ///
    pub const StopAdvertising = stopAdvertising;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stopAdvertising)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn stopAdvertising(self: QLowEnergyController) void {
        qtc.QLowEnergyController_StopAdvertising(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addService` instead
    ///
    pub const AddService = addService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QLowEnergyServiceData `
    ///
    pub fn addService(self: QLowEnergyController, service: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QLowEnergyServiceData;
        return .{ .ptr = qtc.QLowEnergyController_AddService(@ptrCast(self.ptr), @ptrCast(service.ptr)) };
    }

    /// ### DEPRECATED: Use `requestConnectionUpdate` instead
    ///
    pub const RequestConnectionUpdate = requestConnectionUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#requestConnectionUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` parameters: QLowEnergyConnectionParameters `
    ///
    pub fn requestConnectionUpdate(self: QLowEnergyController, parameters: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyController_RequestConnectionUpdate(@ptrCast(self.ptr), @ptrCast(parameters.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QLowEnergyController, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyController_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyController.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `role` instead
    ///
    pub const Role = role;

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
    pub fn role(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_Role(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mtu` instead
    ///
    pub const Mtu = mtu;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn mtu(self: QLowEnergyController) i32 {
        return qtc.QLowEnergyController_Mtu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readRssi` instead
    ///
    pub const ReadRssi = readRssi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#readRssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn readRssi(self: QLowEnergyController) void {
        qtc.QLowEnergyController_ReadRssi(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn connected(self: QLowEnergyController) void {
        qtc.QLowEnergyController_Connected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn onConnected(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnected` instead
    ///
    pub const Disconnected = disconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn disconnected(self: QLowEnergyController) void {
        qtc.QLowEnergyController_Disconnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnected` instead
    ///
    pub const OnDisconnected = onDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn onDisconnected(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _state: qlowenergycontroller_enums.ControllerState `
    ///
    pub fn stateChanged(self: QLowEnergyController, _state: i32) void {
        qtc.QLowEnergyController_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, state: qlowenergycontroller_enums.ControllerState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` newError: qlowenergycontroller_enums.Error `
    ///
    pub fn errorOccurred(self: QLowEnergyController, newError: i32) void {
        qtc.QLowEnergyController_ErrorOccurred(@ptrCast(self.ptr), @bitCast(newError));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, newError: qlowenergycontroller_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mtuChanged` instead
    ///
    pub const MtuChanged = mtuChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _mtu: i32 `
    ///
    pub fn mtuChanged(self: QLowEnergyController, _mtu: i32) void {
        qtc.QLowEnergyController_MtuChanged(@ptrCast(self.ptr), @bitCast(_mtu));
    }

    /// ### DEPRECATED: Use `onMtuChanged` instead
    ///
    pub const OnMtuChanged = onMtuChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, mtu: i32) callconv(.c) void `
    ///
    pub fn onMtuChanged(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i32) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_MtuChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rssiRead` instead
    ///
    pub const RssiRead = rssiRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` rssi: i16 `
    ///
    pub fn rssiRead(self: QLowEnergyController, rssi: i16) void {
        qtc.QLowEnergyController_RssiRead(@ptrCast(self.ptr), @bitCast(rssi));
    }

    /// ### DEPRECATED: Use `onRssiRead` instead
    ///
    pub const OnRssiRead = onRssiRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, rssi: i16) callconv(.c) void `
    ///
    pub fn onRssiRead(self: QLowEnergyController, callback: *const fn (QLowEnergyController, i16) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_RssiRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `serviceDiscovered` instead
    ///
    pub const ServiceDiscovered = serviceDiscovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` newService: QBluetoothUuid `
    ///
    pub fn serviceDiscovered(self: QLowEnergyController, newService: anytype) void {
        comptime _ = @TypeOf(newService)._is_QBluetoothUuid;
        qtc.QLowEnergyController_ServiceDiscovered(@ptrCast(self.ptr), @ptrCast(newService.ptr));
    }

    /// ### DEPRECATED: Use `onServiceDiscovered` instead
    ///
    pub const OnServiceDiscovered = onServiceDiscovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, newService: QBluetoothUuid) callconv(.c) void `
    ///
    pub fn onServiceDiscovered(self: QLowEnergyController, callback: *const fn (QLowEnergyController, QBluetoothUuid) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ServiceDiscovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `discoveryFinished` instead
    ///
    pub const DiscoveryFinished = discoveryFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn discoveryFinished(self: QLowEnergyController) void {
        qtc.QLowEnergyController_DiscoveryFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDiscoveryFinished` instead
    ///
    pub const OnDiscoveryFinished = onDiscoveryFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController) callconv(.c) void `
    ///
    pub fn onDiscoveryFinished(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_DiscoveryFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectionUpdated` instead
    ///
    pub const ConnectionUpdated = connectionUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` parameters: QLowEnergyConnectionParameters `
    ///
    pub fn connectionUpdated(self: QLowEnergyController, parameters: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyController_ConnectionUpdated(@ptrCast(self.ptr), @ptrCast(parameters.ptr));
    }

    /// ### DEPRECATED: Use `onConnectionUpdated` instead
    ///
    pub const OnConnectionUpdated = onConnectionUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` callback: *const fn (self: QLowEnergyController, parameters: QLowEnergyConnectionParameters) callconv(.c) void `
    ///
    pub fn onConnectionUpdated(self: QLowEnergyController, callback: *const fn (QLowEnergyController, QLowEnergyConnectionParameters) callconv(.c) void) void {
        qtc.QLowEnergyController_Connect_ConnectionUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyController.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyController.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createCentral22` instead
    ///
    pub const CreateCentral22 = createCentral22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createCentral22(remoteDevice: anytype, _parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral22(@ptrCast(remoteDevice.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createCentral3` instead
    ///
    pub const CreateCentral3 = createCentral3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
    ///
    /// ## Parameter(s):
    ///
    /// ` remoteDevice: QBluetoothDeviceInfo `
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createCentral3(remoteDevice: anytype, localDevice: anytype, _parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(remoteDevice)._is_QBluetoothDeviceInfo;
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreateCentral3(@ptrCast(remoteDevice.ptr), @ptrCast(localDevice.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createPeripheral22` instead
    ///
    pub const CreatePeripheral22 = createPeripheral22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` localDevice: QBluetoothAddress `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createPeripheral22(localDevice: anytype, _parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(localDevice)._is_QBluetoothAddress;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral22(@ptrCast(localDevice.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createPeripheral1` instead
    ///
    pub const CreatePeripheral1 = createPeripheral1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn createPeripheral1(_parent: anytype) QLowEnergyController {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreatePeripheral1(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createServiceObject2` instead
    ///
    pub const CreateServiceObject2 = createServiceObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QBluetoothUuid `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createServiceObject2(self: QLowEnergyController, service: anytype, _parent: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QBluetoothUuid;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_CreateServiceObject2(@ptrCast(self.ptr), @ptrCast(service.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `startAdvertising3` instead
    ///
    pub const StartAdvertising3 = startAdvertising3;

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
    pub fn startAdvertising3(self: QLowEnergyController, parameters: anytype, advertisingData: anytype, scanResponseData: anytype) void {
        comptime _ = @TypeOf(parameters)._is_QLowEnergyAdvertisingParameters;
        comptime _ = @TypeOf(advertisingData)._is_QLowEnergyAdvertisingData;
        comptime _ = @TypeOf(scanResponseData)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyController_StartAdvertising3(@ptrCast(self.ptr), @ptrCast(parameters.ptr), @ptrCast(advertisingData.ptr), @ptrCast(scanResponseData.ptr));
    }

    /// ### DEPRECATED: Use `addService2` instead
    ///
    pub const AddService2 = addService2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` service: QLowEnergyServiceData `
    ///
    /// ` _parent: QObject `
    ///
    pub fn addService2(self: QLowEnergyController, service: anytype, _parent: anytype) QLowEnergyService {
        comptime _ = @TypeOf(service)._is_QLowEnergyServiceData;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLowEnergyController_AddService2(@ptrCast(self.ptr), @ptrCast(service.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QLowEnergyController, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QLowEnergyController, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QLowEnergyController, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyController.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QLowEnergyController, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn isWidgetType(self: QLowEnergyController) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn isWindowType(self: QLowEnergyController) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn isQuickItemType(self: QLowEnergyController) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn signalsBlocked(self: QLowEnergyController) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QLowEnergyController, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn thread(self: QLowEnergyController) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QLowEnergyController, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QLowEnergyController, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QLowEnergyController, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QLowEnergyController, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QLowEnergyController, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QLowEnergyController, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QLowEnergyController.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QLowEnergyController, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QLowEnergyController, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QLowEnergyController, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QLowEnergyController, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn disconnect3(self: QLowEnergyController) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QLowEnergyController, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn dumpObjectTree(self: QLowEnergyController) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn dumpObjectInfo(self: QLowEnergyController) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QLowEnergyController, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QLowEnergyController, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QLowEnergyController, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QLowEnergyController.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QLowEnergyController.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn bindingStorage(self: QLowEnergyController) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn bindingStorage2(self: QLowEnergyController) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn destroyed(self: QLowEnergyController) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QLowEnergyController, callback: *const fn (QLowEnergyController) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn parent(self: QLowEnergyController) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QLowEnergyController, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn deleteLater(self: QLowEnergyController) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QLowEnergyController, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QLowEnergyController, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyController `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QLowEnergyController, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QLowEnergyController, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QLowEnergyController, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QLowEnergyController, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QLowEnergyController, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QLowEnergyController, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QLowEnergyController, callback: *const fn (QLowEnergyController, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QLowEnergyController, callback: *const fn (QLowEnergyController, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#dtor.QLowEnergyController)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyController `
    ///
    pub fn delete(self: QLowEnergyController) void {
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
