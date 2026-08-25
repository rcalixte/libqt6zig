const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const qbluetoothdeviceinfo_enums = enums;
const std = @import("std");
const Map_QBluetoothUuid_Sliceu8 = std.AutoHashMapUnmanaged(QBluetoothUuid, [][]u8);
const Map_u16_Sliceu8 = std.AutoHashMapUnmanaged(u16, [][]u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)
pub const QBluetoothDeviceInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothDeviceInfo,

    pub const _is_QBluetoothDeviceInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothDeviceInfo object in C++ memory
    ///
    pub fn new() QBluetoothDeviceInfo {
        return .{ .ptr = qtc.QBluetoothDeviceInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothDeviceInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _address: QBluetoothAddress `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` classOfDevice: u32 `
    ///
    pub fn new2(_address: anytype, _name: []const u8, classOfDevice: u32) QBluetoothDeviceInfo {
        comptime _ = @TypeOf(_address)._is_QBluetoothAddress;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QBluetoothDeviceInfo_new2(@ptrCast(_address.ptr), name_str, @bitCast(classOfDevice)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothDeviceInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` classOfDevice: u32 `
    ///
    pub fn new3(uuid: anytype, _name: []const u8, classOfDevice: u32) QBluetoothDeviceInfo {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QBluetoothDeviceInfo_new3(@ptrCast(uuid.ptr), name_str, @bitCast(classOfDevice)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBluetoothDeviceInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothDeviceInfo `
    ///
    pub fn new4(other: anytype) QBluetoothDeviceInfo {
        comptime _ = @TypeOf(other)._is_QBluetoothDeviceInfo;
        return .{ .ptr = qtc.QBluetoothDeviceInfo_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn isValid(self: QBluetoothDeviceInfo) bool {
        return qtc.QBluetoothDeviceInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCached` instead
    ///
    pub const IsCached = isCached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#isCached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn isCached(self: QBluetoothDeviceInfo) bool {
        return qtc.QBluetoothDeviceInfo_IsCached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCached` instead
    ///
    pub const SetCached = setCached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setCached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` cached: bool `
    ///
    pub fn setCached(self: QBluetoothDeviceInfo, cached: bool) void {
        qtc.QBluetoothDeviceInfo_SetCached(@ptrCast(self.ptr), cached);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` other: QBluetoothDeviceInfo `
    ///
    pub fn operatorAssign(self: QBluetoothDeviceInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothDeviceInfo;
        qtc.QBluetoothDeviceInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `address` instead
    ///
    pub const Address = address;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn address(self: QBluetoothDeviceInfo) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothDeviceInfo_Address(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothDeviceInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothDeviceInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QBluetoothDeviceInfo, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QBluetoothDeviceInfo_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `serviceClasses` instead
    ///
    pub const ServiceClasses = serviceClasses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetoothdeviceinfo_enums.ServiceClass `
    ///
    pub fn serviceClasses(self: QBluetoothDeviceInfo) i32 {
        return qtc.QBluetoothDeviceInfo_ServiceClasses(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `majorDeviceClass` instead
    ///
    pub const MajorDeviceClass = majorDeviceClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#majorDeviceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothdeviceinfo_enums.MajorDeviceClass `
    ///
    pub fn majorDeviceClass(self: QBluetoothDeviceInfo) i32 {
        return qtc.QBluetoothDeviceInfo_MajorDeviceClass(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minorDeviceClass` instead
    ///
    pub const MinorDeviceClass = minorDeviceClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#minorDeviceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn minorDeviceClass(self: QBluetoothDeviceInfo) u8 {
        return qtc.QBluetoothDeviceInfo_MinorDeviceClass(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rssi` instead
    ///
    pub const Rssi = rssi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#rssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn rssi(self: QBluetoothDeviceInfo) i16 {
        return qtc.QBluetoothDeviceInfo_Rssi(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRssi` instead
    ///
    pub const SetRssi = setRssi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setRssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` signal: i16 `
    ///
    pub fn setRssi(self: QBluetoothDeviceInfo, signal: i16) void {
        qtc.QBluetoothDeviceInfo_SetRssi(@ptrCast(self.ptr), @bitCast(signal));
    }

    /// ### DEPRECATED: Use `serviceUuids` instead
    ///
    pub const ServiceUuids = serviceUuids;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceUuids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceUuids(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceInfo_ServiceUuids(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QBluetoothDeviceInfo.serviceUuids: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setServiceUuids` instead
    ///
    pub const SetServiceUuids = setServiceUuids;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setServiceUuids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` uuids: []QBluetoothUuid `
    ///
    pub fn setServiceUuids(self: QBluetoothDeviceInfo, uuids: []QBluetoothUuid) void {
        const uuids_list = qtc.libqt_list{
            .len = uuids.len,
            .data = @ptrCast(uuids.ptr),
        };
        qtc.QBluetoothDeviceInfo_SetServiceUuids(@ptrCast(self.ptr), uuids_list);
    }

    /// ### DEPRECATED: Use `manufacturerIds` instead
    ///
    pub const ManufacturerIds = manufacturerIds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn manufacturerIds(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceInfo_ManufacturerIds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u16, _arr.len) catch @panic("QBluetoothDeviceInfo.manufacturerIds: Memory allocation failed");
        const _data_val: [*]u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `manufacturerData` instead
    ///
    pub const ManufacturerData = manufacturerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` manufacturerId: u16 `
    ///
    pub fn manufacturerData(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator, manufacturerId: u16) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QBluetoothDeviceInfo_ManufacturerData(@ptrCast(self.ptr), @bitCast(manufacturerId));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothDeviceInfo.manufacturerData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setManufacturerData` instead
    ///
    pub const SetManufacturerData = setManufacturerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setManufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` manufacturerId: u16 `
    ///
    /// ` data: []u8 `
    ///
    pub fn setManufacturerData(self: QBluetoothDeviceInfo, manufacturerId: u16, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QBluetoothDeviceInfo_SetManufacturerData(@ptrCast(self.ptr), @bitCast(manufacturerId), data_str);
    }

    /// ### DEPRECATED: Use `manufacturerData2` instead
    ///
    pub const ManufacturerData2 = manufacturerData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn manufacturerData2(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator) Map_u16_Sliceu8 {
        const _map: qtc.libqt_map = qtc.QBluetoothDeviceInfo_ManufacturerData2(@ptrCast(self.ptr));
        var _ret: Map_u16_Sliceu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QBluetoothDeviceInfo.manufacturerData2: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j|
                    qtc.libqt_free(_value_strings[j].data);
                qtc.libqt_free(_value_list.data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]u16 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value.data));
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("QBluetoothDeviceInfo.manufacturerData2: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("QBluetoothDeviceInfo.manufacturerData2: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceIds` instead
    ///
    pub const ServiceIds = serviceIds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceIds(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceInfo_ServiceIds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QBluetoothDeviceInfo.serviceIds: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceData` instead
    ///
    pub const ServiceData = serviceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` serviceId: QBluetoothUuid `
    ///
    pub fn serviceData(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator, serviceId: anytype) []u8 {
        comptime _ = @TypeOf(serviceId)._is_QBluetoothUuid;
        var _bytearray: qtc.libqt_string = qtc.QBluetoothDeviceInfo_ServiceData(@ptrCast(self.ptr), @ptrCast(serviceId.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothDeviceInfo.serviceData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setServiceData` instead
    ///
    pub const SetServiceData = setServiceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setServiceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` serviceId: QBluetoothUuid `
    ///
    /// ` data: []u8 `
    ///
    pub fn setServiceData(self: QBluetoothDeviceInfo, serviceId: anytype, data: []u8) bool {
        comptime _ = @TypeOf(serviceId)._is_QBluetoothUuid;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QBluetoothDeviceInfo_SetServiceData(@ptrCast(self.ptr), @ptrCast(serviceId.ptr), data_str);
    }

    /// ### DEPRECATED: Use `serviceData2` instead
    ///
    pub const ServiceData2 = serviceData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceData2(self: QBluetoothDeviceInfo, allocator: std.mem.Allocator) Map_QBluetoothUuid_Sliceu8 {
        const _map: qtc.libqt_map = qtc.QBluetoothDeviceInfo_ServiceData2(@ptrCast(self.ptr));
        var _ret: Map_QBluetoothUuid_Sliceu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QBluetoothDeviceInfo.serviceData2: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j|
                    qtc.libqt_free(_value_strings[j].data);
                qtc.libqt_free(_value_list.data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value.data));
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("QBluetoothDeviceInfo.serviceData2: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("QBluetoothDeviceInfo.serviceData2: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.putAssumeCapacity(.{ .ptr = @ptrCast(_key) }, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setCoreConfigurations` instead
    ///
    pub const SetCoreConfigurations = setCoreConfigurations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setCoreConfigurations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` coreConfigs: flag of qbluetoothdeviceinfo_enums.CoreConfiguration `
    ///
    pub fn setCoreConfigurations(self: QBluetoothDeviceInfo, coreConfigs: i32) void {
        qtc.QBluetoothDeviceInfo_SetCoreConfigurations(@ptrCast(self.ptr), @bitCast(coreConfigs));
    }

    /// ### DEPRECATED: Use `coreConfigurations` instead
    ///
    pub const CoreConfigurations = coreConfigurations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#coreConfigurations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetoothdeviceinfo_enums.CoreConfiguration `
    ///
    pub fn coreConfigurations(self: QBluetoothDeviceInfo) i32 {
        return qtc.QBluetoothDeviceInfo_CoreConfigurations(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDeviceUuid` instead
    ///
    pub const SetDeviceUuid = setDeviceUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setDeviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn setDeviceUuid(self: QBluetoothDeviceInfo, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothDeviceInfo_SetDeviceUuid(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### DEPRECATED: Use `deviceUuid` instead
    ///
    pub const DeviceUuid = deviceUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#deviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn deviceUuid(self: QBluetoothDeviceInfo) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothDeviceInfo_DeviceUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#dtor.QBluetoothDeviceInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothDeviceInfo `
    ///
    pub fn delete(self: QBluetoothDeviceInfo) void {
        qtc.QBluetoothDeviceInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)
pub const enums = struct {
    pub const MajorDeviceClass = enum {
        pub const MiscellaneousDevice: i32 = 0;
        pub const ComputerDevice: i32 = 1;
        pub const PhoneDevice: i32 = 2;
        pub const NetworkDevice: i32 = 3;
        pub const AudioVideoDevice: i32 = 4;
        pub const PeripheralDevice: i32 = 5;
        pub const ImagingDevice: i32 = 6;
        pub const WearableDevice: i32 = 7;
        pub const ToyDevice: i32 = 8;
        pub const HealthDevice: i32 = 9;
        pub const UncategorizedDevice: i32 = 31;
    };

    pub const MinorMiscellaneousClass = enum {
        pub const UncategorizedMiscellaneous: i32 = 0;
    };

    pub const MinorComputerClass = enum {
        pub const UncategorizedComputer: i32 = 0;
        pub const DesktopComputer: i32 = 1;
        pub const ServerComputer: i32 = 2;
        pub const LaptopComputer: i32 = 3;
        pub const HandheldClamShellComputer: i32 = 4;
        pub const HandheldComputer: i32 = 5;
        pub const WearableComputer: i32 = 6;
    };

    pub const MinorPhoneClass = enum {
        pub const UncategorizedPhone: i32 = 0;
        pub const CellularPhone: i32 = 1;
        pub const CordlessPhone: i32 = 2;
        pub const SmartPhone: i32 = 3;
        pub const WiredModemOrVoiceGatewayPhone: i32 = 4;
        pub const CommonIsdnAccessPhone: i32 = 5;
    };

    pub const MinorNetworkClass = enum {
        pub const NetworkFullService: i32 = 0;
        pub const NetworkLoadFactorOne: i32 = 8;
        pub const NetworkLoadFactorTwo: i32 = 16;
        pub const NetworkLoadFactorThree: i32 = 24;
        pub const NetworkLoadFactorFour: i32 = 32;
        pub const NetworkLoadFactorFive: i32 = 40;
        pub const NetworkLoadFactorSix: i32 = 48;
        pub const NetworkNoService: i32 = 56;
    };

    pub const MinorAudioVideoClass = enum {
        pub const UncategorizedAudioVideoDevice: i32 = 0;
        pub const WearableHeadsetDevice: i32 = 1;
        pub const HandsFreeDevice: i32 = 2;
        pub const Microphone: i32 = 4;
        pub const Loudspeaker: i32 = 5;
        pub const Headphones: i32 = 6;
        pub const PortableAudioDevice: i32 = 7;
        pub const CarAudio: i32 = 8;
        pub const SetTopBox: i32 = 9;
        pub const HiFiAudioDevice: i32 = 10;
        pub const Vcr: i32 = 11;
        pub const VideoCamera: i32 = 12;
        pub const Camcorder: i32 = 13;
        pub const VideoMonitor: i32 = 14;
        pub const VideoDisplayAndLoudspeaker: i32 = 15;
        pub const VideoConferencing: i32 = 16;
        pub const GamingDevice: i32 = 18;
    };

    pub const MinorPeripheralClass = enum {
        pub const UncategorizedPeripheral: i32 = 0;
        pub const KeyboardPeripheral: i32 = 16;
        pub const PointingDevicePeripheral: i32 = 32;
        pub const KeyboardWithPointingDevicePeripheral: i32 = 48;
        pub const JoystickPeripheral: i32 = 1;
        pub const GamepadPeripheral: i32 = 2;
        pub const RemoteControlPeripheral: i32 = 3;
        pub const SensingDevicePeripheral: i32 = 4;
        pub const DigitizerTabletPeripheral: i32 = 5;
        pub const CardReaderPeripheral: i32 = 6;
    };

    pub const MinorImagingClass = enum {
        pub const UncategorizedImagingDevice: i32 = 0;
        pub const ImageDisplay: i32 = 4;
        pub const ImageCamera: i32 = 8;
        pub const ImageScanner: i32 = 16;
        pub const ImagePrinter: i32 = 32;
    };

    pub const MinorWearableClass = enum {
        pub const UncategorizedWearableDevice: i32 = 0;
        pub const WearableWristWatch: i32 = 1;
        pub const WearablePager: i32 = 2;
        pub const WearableJacket: i32 = 3;
        pub const WearableHelmet: i32 = 4;
        pub const WearableGlasses: i32 = 5;
    };

    pub const MinorToyClass = enum {
        pub const UncategorizedToy: i32 = 0;
        pub const ToyRobot: i32 = 1;
        pub const ToyVehicle: i32 = 2;
        pub const ToyDoll: i32 = 3;
        pub const ToyController: i32 = 4;
        pub const ToyGame: i32 = 5;
    };

    pub const MinorHealthClass = enum {
        pub const UncategorizedHealthDevice: i32 = 0;
        pub const HealthBloodPressureMonitor: i32 = 1;
        pub const HealthThermometer: i32 = 2;
        pub const HealthWeightScale: i32 = 3;
        pub const HealthGlucoseMeter: i32 = 4;
        pub const HealthPulseOximeter: i32 = 5;
        pub const HealthDataDisplay: i32 = 7;
        pub const HealthStepCounter: i32 = 8;
    };

    pub const ServiceClass = enum {
        pub const NoService: i32 = 0;
        pub const PositioningService: i32 = 1;
        pub const NetworkingService: i32 = 2;
        pub const RenderingService: i32 = 4;
        pub const CapturingService: i32 = 8;
        pub const ObjectTransferService: i32 = 16;
        pub const AudioService: i32 = 32;
        pub const TelephonyService: i32 = 64;
        pub const InformationService: i32 = 128;
        pub const AllServices: i32 = 2047;
    };

    pub const Field = enum {
        pub const None: i32 = 0;
        pub const RSSI: i32 = 1;
        pub const ManufacturerData: i32 = 2;
        pub const ServiceData: i32 = 4;
        pub const All: i32 = 32767;
    };

    pub const CoreConfiguration = enum {
        pub const UnknownCoreConfiguration: i32 = 0;
        pub const LowEnergyCoreConfiguration: i32 = 1;
        pub const BaseRateCoreConfiguration: i32 = 2;
        pub const BaseRateAndLowEnergyCoreConfiguration: i32 = 3;
    };
};
