const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QLowEnergyCharacteristicData = @import("libqt6").QLowEnergyCharacteristicData;
const QLowEnergyService = @import("libqt6").QLowEnergyService;
const qlowenergyservicedata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html)
pub const QLowEnergyServiceData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyServiceData,

    pub const _is_QLowEnergyServiceData = {};

    /// New constructs a new QLowEnergyServiceData object.
    ///
    pub fn New() QLowEnergyServiceData {
        return .{ .ptr = qtc.QLowEnergyServiceData_new() };
    }

    /// New2 constructs a new QLowEnergyServiceData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyServiceData `
    ///
    pub fn New2(other: anytype) QLowEnergyServiceData {
        comptime _ = @TypeOf(other)._is_QLowEnergyServiceData;
        return .{ .ptr = qtc.QLowEnergyServiceData_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` other: QLowEnergyServiceData `
    ///
    pub fn OperatorAssign(self: QLowEnergyServiceData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyServiceData;
        qtc.QLowEnergyServiceData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyservicedata_enums.ServiceType `
    ///
    pub fn Type(self: QLowEnergyServiceData) i32 {
        return qtc.QLowEnergyServiceData_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` typeVal: qlowenergyservicedata_enums.ServiceType `
    ///
    pub fn SetType(self: QLowEnergyServiceData, typeVal: i32) void {
        qtc.QLowEnergyServiceData_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    pub fn Uuid(self: QLowEnergyServiceData) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyServiceData_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn SetUuid(self: QLowEnergyServiceData, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QLowEnergyServiceData_SetUuid(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#includedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludedServices(self: QLowEnergyServiceData, allocator: std.mem.Allocator) []QLowEnergyService {
        const _arr: qtc.libqt_list = qtc.QLowEnergyServiceData_IncludedServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyService, _arr.len) catch @panic("qlowenergyservicedata.IncludedServices: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyService = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setIncludedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` services: []QLowEnergyService `
    ///
    pub fn SetIncludedServices(self: QLowEnergyServiceData, services: []QLowEnergyService) void {
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = @ptrCast(services.ptr),
        };
        qtc.QLowEnergyServiceData_SetIncludedServices(@ptrCast(self.ptr), services_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addIncludedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` service: QLowEnergyService `
    ///
    pub fn AddIncludedService(self: QLowEnergyServiceData, service: anytype) void {
        comptime _ = @TypeOf(service)._is_QLowEnergyService;
        qtc.QLowEnergyServiceData_AddIncludedService(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#characteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Characteristics(self: QLowEnergyServiceData, allocator: std.mem.Allocator) []QLowEnergyCharacteristicData {
        const _arr: qtc.libqt_list = qtc.QLowEnergyServiceData_Characteristics(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyCharacteristicData, _arr.len) catch @panic("qlowenergyservicedata.Characteristics: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyCharacteristicData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setCharacteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` characteristics: []QLowEnergyCharacteristicData `
    ///
    pub fn SetCharacteristics(self: QLowEnergyServiceData, characteristics: []QLowEnergyCharacteristicData) void {
        const characteristics_list = qtc.libqt_list{
            .len = characteristics.len,
            .data = @ptrCast(characteristics.ptr),
        };
        qtc.QLowEnergyServiceData_SetCharacteristics(@ptrCast(self.ptr), characteristics_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` characteristic: QLowEnergyCharacteristicData `
    ///
    pub fn AddCharacteristic(self: QLowEnergyServiceData, characteristic: anytype) void {
        comptime _ = @TypeOf(characteristic)._is_QLowEnergyCharacteristicData;
        qtc.QLowEnergyServiceData_AddCharacteristic(@ptrCast(self.ptr), @ptrCast(characteristic.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    pub fn IsValid(self: QLowEnergyServiceData) bool {
        return qtc.QLowEnergyServiceData_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` other: QLowEnergyServiceData `
    ///
    pub fn Swap(self: QLowEnergyServiceData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyServiceData;
        qtc.QLowEnergyServiceData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#dtor.QLowEnergyServiceData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    pub fn Delete(self: QLowEnergyServiceData) void {
        qtc.QLowEnergyServiceData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#public-types)
pub const enums = struct {
    pub const ServiceType = enum(i32) {
        pub const ServiceTypePrimary: i32 = 10240;
        pub const ServiceTypeSecondary: i32 = 10241;
    };
};
