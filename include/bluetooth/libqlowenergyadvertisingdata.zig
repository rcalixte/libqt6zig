const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlowenergyadvertisingdata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html)
pub const qlowenergyadvertisingdata = struct {
    /// New constructs a new QLowEnergyAdvertisingData object.
    ///
    pub fn New() QtC.QLowEnergyAdvertisingData {
        return qtc.QLowEnergyAdvertisingData_new();
    }

    /// New2 constructs a new QLowEnergyAdvertisingData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyAdvertisingData {
        return qtc.QLowEnergyAdvertisingData_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` other: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setLocalName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetLocalName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetLocalName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyAdvertisingData_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` id: u16 `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetManufacturerData(self: ?*anyopaque, id: u16, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetManufacturerData(@ptrCast(self), @bitCast(id), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn ManufacturerId(self: ?*anyopaque) u16 {
        return qtc.QLowEnergyAdvertisingData_ManufacturerId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManufacturerData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyAdvertisingData_ManufacturerData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergyadvertisingdata.ManufacturerData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setIncludePowerLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` doInclude: bool `
    ///
    pub fn SetIncludePowerLevel(self: ?*anyopaque, doInclude: bool) void {
        qtc.QLowEnergyAdvertisingData_SetIncludePowerLevel(@ptrCast(self), doInclude);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#includePowerLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn IncludePowerLevel(self: ?*anyopaque) bool {
        return qtc.QLowEnergyAdvertisingData_IncludePowerLevel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setDiscoverability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` mode: qlowenergyadvertisingdata_enums.Discoverability `
    ///
    pub fn SetDiscoverability(self: ?*anyopaque, mode: i32) void {
        qtc.QLowEnergyAdvertisingData_SetDiscoverability(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#discoverability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyadvertisingdata_enums.Discoverability `
    ///
    pub fn Discoverability(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyAdvertisingData_Discoverability(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` services: []QtC.QBluetoothUuid `
    ///
    pub fn SetServices(self: ?*anyopaque, services: []QtC.QBluetoothUuid) void {
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = @ptrCast(services.ptr),
        };
        qtc.QLowEnergyAdvertisingData_SetServices(@ptrCast(self), services_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#services)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Services(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QLowEnergyAdvertisingData_Services(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBluetoothUuid, _arr.len) catch @panic("qlowenergyadvertisingdata.Services: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetRawData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QLowEnergyAdvertisingData_SetRawData(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#rawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RawData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyAdvertisingData_RawData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergyadvertisingdata.RawData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    /// ` other: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingData_Swap(@ptrCast(self), @ptrCast(other));
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
    /// ` self: QtC.QLowEnergyAdvertisingData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingData_Delete(@ptrCast(self));
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
