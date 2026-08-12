const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUuid = @import("libqt6").QUuid;
const QUuid__Id128Bytes = @import("libqt6").QUuid__Id128Bytes;
const qbluetoothuuid_enums = enums;
const qsysinfo_enums = @import("../libqsysinfo.zig").enums;
const quuid_enums = @import("../libquuid.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html)
pub const QBluetoothUuid = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothUuid,

    pub const _is_QBluetoothUuid = {};
    pub const _is_QUuid = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothUuid `
    ///
    pub fn new(other: anytype) QBluetoothUuid {
        comptime _ = @TypeOf(other)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QBluetoothUuid_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    pub fn new2() QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.ProtocolUuid `
    ///
    pub fn new3(uuid: i32) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new3(@bitCast(uuid)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.ServiceClassUuid `
    ///
    pub fn new4(uuid: i32) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new4(@bitCast(uuid)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.CharacteristicType `
    ///
    pub fn new5(uuid: i32) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new5(@bitCast(uuid)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.DescriptorType `
    ///
    pub fn new6(uuid: i32) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new6(@bitCast(uuid)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: u16 `
    ///
    pub fn new7(uuid: u16) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new7(@bitCast(uuid)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: u32 `
    ///
    pub fn new8(uuid: u32) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothUuid_new8(@bitCast(uuid)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn new9(uuid: anytype) QBluetoothUuid {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        return .{ .ptr = qtc.QBluetoothUuid_new9(@ptrCast(uuid.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QBluetoothUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QUuid `
    ///
    pub fn new10(uuid: anytype) QBluetoothUuid {
        comptime _ = @TypeOf(uuid)._is_QUuid;
        return .{ .ptr = qtc.QBluetoothUuid_new10(@ptrCast(uuid.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` other: QBluetoothUuid `
    ///
    pub fn copyAssign(self: QBluetoothUuid, other: QBluetoothUuid) void {
        qtc.QBluetoothUuid_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` other: QBluetoothUuid `
    ///
    pub fn operatorAssign(self: QBluetoothUuid, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothUuid;
        qtc.QBluetoothUuid_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn minimumSize(self: QBluetoothUuid) i32 {
        return qtc.QBluetoothUuid_MinimumSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUInt16` instead
    ///
    pub const ToUInt16 = toUInt16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn toUInt16(self: QBluetoothUuid) u16 {
        return qtc.QBluetoothUuid_ToUInt16(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUInt32` instead
    ///
    pub const ToUInt32 = toUInt32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn toUInt32(self: QBluetoothUuid) u32 {
        return qtc.QBluetoothUuid_ToUInt32(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUInt128` instead
    ///
    pub const ToUInt128 = toUInt128;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt128)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn toUInt128(self: QBluetoothUuid) u128 {
        return qtc.QBluetoothUuid_ToUInt128(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serviceClassToString` instead
    ///
    pub const ServiceClassToString = serviceClassToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#serviceClassToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uuid: qbluetoothuuid_enums.ServiceClassUuid `
    ///
    pub fn serviceClassToString(allocator: std.mem.Allocator, uuid: i32) []const u8 {
        var _str = qtc.QBluetoothUuid_ServiceClassToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothUuid.serviceClassToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `protocolToString` instead
    ///
    pub const ProtocolToString = protocolToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#protocolToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uuid: qbluetoothuuid_enums.ProtocolUuid `
    ///
    pub fn protocolToString(allocator: std.mem.Allocator, uuid: i32) []const u8 {
        var _str = qtc.QBluetoothUuid_ProtocolToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothUuid.protocolToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `characteristicToString` instead
    ///
    pub const CharacteristicToString = characteristicToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#characteristicToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uuid: qbluetoothuuid_enums.CharacteristicType `
    ///
    pub fn characteristicToString(allocator: std.mem.Allocator, uuid: i32) []const u8 {
        var _str = qtc.QBluetoothUuid_CharacteristicToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothUuid.characteristicToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `descriptorToString` instead
    ///
    pub const DescriptorToString = descriptorToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#descriptorToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uuid: qbluetoothuuid_enums.DescriptorType `
    ///
    pub fn descriptorToString(allocator: std.mem.Allocator, uuid: i32) []const u8 {
        var _str = qtc.QBluetoothUuid_DescriptorToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothUuid.descriptorToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toUInt161` instead
    ///
    pub const ToUInt161 = toUInt161;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` ok: *bool `
    ///
    pub fn toUInt161(self: QBluetoothUuid, ok: *bool) u16 {
        return qtc.QBluetoothUuid_ToUInt161(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toUInt321` instead
    ///
    pub const ToUInt321 = toUInt321;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` ok: *bool `
    ///
    pub fn toUInt321(self: QBluetoothUuid, ok: *bool) u32 {
        return qtc.QBluetoothUuid_ToUInt321(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `toUInt1281` instead
    ///
    pub const ToUInt1281 = toUInt1281;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt128)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn toUInt1281(self: QBluetoothUuid, order: i32) u128 {
        return qtc.QBluetoothUuid_ToUInt1281(@ptrCast(self.ptr), @bitCast(order));
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QUuid {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QUuid_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QBluetoothUuid, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothUuid.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QBluetoothUuid, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothUuid.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toBytes` instead
    ///
    pub const ToBytes = toBytes;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn toBytes(self: QBluetoothUuid) QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid_ToBytes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRfc4122` instead
    ///
    pub const ToRfc4122 = toRfc4122;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toRfc4122(self: QBluetoothUuid, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToRfc4122(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothUuid.toRfc4122: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromBytes` instead
    ///
    pub const FromBytes = fromBytes;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    pub fn fromBytes(bytes: ?*const anyopaque) QUuid {
        return .{ .ptr = qtc.QUuid_FromBytes(@ptrCast(bytes)) };
    }

    /// ### DEPRECATED: Use `fromRfc4122` instead
    ///
    pub const FromRfc4122 = fromRfc4122;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn fromRfc4122(param1: []u8) QUuid {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QUuid_FromRfc4122(param1_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn isNull(self: QBluetoothUuid) bool {
        return qtc.QUuid_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createUuid` instead
    ///
    pub const CreateUuid = createUuid;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuid)
    ///
    pub fn createUuid() QUuid {
        return .{ .ptr = qtc.QUuid_CreateUuid() };
    }

    /// ### DEPRECATED: Use `createUuidV5` instead
    ///
    pub const CreateUuidV5 = createUuidV5;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn createUuidV5(ns: anytype, baseData: []u8) QUuid {
        comptime _ = @TypeOf(ns)._is_QUuid;
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return .{ .ptr = qtc.QUuid_CreateUuidV5(@ptrCast(ns.ptr), baseData_str) };
    }

    /// ### DEPRECATED: Use `createUuidV3` instead
    ///
    pub const CreateUuidV3 = createUuidV3;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn createUuidV3(ns: anytype, baseData: []u8) QUuid {
        comptime _ = @TypeOf(ns)._is_QUuid;
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return .{ .ptr = qtc.QUuid_CreateUuidV3(@ptrCast(ns.ptr), baseData_str) };
    }

    /// ### DEPRECATED: Use `variant` instead
    ///
    pub const Variant = variant;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Variant `
    ///
    pub fn variant(self: QBluetoothUuid) i32 {
        return qtc.QUuid_Variant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Version `
    ///
    pub fn version(self: QBluetoothUuid) i32 {
        return qtc.QUuid_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data1` instead
    ///
    pub const Data1 = data1;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn data1(self: QBluetoothUuid) u32 {
        return qtc.QUuid_Data1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData1` instead
    ///
    pub const SetData1 = setData1;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` _data1: u32 `
    ///
    pub fn setData1(self: QBluetoothUuid, _data1: u32) void {
        qtc.QUuid_SetData1(@ptrCast(self.ptr), @bitCast(_data1));
    }

    /// ### DEPRECATED: Use `data2` instead
    ///
    pub const Data2 = data2;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn data2(self: QBluetoothUuid) u16 {
        return qtc.QUuid_Data2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData2` instead
    ///
    pub const SetData2 = setData2;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` _data2: u16 `
    ///
    pub fn setData2(self: QBluetoothUuid, _data2: u16) void {
        qtc.QUuid_SetData2(@ptrCast(self.ptr), @bitCast(_data2));
    }

    /// ### DEPRECATED: Use `data3` instead
    ///
    pub const Data3 = data3;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn data3(self: QBluetoothUuid) u16 {
        return qtc.QUuid_Data3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData3` instead
    ///
    pub const SetData3 = setData3;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` _data3: u16 `
    ///
    pub fn setData3(self: QBluetoothUuid, _data3: u16) void {
        qtc.QUuid_SetData3(@ptrCast(self.ptr), @bitCast(_data3));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    pub fn toString1(self: QBluetoothUuid, allocator: std.mem.Allocator, mode: i32) []const u8 {
        var _str = qtc.QUuid_ToString1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothUuid.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toByteArray1` instead
    ///
    pub const ToByteArray1 = toByteArray1;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    pub fn toByteArray1(self: QBluetoothUuid, allocator: std.mem.Allocator, mode: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothUuid.toByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toBytes1` instead
    ///
    pub const ToBytes1 = toBytes1;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn toBytes1(self: QBluetoothUuid, order: i32) QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid_ToBytes1(@ptrCast(self.ptr), @bitCast(order)) };
    }

    /// ### DEPRECATED: Use `fromBytes2` instead
    ///
    pub const FromBytes2 = fromBytes2;

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn fromBytes2(bytes: ?*const anyopaque, order: i32) QUuid {
        return .{ .ptr = qtc.QUuid_FromBytes2(@ptrCast(bytes), @bitCast(order)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#dtor.QBluetoothUuid)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothUuid `
    ///
    pub fn delete(self: QBluetoothUuid) void {
        qtc.QBluetoothUuid_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#public-types)
pub const enums = struct {
    pub const ProtocolUuid = enum(i32) {
        pub const Sdp: i32 = 1;
        pub const Udp: i32 = 2;
        pub const Rfcomm: i32 = 3;
        pub const Tcp: i32 = 4;
        pub const TcsBin: i32 = 5;
        pub const TcsAt: i32 = 6;
        pub const Att: i32 = 7;
        pub const Obex: i32 = 8;
        pub const Ip: i32 = 9;
        pub const Ftp: i32 = 10;
        pub const Http: i32 = 12;
        pub const Wsp: i32 = 14;
        pub const Bnep: i32 = 15;
        pub const Upnp: i32 = 16;
        pub const Hidp: i32 = 17;
        pub const HardcopyControlChannel: i32 = 18;
        pub const HardcopyDataChannel: i32 = 20;
        pub const HardcopyNotification: i32 = 22;
        pub const Avctp: i32 = 23;
        pub const Avdtp: i32 = 25;
        pub const Cmtp: i32 = 27;
        pub const UdiCPlain: i32 = 29;
        pub const McapControlChannel: i32 = 30;
        pub const McapDataChannel: i32 = 31;
        pub const L2cap: i32 = 256;
    };

    pub const ServiceClassUuid = enum(i32) {
        pub const ServiceDiscoveryServer: i32 = 4096;
        pub const BrowseGroupDescriptor: i32 = 4097;
        pub const PublicBrowseGroup: i32 = 4098;
        pub const SerialPort: i32 = 4353;
        pub const LANAccessUsingPPP: i32 = 4354;
        pub const DialupNetworking: i32 = 4355;
        pub const IrMCSync: i32 = 4356;
        pub const ObexObjectPush: i32 = 4357;
        pub const OBEXFileTransfer: i32 = 4358;
        pub const IrMCSyncCommand: i32 = 4359;
        pub const Headset: i32 = 4360;
        pub const AudioSource: i32 = 4362;
        pub const AudioSink: i32 = 4363;
        pub const AV_RemoteControlTarget: i32 = 4364;
        pub const AdvancedAudioDistribution: i32 = 4365;
        pub const AV_RemoteControl: i32 = 4366;
        pub const AV_RemoteControlController: i32 = 4367;
        pub const HeadsetAG: i32 = 4370;
        pub const PANU: i32 = 4373;
        pub const NAP: i32 = 4374;
        pub const GN: i32 = 4375;
        pub const DirectPrinting: i32 = 4376;
        pub const ReferencePrinting: i32 = 4377;
        pub const BasicImage: i32 = 4378;
        pub const ImagingResponder: i32 = 4379;
        pub const ImagingAutomaticArchive: i32 = 4380;
        pub const ImagingReferenceObjects: i32 = 4381;
        pub const Handsfree: i32 = 4382;
        pub const HandsfreeAudioGateway: i32 = 4383;
        pub const DirectPrintingReferenceObjectsService: i32 = 4384;
        pub const ReflectedUI: i32 = 4385;
        pub const BasicPrinting: i32 = 4386;
        pub const PrintingStatus: i32 = 4387;
        pub const HumanInterfaceDeviceService: i32 = 4388;
        pub const HardcopyCableReplacement: i32 = 4389;
        pub const HCRPrint: i32 = 4390;
        pub const HCRScan: i32 = 4391;
        pub const SIMAccess: i32 = 4397;
        pub const PhonebookAccessPCE: i32 = 4398;
        pub const PhonebookAccessPSE: i32 = 4399;
        pub const PhonebookAccess: i32 = 4400;
        pub const HeadsetHS: i32 = 4401;
        pub const MessageAccessServer: i32 = 4402;
        pub const MessageNotificationServer: i32 = 4403;
        pub const MessageAccessProfile: i32 = 4404;
        pub const GNSS: i32 = 4405;
        pub const GNSSServer: i32 = 4406;
        pub const Display3D: i32 = 4407;
        pub const Glasses3D: i32 = 4408;
        pub const Synchronization3D: i32 = 4409;
        pub const MPSProfile: i32 = 4410;
        pub const MPSService: i32 = 4411;
        pub const PnPInformation: i32 = 4608;
        pub const GenericNetworking: i32 = 4609;
        pub const GenericFileTransfer: i32 = 4610;
        pub const GenericAudio: i32 = 4611;
        pub const GenericTelephony: i32 = 4612;
        pub const VideoSource: i32 = 4867;
        pub const VideoSink: i32 = 4868;
        pub const VideoDistribution: i32 = 4869;
        pub const HDP: i32 = 5120;
        pub const HDPSource: i32 = 5121;
        pub const HDPSink: i32 = 5122;
        pub const GenericAccess: i32 = 6144;
        pub const GenericAttribute: i32 = 6145;
        pub const ImmediateAlert: i32 = 6146;
        pub const LinkLoss: i32 = 6147;
        pub const TxPower: i32 = 6148;
        pub const CurrentTimeService: i32 = 6149;
        pub const ReferenceTimeUpdateService: i32 = 6150;
        pub const NextDSTChangeService: i32 = 6151;
        pub const Glucose: i32 = 6152;
        pub const HealthThermometer: i32 = 6153;
        pub const DeviceInformation: i32 = 6154;
        pub const HeartRate: i32 = 6157;
        pub const PhoneAlertStatusService: i32 = 6158;
        pub const BatteryService: i32 = 6159;
        pub const BloodPressure: i32 = 6160;
        pub const AlertNotificationService: i32 = 6161;
        pub const HumanInterfaceDevice: i32 = 6162;
        pub const ScanParameters: i32 = 6163;
        pub const RunningSpeedAndCadence: i32 = 6164;
        pub const CyclingSpeedAndCadence: i32 = 6166;
        pub const CyclingPower: i32 = 6168;
        pub const LocationAndNavigation: i32 = 6169;
        pub const EnvironmentalSensing: i32 = 6170;
        pub const BodyComposition: i32 = 6171;
        pub const UserData: i32 = 6172;
        pub const WeightScale: i32 = 6173;
        pub const BondManagement: i32 = 6174;
        pub const ContinuousGlucoseMonitoring: i32 = 6175;
    };

    pub const CharacteristicType = enum(i32) {
        pub const DeviceName: i32 = 10752;
        pub const Appearance: i32 = 10753;
        pub const PeripheralPrivacyFlag: i32 = 10754;
        pub const ReconnectionAddress: i32 = 10755;
        pub const PeripheralPreferredConnectionParameters: i32 = 10756;
        pub const ServiceChanged: i32 = 10757;
        pub const AlertLevel: i32 = 10758;
        pub const TxPowerLevel: i32 = 10759;
        pub const DateTime: i32 = 10760;
        pub const DayOfWeek: i32 = 10761;
        pub const DayDateTime: i32 = 10762;
        pub const ExactTime256: i32 = 10764;
        pub const DSTOffset: i32 = 10765;
        pub const TimeZone: i32 = 10766;
        pub const LocalTimeInformation: i32 = 10767;
        pub const TimeWithDST: i32 = 10769;
        pub const TimeAccuracy: i32 = 10770;
        pub const TimeSource: i32 = 10771;
        pub const ReferenceTimeInformation: i32 = 10772;
        pub const TimeUpdateControlPoint: i32 = 10774;
        pub const TimeUpdateState: i32 = 10775;
        pub const GlucoseMeasurement: i32 = 10776;
        pub const BatteryLevel: i32 = 10777;
        pub const TemperatureMeasurement: i32 = 10780;
        pub const TemperatureType: i32 = 10781;
        pub const IntermediateTemperature: i32 = 10782;
        pub const MeasurementInterval: i32 = 10785;
        pub const BootKeyboardInputReport: i32 = 10786;
        pub const SystemID: i32 = 10787;
        pub const ModelNumberString: i32 = 10788;
        pub const SerialNumberString: i32 = 10789;
        pub const FirmwareRevisionString: i32 = 10790;
        pub const HardwareRevisionString: i32 = 10791;
        pub const SoftwareRevisionString: i32 = 10792;
        pub const ManufacturerNameString: i32 = 10793;
        pub const IEEE1107320601RegulatoryCertificationDataList: i32 = 10794;
        pub const CurrentTime: i32 = 10795;
        pub const MagneticDeclination: i32 = 10796;
        pub const ScanRefresh: i32 = 10801;
        pub const BootKeyboardOutputReport: i32 = 10802;
        pub const BootMouseInputReport: i32 = 10803;
        pub const GlucoseMeasurementContext: i32 = 10804;
        pub const BloodPressureMeasurement: i32 = 10805;
        pub const IntermediateCuffPressure: i32 = 10806;
        pub const HeartRateMeasurement: i32 = 10807;
        pub const BodySensorLocation: i32 = 10808;
        pub const HeartRateControlPoint: i32 = 10809;
        pub const AlertStatus: i32 = 10815;
        pub const RingerControlPoint: i32 = 10816;
        pub const RingerSetting: i32 = 10817;
        pub const AlertCategoryIDBitMask: i32 = 10818;
        pub const AlertCategoryID: i32 = 10819;
        pub const AlertNotificationControlPoint: i32 = 10820;
        pub const UnreadAlertStatus: i32 = 10821;
        pub const NewAlert: i32 = 10822;
        pub const SupportedNewAlertCategory: i32 = 10823;
        pub const SupportedUnreadAlertCategory: i32 = 10824;
        pub const BloodPressureFeature: i32 = 10825;
        pub const HIDInformation: i32 = 10826;
        pub const ReportMap: i32 = 10827;
        pub const HIDControlPoint: i32 = 10828;
        pub const Report: i32 = 10829;
        pub const ProtocolMode: i32 = 10830;
        pub const ScanIntervalWindow: i32 = 10831;
        pub const PnPID: i32 = 10832;
        pub const GlucoseFeature: i32 = 10833;
        pub const RecordAccessControlPoint: i32 = 10834;
        pub const RSCMeasurement: i32 = 10835;
        pub const RSCFeature: i32 = 10836;
        pub const SCControlPoint: i32 = 10837;
        pub const CSCMeasurement: i32 = 10843;
        pub const CSCFeature: i32 = 10844;
        pub const SensorLocation: i32 = 10845;
        pub const CyclingPowerMeasurement: i32 = 10851;
        pub const CyclingPowerVector: i32 = 10852;
        pub const CyclingPowerFeature: i32 = 10853;
        pub const CyclingPowerControlPoint: i32 = 10854;
        pub const LocationAndSpeed: i32 = 10855;
        pub const Navigation: i32 = 10856;
        pub const PositionQuality: i32 = 10857;
        pub const LNFeature: i32 = 10858;
        pub const LNControlPoint: i32 = 10859;
        pub const Elevation: i32 = 10860;
        pub const Pressure: i32 = 10861;
        pub const Temperature: i32 = 10862;
        pub const Humidity: i32 = 10863;
        pub const TrueWindSpeed: i32 = 10864;
        pub const TrueWindDirection: i32 = 10865;
        pub const ApparentWindSpeed: i32 = 10866;
        pub const ApparentWindDirection: i32 = 10867;
        pub const GustFactor: i32 = 10868;
        pub const PollenConcentration: i32 = 10869;
        pub const UVIndex: i32 = 10870;
        pub const Irradiance: i32 = 10871;
        pub const Rainfall: i32 = 10872;
        pub const WindChill: i32 = 10873;
        pub const HeatIndex: i32 = 10874;
        pub const DewPoint: i32 = 10875;
        pub const DescriptorValueChanged: i32 = 10877;
        pub const AerobicHeartRateLowerLimit: i32 = 10878;
        pub const AerobicThreshold: i32 = 10879;
        pub const Age: i32 = 10880;
        pub const AnaerobicHeartRateLowerLimit: i32 = 10881;
        pub const AnaerobicHeartRateUpperLimit: i32 = 10882;
        pub const AnaerobicThreshold: i32 = 10883;
        pub const AerobicHeartRateUpperLimit: i32 = 10884;
        pub const DateOfBirth: i32 = 10885;
        pub const DateOfThresholdAssessment: i32 = 10886;
        pub const EmailAddress: i32 = 10887;
        pub const FatBurnHeartRateLowerLimit: i32 = 10888;
        pub const FatBurnHeartRateUpperLimit: i32 = 10889;
        pub const FirstName: i32 = 10890;
        pub const FiveZoneHeartRateLimits: i32 = 10891;
        pub const Gender: i32 = 10892;
        pub const HeartRateMax: i32 = 10893;
        pub const Height: i32 = 10894;
        pub const HipCircumference: i32 = 10895;
        pub const LastName: i32 = 10896;
        pub const MaximumRecommendedHeartRate: i32 = 10897;
        pub const RestingHeartRate: i32 = 10898;
        pub const SportTypeForAerobicAnaerobicThresholds: i32 = 10899;
        pub const ThreeZoneHeartRateLimits: i32 = 10900;
        pub const TwoZoneHeartRateLimits: i32 = 10901;
        pub const VO2Max: i32 = 10902;
        pub const WaistCircumference: i32 = 10903;
        pub const Weight: i32 = 10904;
        pub const DatabaseChangeIncrement: i32 = 10905;
        pub const UserIndex: i32 = 10906;
        pub const BodyCompositionFeature: i32 = 10907;
        pub const BodyCompositionMeasurement: i32 = 10908;
        pub const WeightMeasurement: i32 = 10909;
        pub const WeightScaleFeature: i32 = 10910;
        pub const UserControlPoint: i32 = 10911;
        pub const MagneticFluxDensity2D: i32 = 10912;
        pub const MagneticFluxDensity3D: i32 = 10913;
        pub const Language: i32 = 10914;
        pub const BarometricPressureTrend: i32 = 10915;
    };

    pub const DescriptorType = enum(i32) {
        pub const UnknownDescriptorType: i32 = 0;
        pub const CharacteristicExtendedProperties: i32 = 10496;
        pub const CharacteristicUserDescription: i32 = 10497;
        pub const ClientCharacteristicConfiguration: i32 = 10498;
        pub const ServerCharacteristicConfiguration: i32 = 10499;
        pub const CharacteristicPresentationFormat: i32 = 10500;
        pub const CharacteristicAggregateFormat: i32 = 10501;
        pub const ValidRange: i32 = 10502;
        pub const ExternalReportReference: i32 = 10503;
        pub const ReportReference: i32 = 10504;
        pub const EnvironmentalSensingConfiguration: i32 = 10507;
        pub const EnvironmentalSensingMeasurement: i32 = 10508;
        pub const EnvironmentalSensingTriggerSetting: i32 = 10509;
    };
};
