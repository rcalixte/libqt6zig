const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QEvent = @import("libqt6").QEvent;
const QLowEnergyCharacteristic = @import("libqt6").QLowEnergyCharacteristic;
const QLowEnergyDescriptor = @import("libqt6").QLowEnergyDescriptor;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qlowenergyservice_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html)
pub const QLowEnergyService = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyService,

    pub const _is_QLowEnergyService = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn metaObject(self: QLowEnergyService) QMetaObject {
        return .{ .ptr = qtc.QLowEnergyService_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QLowEnergyService, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLowEnergyService_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QLowEnergyService, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLowEnergyService_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyService.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `includedServices` instead
    ///
    pub const IncludedServices = includedServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#includedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn includedServices(self: QLowEnergyService, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyService_IncludedServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QLowEnergyService.includedServices: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlowenergyservice_enums.ServiceType `
    ///
    pub fn type0(self: QLowEnergyService) i32 {
        return qtc.QLowEnergyService_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyservice_enums.ServiceState `
    ///
    pub fn state(self: QLowEnergyService) i32 {
        return qtc.QLowEnergyService_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `characteristic` instead
    ///
    pub const Characteristic = characteristic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn characteristic(self: QLowEnergyService, uuid: anytype) QLowEnergyCharacteristic {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QLowEnergyService_Characteristic(@ptrCast(self.ptr), @ptrCast(uuid.ptr)) };
    }

    /// ### DEPRECATED: Use `characteristics` instead
    ///
    pub const Characteristics = characteristics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn characteristics(self: QLowEnergyService, allocator: std.mem.Allocator) []QLowEnergyCharacteristic {
        const _arr: qtc.libqt_list = qtc.QLowEnergyService_Characteristics(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyCharacteristic, _arr.len) catch @panic("QLowEnergyService.characteristics: Memory allocation failed");
        const _data_val: [*]QtC.QLowEnergyCharacteristic = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceUuid` instead
    ///
    pub const ServiceUuid = serviceUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn serviceUuid(self: QLowEnergyService) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyService_ServiceUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `serviceName` instead
    ///
    pub const ServiceName = serviceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceName(self: QLowEnergyService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyService_ServiceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyService.serviceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `discoverDetails` instead
    ///
    pub const DiscoverDetails = discoverDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn discoverDetails(self: QLowEnergyService) void {
        qtc.QLowEnergyService_DiscoverDetails(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyservice_enums.ServiceError `
    ///
    pub fn error0(self: QLowEnergyService) i32 {
        return qtc.QLowEnergyService_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` _characteristic: QLowEnergyCharacteristic `
    ///
    pub fn contains(self: QLowEnergyService, _characteristic: anytype) bool {
        comptime _ = @TypeOf(_characteristic)._is_QLowEnergyCharacteristic;
        return qtc.QLowEnergyService_Contains(@ptrCast(self.ptr), @ptrCast(_characteristic.ptr));
    }

    /// ### DEPRECATED: Use `readCharacteristic` instead
    ///
    pub const ReadCharacteristic = readCharacteristic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` _characteristic: QLowEnergyCharacteristic `
    ///
    pub fn readCharacteristic(self: QLowEnergyService, _characteristic: anytype) void {
        comptime _ = @TypeOf(_characteristic)._is_QLowEnergyCharacteristic;
        qtc.QLowEnergyService_ReadCharacteristic(@ptrCast(self.ptr), @ptrCast(_characteristic.ptr));
    }

    /// ### DEPRECATED: Use `writeCharacteristic` instead
    ///
    pub const WriteCharacteristic = writeCharacteristic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` _characteristic: QLowEnergyCharacteristic `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn writeCharacteristic(self: QLowEnergyService, _characteristic: anytype, newValue: []u8) void {
        comptime _ = @TypeOf(_characteristic)._is_QLowEnergyCharacteristic;
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteCharacteristic(@ptrCast(self.ptr), @ptrCast(_characteristic.ptr), newValue_str);
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` descriptor: QLowEnergyDescriptor `
    ///
    pub fn contains2(self: QLowEnergyService, descriptor: anytype) bool {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptor;
        return qtc.QLowEnergyService_Contains2(@ptrCast(self.ptr), @ptrCast(descriptor.ptr));
    }

    /// ### DEPRECATED: Use `readDescriptor` instead
    ///
    pub const ReadDescriptor = readDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` descriptor: QLowEnergyDescriptor `
    ///
    pub fn readDescriptor(self: QLowEnergyService, descriptor: anytype) void {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptor;
        qtc.QLowEnergyService_ReadDescriptor(@ptrCast(self.ptr), @ptrCast(descriptor.ptr));
    }

    /// ### DEPRECATED: Use `writeDescriptor` instead
    ///
    pub const WriteDescriptor = writeDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` descriptor: QLowEnergyDescriptor `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn writeDescriptor(self: QLowEnergyService, descriptor: anytype, newValue: []u8) void {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptor;
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteDescriptor(@ptrCast(self.ptr), @ptrCast(descriptor.ptr), newValue_str);
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` newState: qlowenergyservice_enums.ServiceState `
    ///
    pub fn stateChanged(self: QLowEnergyService, newState: i32) void {
        qtc.QLowEnergyService_StateChanged(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, newState: qlowenergyservice_enums.ServiceState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QLowEnergyService, callback: *const fn (QLowEnergyService, i32) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `characteristicChanged` instead
    ///
    pub const CharacteristicChanged = characteristicChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` info: QLowEnergyCharacteristic `
    ///
    /// ` value: []u8 `
    ///
    pub fn characteristicChanged(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyCharacteristic;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicChanged(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### DEPRECATED: Use `onCharacteristicChanged` instead
    ///
    pub const OnCharacteristicChanged = onCharacteristicChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onCharacteristicChanged(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyCharacteristic, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `characteristicRead` instead
    ///
    pub const CharacteristicRead = characteristicRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` info: QLowEnergyCharacteristic `
    ///
    /// ` value: []u8 `
    ///
    pub fn characteristicRead(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyCharacteristic;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicRead(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### DEPRECATED: Use `onCharacteristicRead` instead
    ///
    pub const OnCharacteristicRead = onCharacteristicRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onCharacteristicRead(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyCharacteristic, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `characteristicWritten` instead
    ///
    pub const CharacteristicWritten = characteristicWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` info: QLowEnergyCharacteristic `
    ///
    /// ` value: []u8 `
    ///
    pub fn characteristicWritten(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyCharacteristic;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicWritten(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### DEPRECATED: Use `onCharacteristicWritten` instead
    ///
    pub const OnCharacteristicWritten = onCharacteristicWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onCharacteristicWritten(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyCharacteristic, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `descriptorRead` instead
    ///
    pub const DescriptorRead = descriptorRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` info: QLowEnergyDescriptor `
    ///
    /// ` value: []u8 `
    ///
    pub fn descriptorRead(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyDescriptor;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_DescriptorRead(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### DEPRECATED: Use `onDescriptorRead` instead
    ///
    pub const OnDescriptorRead = onDescriptorRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyDescriptor, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onDescriptorRead(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyDescriptor, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_DescriptorRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `descriptorWritten` instead
    ///
    pub const DescriptorWritten = descriptorWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` info: QLowEnergyDescriptor `
    ///
    /// ` value: []u8 `
    ///
    pub fn descriptorWritten(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyDescriptor;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_DescriptorWritten(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### DEPRECATED: Use `onDescriptorWritten` instead
    ///
    pub const OnDescriptorWritten = onDescriptorWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyDescriptor, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onDescriptorWritten(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyDescriptor, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_DescriptorWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` errorVal: qlowenergyservice_enums.ServiceError `
    ///
    pub fn errorOccurred(self: QLowEnergyService, errorVal: i32) void {
        qtc.QLowEnergyService_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, errorVal: qlowenergyservice_enums.ServiceError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QLowEnergyService, callback: *const fn (QLowEnergyService, i32) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyService.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyService.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `discoverDetails1` instead
    ///
    pub const DiscoverDetails1 = discoverDetails1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` mode: qlowenergyservice_enums.DiscoveryMode `
    ///
    pub fn discoverDetails1(self: QLowEnergyService, mode: i32) void {
        qtc.QLowEnergyService_DiscoverDetails1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `writeCharacteristic3` instead
    ///
    pub const WriteCharacteristic3 = writeCharacteristic3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` _characteristic: QLowEnergyCharacteristic `
    ///
    /// ` newValue: []u8 `
    ///
    /// ` mode: qlowenergyservice_enums.WriteMode `
    ///
    pub fn writeCharacteristic3(self: QLowEnergyService, _characteristic: anytype, newValue: []u8, mode: i32) void {
        comptime _ = @TypeOf(_characteristic)._is_QLowEnergyCharacteristic;
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteCharacteristic3(@ptrCast(self.ptr), @ptrCast(_characteristic.ptr), newValue_str, @bitCast(mode));
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
    /// ` self: QLowEnergyService `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QLowEnergyService, _event: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QLowEnergyService, watched: anytype, _event: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QLowEnergyService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyService.objectName: Memory allocation failed");
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
    /// ` self: QLowEnergyService `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QLowEnergyService, name: []const u8) void {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn isWidgetType(self: QLowEnergyService) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn isWindowType(self: QLowEnergyService) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn isQuickItemType(self: QLowEnergyService) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn signalsBlocked(self: QLowEnergyService) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QLowEnergyService, b: bool) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn thread(self: QLowEnergyService) QThread {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QLowEnergyService, _thread: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QLowEnergyService, interval: i32) i32 {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QLowEnergyService, time: i64) i32 {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QLowEnergyService, id: i32) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QLowEnergyService, id: i32) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QLowEnergyService, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QLowEnergyService.children: Memory allocation failed");
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
    /// ` self: QLowEnergyService `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QLowEnergyService, _parent: anytype) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QLowEnergyService, filterObj: anytype) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QLowEnergyService, obj: anytype) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QLowEnergyService, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn disconnect3(self: QLowEnergyService) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QLowEnergyService, receiver: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn dumpObjectTree(self: QLowEnergyService) void {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn dumpObjectInfo(self: QLowEnergyService) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QLowEnergyService, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QLowEnergyService, name: [:0]const u8) QVariant {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QLowEnergyService, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QLowEnergyService.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QLowEnergyService.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QLowEnergyService `
    ///
    pub fn bindingStorage(self: QLowEnergyService) QBindingStorage {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn bindingStorage2(self: QLowEnergyService) QBindingStorage {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn destroyed(self: QLowEnergyService) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QLowEnergyService, callback: *const fn (QLowEnergyService) callconv(.c) void) void {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn parent(self: QLowEnergyService) QObject {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QLowEnergyService, classname: [:0]const u8) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn deleteLater(self: QLowEnergyService) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QLowEnergyService, interval: i32, timerType: i32) i32 {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QLowEnergyService, time: i64, timerType: i32) i32 {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QLowEnergyService, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QLowEnergyService, signal: [:0]const u8) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QLowEnergyService, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QLowEnergyService, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QLowEnergyService, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QLowEnergyService, param1: anytype) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QObject) callconv(.c) void) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QLowEnergyService, callback: *const fn (QLowEnergyService, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#dtor.QLowEnergyService)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn delete(self: QLowEnergyService) void {
        qtc.QLowEnergyService_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)
pub const enums = struct {
    pub const ServiceType = enum {
        pub const PrimaryService: i32 = 1;
        pub const IncludedService: i32 = 2;
    };

    pub const ServiceError = enum {
        pub const NoError: i32 = 0;
        pub const OperationError: i32 = 1;
        pub const CharacteristicWriteError: i32 = 2;
        pub const DescriptorWriteError: i32 = 3;
        pub const UnknownError: i32 = 4;
        pub const CharacteristicReadError: i32 = 5;
        pub const DescriptorReadError: i32 = 6;
    };

    pub const ServiceState = enum {
        pub const InvalidService: i32 = 0;
        pub const RemoteService: i32 = 1;
        pub const RemoteServiceDiscovering: i32 = 2;
        pub const RemoteServiceDiscovered: i32 = 3;
        pub const LocalService: i32 = 4;
        pub const DiscoveryRequired: i32 = 1;
        pub const DiscoveringService: i32 = 2;
        pub const ServiceDiscovered: i32 = 3;
    };

    pub const DiscoveryMode = enum {
        pub const FullDiscovery: i32 = 0;
        pub const SkipValueDiscovery: i32 = 1;
    };

    pub const WriteMode = enum {
        pub const WriteWithResponse: i32 = 0;
        pub const WriteWithoutResponse: i32 = 1;
        pub const WriteSigned: i32 = 2;
    };
};
