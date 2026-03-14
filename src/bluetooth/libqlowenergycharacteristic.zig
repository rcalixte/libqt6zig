const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlowenergycharacteristic_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html)
pub const qlowenergycharacteristic = struct {
    /// New constructs a new QLowEnergyCharacteristic object.
    ///
    pub fn New() QtC.QLowEnergyCharacteristic {
        return qtc.QLowEnergyCharacteristic_new();
    }

    /// New2 constructs a new QLowEnergyCharacteristic object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyCharacteristic `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyCharacteristic {
        return qtc.QLowEnergyCharacteristic_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    /// ` other: QtC.QLowEnergyCharacteristic `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristic_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyCharacteristic_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycharacteristic.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    pub fn Uuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QLowEnergyCharacteristic_Uuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyCharacteristic_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergycharacteristic.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn Properties(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyCharacteristic_Properties(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn Descriptor(self: ?*anyopaque, uuid: ?*anyopaque) QtC.QLowEnergyDescriptor {
        return qtc.QLowEnergyCharacteristic_Descriptor(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Descriptors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLowEnergyDescriptor {
        const _arr: qtc.libqt_list = qtc.QLowEnergyCharacteristic_Descriptors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLowEnergyDescriptor, _arr.len) catch @panic("qlowenergycharacteristic.Descriptors: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyDescriptor = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#clientCharacteristicConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    pub fn ClientCharacteristicConfiguration(self: ?*anyopaque) QtC.QLowEnergyDescriptor {
        return qtc.QLowEnergyCharacteristic_ClientCharacteristicConfiguration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QLowEnergyCharacteristic_IsValid(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#dtor.QLowEnergyCharacteristic)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLowEnergyCharacteristic `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyCharacteristic_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#public-types)
pub const enums = struct {
    pub const PropertyType = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Broadcasting: i32 = 1;
        pub const Read: i32 = 2;
        pub const WriteNoResponse: i32 = 4;
        pub const Write: i32 = 8;
        pub const Notify: i32 = 16;
        pub const Indicate: i32 = 32;
        pub const WriteSigned: i32 = 64;
        pub const ExtendedProperty: i32 = 128;
    };
};
