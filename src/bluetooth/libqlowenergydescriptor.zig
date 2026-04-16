const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const qbluetoothuuid_enums = @import("libqbluetoothuuid.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html)
pub const QLowEnergyDescriptor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyDescriptor,

    pub const _is_QLowEnergyDescriptor = {};

    /// New constructs a new QLowEnergyDescriptor object.
    ///
    pub fn New() QLowEnergyDescriptor {
        return .{ .ptr = qtc.QLowEnergyDescriptor_new() };
    }

    /// New2 constructs a new QLowEnergyDescriptor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyDescriptor `
    ///
    pub fn New2(other: anytype) QLowEnergyDescriptor {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptor;
        return .{ .ptr = qtc.QLowEnergyDescriptor_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ` other: QLowEnergyDescriptor `
    ///
    pub fn OperatorAssign(self: QLowEnergyDescriptor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptor;
        qtc.QLowEnergyDescriptor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    pub fn IsValid(self: QLowEnergyDescriptor) bool {
        return qtc.QLowEnergyDescriptor_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QLowEnergyDescriptor, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyDescriptor_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergydescriptor.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    pub fn Uuid(self: QLowEnergyDescriptor) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyDescriptor_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QLowEnergyDescriptor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyDescriptor_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergydescriptor.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothuuid_enums.DescriptorType `
    ///
    pub fn Type(self: QLowEnergyDescriptor) i32 {
        return qtc.QLowEnergyDescriptor_Type(@ptrCast(self.ptr));
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
    /// ` self: QLowEnergyDescriptor `
    ///
    pub fn Delete(self: QLowEnergyDescriptor) void {
        qtc.QLowEnergyDescriptor_Delete(@ptrCast(self.ptr));
    }
};
