const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlowenergyservicedata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html)
pub const qlowenergyservicedata = struct {
    /// New constructs a new QLowEnergyServiceData object.
    ///
    pub fn New() QtC.QLowEnergyServiceData {
        return qtc.QLowEnergyServiceData_new();
    }

    /// New2 constructs a new QLowEnergyServiceData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyServiceData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyServiceData {
        return qtc.QLowEnergyServiceData_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` other: QtC.QLowEnergyServiceData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyServiceData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyservicedata_enums.ServiceType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyServiceData_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` typeVal: qlowenergyservicedata_enums.ServiceType `
    ///
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QLowEnergyServiceData_SetType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    pub fn Uuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyServiceData_Uuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn SetUuid(self: ?*anyopaque, uuid: ?*anyopaque) void {
        qtc.QLowEnergyServiceData_SetUuid(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#includedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludedServices(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLowEnergyService {
        const _arr: qtc.libqt_list = qtc.QLowEnergyServiceData_IncludedServices(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLowEnergyService, _arr.len) catch @panic("qlowenergyservicedata.IncludedServices: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyService = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setIncludedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` services: []QtC.QLowEnergyService `
    ///
    pub fn SetIncludedServices(self: ?*anyopaque, services: []?*anyopaque) void {
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = @ptrCast(services.ptr),
        };
        qtc.QLowEnergyServiceData_SetIncludedServices(@ptrCast(self), services_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addIncludedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` service: QtC.QLowEnergyService `
    ///
    pub fn AddIncludedService(self: ?*anyopaque, service: ?*anyopaque) void {
        qtc.QLowEnergyServiceData_AddIncludedService(@ptrCast(self), @ptrCast(service));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#characteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Characteristics(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLowEnergyCharacteristicData {
        const _arr: qtc.libqt_list = qtc.QLowEnergyServiceData_Characteristics(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLowEnergyCharacteristicData, _arr.len) catch @panic("qlowenergyservicedata.Characteristics: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyCharacteristicData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setCharacteristics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` characteristics: []QtC.QLowEnergyCharacteristicData `
    ///
    pub fn SetCharacteristics(self: ?*anyopaque, characteristics: []QtC.QLowEnergyCharacteristicData) void {
        const characteristics_list = qtc.libqt_list{
            .len = characteristics.len,
            .data = @ptrCast(characteristics.ptr),
        };
        qtc.QLowEnergyServiceData_SetCharacteristics(@ptrCast(self), characteristics_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addCharacteristic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` characteristic: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn AddCharacteristic(self: ?*anyopaque, characteristic: ?*anyopaque) void {
        qtc.QLowEnergyServiceData_AddCharacteristic(@ptrCast(self), @ptrCast(characteristic));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QLowEnergyServiceData_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    /// ` other: QtC.QLowEnergyServiceData `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyServiceData_Swap(@ptrCast(self), @ptrCast(other));
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
    /// ` self: QtC.QLowEnergyServiceData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyServiceData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#public-types)
pub const enums = struct {
    pub const ServiceType = enum(i32) {
        pub const ServiceTypePrimary: i32 = 10240;
        pub const ServiceTypeSecondary: i32 = 10241;
    };
};
