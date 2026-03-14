const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetoothdeviceinfo_enums = enums;
const std = @import("std");
const map_qtcqbluetoothuuid_sliceu8 = std.AutoHashMapUnmanaged(QtC.QBluetoothUuid, [][]u8);
const map_u16_sliceu8 = std.AutoHashMapUnmanaged(u16, [][]u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)
pub const qbluetoothdeviceinfo = struct {
    /// New constructs a new QBluetoothDeviceInfo object.
    ///
    pub fn New() QtC.QBluetoothDeviceInfo {
        return qtc.QBluetoothDeviceInfo_new();
    }

    /// New2 constructs a new QBluetoothDeviceInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: QtC.QBluetoothAddress `
    ///
    /// ` name: []const u8 `
    ///
    /// ` classOfDevice: u32 `
    ///
    pub fn New2(address: ?*anyopaque, name: []const u8, classOfDevice: u32) QtC.QBluetoothDeviceInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QBluetoothDeviceInfo_new2(@ptrCast(address), name_str, @bitCast(classOfDevice));
    }

    /// New3 constructs a new QBluetoothDeviceInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    /// ` name: []const u8 `
    ///
    /// ` classOfDevice: u32 `
    ///
    pub fn New3(uuid: ?*anyopaque, name: []const u8, classOfDevice: u32) QtC.QBluetoothDeviceInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QBluetoothDeviceInfo_new3(@ptrCast(uuid), name_str, @bitCast(classOfDevice));
    }

    /// New4 constructs a new QBluetoothDeviceInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBluetoothDeviceInfo `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QBluetoothDeviceInfo {
        return qtc.QBluetoothDeviceInfo_new4(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QBluetoothDeviceInfo_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#isCached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn IsCached(self: ?*anyopaque) bool {
        return qtc.QBluetoothDeviceInfo_IsCached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setCached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` cached: bool `
    ///
    pub fn SetCached(self: ?*anyopaque, cached: bool) void {
        qtc.QBluetoothDeviceInfo_SetCached(@ptrCast(self), cached);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` other: QtC.QBluetoothDeviceInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothDeviceInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn Address(self: ?*anyopaque) QtC.QBluetoothAddress {
        return qtc.QBluetoothDeviceInfo_Address(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothDeviceInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothdeviceinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QBluetoothDeviceInfo_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetoothdeviceinfo_enums.ServiceClass `
    ///
    pub fn ServiceClasses(self: ?*anyopaque) i32 {
        return qtc.QBluetoothDeviceInfo_ServiceClasses(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#majorDeviceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothdeviceinfo_enums.MajorDeviceClass `
    ///
    pub fn MajorDeviceClass(self: ?*anyopaque) i32 {
        return qtc.QBluetoothDeviceInfo_MajorDeviceClass(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#minorDeviceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn MinorDeviceClass(self: ?*anyopaque) u8 {
        return qtc.QBluetoothDeviceInfo_MinorDeviceClass(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#rssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn Rssi(self: ?*anyopaque) i16 {
        return qtc.QBluetoothDeviceInfo_Rssi(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setRssi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` signal: i16 `
    ///
    pub fn SetRssi(self: ?*anyopaque, signal: i16) void {
        qtc.QBluetoothDeviceInfo_SetRssi(@ptrCast(self), @bitCast(signal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceUuids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceUuids(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceInfo_ServiceUuids(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBluetoothUuid, _arr.len) catch @panic("qbluetoothdeviceinfo.ServiceUuids: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setServiceUuids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` uuids: []QtC.QBluetoothUuid `
    ///
    pub fn SetServiceUuids(self: ?*anyopaque, uuids: []QtC.QBluetoothUuid) void {
        const uuids_list = qtc.libqt_list{
            .len = uuids.len,
            .data = @ptrCast(uuids.ptr),
        };
        qtc.QBluetoothDeviceInfo_SetServiceUuids(@ptrCast(self), uuids_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManufacturerIds(self: ?*anyopaque, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceInfo_ManufacturerIds(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u16, _arr.len) catch @panic("qbluetoothdeviceinfo.ManufacturerIds: Memory allocation failed");
        const _data: [*]u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` manufacturerId: u16 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManufacturerData(self: ?*anyopaque, manufacturerId: u16, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QBluetoothDeviceInfo_ManufacturerData(@ptrCast(self), @bitCast(manufacturerId));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothdeviceinfo.ManufacturerData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setManufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` manufacturerId: u16 `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetManufacturerData(self: ?*anyopaque, manufacturerId: u16, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QBluetoothDeviceInfo_SetManufacturerData(@ptrCast(self), @bitCast(manufacturerId), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManufacturerData2(self: ?*anyopaque, allocator: std.mem.Allocator) map_u16_sliceu8 {
        const _map: qtc.libqt_map = qtc.QBluetoothDeviceInfo_ManufacturerData2(@ptrCast(self));
        var _ret: map_u16_sliceu8 = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j| {
                    qtc.libqt_free(_value_strings[j].data);
                }
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
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("qbluetoothdeviceinfo.ManufacturerData2: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("qbluetoothdeviceinfo.ManufacturerData2: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.put(allocator, _key, _value_slice) catch @panic("qbluetoothdeviceinfo.ManufacturerData2: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceIds(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceInfo_ServiceIds(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBluetoothUuid, _arr.len) catch @panic("qbluetoothdeviceinfo.ServiceIds: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` serviceId: QtC.QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceData(self: ?*anyopaque, serviceId: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QBluetoothDeviceInfo_ServiceData(@ptrCast(self), @ptrCast(serviceId));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothdeviceinfo.ServiceData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setServiceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` serviceId: QtC.QBluetoothUuid `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetServiceData(self: ?*anyopaque, serviceId: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QBluetoothDeviceInfo_SetServiceData(@ptrCast(self), @ptrCast(serviceId), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceData2(self: ?*anyopaque, allocator: std.mem.Allocator) map_qtcqbluetoothuuid_sliceu8 {
        const _map: qtc.libqt_map = qtc.QBluetoothDeviceInfo_ServiceData2(@ptrCast(self));
        var _ret: map_qtcqbluetoothuuid_sliceu8 = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j| {
                    qtc.libqt_free(_value_strings[j].data);
                }
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
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("qbluetoothdeviceinfo.ServiceData2: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("qbluetoothdeviceinfo.ServiceData2: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.put(allocator, @ptrCast(_key), _value_slice) catch @panic("qbluetoothdeviceinfo.ServiceData2: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setCoreConfigurations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` coreConfigs: flag of qbluetoothdeviceinfo_enums.CoreConfiguration `
    ///
    pub fn SetCoreConfigurations(self: ?*anyopaque, coreConfigs: i32) void {
        qtc.QBluetoothDeviceInfo_SetCoreConfigurations(@ptrCast(self), @bitCast(coreConfigs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#coreConfigurations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetoothdeviceinfo_enums.CoreConfiguration `
    ///
    pub fn CoreConfigurations(self: ?*anyopaque) i32 {
        return qtc.QBluetoothDeviceInfo_CoreConfigurations(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setDeviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn SetDeviceUuid(self: ?*anyopaque, uuid: ?*anyopaque) void {
        qtc.QBluetoothDeviceInfo_SetDeviceUuid(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#deviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn DeviceUuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QBluetoothDeviceInfo_DeviceUuid(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#dtor.QBluetoothDeviceInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBluetoothDeviceInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothDeviceInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)
pub const enums = struct {
    pub const MajorDeviceClass = enum(i32) {
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

    pub const MinorMiscellaneousClass = enum(i32) {
        pub const UncategorizedMiscellaneous: i32 = 0;
    };

    pub const MinorComputerClass = enum(i32) {
        pub const UncategorizedComputer: i32 = 0;
        pub const DesktopComputer: i32 = 1;
        pub const ServerComputer: i32 = 2;
        pub const LaptopComputer: i32 = 3;
        pub const HandheldClamShellComputer: i32 = 4;
        pub const HandheldComputer: i32 = 5;
        pub const WearableComputer: i32 = 6;
    };

    pub const MinorPhoneClass = enum(i32) {
        pub const UncategorizedPhone: i32 = 0;
        pub const CellularPhone: i32 = 1;
        pub const CordlessPhone: i32 = 2;
        pub const SmartPhone: i32 = 3;
        pub const WiredModemOrVoiceGatewayPhone: i32 = 4;
        pub const CommonIsdnAccessPhone: i32 = 5;
    };

    pub const MinorNetworkClass = enum(i32) {
        pub const NetworkFullService: i32 = 0;
        pub const NetworkLoadFactorOne: i32 = 8;
        pub const NetworkLoadFactorTwo: i32 = 16;
        pub const NetworkLoadFactorThree: i32 = 24;
        pub const NetworkLoadFactorFour: i32 = 32;
        pub const NetworkLoadFactorFive: i32 = 40;
        pub const NetworkLoadFactorSix: i32 = 48;
        pub const NetworkNoService: i32 = 56;
    };

    pub const MinorAudioVideoClass = enum(i32) {
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

    pub const MinorPeripheralClass = enum(i32) {
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

    pub const MinorImagingClass = enum(i32) {
        pub const UncategorizedImagingDevice: i32 = 0;
        pub const ImageDisplay: i32 = 4;
        pub const ImageCamera: i32 = 8;
        pub const ImageScanner: i32 = 16;
        pub const ImagePrinter: i32 = 32;
    };

    pub const MinorWearableClass = enum(i32) {
        pub const UncategorizedWearableDevice: i32 = 0;
        pub const WearableWristWatch: i32 = 1;
        pub const WearablePager: i32 = 2;
        pub const WearableJacket: i32 = 3;
        pub const WearableHelmet: i32 = 4;
        pub const WearableGlasses: i32 = 5;
    };

    pub const MinorToyClass = enum(i32) {
        pub const UncategorizedToy: i32 = 0;
        pub const ToyRobot: i32 = 1;
        pub const ToyVehicle: i32 = 2;
        pub const ToyDoll: i32 = 3;
        pub const ToyController: i32 = 4;
        pub const ToyGame: i32 = 5;
    };

    pub const MinorHealthClass = enum(i32) {
        pub const UncategorizedHealthDevice: i32 = 0;
        pub const HealthBloodPressureMonitor: i32 = 1;
        pub const HealthThermometer: i32 = 2;
        pub const HealthWeightScale: i32 = 3;
        pub const HealthGlucoseMeter: i32 = 4;
        pub const HealthPulseOximeter: i32 = 5;
        pub const HealthDataDisplay: i32 = 7;
        pub const HealthStepCounter: i32 = 8;
    };

    pub const ServiceClass = enum(i32) {
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

    pub const Field = enum(i32) {
        pub const None: i32 = 0;
        pub const RSSI: i32 = 1;
        pub const ManufacturerData: i32 = 2;
        pub const ServiceData: i32 = 4;
        pub const All: i32 = 32767;
    };

    pub const CoreConfiguration = enum(i32) {
        pub const UnknownCoreConfiguration: i32 = 0;
        pub const LowEnergyCoreConfiguration: i32 = 1;
        pub const BaseRateCoreConfiguration: i32 = 2;
        pub const BaseRateAndLowEnergyCoreConfiguration: i32 = 3;
    };
};
