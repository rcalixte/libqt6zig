const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlowenergyservice_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html)
pub const qlowenergyservice = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLowEnergyService_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLowEnergyService_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLowEnergyService_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#includedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludedServices(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyService_IncludedServices(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBluetoothUuid, _arr.len) catch @panic("qlowenergyservice.IncludedServices: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlowenergyservice_enums.ServiceType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyService_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyservice_enums.ServiceState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyService_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn Characteristic(self: ?*anyopaque, uuid: ?*anyopaque) QtC.QLowEnergyCharacteristic {
        return qtc.QLowEnergyService_Characteristic(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Characteristics(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLowEnergyCharacteristic {
        const _arr: qtc.libqt_list = qtc.QLowEnergyService_Characteristics(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLowEnergyCharacteristic, _arr.len) catch @panic("qlowenergyservice.Characteristics: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyCharacteristic = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    pub fn ServiceUuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyService_ServiceUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyService_ServiceName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.ServiceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    pub fn DiscoverDetails(self: ?*anyopaque) void {
        qtc.QLowEnergyService_DiscoverDetails(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyservice_enums.ServiceError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyService_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` characteristic: QtC.QLowEnergyCharacteristic `
    ///
    pub fn Contains(self: ?*anyopaque, characteristic: ?*anyopaque) bool {
        return qtc.QLowEnergyService_Contains(@ptrCast(self), @ptrCast(characteristic));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` characteristic: QtC.QLowEnergyCharacteristic `
    ///
    pub fn ReadCharacteristic(self: ?*anyopaque, characteristic: ?*anyopaque) void {
        qtc.QLowEnergyService_ReadCharacteristic(@ptrCast(self), @ptrCast(characteristic));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` characteristic: QtC.QLowEnergyCharacteristic `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn WriteCharacteristic(self: ?*anyopaque, characteristic: ?*anyopaque, newValue: []u8) void {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteCharacteristic(@ptrCast(self), @ptrCast(characteristic), newValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` descriptor: QtC.QLowEnergyDescriptor `
    ///
    pub fn Contains2(self: ?*anyopaque, descriptor: ?*anyopaque) bool {
        return qtc.QLowEnergyService_Contains2(@ptrCast(self), @ptrCast(descriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` descriptor: QtC.QLowEnergyDescriptor `
    ///
    pub fn ReadDescriptor(self: ?*anyopaque, descriptor: ?*anyopaque) void {
        qtc.QLowEnergyService_ReadDescriptor(@ptrCast(self), @ptrCast(descriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` descriptor: QtC.QLowEnergyDescriptor `
    ///
    /// ` newValue: []u8 `
    ///
    pub fn WriteDescriptor(self: ?*anyopaque, descriptor: ?*anyopaque, newValue: []u8) void {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteDescriptor(@ptrCast(self), @ptrCast(descriptor), newValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` newState: qlowenergyservice_enums.ServiceState `
    ///
    pub fn StateChanged(self: ?*anyopaque, newState: i32) void {
        qtc.QLowEnergyService_StateChanged(@ptrCast(self), @bitCast(newState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, newState: qlowenergyservice_enums.ServiceState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_StateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` info: QtC.QLowEnergyCharacteristic `
    ///
    /// ` value: []u8 `
    ///
    pub fn CharacteristicChanged(self: ?*anyopaque, info: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicChanged(@ptrCast(self), @ptrCast(info), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, info: QtC.QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnCharacteristicChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` info: QtC.QLowEnergyCharacteristic `
    ///
    /// ` value: []u8 `
    ///
    pub fn CharacteristicRead(self: ?*anyopaque, info: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicRead(@ptrCast(self), @ptrCast(info), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, info: QtC.QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnCharacteristicRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` info: QtC.QLowEnergyCharacteristic `
    ///
    /// ` value: []u8 `
    ///
    pub fn CharacteristicWritten(self: ?*anyopaque, info: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_CharacteristicWritten(@ptrCast(self), @ptrCast(info), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, info: QtC.QLowEnergyCharacteristic, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnCharacteristicWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_CharacteristicWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` info: QtC.QLowEnergyDescriptor `
    ///
    /// ` value: []u8 `
    ///
    pub fn DescriptorRead(self: ?*anyopaque, info: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_DescriptorRead(@ptrCast(self), @ptrCast(info), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, info: QtC.QLowEnergyDescriptor, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnDescriptorRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_DescriptorRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` info: QtC.QLowEnergyDescriptor `
    ///
    /// ` value: []u8 `
    ///
    pub fn DescriptorWritten(self: ?*anyopaque, info: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyService_DescriptorWritten(@ptrCast(self), @ptrCast(info), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, info: QtC.QLowEnergyDescriptor, value: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnDescriptorWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_string) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_DescriptorWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` errorVal: qlowenergyservice_enums.ServiceError `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32) void {
        qtc.QLowEnergyService_ErrorOccurred(@ptrCast(self), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, errorVal: qlowenergyservice_enums.ServiceError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLowEnergyService_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyservice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` mode: qlowenergyservice_enums.DiscoveryMode `
    ///
    pub fn DiscoverDetails1(self: ?*anyopaque, mode: i32) void {
        qtc.QLowEnergyService_DiscoverDetails1(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` characteristic: QtC.QLowEnergyCharacteristic `
    ///
    /// ` newValue: []u8 `
    ///
    /// ` mode: qlowenergyservice_enums.WriteMode `
    ///
    pub fn WriteCharacteristic3(self: ?*anyopaque, characteristic: ?*anyopaque, newValue: []u8, mode: i32) void {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        qtc.QLowEnergyService_WriteCharacteristic3(@ptrCast(self), @ptrCast(characteristic), newValue_str, @bitCast(mode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlowenergyservice.Children: Memory allocation failed");
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService) callconv(.c) void `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
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
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QLowEnergyService `
    ///
    /// ` callback: *const fn (self: QtC.QLowEnergyService, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QLowEnergyService `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyService_Delete(@ptrCast(self));
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
