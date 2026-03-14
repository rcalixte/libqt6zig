const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetooth_enums = @import("libqbluetooth.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html)
pub const qlowenergydescriptordata = struct {
    /// New constructs a new QLowEnergyDescriptorData object.
    ///
    pub fn New() QtC.QLowEnergyDescriptorData {
        return qtc.QLowEnergyDescriptorData_new();
    }

    /// New2 constructs a new QLowEnergyDescriptorData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    /// ` value: []u8 `
    ///
    pub fn New2(uuid: ?*anyopaque, value: []u8) QtC.QLowEnergyDescriptorData {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };

        return qtc.QLowEnergyDescriptorData_new2(@ptrCast(uuid), value_str);
    }

    /// New3 constructs a new QLowEnergyDescriptorData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyDescriptorData `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QLowEnergyDescriptorData {
        return qtc.QLowEnergyDescriptorData_new3(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` other: QtC.QLowEnergyDescriptorData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyDescriptorData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyDescriptorData_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergydescriptordata.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetValue(self: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QLowEnergyDescriptorData_SetValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    pub fn Uuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyDescriptorData_Uuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn SetUuid(self: ?*anyopaque, uuid: ?*anyopaque) void {
        qtc.QLowEnergyDescriptorData_SetUuid(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QLowEnergyDescriptorData_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` readable: bool `
    ///
    pub fn SetReadPermissions(self: ?*anyopaque, readable: bool) void {
        qtc.QLowEnergyDescriptorData_SetReadPermissions(@ptrCast(self), readable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QLowEnergyDescriptorData_IsReadable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#readConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn ReadConstraints(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyDescriptorData_ReadConstraints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` writable: bool `
    ///
    pub fn SetWritePermissions(self: ?*anyopaque, writable: bool) void {
        qtc.QLowEnergyDescriptorData_SetWritePermissions(@ptrCast(self), writable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QLowEnergyDescriptorData_IsWritable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#writeConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn WriteConstraints(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyDescriptorData_WriteConstraints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` other: QtC.QLowEnergyDescriptorData `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyDescriptorData_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` readable: bool `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn SetReadPermissions2(self: ?*anyopaque, readable: bool, constraints: i32) void {
        qtc.QLowEnergyDescriptorData_SetReadPermissions2(@ptrCast(self), readable, @bitCast(constraints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    /// ` writable: bool `
    ///
    /// ` constraints: flag of qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn SetWritePermissions2(self: ?*anyopaque, writable: bool, constraints: i32) void {
        qtc.QLowEnergyDescriptorData_SetWritePermissions2(@ptrCast(self), writable, @bitCast(constraints));
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
    /// ` self: QtC.QLowEnergyDescriptorData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyDescriptorData_Delete(@ptrCast(self));
    }
};
