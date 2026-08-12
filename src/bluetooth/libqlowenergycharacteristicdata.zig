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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyCharacteristicData object in C++ memory
    ///
    pub fn new() QLowEnergyCharacteristicData {
        return .{ .ptr = qtc.QLowEnergyCharacteristicData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyCharacteristicData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyCharacteristicData `
    ///
    pub fn new2(other: anytype) QLowEnergyCharacteristicData {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristicData;
        return .{ .ptr = qtc.QLowEnergyCharacteristicData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` other: QLowEnergyCharacteristicData `
    ///
    pub fn operatorAssign(self: QLowEnergyCharacteristicData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristicData;
        qtc.QLowEnergyCharacteristicData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `uuid` instead
    ///
    pub const Uuid = uuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn uuid(self: QLowEnergyCharacteristicData) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyCharacteristicData_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUuid` instead
    ///
    pub const SetUuid = setUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` _uuid: QBluetoothUuid `
    ///
    pub fn setUuid(self: QLowEnergyCharacteristicData, _uuid: anytype) void {
        comptime _ = @TypeOf(_uuid)._is_QBluetoothUuid;
        qtc.QLowEnergyCharacteristicData_SetUuid(@ptrCast(self.ptr), @ptrCast(_uuid.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QLowEnergyCharacteristicData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyCharacteristicData_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLowEnergyCharacteristicData.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` _value: []u8 `
    ///
    pub fn setValue(self: QLowEnergyCharacteristicData, _value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QLowEnergyCharacteristicData_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

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
    pub fn properties(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_Properties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperties` instead
    ///
    pub const SetProperties = setProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` _properties: flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn setProperties(self: QLowEnergyCharacteristicData, _properties: i32) void {
        qtc.QLowEnergyCharacteristicData_SetProperties(@ptrCast(self.ptr), @bitCast(_properties));
    }

    /// ### DEPRECATED: Use `descriptors` instead
    ///
    pub const Descriptors = descriptors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#descriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn descriptors(self: QLowEnergyCharacteristicData, allocator: std.mem.Allocator) []QLowEnergyDescriptorData {
        const _arr: qtc.libqt_list = qtc.QLowEnergyCharacteristicData_Descriptors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyDescriptorData, _arr.len) catch @panic("QLowEnergyCharacteristicData.descriptors: Memory allocation failed");
        const _data_val: [*]QtC.QLowEnergyDescriptorData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescriptors` instead
    ///
    pub const SetDescriptors = setDescriptors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setDescriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` _descriptors: []QLowEnergyDescriptorData `
    ///
    pub fn setDescriptors(self: QLowEnergyCharacteristicData, _descriptors: []QLowEnergyDescriptorData) void {
        const descriptors_list = qtc.libqt_list{
            .len = _descriptors.len,
            .data = @ptrCast(_descriptors.ptr),
        };
        qtc.QLowEnergyCharacteristicData_SetDescriptors(@ptrCast(self.ptr), descriptors_list);
    }

    /// ### DEPRECATED: Use `addDescriptor` instead
    ///
    pub const AddDescriptor = addDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#addDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` descriptor: QLowEnergyDescriptorData `
    ///
    pub fn addDescriptor(self: QLowEnergyCharacteristicData, descriptor: anytype) void {
        comptime _ = @TypeOf(descriptor)._is_QLowEnergyDescriptorData;
        qtc.QLowEnergyCharacteristicData_AddDescriptor(@ptrCast(self.ptr), @ptrCast(descriptor.ptr));
    }

    /// ### DEPRECATED: Use `setReadConstraints` instead
    ///
    pub const SetReadConstraints = setReadConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setReadConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn setReadConstraints(self: QLowEnergyCharacteristicData, constraints: i32) void {
        qtc.QLowEnergyCharacteristicData_SetReadConstraints(@ptrCast(self.ptr), @bitCast(constraints));
    }

    /// ### DEPRECATED: Use `readConstraints` instead
    ///
    pub const ReadConstraints = readConstraints;

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
    pub fn readConstraints(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_ReadConstraints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWriteConstraints` instead
    ///
    pub const SetWriteConstraints = setWriteConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setWriteConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn setWriteConstraints(self: QLowEnergyCharacteristicData, constraints: i32) void {
        qtc.QLowEnergyCharacteristicData_SetWriteConstraints(@ptrCast(self.ptr), @bitCast(constraints));
    }

    /// ### DEPRECATED: Use `writeConstraints` instead
    ///
    pub const WriteConstraints = writeConstraints;

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
    pub fn writeConstraints(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_WriteConstraints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setValueLength` instead
    ///
    pub const SetValueLength = setValueLength;

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
    pub fn setValueLength(self: QLowEnergyCharacteristicData, minimum: i32, maximum: i32) void {
        qtc.QLowEnergyCharacteristicData_SetValueLength(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `minimumValueLength` instead
    ///
    pub const MinimumValueLength = minimumValueLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#minimumValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn minimumValueLength(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_MinimumValueLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumValueLength` instead
    ///
    pub const MaximumValueLength = maximumValueLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#maximumValueLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn maximumValueLength(self: QLowEnergyCharacteristicData) i32 {
        return qtc.QLowEnergyCharacteristicData_MaximumValueLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn isValid(self: QLowEnergyCharacteristicData) bool {
        return qtc.QLowEnergyCharacteristicData_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    /// ` other: QLowEnergyCharacteristicData `
    ///
    pub fn swap(self: QLowEnergyCharacteristicData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristicData;
        qtc.QLowEnergyCharacteristicData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#dtor.QLowEnergyCharacteristicData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyCharacteristicData `
    ///
    pub fn delete(self: QLowEnergyCharacteristicData) void {
        qtc.QLowEnergyCharacteristicData_Delete(@ptrCast(self.ptr));
    }
};
