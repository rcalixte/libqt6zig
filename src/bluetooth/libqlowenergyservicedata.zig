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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyServiceData object in C++ memory
    ///
    pub fn new() QLowEnergyServiceData {
        return .{ .ptr = qtc.QLowEnergyServiceData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyServiceData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyServiceData `
    ///
    pub fn new2(other: anytype) QLowEnergyServiceData {
        comptime _ = @TypeOf(other)._is_QLowEnergyServiceData;
        return .{ .ptr = qtc.QLowEnergyServiceData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` other: QLowEnergyServiceData `
    ///
    pub fn operatorAssign(self: QLowEnergyServiceData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyServiceData;
        qtc.QLowEnergyServiceData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QLowEnergyServiceData) i32 {
        return qtc.QLowEnergyServiceData_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` typeVal: qlowenergyservicedata_enums.ServiceType `
    ///
    pub fn setType(self: QLowEnergyServiceData, typeVal: i32) void {
        qtc.QLowEnergyServiceData_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `uuid` instead
    ///
    pub const Uuid = uuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    pub fn uuid(self: QLowEnergyServiceData) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyServiceData_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUuid` instead
    ///
    pub const SetUuid = setUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` _uuid: QBluetoothUuid `
    ///
    pub fn setUuid(self: QLowEnergyServiceData, _uuid: anytype) void {
        comptime _ = @TypeOf(_uuid)._is_QBluetoothUuid;
        qtc.QLowEnergyServiceData_SetUuid(@ptrCast(self.ptr), @ptrCast(_uuid.ptr));
    }

    /// ### DEPRECATED: Use `includedServices` instead
    ///
    pub const IncludedServices = includedServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#includedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn includedServices(self: QLowEnergyServiceData, allocator: std.mem.Allocator) []QLowEnergyService {
        const _arr: qtc.libqt_list = qtc.QLowEnergyServiceData_IncludedServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyService, _arr.len) catch @panic("QLowEnergyServiceData.includedServices: Memory allocation failed");
        const _data_val: [*]QtC.QLowEnergyService = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setIncludedServices` instead
    ///
    pub const SetIncludedServices = setIncludedServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setIncludedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` services: []QLowEnergyService `
    ///
    pub fn setIncludedServices(self: QLowEnergyServiceData, services: []QLowEnergyService) void {
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = @ptrCast(services.ptr),
        };
        qtc.QLowEnergyServiceData_SetIncludedServices(@ptrCast(self.ptr), services_list);
    }

    /// ### DEPRECATED: Use `addIncludedService` instead
    ///
    pub const AddIncludedService = addIncludedService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addIncludedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` service: QLowEnergyService `
    ///
    pub fn addIncludedService(self: QLowEnergyServiceData, service: anytype) void {
        comptime _ = @TypeOf(service)._is_QLowEnergyService;
        qtc.QLowEnergyServiceData_AddIncludedService(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### DEPRECATED: Use `characteristics` instead
    ///
    pub const Characteristics = characteristics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#characteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn characteristics(self: QLowEnergyServiceData, allocator: std.mem.Allocator) []QLowEnergyCharacteristicData {
        const _arr: qtc.libqt_list = qtc.QLowEnergyServiceData_Characteristics(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyCharacteristicData, _arr.len) catch @panic("QLowEnergyServiceData.characteristics: Memory allocation failed");
        const _data_val: [*]QtC.QLowEnergyCharacteristicData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCharacteristics` instead
    ///
    pub const SetCharacteristics = setCharacteristics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setCharacteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` _characteristics: []QLowEnergyCharacteristicData `
    ///
    pub fn setCharacteristics(self: QLowEnergyServiceData, _characteristics: []QLowEnergyCharacteristicData) void {
        const characteristics_list = qtc.libqt_list{
            .len = _characteristics.len,
            .data = @ptrCast(_characteristics.ptr),
        };
        qtc.QLowEnergyServiceData_SetCharacteristics(@ptrCast(self.ptr), characteristics_list);
    }

    /// ### DEPRECATED: Use `addCharacteristic` instead
    ///
    pub const AddCharacteristic = addCharacteristic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` characteristic: QLowEnergyCharacteristicData `
    ///
    pub fn addCharacteristic(self: QLowEnergyServiceData, characteristic: anytype) void {
        comptime _ = @TypeOf(characteristic)._is_QLowEnergyCharacteristicData;
        qtc.QLowEnergyServiceData_AddCharacteristic(@ptrCast(self.ptr), @ptrCast(characteristic.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    pub fn isValid(self: QLowEnergyServiceData) bool {
        return qtc.QLowEnergyServiceData_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    /// ` other: QLowEnergyServiceData `
    ///
    pub fn swap(self: QLowEnergyServiceData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyServiceData;
        qtc.QLowEnergyServiceData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#dtor.QLowEnergyServiceData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyServiceData `
    ///
    pub fn delete(self: QLowEnergyServiceData) void {
        qtc.QLowEnergyServiceData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#public-types)
pub const enums = struct {
    pub const ServiceType = enum {
        pub const ServiceTypePrimary: i32 = 10240;
        pub const ServiceTypeSecondary: i32 = 10241;
    };
};
