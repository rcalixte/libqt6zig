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

    /// New constructs a new QLowEnergyDescriptorData object.
    ///
    pub fn New() QLowEnergyDescriptorData {
        return .{ .ptr = qtc.QLowEnergyDescriptorData_new() };
    }

    /// New2 constructs a new QLowEnergyDescriptorData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    /// ` value: []u8 `
    ///
    pub fn New2(uuid: anytype, value: []u8) QLowEnergyDescriptorData {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.QLowEnergyDescriptorData_new2(@ptrCast(uuid.ptr), value_str) };
    }

    /// New3 constructs a new QLowEnergyDescriptorData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyDescriptorData `
    ///
    pub fn New3(other: anytype) QLowEnergyDescriptorData {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptorData;
        return .{ .ptr = qtc.QLowEnergyDescriptorData_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` other: QLowEnergyDescriptorData `
    ///
    pub fn OperatorAssign(self: QLowEnergyDescriptorData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptorData;
        qtc.QLowEnergyDescriptorData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QLowEnergyDescriptorData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyDescriptorData_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergydescriptordata.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetValue(self: QLowEnergyDescriptorData, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyDescriptorData_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn Uuid(self: QLowEnergyDescriptorData) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyDescriptorData_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn SetUuid(self: QLowEnergyDescriptorData, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QLowEnergyDescriptorData_SetUuid(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn IsValid(self: QLowEnergyDescriptorData) bool {
        return qtc.QLowEnergyDescriptorData_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` readable: bool `
    ///
    pub fn SetReadPermissions(self: QLowEnergyDescriptorData, readable: bool) void {
        qtc.QLowEnergyDescriptorData_SetReadPermissions(@ptrCast(self.ptr), readable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn IsReadable(self: QLowEnergyDescriptorData) bool {
        return qtc.QLowEnergyDescriptorData_IsReadable(@ptrCast(self.ptr));
    }

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
    pub fn ReadConstraints(self: QLowEnergyDescriptorData) i32 {
        return qtc.QLowEnergyDescriptorData_ReadConstraints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` writable: bool `
    ///
    pub fn SetWritePermissions(self: QLowEnergyDescriptorData, writable: bool) void {
        qtc.QLowEnergyDescriptorData_SetWritePermissions(@ptrCast(self.ptr), writable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn IsWritable(self: QLowEnergyDescriptorData) bool {
        return qtc.QLowEnergyDescriptorData_IsWritable(@ptrCast(self.ptr));
    }

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
    pub fn WriteConstraints(self: QLowEnergyDescriptorData) i32 {
        return qtc.QLowEnergyDescriptorData_WriteConstraints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    /// ` other: QLowEnergyDescriptorData `
    ///
    pub fn Swap(self: QLowEnergyDescriptorData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptorData;
        qtc.QLowEnergyDescriptorData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn SetReadPermissions2(self: QLowEnergyDescriptorData, readable: bool, constraints: i32) void {
        qtc.QLowEnergyDescriptorData_SetReadPermissions2(@ptrCast(self.ptr), readable, @bitCast(constraints));
    }

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
    pub fn SetWritePermissions2(self: QLowEnergyDescriptorData, writable: bool, constraints: i32) void {
        qtc.QLowEnergyDescriptorData_SetWritePermissions2(@ptrCast(self.ptr), writable, @bitCast(constraints));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#dtor.QLowEnergyDescriptorData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyDescriptorData `
    ///
    pub fn Delete(self: QLowEnergyDescriptorData) void {
        qtc.QLowEnergyDescriptorData_Delete(@ptrCast(self.ptr));
    }
};
