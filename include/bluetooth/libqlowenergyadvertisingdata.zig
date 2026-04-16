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

    /// New constructs a new QLowEnergyAdvertisingData object.
    ///
    pub fn New() QLowEnergyAdvertisingData {
        return .{ .ptr = qtc.QLowEnergyAdvertisingData_new() };
    }

    /// New2 constructs a new QLowEnergyAdvertisingData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyAdvertisingData `
    ///
    pub fn New2(other: anytype) QLowEnergyAdvertisingData {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingData;
        return .{ .ptr = qtc.QLowEnergyAdvertisingData_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` other: QLowEnergyAdvertisingData `
    ///
    pub fn OperatorAssign(self: QLowEnergyAdvertisingData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyAdvertisingData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setLocalName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetLocalName(self: QLowEnergyAdvertisingData, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetLocalName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyAdvertisingData_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergyadvertisingdata.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#invalidManufacturerId)
    ///
    pub fn InvalidManufacturerId() u16 {
        return qtc.QLowEnergyAdvertisingData_InvalidManufacturerId();
    }

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
    pub fn SetManufacturerData(self: QLowEnergyAdvertisingData, id: u16, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetManufacturerData(@ptrCast(self.ptr), @bitCast(id), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    pub fn ManufacturerId(self: QLowEnergyAdvertisingData) u16 {
        return qtc.QLowEnergyAdvertisingData_ManufacturerId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManufacturerData(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyAdvertisingData_ManufacturerData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergyadvertisingdata.ManufacturerData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setIncludePowerLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` doInclude: bool `
    ///
    pub fn SetIncludePowerLevel(self: QLowEnergyAdvertisingData, doInclude: bool) void {
        qtc.QLowEnergyAdvertisingData_SetIncludePowerLevel(@ptrCast(self.ptr), doInclude);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#includePowerLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    pub fn IncludePowerLevel(self: QLowEnergyAdvertisingData) bool {
        return qtc.QLowEnergyAdvertisingData_IncludePowerLevel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setDiscoverability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` mode: qlowenergyadvertisingdata_enums.Discoverability `
    ///
    pub fn SetDiscoverability(self: QLowEnergyAdvertisingData, mode: i32) void {
        qtc.QLowEnergyAdvertisingData_SetDiscoverability(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn Discoverability(self: QLowEnergyAdvertisingData) i32 {
        return qtc.QLowEnergyAdvertisingData_Discoverability(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` services: []QBluetoothUuid `
    ///
    pub fn SetServices(self: QLowEnergyAdvertisingData, services: []QBluetoothUuid) void {
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = @ptrCast(services.ptr),
        };
        qtc.QLowEnergyAdvertisingData_SetServices(@ptrCast(self.ptr), services_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#services)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Services(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyAdvertisingData_Services(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("qlowenergyadvertisingdata.Services: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetRawData(self: QLowEnergyAdvertisingData, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetRawData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#rawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RawData(self: QLowEnergyAdvertisingData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyAdvertisingData_RawData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergyadvertisingdata.RawData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    /// ` other: QLowEnergyAdvertisingData `
    ///
    pub fn Swap(self: QLowEnergyAdvertisingData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingData;
        qtc.QLowEnergyAdvertisingData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#dtor.QLowEnergyAdvertisingData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyAdvertisingData `
    ///
    pub fn Delete(self: QLowEnergyAdvertisingData) void {
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
