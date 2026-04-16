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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn MetaObject(self: QLowEnergyService) QMetaObject {
        return .{ .ptr = qtc.QLowEnergyService_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QLowEnergyService, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLowEnergyService_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QLowEnergyService, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLowEnergyService_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#includedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludedServices(self: QLowEnergyService, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyService_IncludedServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("qlowenergyservice.IncludedServices: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn Type(self: QLowEnergyService) i32 {
        return qtc.QLowEnergyService_Type(@ptrCast(self.ptr));
    }

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
    pub fn State(self: QLowEnergyService) i32 {
        return qtc.QLowEnergyService_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn Characteristic(self: QLowEnergyService, uuid: anytype) QLowEnergyCharacteristic {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QLowEnergyService_Characteristic(@ptrCast(self.ptr), @ptrCast(uuid.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Characteristics(self: QLowEnergyService, allocator: std.mem.Allocator) []QLowEnergyCharacteristic {
        const _arr: qtc.libqt_list = qtc.QLowEnergyService_Characteristics(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyCharacteristic, _arr.len) catch @panic("qlowenergyservice.Characteristics: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyCharacteristic = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn ServiceUuid(self: QLowEnergyService) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyService_ServiceUuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceName(self: QLowEnergyService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyService_ServiceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.ServiceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn DiscoverDetails(self: QLowEnergyService) void {
        qtc.QLowEnergyService_DiscoverDetails(@ptrCast(self.ptr));
    }

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
    pub fn Error(self: QLowEnergyService) i32 {
        return qtc.QLowEnergyService_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` characteristic: QLowEnergyCharacteristic `
    ///
    pub fn Contains(self: QLowEnergyService, characteristic: anytype) bool {
        comptime _ = @TypeOf(characteristic)._is_QLowEnergyCharacteristic;
        return qtc.QLowEnergyService_Contains(@ptrCast(self.ptr), @ptrCast(characteristic.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` characteristic: QLowEnergyCharacteristic `
    ///
    pub fn ReadCharacteristic(self: QLowEnergyService, characteristic: anytype) void {
        comptime _ = @TypeOf(characteristic)._is_QLowEnergyCharacteristic;
        qtc.QLowEnergyService_ReadCharacteristic(@ptrCast(self.ptr), @ptrCast(characteristic.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` characteristic: QLowEnergyCharacteristic `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn WriteCharacteristic(self: QLowEnergyService, characteristic: anytype, newValue: []u8) void {
        comptime _ = @TypeOf(characteristic)._is_QLowEnergyCharacteristic;
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteCharacteristic(@ptrCast(self.ptr), @ptrCast(characteristic.ptr), newValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` descriptor: QLowEnergyDescriptor `
    ///
    pub fn Contains2(self: QLowEnergyService, descriptor: anytype) bool {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptor;
        return qtc.QLowEnergyService_Contains2(@ptrCast(self.ptr), @ptrCast(descriptor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` descriptor: QLowEnergyDescriptor `
    ///
    pub fn ReadDescriptor(self: QLowEnergyService, descriptor: anytype) void {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptor;
        qtc.QLowEnergyService_ReadDescriptor(@ptrCast(self.ptr), @ptrCast(descriptor.ptr));
    }

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
    pub fn WriteDescriptor(self: QLowEnergyService, descriptor: anytype, newValue: []u8) void {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptor;
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteDescriptor(@ptrCast(self.ptr), @ptrCast(descriptor.ptr), newValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` newState: qlowenergyservice_enums.ServiceState `
    ///
    pub fn StateChanged(self: QLowEnergyService, newState: i32) void {
        qtc.QLowEnergyService_StateChanged(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, newState: qlowenergyservice_enums.ServiceState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QLowEnergyService, callback: *const fn (QLowEnergyService, i32) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CharacteristicChanged(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyCharacteristic;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicChanged(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnCharacteristicChanged(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyCharacteristic, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CharacteristicRead(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyCharacteristic;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicRead(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnCharacteristicRead(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyCharacteristic, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CharacteristicWritten(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyCharacteristic;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicWritten(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnCharacteristicWritten(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyCharacteristic, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DescriptorRead(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyDescriptor;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_DescriptorRead(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyDescriptor, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnDescriptorRead(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyDescriptor, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_DescriptorRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DescriptorWritten(self: QLowEnergyService, info: anytype, value: []u8) void {
        comptime _ = @TypeOf(info)._is_QLowEnergyDescriptor;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_DescriptorWritten(@ptrCast(self.ptr), @ptrCast(info.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, info: QLowEnergyDescriptor, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnDescriptorWritten(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QLowEnergyDescriptor, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_DescriptorWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` errorVal: qlowenergyservice_enums.ServiceError `
    ///
    pub fn ErrorOccurred(self: QLowEnergyService, errorVal: i32) void {
        qtc.QLowEnergyService_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, errorVal: qlowenergyservice_enums.ServiceError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QLowEnergyService, callback: *const fn (QLowEnergyService, i32) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` mode: qlowenergyservice_enums.DiscoveryMode `
    ///
    pub fn DiscoverDetails1(self: QLowEnergyService, mode: i32) void {
        qtc.QLowEnergyService_DiscoverDetails1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` characteristic: QLowEnergyCharacteristic `
    ///
    /// ` newValue: []u8 `
    ///
    /// ` mode: qlowenergyservice_enums.WriteMode `
    ///
    pub fn WriteCharacteristic3(self: QLowEnergyService, characteristic: anytype, newValue: []u8, mode: i32) void {
        comptime _ = @TypeOf(characteristic)._is_QLowEnergyCharacteristic;
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteCharacteristic3(@ptrCast(self.ptr), @ptrCast(characteristic.ptr), newValue_str, @bitCast(mode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QLowEnergyService, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QLowEnergyService, watched: anytype, event: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QLowEnergyService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QLowEnergyService, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn IsWidgetType(self: QLowEnergyService) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn IsWindowType(self: QLowEnergyService) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn IsQuickItemType(self: QLowEnergyService) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn SignalsBlocked(self: QLowEnergyService) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QLowEnergyService, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn Thread(self: QLowEnergyService) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QLowEnergyService, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QLowEnergyService, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QLowEnergyService, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QLowEnergyService, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QLowEnergyService, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QLowEnergyService, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qlowenergyservice.Children: Memory allocation failed");
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
    /// ` self: QLowEnergyService `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QLowEnergyService, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QLowEnergyService, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QLowEnergyService, obj: anytype) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QLowEnergyService, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn Disconnect3(self: QLowEnergyService) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QLowEnergyService, receiver: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    pub fn DumpObjectTree(self: QLowEnergyService) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn DumpObjectInfo(self: QLowEnergyService) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QLowEnergyService, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QLowEnergyService, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QLowEnergyService, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlowenergyservice.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlowenergyservice.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QLowEnergyService `
    ///
    pub fn BindingStorage(self: QLowEnergyService) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn BindingStorage2(self: QLowEnergyService) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn Destroyed(self: QLowEnergyService) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QLowEnergyService, callback: *const fn (QLowEnergyService) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn Parent(self: QLowEnergyService) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QLowEnergyService, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn DeleteLater(self: QLowEnergyService) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QLowEnergyService, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QLowEnergyService, time: i64, timerType: i32) i32 {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QLowEnergyService, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QLowEnergyService, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QLowEnergyService, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QLowEnergyService, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QLowEnergyService, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QLowEnergyService, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QLowEnergyService, callback: *const fn (QLowEnergyService, QObject) callconv(.c) void) void {
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
    /// ` self: QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QLowEnergyService, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QLowEnergyService, callback: *const fn (QLowEnergyService, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#dtor.QLowEnergyService)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyService `
    ///
    pub fn Delete(self: QLowEnergyService) void {
        qtc.QLowEnergyService_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)
pub const enums = struct {
    pub const ServiceType = enum(i32) {
        pub const PrimaryService: i32 = 1;
        pub const IncludedService: i32 = 2;
    };

    pub const ServiceError = enum(i32) {
        pub const NoError: i32 = 0;
        pub const OperationError: i32 = 1;
        pub const CharacteristicWriteError: i32 = 2;
        pub const DescriptorWriteError: i32 = 3;
        pub const UnknownError: i32 = 4;
        pub const CharacteristicReadError: i32 = 5;
        pub const DescriptorReadError: i32 = 6;
    };

    pub const ServiceState = enum(i32) {
        pub const InvalidService: i32 = 0;
        pub const RemoteService: i32 = 1;
        pub const RemoteServiceDiscovering: i32 = 2;
        pub const RemoteServiceDiscovered: i32 = 3;
        pub const LocalService: i32 = 4;
        pub const DiscoveryRequired: i32 = 1;
        pub const DiscoveringService: i32 = 2;
        pub const ServiceDiscovered: i32 = 3;
    };

    pub const DiscoveryMode = enum(i32) {
        pub const FullDiscovery: i32 = 0;
        pub const SkipValueDiscovery: i32 = 1;
    };

    pub const WriteMode = enum(i32) {
        pub const WriteWithResponse: i32 = 0;
        pub const WriteWithoutResponse: i32 = 1;
        pub const WriteSigned: i32 = 2;
    };
};
