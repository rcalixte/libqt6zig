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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyDescriptor object in C++ memory
    ///
    pub fn new() QLowEnergyDescriptor {
        return .{ .ptr = qtc.QLowEnergyDescriptor_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyDescriptor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyDescriptor `
    ///
    pub fn new2(other: anytype) QLowEnergyDescriptor {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptor;
        return .{ .ptr = qtc.QLowEnergyDescriptor_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ` other: QLowEnergyDescriptor `
    ///
    pub fn operatorAssign(self: QLowEnergyDescriptor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyDescriptor;
        qtc.QLowEnergyDescriptor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    pub fn isValid(self: QLowEnergyDescriptor) bool {
        return qtc.QLowEnergyDescriptor_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QLowEnergyDescriptor, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyDescriptor_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLowEnergyDescriptor.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uuid` instead
    ///
    pub const Uuid = uuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    pub fn uuid(self: QLowEnergyDescriptor) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyDescriptor_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QLowEnergyDescriptor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyDescriptor_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyDescriptor.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QLowEnergyDescriptor) i32 {
        return qtc.QLowEnergyDescriptor_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#dtor.QLowEnergyDescriptor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyDescriptor `
    ///
    pub fn delete(self: QLowEnergyDescriptor) void {
        qtc.QLowEnergyDescriptor_Delete(@ptrCast(self.ptr));
    }
};
