const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QLowEnergyDescriptor = @import("libqt6").QLowEnergyDescriptor;
const qlowenergycharacteristic_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html)
pub const QLowEnergyCharacteristic = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyCharacteristic,

    pub const _is_QLowEnergyCharacteristic = {};

    /// New constructs a new QLowEnergyCharacteristic object.
    ///
    pub fn New() QLowEnergyCharacteristic {
        return .{ .ptr = qtc.QLowEnergyCharacteristic_new() };
    }

    /// New2 constructs a new QLowEnergyCharacteristic object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyCharacteristic `
    ///
    pub fn New2(other: anytype) QLowEnergyCharacteristic {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristic;
        return .{ .ptr = qtc.QLowEnergyCharacteristic_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` other: QLowEnergyCharacteristic `
    ///
    pub fn OperatorAssign(self: QLowEnergyCharacteristic, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristic;
        qtc.QLowEnergyCharacteristic_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QLowEnergyCharacteristic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyCharacteristic_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlowenergycharacteristic.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn Uuid(self: QLowEnergyCharacteristic) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyCharacteristic_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QLowEnergyCharacteristic, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyCharacteristic_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlowenergycharacteristic.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlowenergycharacteristic_enums.PropertyType `
    ///
    pub fn Properties(self: QLowEnergyCharacteristic) i32 {
        return qtc.QLowEnergyCharacteristic_Properties(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn Descriptor(self: QLowEnergyCharacteristic, uuid: anytype) QLowEnergyDescriptor {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QLowEnergyCharacteristic_Descriptor(@ptrCast(self.ptr), @ptrCast(uuid.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Descriptors(self: QLowEnergyCharacteristic, allocator: std.mem.Allocator) []QLowEnergyDescriptor {
        const _arr: qtc.libqt_list = qtc.QLowEnergyCharacteristic_Descriptors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyDescriptor, _arr.len) catch @panic("qlowenergycharacteristic.Descriptors: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyDescriptor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#clientCharacteristicConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn ClientCharacteristicConfiguration(self: QLowEnergyCharacteristic) QLowEnergyDescriptor {
        return .{ .ptr = qtc.QLowEnergyCharacteristic_ClientCharacteristicConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn IsValid(self: QLowEnergyCharacteristic) bool {
        return qtc.QLowEnergyCharacteristic_IsValid(@ptrCast(self.ptr));
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
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn Delete(self: QLowEnergyCharacteristic) void {
        qtc.QLowEnergyCharacteristic_Delete(@ptrCast(self.ptr));
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
