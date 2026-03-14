const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetoothserviceinfo_enums = enums;
const qbluetoothuuid_enums = @import("libqbluetoothuuid.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html)
pub const qbluetoothserviceinfo = struct {
    /// New constructs a new QBluetoothServiceInfo object.
    ///
    pub fn New() QtC.QBluetoothServiceInfo {
        return qtc.QBluetoothServiceInfo_new();
    }

    /// New2 constructs a new QBluetoothServiceInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBluetoothServiceInfo `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QBluetoothServiceInfo {
        return qtc.QBluetoothServiceInfo_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QBluetoothServiceInfo_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn IsComplete(self: ?*anyopaque) bool {
        return qtc.QBluetoothServiceInfo_IsComplete(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` info: QtC.QBluetoothDeviceInfo `
    ///
    pub fn SetDevice(self: ?*anyopaque, info: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_SetDevice(@ptrCast(self), @ptrCast(info));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QBluetoothDeviceInfo {
        return qtc.QBluetoothServiceInfo_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetAttribute(self: ?*anyopaque, attributeId: u16, value: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_SetAttribute(@ptrCast(self), @bitCast(attributeId), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QtC.QBluetoothUuid `
    ///
    pub fn SetAttribute2(self: ?*anyopaque, attributeId: u16, value: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_SetAttribute2(@ptrCast(self), @bitCast(attributeId), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QtC.QBluetoothServiceInfo__Sequence `
    ///
    pub fn SetAttribute3(self: ?*anyopaque, attributeId: u16, value: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_SetAttribute3(@ptrCast(self), @bitCast(attributeId), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    /// ` value: QtC.QBluetoothServiceInfo__Alternative `
    ///
    pub fn SetAttribute4(self: ?*anyopaque, attributeId: u16, value: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_SetAttribute4(@ptrCast(self), @bitCast(attributeId), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    pub fn Attribute(self: ?*anyopaque, attributeId: u16) QtC.QVariant {
        return qtc.QBluetoothServiceInfo_Attribute(@ptrCast(self), @bitCast(attributeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attributes(self: ?*anyopaque, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceInfo_Attributes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u16, _arr.len) catch @panic("qbluetoothserviceinfo.Attributes: Memory allocation failed");
        const _data: [*]u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    pub fn Contains(self: ?*anyopaque, attributeId: u16) bool {
        return qtc.QBluetoothServiceInfo_Contains(@ptrCast(self), @bitCast(attributeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` attributeId: u16 `
    ///
    pub fn RemoveAttribute(self: ?*anyopaque, attributeId: u16) void {
        qtc.QBluetoothServiceInfo_RemoveAttribute(@ptrCast(self), @bitCast(attributeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetServiceName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QBluetoothServiceInfo_SetServiceName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceInfo_ServiceName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothserviceinfo.ServiceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetServiceDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QBluetoothServiceInfo_SetServiceDescription(@ptrCast(self), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceInfo_ServiceDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothserviceinfo.ServiceDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn SetServiceProvider(self: ?*anyopaque, provider: []const u8) void {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        qtc.QBluetoothServiceInfo_SetServiceProvider(@ptrCast(self), provider_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceProvider(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceInfo_ServiceProvider(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothserviceinfo.ServiceProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#socketProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn SocketProtocol(self: ?*anyopaque) i32 {
        return qtc.QBluetoothServiceInfo_SocketProtocol(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#protocolServiceMultiplexer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn ProtocolServiceMultiplexer(self: ?*anyopaque) i32 {
        return qtc.QBluetoothServiceInfo_ProtocolServiceMultiplexer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serverChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn ServerChannel(self: ?*anyopaque) i32 {
        return qtc.QBluetoothServiceInfo_ServerChannel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#protocolDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` protocol: qbluetoothuuid_enums.ProtocolUuid `
    ///
    pub fn ProtocolDescriptor(self: ?*anyopaque, protocol: i32) QtC.QBluetoothServiceInfo__Sequence {
        return qtc.QBluetoothServiceInfo_ProtocolDescriptor(@ptrCast(self), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceAvailability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` availability: u8 `
    ///
    pub fn SetServiceAvailability(self: ?*anyopaque, availability: u8) void {
        qtc.QBluetoothServiceInfo_SetServiceAvailability(@ptrCast(self), @bitCast(availability));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceAvailability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn ServiceAvailability(self: ?*anyopaque) u8 {
        return qtc.QBluetoothServiceInfo_ServiceAvailability(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` uuid: QtC.QBluetoothUuid `
    ///
    pub fn SetServiceUuid(self: ?*anyopaque, uuid: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_SetServiceUuid(@ptrCast(self), @ptrCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceUuid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn ServiceUuid(self: ?*anyopaque) QtC.QBluetoothUuid {
        return qtc.QBluetoothServiceInfo_ServiceUuid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceClassUuids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceClassUuids(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceInfo_ServiceClassUuids(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QBluetoothUuid, _arr.len) catch @panic("qbluetoothserviceinfo.ServiceClassUuids: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` other: QtC.QBluetoothServiceInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn IsRegistered(self: ?*anyopaque) bool {
        return qtc.QBluetoothServiceInfo_IsRegistered(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#registerService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn RegisterService(self: ?*anyopaque) bool {
        return qtc.QBluetoothServiceInfo_RegisterService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#unregisterService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn UnregisterService(self: ?*anyopaque) bool {
        return qtc.QBluetoothServiceInfo_UnregisterService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#registerService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    /// ` localAdapter: QtC.QBluetoothAddress `
    ///
    pub fn RegisterService1(self: ?*anyopaque, localAdapter: ?*anyopaque) bool {
        return qtc.QBluetoothServiceInfo_RegisterService1(@ptrCast(self), @ptrCast(localAdapter));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#dtor.QBluetoothServiceInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBluetoothServiceInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<QVariant>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-sequence.html)
pub const qbluetoothserviceinfo__sequence = struct {
    /// New constructs a new QBluetoothServiceInfo::Sequence object.
    ///
    pub fn New() QtC.QBluetoothServiceInfo__Sequence {
        return qtc.QBluetoothServiceInfo__Sequence_new();
    }

    /// New2 constructs a new QBluetoothServiceInfo::Sequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QtC.QVariant `
    ///
    pub fn New2(list: []QtC.QVariant) QtC.QBluetoothServiceInfo__Sequence {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };

        return qtc.QBluetoothServiceInfo__Sequence_new2(list_list);
    }

    /// New3 constructs a new QBluetoothServiceInfo::Sequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QBluetoothServiceInfo__Sequence `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QBluetoothServiceInfo__Sequence {
        return qtc.QBluetoothServiceInfo__Sequence_new3(@ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBluetoothServiceInfo__Sequence `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo__Sequence_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<QVariant>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-alternative.html)
pub const qbluetoothserviceinfo__alternative = struct {
    /// New constructs a new QBluetoothServiceInfo::Alternative object.
    ///
    pub fn New() QtC.QBluetoothServiceInfo__Alternative {
        return qtc.QBluetoothServiceInfo__Alternative_new();
    }

    /// New2 constructs a new QBluetoothServiceInfo::Alternative object.
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QtC.QVariant `
    ///
    pub fn New2(list: []QtC.QVariant) QtC.QBluetoothServiceInfo__Alternative {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };

        return qtc.QBluetoothServiceInfo__Alternative_new2(list_list);
    }

    /// New3 constructs a new QBluetoothServiceInfo::Alternative object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QBluetoothServiceInfo__Alternative `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QBluetoothServiceInfo__Alternative {
        return qtc.QBluetoothServiceInfo__Alternative_new3(@ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBluetoothServiceInfo__Alternative `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothServiceInfo__Alternative_Delete(@ptrCast(self));
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
