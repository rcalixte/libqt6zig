const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetoothuuid_enums = @import("libqbluetoothuuid.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html)
pub const qlowenergydescriptor = struct {
    /// New constructs a new QLowEnergyDescriptor object.
    ///
    pub fn New() QtC.QLowEnergyDescriptor {
        return qtc.QLowEnergyDescriptor_new();
    }

    /// New2 constructs a new QLowEnergyDescriptor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyDescriptor `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyDescriptor {
        return qtc.QLowEnergyDescriptor_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    /// ` other: QtC.QLowEnergyDescriptor `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyDescriptor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QLowEnergyDescriptor_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyDescriptor_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergydescriptor.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    pub fn Uuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyDescriptor_Uuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyDescriptor_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergydescriptor.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothuuid_enums.DescriptorType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyDescriptor_Type(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#dtor.QLowEnergyDescriptor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLowEnergyDescriptor `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyDescriptor_Delete(@ptrCast(self));
    }
};
