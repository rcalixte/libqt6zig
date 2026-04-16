const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QLowEnergyDescriptorData = @import("libqt6").QLowEnergyDescriptorData;
const qbluetooth_enums = @import("libqbluetooth.zig").enums;
const qlowenergycharacteristic_enums = @import("libqlowenergycharacteristic.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html)
pub const QLowEnergyCharacteristicData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyCharacteristicData,

    pub const _is_QLowEnergyCharacteristicData = {};

    /// New constructs a new QLowEnergyCharacteristicData object.
    ///
    pub fn New() QLowEnergyCharacteristicData {
        return .{ .ptr = qtc.QLowEnergyCharacteristicData_new() };
    }

    /// New2 constructs a new QLowEnergyCharacteristicData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyCharacteristicData `
    ///
    pub fn New2(other: anytype) QLowEnergyCharacteristicData {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristicData;
        return .{ .ptr = qtc.QLowEnergyCharacteristicData_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` other: QLowEnergyCharacteristicData `
    ///
    pub fn OperatorAssign(self: QLowEnergyCharacteristicData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristicData;
        qtc.QLowEnergyCharacteristicData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn Uuid(self: QLowEnergyCharacteristicData) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyCharacteristicData_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn SetUuid(self: QLowEnergyCharacteristicData, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QLowEnergyCharacteristicData_SetUuid(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QLowEnergyCharacteristicData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyCharacteristicData_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergycharacteristicdata.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetValue(self: QLowEnergyCharacteristicData, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyCharacteristicData_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn Properties(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_Properties(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` properties: flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn SetProperties(self: QLowEnergyCharacteristicData, properties: i32) void {
        qtc.QLowEnergyCharacteristicData_SetProperties(@ptrCast(self.ptr), @bitCast(properties));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#descriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Descriptors(self: QLowEnergyCharacteristicData, allocator: std.mem.Allocator) []QLowEnergyDescriptorData {
        const _arr: qtc.libqt_list = qtc.QLowEnergyCharacteristicData_Descriptors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyDescriptorData, _arr.len) catch @panic("qlowenergycharacteristicdata.Descriptors: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyDescriptorData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setDescriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` descriptors: []QLowEnergyDescriptorData `
    ///
    pub fn SetDescriptors(self: QLowEnergyCharacteristicData, descriptors: []QLowEnergyDescriptorData) void {
        const descriptors_list = qtc.libqt_list{
            .len = descriptors.len,
            .data = @ptrCast(descriptors.ptr),
        };
        qtc.QLowEnergyCharacteristicData_SetDescriptors(@ptrCast(self.ptr), descriptors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#addDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` descriptor: QLowEnergyDescriptorData `
    ///
    pub fn AddDescriptor(self: QLowEnergyCharacteristicData, descriptor: anytype) void {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptorData;
        qtc.QLowEnergyCharacteristicData_AddDescriptor(@ptrCast(self.ptr), @ptrCast(descriptor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setReadConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn SetReadConstraints(self: QLowEnergyCharacteristicData, constraints: i32) void {
        qtc.QLowEnergyCharacteristicData_SetReadConstraints(@ptrCast(self.ptr), @bitCast(constraints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#readConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn ReadConstraints(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_ReadConstraints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setWriteConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn SetWriteConstraints(self: QLowEnergyCharacteristicData, constraints: i32) void {
        qtc.QLowEnergyCharacteristicData_SetWriteConstraints(@ptrCast(self.ptr), @bitCast(constraints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#writeConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn WriteConstraints(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_WriteConstraints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` minimum: i32 `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetValueLength(self: QLowEnergyCharacteristicData, minimum: i32, maximum: i32) void {
        qtc.QLowEnergyCharacteristicData_SetValueLength(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#minimumValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn MinimumValueLength(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_MinimumValueLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#maximumValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn MaximumValueLength(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_MaximumValueLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn IsValid(self: QLowEnergyCharacteristicData) bool {
        return qtc.QLowEnergyCharacteristicData_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` other: QLowEnergyCharacteristicData `
    ///
    pub fn Swap(self: QLowEnergyCharacteristicData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristicData;
        qtc.QLowEnergyCharacteristicData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn Delete(self: QLowEnergyCharacteristicData) void {
        qtc.QLowEnergyCharacteristicData_Delete(@ptrCast(self.ptr));
    }
};
