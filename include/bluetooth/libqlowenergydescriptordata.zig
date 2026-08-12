const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const qbluetooth_enums = @import("libqbluetooth.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html)
pub const QLowEnergyDescriptorData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyDescriptorData,

    pub const _is_QLowEnergyDescriptorData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyDescriptorData object in C++ memory
    ///
    pub fn new() QLowEnergyDescriptorData {
        return .{ .ptr = qtc.QLowEnergyDescriptorData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyDescriptorData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _uuid: QBluetoothUuid `
    ///
    /// ` _value: []u8 `
    ///
    pub fn new2(_uuid: anytype, _value: []u8) QLowEnergyDescriptorData {
        comptime _ = @TypeOf(_uuid)._is_QBluetoothUuid;
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return .{ .ptr = qtc.QLowEnergyDescriptorData_new2(@ptrCast(_uuid.ptr), value_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLowEnergyDescriptorData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyDescriptorData `
    ///
    pub fn new3(other: anytype) QLowEnergyDescriptorData {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptorData;
        return .{ .ptr = qtc.QLowEnergyDescriptorData_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` other: QLowEnergyDescriptorData `
    ///
    pub fn operatorAssign(self: QLowEnergyDescriptorData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptorData;
        qtc.QLowEnergyDescriptorData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QLowEnergyDescriptorData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyDescriptorData_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLowEnergyDescriptorData.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` _value: []u8 `
    ///
    pub fn setValue(self: QLowEnergyDescriptorData, _value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QLowEnergyDescriptorData_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `uuid` instead
    ///
    pub const Uuid = uuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn uuid(self: QLowEnergyDescriptorData) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyDescriptorData_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUuid` instead
    ///
    pub const SetUuid = setUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` _uuid: QBluetoothUuid `
    ///
    pub fn setUuid(self: QLowEnergyDescriptorData, _uuid: anytype) void {
        comptime _ = @TypeOf(_uuid)._is_QBluetoothUuid;
        qtc.QLowEnergyDescriptorData_SetUuid(@ptrCast(self.ptr), @ptrCast(_uuid.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn isValid(self: QLowEnergyDescriptorData) bool {
        return qtc.QLowEnergyDescriptorData_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadPermissions` instead
    ///
    pub const SetReadPermissions = setReadPermissions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` readable: bool `
    ///
    pub fn setReadPermissions(self: QLowEnergyDescriptorData, readable: bool) void {
        qtc.QLowEnergyDescriptorData_SetReadPermissions(@ptrCast(self.ptr), readable);
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn isReadable(self: QLowEnergyDescriptorData) bool {
        return qtc.QLowEnergyDescriptorData_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readConstraints` instead
    ///
    pub const ReadConstraints = readConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#readConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn readConstraints(self: QLowEnergyDescriptorData) i32 {
        return qtc.QLowEnergyDescriptorData_ReadConstraints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWritePermissions` instead
    ///
    pub const SetWritePermissions = setWritePermissions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` writable: bool `
    ///
    pub fn setWritePermissions(self: QLowEnergyDescriptorData, writable: bool) void {
        qtc.QLowEnergyDescriptorData_SetWritePermissions(@ptrCast(self.ptr), writable);
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn isWritable(self: QLowEnergyDescriptorData) bool {
        return qtc.QLowEnergyDescriptorData_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeConstraints` instead
    ///
    pub const WriteConstraints = writeConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#writeConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn writeConstraints(self: QLowEnergyDescriptorData) i32 {
        return qtc.QLowEnergyDescriptorData_WriteConstraints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` other: QLowEnergyDescriptorData `
    ///
    pub fn swap(self: QLowEnergyDescriptorData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptorData;
        qtc.QLowEnergyDescriptorData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setReadPermissions2` instead
    ///
    pub const SetReadPermissions2 = setReadPermissions2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` readable: bool `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn setReadPermissions2(self: QLowEnergyDescriptorData, readable: bool, constraints: i32) void {
        qtc.QLowEnergyDescriptorData_SetReadPermissions2(@ptrCast(self.ptr), readable, @bitCast(constraints));
    }

    /// ### DEPRECATED: Use `setWritePermissions2` instead
    ///
    pub const SetWritePermissions2 = setWritePermissions2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` writable: bool `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn setWritePermissions2(self: QLowEnergyDescriptorData, writable: bool, constraints: i32) void {
        qtc.QLowEnergyDescriptorData_SetWritePermissions2(@ptrCast(self.ptr), writable, @bitCast(constraints));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#dtor.QLowEnergyDescriptorData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn delete(self: QLowEnergyDescriptorData) void {
        qtc.QLowEnergyDescriptorData_Delete(@ptrCast(self.ptr));
    }
};
