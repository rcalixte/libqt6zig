const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const qlowenergyadvertisingdata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html)
pub const QLowEnergyAdvertisingData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyAdvertisingData,

    pub const _is_QLowEnergyAdvertisingData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyAdvertisingData object in C++ memory
    ///
    pub fn new() QLowEnergyAdvertisingData {
        return .{ .ptr = qtc.QLowEnergyAdvertisingData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyAdvertisingData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyAdvertisingData `
    ///
    pub fn new2(other: anytype) QLowEnergyAdvertisingData {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingData;
        return .{ .ptr = qtc.QLowEnergyAdvertisingData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` other: QLowEnergyAdvertisingData `
    ///
    pub fn operatorAssign(self: QLowEnergyAdvertisingData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyAdvertisingData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setLocalName` instead
    ///
    pub const SetLocalName = setLocalName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setLocalName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setLocalName(self: QLowEnergyAdvertisingData, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetLocalName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localName(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyAdvertisingData_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyAdvertisingData.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `invalidManufacturerId` instead
    ///
    pub const InvalidManufacturerId = invalidManufacturerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#invalidManufacturerId)
    ///
    pub fn invalidManufacturerId() u16 {
        return qtc.QLowEnergyAdvertisingData_InvalidManufacturerId();
    }

    /// ### DEPRECATED: Use `setManufacturerData` instead
    ///
    pub const SetManufacturerData = setManufacturerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setManufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` id: u16 `
    ///
    /// ` data: []u8 `
    ///
    pub fn setManufacturerData(self: QLowEnergyAdvertisingData, id: u16, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetManufacturerData(@ptrCast(self.ptr), @bitCast(id), data_str);
    }

    /// ### DEPRECATED: Use `manufacturerId` instead
    ///
    pub const ManufacturerId = manufacturerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    pub fn manufacturerId(self: QLowEnergyAdvertisingData) u16 {
        return qtc.QLowEnergyAdvertisingData_ManufacturerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `manufacturerData` instead
    ///
    pub const ManufacturerData = manufacturerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn manufacturerData(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyAdvertisingData_ManufacturerData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLowEnergyAdvertisingData.manufacturerData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIncludePowerLevel` instead
    ///
    pub const SetIncludePowerLevel = setIncludePowerLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setIncludePowerLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` doInclude: bool `
    ///
    pub fn setIncludePowerLevel(self: QLowEnergyAdvertisingData, doInclude: bool) void {
        qtc.QLowEnergyAdvertisingData_SetIncludePowerLevel(@ptrCast(self.ptr), doInclude);
    }

    /// ### DEPRECATED: Use `includePowerLevel` instead
    ///
    pub const IncludePowerLevel = includePowerLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#includePowerLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    pub fn includePowerLevel(self: QLowEnergyAdvertisingData) bool {
        return qtc.QLowEnergyAdvertisingData_IncludePowerLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDiscoverability` instead
    ///
    pub const SetDiscoverability = setDiscoverability;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setDiscoverability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` mode: qlowenergyadvertisingdata_enums.Discoverability `
    ///
    pub fn setDiscoverability(self: QLowEnergyAdvertisingData, mode: i32) void {
        qtc.QLowEnergyAdvertisingData_SetDiscoverability(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `discoverability` instead
    ///
    pub const Discoverability = discoverability;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#discoverability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyadvertisingdata_enums.Discoverability `
    ///
    pub fn discoverability(self: QLowEnergyAdvertisingData) i32 {
        return qtc.QLowEnergyAdvertisingData_Discoverability(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setServices` instead
    ///
    pub const SetServices = setServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` _services: []QBluetoothUuid `
    ///
    pub fn setServices(self: QLowEnergyAdvertisingData, _services: []QBluetoothUuid) void {
        const services_list = qtc.libqt_list{
            .len = _services.len,
            .data = @ptrCast(_services.ptr),
        };
        qtc.QLowEnergyAdvertisingData_SetServices(@ptrCast(self.ptr), services_list);
    }

    /// ### DEPRECATED: Use `services` instead
    ///
    pub const Services = services;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#services)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn services(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyAdvertisingData_Services(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QLowEnergyAdvertisingData.services: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setRawData` instead
    ///
    pub const SetRawData = setRawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` data: []u8 `
    ///
    pub fn setRawData(self: QLowEnergyAdvertisingData, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetRawData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `rawData` instead
    ///
    pub const RawData = rawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#rawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rawData(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyAdvertisingData_RawData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLowEnergyAdvertisingData.rawData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` other: QLowEnergyAdvertisingData `
    ///
    pub fn swap(self: QLowEnergyAdvertisingData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyAdvertisingData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#dtor.QLowEnergyAdvertisingData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    pub fn delete(self: QLowEnergyAdvertisingData) void {
        qtc.QLowEnergyAdvertisingData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#public-types)
pub const enums = struct {
    pub const Discoverability = enum(i32) {
        pub const DiscoverabilityNone: i32 = 0;
        pub const DiscoverabilityLimited: i32 = 1;
        pub const DiscoverabilityGeneral: i32 = 2;
    };
};
