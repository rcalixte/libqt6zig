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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyCharacteristic object in C++ memory
    ///
    pub fn new() QLowEnergyCharacteristic {
        return .{ .ptr = qtc.QLowEnergyCharacteristic_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyCharacteristic object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyCharacteristic `
    ///
    pub fn new2(other: anytype) QLowEnergyCharacteristic {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristic;
        return .{ .ptr = qtc.QLowEnergyCharacteristic_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` other: QLowEnergyCharacteristic `
    ///
    pub fn operatorAssign(self: QLowEnergyCharacteristic, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyCharacteristic;
        qtc.QLowEnergyCharacteristic_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QLowEnergyCharacteristic, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLowEnergyCharacteristic_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLowEnergyCharacteristic.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uuid` instead
    ///
    pub const Uuid = uuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#uuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn uuid(self: QLowEnergyCharacteristic) QBluetoothUuid {
        return .{ .ptr = qtc.QLowEnergyCharacteristic_Uuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QLowEnergyCharacteristic, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QLowEnergyCharacteristic_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLowEnergyCharacteristic.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

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
    pub fn properties(self: QLowEnergyCharacteristic) i32 {
        return qtc.QLowEnergyCharacteristic_Properties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `descriptor` instead
    ///
    pub const Descriptor = descriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` _uuid: QBluetoothUuid `
    ///
    pub fn descriptor(self: QLowEnergyCharacteristic, _uuid: anytype) QLowEnergyDescriptor {
        comptime _ = @TypeOf(_uuid)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QLowEnergyCharacteristic_Descriptor(@ptrCast(self.ptr), @ptrCast(_uuid.ptr)) };
    }

    /// ### DEPRECATED: Use `descriptors` instead
    ///
    pub const Descriptors = descriptors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn descriptors(self: QLowEnergyCharacteristic, allocator: std.mem.Allocator) []QLowEnergyDescriptor {
        const _arr: qtc.libqt_list = qtc.QLowEnergyCharacteristic_Descriptors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyDescriptor, _arr.len) catch @panic("QLowEnergyCharacteristic.descriptors: Memory allocation failed");
        const _data_val: [*]QtC.QLowEnergyDescriptor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clientCharacteristicConfiguration` instead
    ///
    pub const ClientCharacteristicConfiguration = clientCharacteristicConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#clientCharacteristicConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn clientCharacteristicConfiguration(self: QLowEnergyCharacteristic) QLowEnergyDescriptor {
        return .{ .ptr = qtc.QLowEnergyCharacteristic_ClientCharacteristicConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn isValid(self: QLowEnergyCharacteristic) bool {
        return qtc.QLowEnergyCharacteristic_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#dtor.QLowEnergyCharacteristic)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyCharacteristic `
    ///
    pub fn delete(self: QLowEnergyCharacteristic) void {
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
