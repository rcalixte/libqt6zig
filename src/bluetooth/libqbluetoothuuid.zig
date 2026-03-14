const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetoothuuid_enums = enums;
const qsysinfo_enums = @import("../libqsysinfo.zig").enums;
const quuid_enums = @import("../libquuid.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html)
pub const qbluetoothuuid = struct {
    /// New constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBluetoothUuid `
    ///
    pub fn New(other: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new(@ptrCast(other));
    }

    /// New2 constructs a new QBluetoothUuid object.
    ///
    pub fn New2() QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new2();
    }

    /// New3 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.ProtocolUuid `
    ///
    pub fn New3(uuid: i32) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new3(@bitCast(uuid));
    }

    /// New4 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.ServiceClassUuid `
    ///
    pub fn New4(uuid: i32) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new4(@bitCast(uuid));
    }

    /// New5 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.CharacteristicType `
    ///
    pub fn New5(uuid: i32) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new5(@bitCast(uuid));
    }

    /// New6 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.DescriptorType `
    ///
    pub fn New6(uuid: i32) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new6(@bitCast(uuid));
    }

    /// New7 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: u16 `
    ///
    pub fn New7(uuid: u16) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new7(@bitCast(uuid));
    }

    /// New8 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: u32 `
    ///
    pub fn New8(uuid: u32) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new8(@bitCast(uuid));
    }

    /// New9 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn New9(uuid: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new9(@ptrCast(uuid));
    }

    /// New10 constructs a new QBluetoothUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: QtC.QUuid `
    ///
    pub fn New10(uuid: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QBluetoothUuid_new10(@ptrCast(uuid));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` other: QtC.QBluetoothUuid `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothUuid_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` other: QtC.QBluetoothUuid `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothUuid_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn MinimumSize(self: ?*anyopaque) i32 {
        return qtc.QBluetoothUuid_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn ToUInt16(self: ?*anyopaque) u16 {
        return qtc.QBluetoothUuid_ToUInt16(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn ToUInt32(self: ?*anyopaque) u32 {
        return qtc.QBluetoothUuid_ToUInt32(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt128)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn ToUInt128(self: ?*anyopaque) u128 {
        return qtc.QBluetoothUuid_ToUInt128(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#serviceClassToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.ServiceClassUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceClassToString(uuid: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothUuid_ServiceClassToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothuuid.ServiceClassToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#protocolToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.ProtocolUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolToString(uuid: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothUuid_ProtocolToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothuuid.ProtocolToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#characteristicToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.CharacteristicType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CharacteristicToString(uuid: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothUuid_CharacteristicToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothuuid.CharacteristicToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#descriptorToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` uuid: qbluetoothuuid_enums.DescriptorType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DescriptorToString(uuid: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothUuid_DescriptorToString(@bitCast(uuid));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothuuid.DescriptorToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt161(self: ?*anyopaque, ok: *bool) u16 {
        return qtc.QBluetoothUuid_ToUInt161(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt321(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QBluetoothUuid_ToUInt321(@ptrCast(self), @ptrCast(ok));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#toUInt128)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn ToUInt1281(self: ?*anyopaque, order: i32) u128 {
        return qtc.QBluetoothUuid_ToUInt1281(@ptrCast(self), @bitCast(order));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString(stringVal: []const u8) QtC.QUuid {
        return qtc.QUuid_FromString(stringVal.ptr);
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothuuid.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothuuid.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn ToBytes(self: ?*anyopaque) QtC.QUuid__Id128Bytes {
        return qtc.QUuid_ToBytes(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRfc4122(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToRfc4122(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothuuid.ToRfc4122: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    pub fn FromBytes(bytes: ?*const anyopaque) QtC.QUuid {
        return qtc.QUuid_FromBytes(@ptrCast(bytes));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn FromRfc4122(param1: []u8) QtC.QUuid {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QUuid_FromRfc4122(param1_str);
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QUuid_IsNull(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuid)
    ///
    pub fn CreateUuid() QtC.QUuid {
        return qtc.QUuid_CreateUuid();
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QtC.QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn CreateUuidV5(ns: QtC.QUuid, baseData: []u8) QtC.QUuid {
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return qtc.QUuid_CreateUuidV5(@ptrCast(ns), baseData_str);
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QtC.QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn CreateUuidV3(ns: QtC.QUuid, baseData: []u8) QtC.QUuid {
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return qtc.QUuid_CreateUuidV3(@ptrCast(ns), baseData_str);
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Variant `
    ///
    pub fn Variant(self: ?*anyopaque) i32 {
        return qtc.QUuid_Variant(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Version `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QUuid_Version(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn Data1(self: ?*anyopaque) u32 {
        return qtc.QUuid_Data1(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` data1: u32 `
    ///
    pub fn SetData1(self: ?*anyopaque, data1: u32) void {
        qtc.QUuid_SetData1(@ptrCast(self), @bitCast(data1));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn Data2(self: ?*anyopaque) u16 {
        return qtc.QUuid_Data2(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` data2: u16 `
    ///
    pub fn SetData2(self: ?*anyopaque, data2: u16) void {
        qtc.QUuid_SetData2(@ptrCast(self), @bitCast(data2));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn Data3(self: ?*anyopaque) u16 {
        return qtc.QUuid_Data3(@ptrCast(self));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` data3: u16 `
    ///
    pub fn SetData3(self: ?*anyopaque, data3: u16) void {
        qtc.QUuid_SetData3(@ptrCast(self), @bitCast(data3));
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString1(@ptrCast(self), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothuuid.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray1(@ptrCast(self), @bitCast(mode));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothuuid.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QUuid
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn ToBytes1(self: ?*anyopaque, order: i32) QtC.QUuid__Id128Bytes {
        return qtc.QUuid_ToBytes1(@ptrCast(self), @bitCast(order));
    }

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
    pub fn FromBytes2(bytes: ?*const anyopaque, order: i32) QtC.QUuid {
        return qtc.QUuid_FromBytes2(@ptrCast(bytes), @bitCast(order));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothuuid.html#dtor.QBluetoothUuid)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBluetoothUuid `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothUuid_Delete(@ptrCast(self));
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
