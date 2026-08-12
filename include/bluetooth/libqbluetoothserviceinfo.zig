const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothDeviceInfo = @import("libqt6").QBluetoothDeviceInfo;
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QVariant = @import("libqt6").QVariant;
const qbluetoothserviceinfo_enums = enums;
const qbluetoothuuid_enums = @import("libqbluetoothuuid.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html)
pub const QBluetoothServiceInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothServiceInfo,

    pub const _is_QBluetoothServiceInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothServiceInfo object in C++ memory
    ///
    pub fn new() QBluetoothServiceInfo {
        return .{ .ptr = qtc.QBluetoothServiceInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothServiceInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothServiceInfo `
    ///
    pub fn new2(other: anytype) QBluetoothServiceInfo {
        comptime _ = @TypeOf(other)._is_QBluetoothServiceInfo;
        return .{ .ptr = qtc.QBluetoothServiceInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn isValid(self: QBluetoothServiceInfo) bool {
        return qtc.QBluetoothServiceInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComplete` instead
    ///
    pub const IsComplete = isComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn isComplete(self: QBluetoothServiceInfo) bool {
        return qtc.QBluetoothServiceInfo_IsComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` info: QBluetoothDeviceInfo `
    ///
    pub fn setDevice(self: QBluetoothServiceInfo, info: anytype) void {
        comptime _ = @TypeOf(info)._is_QBluetoothDeviceInfo;
        qtc.QBluetoothServiceInfo_SetDevice(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn device(self: QBluetoothServiceInfo) QBluetoothDeviceInfo {
        return .{ .ptr = qtc.QBluetoothServiceInfo_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setAttribute(self: QBluetoothServiceInfo, attributeId: u16, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QBluetoothServiceInfo_SetAttribute(@ptrCast(self.ptr), @bitCast(attributeId), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QBluetoothUuid `
    ///
    pub fn setAttribute2(self: QBluetoothServiceInfo, attributeId: u16, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QBluetoothUuid;
        qtc.QBluetoothServiceInfo_SetAttribute2(@ptrCast(self.ptr), @bitCast(attributeId), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttribute3` instead
    ///
    pub const SetAttribute3 = setAttribute3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QBluetoothServiceInfo__Sequence `
    ///
    pub fn setAttribute3(self: QBluetoothServiceInfo, attributeId: u16, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QBluetoothServiceInfo__Sequence;
        qtc.QBluetoothServiceInfo_SetAttribute3(@ptrCast(self.ptr), @bitCast(attributeId), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttribute4` instead
    ///
    pub const SetAttribute4 = setAttribute4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QBluetoothServiceInfo__Alternative `
    ///
    pub fn setAttribute4(self: QBluetoothServiceInfo, attributeId: u16, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QBluetoothServiceInfo__Alternative;
        qtc.QBluetoothServiceInfo_SetAttribute4(@ptrCast(self.ptr), @bitCast(attributeId), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    pub fn attribute(self: QBluetoothServiceInfo, attributeId: u16) QVariant {
        return .{ .ptr = qtc.QBluetoothServiceInfo_Attribute(@ptrCast(self.ptr), @bitCast(attributeId)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attributes(self: QBluetoothServiceInfo, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceInfo_Attributes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u16, _arr.len) catch @panic("QBluetoothServiceInfo.attributes: Memory allocation failed");
        const _data_val: [*]u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    pub fn contains(self: QBluetoothServiceInfo, attributeId: u16) bool {
        return qtc.QBluetoothServiceInfo_Contains(@ptrCast(self.ptr), @bitCast(attributeId));
    }

    /// ### DEPRECATED: Use `removeAttribute` instead
    ///
    pub const RemoveAttribute = removeAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    pub fn removeAttribute(self: QBluetoothServiceInfo, attributeId: u16) void {
        qtc.QBluetoothServiceInfo_RemoveAttribute(@ptrCast(self.ptr), @bitCast(attributeId));
    }

    /// ### DEPRECATED: Use `setServiceName` instead
    ///
    pub const SetServiceName = setServiceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setServiceName(self: QBluetoothServiceInfo, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QBluetoothServiceInfo_SetServiceName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `serviceName` instead
    ///
    pub const ServiceName = serviceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceName(self: QBluetoothServiceInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceInfo_ServiceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceInfo.serviceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setServiceDescription` instead
    ///
    pub const SetServiceDescription = setServiceDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setServiceDescription(self: QBluetoothServiceInfo, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QBluetoothServiceInfo_SetServiceDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `serviceDescription` instead
    ///
    pub const ServiceDescription = serviceDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceDescription(self: QBluetoothServiceInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceInfo_ServiceDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceInfo.serviceDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setServiceProvider` instead
    ///
    pub const SetServiceProvider = setServiceProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn setServiceProvider(self: QBluetoothServiceInfo, provider: []const u8) void {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        qtc.QBluetoothServiceInfo_SetServiceProvider(@ptrCast(self.ptr), provider_str);
    }

    /// ### DEPRECATED: Use `serviceProvider` instead
    ///
    pub const ServiceProvider = serviceProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceProvider(self: QBluetoothServiceInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceInfo_ServiceProvider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceInfo.serviceProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `socketProtocol` instead
    ///
    pub const SocketProtocol = socketProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#socketProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn socketProtocol(self: QBluetoothServiceInfo) i32 {
        return qtc.QBluetoothServiceInfo_SocketProtocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `protocolServiceMultiplexer` instead
    ///
    pub const ProtocolServiceMultiplexer = protocolServiceMultiplexer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#protocolServiceMultiplexer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn protocolServiceMultiplexer(self: QBluetoothServiceInfo) i32 {
        return qtc.QBluetoothServiceInfo_ProtocolServiceMultiplexer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverChannel` instead
    ///
    pub const ServerChannel = serverChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serverChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn serverChannel(self: QBluetoothServiceInfo) i32 {
        return qtc.QBluetoothServiceInfo_ServerChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `protocolDescriptor` instead
    ///
    pub const ProtocolDescriptor = protocolDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#protocolDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` protocol: qbluetoothuuid_enums.ProtocolUuid `
    ///
    pub fn protocolDescriptor(self: QBluetoothServiceInfo, protocol: i32) QBluetoothServiceInfo__Sequence {
        return .{ .ptr = qtc.QBluetoothServiceInfo_ProtocolDescriptor(@ptrCast(self.ptr), @bitCast(protocol)) };
    }

    /// ### DEPRECATED: Use `setServiceAvailability` instead
    ///
    pub const SetServiceAvailability = setServiceAvailability;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceAvailability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` availability: u8 `
    ///
    pub fn setServiceAvailability(self: QBluetoothServiceInfo, availability: u8) void {
        qtc.QBluetoothServiceInfo_SetServiceAvailability(@ptrCast(self.ptr), @bitCast(availability));
    }

    /// ### DEPRECATED: Use `serviceAvailability` instead
    ///
    pub const ServiceAvailability = serviceAvailability;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceAvailability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn serviceAvailability(self: QBluetoothServiceInfo) u8 {
        return qtc.QBluetoothServiceInfo_ServiceAvailability(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setServiceUuid` instead
    ///
    pub const SetServiceUuid = setServiceUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn setServiceUuid(self: QBluetoothServiceInfo, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothServiceInfo_SetServiceUuid(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### DEPRECATED: Use `serviceUuid` instead
    ///
    pub const ServiceUuid = serviceUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn serviceUuid(self: QBluetoothServiceInfo) QBluetoothUuid {
        return .{ .ptr = qtc.QBluetoothServiceInfo_ServiceUuid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `serviceClassUuids` instead
    ///
    pub const ServiceClassUuids = serviceClassUuids;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceClassUuids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceClassUuids(self: QBluetoothServiceInfo, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceInfo_ServiceClassUuids(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QBluetoothServiceInfo.serviceClassUuids: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` other: QBluetoothServiceInfo `
    ///
    pub fn operatorAssign(self: QBluetoothServiceInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothServiceInfo;
        qtc.QBluetoothServiceInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isRegistered` instead
    ///
    pub const IsRegistered = isRegistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn isRegistered(self: QBluetoothServiceInfo) bool {
        return qtc.QBluetoothServiceInfo_IsRegistered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerService` instead
    ///
    pub const RegisterService = registerService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#registerService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn registerService(self: QBluetoothServiceInfo) bool {
        return qtc.QBluetoothServiceInfo_RegisterService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unregisterService` instead
    ///
    pub const UnregisterService = unregisterService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#unregisterService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn unregisterService(self: QBluetoothServiceInfo) bool {
        return qtc.QBluetoothServiceInfo_UnregisterService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerService1` instead
    ///
    pub const RegisterService1 = registerService1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#registerService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    /// ` localAdapter: QBluetoothAddress `
    ///
    pub fn registerService1(self: QBluetoothServiceInfo, localAdapter: anytype) bool {
        comptime _ = @TypeOf(localAdapter)._is_QBluetoothAddress;
        return qtc.QBluetoothServiceInfo_RegisterService1(@ptrCast(self.ptr), @ptrCast(localAdapter.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#dtor.QBluetoothServiceInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothServiceInfo `
    ///
    pub fn delete(self: QBluetoothServiceInfo) void {
        qtc.QBluetoothServiceInfo_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<QVariant>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-sequence.html)
pub const QBluetoothServiceInfo__Sequence = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-sequence.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothServiceInfo__Sequence,

    pub const _is_QBluetoothServiceInfo__Sequence = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothServiceInfo::Sequence object in C++ memory
    ///
    pub fn new() QBluetoothServiceInfo__Sequence {
        return .{ .ptr = qtc.QBluetoothServiceInfo__Sequence_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothServiceInfo::Sequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn new2(list: []QVariant) QBluetoothServiceInfo__Sequence {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QBluetoothServiceInfo__Sequence_new2(list_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothServiceInfo::Sequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBluetoothServiceInfo__Sequence `
    ///
    pub fn new3(param1: anytype) QBluetoothServiceInfo__Sequence {
        comptime _ = @TypeOf(param1)._is_QBluetoothServiceInfo__Sequence;
        return .{ .ptr = qtc.QBluetoothServiceInfo__Sequence_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothServiceInfo__Sequence `
    ///
    pub fn delete(self: QBluetoothServiceInfo__Sequence) void {
        qtc.QBluetoothServiceInfo__Sequence_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<QVariant>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-alternative.html)
pub const QBluetoothServiceInfo__Alternative = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-alternative.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothServiceInfo__Alternative,

    pub const _is_QBluetoothServiceInfo__Alternative = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothServiceInfo::Alternative object in C++ memory
    ///
    pub fn new() QBluetoothServiceInfo__Alternative {
        return .{ .ptr = qtc.QBluetoothServiceInfo__Alternative_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothServiceInfo::Alternative object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn new2(list: []QVariant) QBluetoothServiceInfo__Alternative {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QBluetoothServiceInfo__Alternative_new2(list_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothServiceInfo::Alternative object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBluetoothServiceInfo__Alternative `
    ///
    pub fn new3(param1: anytype) QBluetoothServiceInfo__Alternative {
        comptime _ = @TypeOf(param1)._is_QBluetoothServiceInfo__Alternative;
        return .{ .ptr = qtc.QBluetoothServiceInfo__Alternative_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothServiceInfo__Alternative `
    ///
    pub fn delete(self: QBluetoothServiceInfo__Alternative) void {
        qtc.QBluetoothServiceInfo__Alternative_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#public-types)
pub const enums = struct {
    pub const AttributeId = enum(i32) {
        pub const ServiceRecordHandle: i32 = 0;
        pub const ServiceClassIds: i32 = 1;
        pub const ServiceRecordState: i32 = 2;
        pub const ServiceId: i32 = 3;
        pub const ProtocolDescriptorList: i32 = 4;
        pub const BrowseGroupList: i32 = 5;
        pub const LanguageBaseAttributeIdList: i32 = 6;
        pub const ServiceInfoTimeToLive: i32 = 7;
        pub const ServiceAvailability: i32 = 8;
        pub const BluetoothProfileDescriptorList: i32 = 9;
        pub const DocumentationUrl: i32 = 10;
        pub const ClientExecutableUrl: i32 = 11;
        pub const IconUrl: i32 = 12;
        pub const AdditionalProtocolDescriptorList: i32 = 13;
        pub const PrimaryLanguageBase: i32 = 256;
        pub const ServiceName: i32 = 256;
        pub const ServiceDescription: i32 = 257;
        pub const ServiceProvider: i32 = 258;
    };

    pub const Protocol = enum(i32) {
        pub const UnknownProtocol: i32 = 0;
        pub const L2capProtocol: i32 = 1;
        pub const RfcommProtocol: i32 = 2;
    };
};
