const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetooth_enums = @import("libqbluetooth.zig").enums;
const qlowenergycharacteristic_enums = @import("libqlowenergycharacteristic.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html)
pub const qlowenergycharacteristicdata = struct {
    /// New constructs a new QLowEnergyCharacteristicData object.
    ///
    pub fn New() QtC.QLowEnergyCharacteristicData {
        return qtc.QLowEnergyCharacteristicData_new();
    }

    /// New2 constructs a new QLowEnergyCharacteristicData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyCharacteristicData {
        return qtc.QLowEnergyCharacteristicData_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` other: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristicData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn Uuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyCharacteristicData_Uuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn SetUuid(self: ?*anyopaque, uuid: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristicData_SetUuid(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyCharacteristicData_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergycharacteristicdata.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetValue(self: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyCharacteristicData_SetValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn Properties(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyCharacteristicData_Properties(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` properties: flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn SetProperties(self: ?*anyopaque, properties: i32) void {
        qtc.QLowEnergyCharacteristicData_SetProperties(@ptrCast(self), @bitCast(properties));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#descriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Descriptors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLowEnergyDescriptorData {
        const _arr: qtc.libqt_list = qtc.QLowEnergyCharacteristicData_Descriptors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLowEnergyDescriptorData, _arr.len) catch @panic("qlowenergycharacteristicdata.Descriptors: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyDescriptorData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setDescriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` descriptors: []QtC.QLowEnergyDescriptorData `
    ///
    pub fn SetDescriptors(self: ?*anyopaque, descriptors: []QtC.QLowEnergyDescriptorData) void {
        const descriptors_list = qtc.libqt_list{
            .len = descriptors.len,
            .data = @ptrCast(descriptors.ptr),
        };
        qtc.QLowEnergyCharacteristicData_SetDescriptors(@ptrCast(self), descriptors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#addDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` descriptor: QtC.QLowEnergyDescriptorData `
    ///
    pub fn AddDescriptor(self: ?*anyopaque, descriptor: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristicData_AddDescriptor(@ptrCast(self), @ptrCast(descriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setReadConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn SetReadConstraints(self: ?*anyopaque, constraints: i32) void {
        qtc.QLowEnergyCharacteristicData_SetReadConstraints(@ptrCast(self), @bitCast(constraints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#readConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn ReadConstraints(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyCharacteristicData_ReadConstraints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setWriteConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn SetWriteConstraints(self: ?*anyopaque, constraints: i32) void {
        qtc.QLowEnergyCharacteristicData_SetWriteConstraints(@ptrCast(self), @bitCast(constraints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#writeConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn WriteConstraints(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyCharacteristicData_WriteConstraints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` minimum: i32 `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetValueLength(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QLowEnergyCharacteristicData_SetValueLength(@ptrCast(self), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#minimumValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn MinimumValueLength(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyCharacteristicData_MinimumValueLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#maximumValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn MaximumValueLength(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyCharacteristicData_MaximumValueLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QLowEnergyCharacteristicData_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    /// ` other: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristicData_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#dtor.QLowEnergyCharacteristicData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLowEnergyCharacteristicData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristicData_Delete(@ptrCast(self));
    }
};
