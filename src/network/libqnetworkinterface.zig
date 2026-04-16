const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;
const QHostAddress = @import("libqt6").QHostAddress;
const qnetworkinterface_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html)
pub const QNetworkAddressEntry = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkAddressEntry,

    pub const _is_QNetworkAddressEntry = {};

    /// New constructs a new QNetworkAddressEntry object.
    ///
    pub fn New() QNetworkAddressEntry {
        return .{ .ptr = qtc.QNetworkAddressEntry_new() };
    }

    /// New2 constructs a new QNetworkAddressEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn New2(other: anytype) QNetworkAddressEntry {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        return .{ .ptr = qtc.QNetworkAddressEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn OperatorAssign(self: QNetworkAddressEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        qtc.QNetworkAddressEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn Swap(self: QNetworkAddressEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        qtc.QNetworkAddressEntry_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn OperatorEqual(self: QNetworkAddressEntry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        return qtc.QNetworkAddressEntry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn OperatorNotEqual(self: QNetworkAddressEntry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        return qtc.QNetworkAddressEntry_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dnsEligibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkinterface_enums.DnsEligibilityStatus `
    ///
    pub fn DnsEligibility(self: QNetworkAddressEntry) i8 {
        return qtc.QNetworkAddressEntry_DnsEligibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setDnsEligibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` status: qnetworkinterface_enums.DnsEligibilityStatus `
    ///
    pub fn SetDnsEligibility(self: QNetworkAddressEntry, status: i8) void {
        qtc.QNetworkAddressEntry_SetDnsEligibility(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#ip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn Ip(self: QNetworkAddressEntry) QHostAddress {
        return .{ .ptr = qtc.QNetworkAddressEntry_Ip(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setIp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` newIp: QHostAddress `
    ///
    pub fn SetIp(self: QNetworkAddressEntry, newIp: anytype) void {
        comptime _ = @TypeOf(newIp)._is_QHostAddress;
        qtc.QNetworkAddressEntry_SetIp(@ptrCast(self.ptr), @ptrCast(newIp.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#netmask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn Netmask(self: QNetworkAddressEntry) QHostAddress {
        return .{ .ptr = qtc.QNetworkAddressEntry_Netmask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setNetmask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` newNetmask: QHostAddress `
    ///
    pub fn SetNetmask(self: QNetworkAddressEntry, newNetmask: anytype) void {
        comptime _ = @TypeOf(newNetmask)._is_QHostAddress;
        qtc.QNetworkAddressEntry_SetNetmask(@ptrCast(self.ptr), @ptrCast(newNetmask.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#prefixLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn PrefixLength(self: QNetworkAddressEntry) i32 {
        return qtc.QNetworkAddressEntry_PrefixLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setPrefixLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` length: i32 `
    ///
    pub fn SetPrefixLength(self: QNetworkAddressEntry, length: i32) void {
        qtc.QNetworkAddressEntry_SetPrefixLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#broadcast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn Broadcast(self: QNetworkAddressEntry) QHostAddress {
        return .{ .ptr = qtc.QNetworkAddressEntry_Broadcast(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setBroadcast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` newBroadcast: QHostAddress `
    ///
    pub fn SetBroadcast(self: QNetworkAddressEntry, newBroadcast: anytype) void {
        comptime _ = @TypeOf(newBroadcast)._is_QHostAddress;
        qtc.QNetworkAddressEntry_SetBroadcast(@ptrCast(self.ptr), @ptrCast(newBroadcast.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isLifetimeKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn IsLifetimeKnown(self: QNetworkAddressEntry) bool {
        return qtc.QNetworkAddressEntry_IsLifetimeKnown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#preferredLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn PreferredLifetime(self: QNetworkAddressEntry) QDeadlineTimer {
        return .{ .ptr = qtc.QNetworkAddressEntry_PreferredLifetime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#validityLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn ValidityLifetime(self: QNetworkAddressEntry) QDeadlineTimer {
        return .{ .ptr = qtc.QNetworkAddressEntry_ValidityLifetime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setAddressLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` preferred: QDeadlineTimer `
    ///
    /// ` validity: QDeadlineTimer `
    ///
    pub fn SetAddressLifetime(self: QNetworkAddressEntry, preferred: anytype, validity: anytype) void {
        comptime _ = @TypeOf(preferred)._is_QDeadlineTimer;
        comptime _ = @TypeOf(validity)._is_QDeadlineTimer;
        qtc.QNetworkAddressEntry_SetAddressLifetime(@ptrCast(self.ptr), @ptrCast(preferred.ptr), @ptrCast(validity.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#clearAddressLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn ClearAddressLifetime(self: QNetworkAddressEntry) void {
        qtc.QNetworkAddressEntry_ClearAddressLifetime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isPermanent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn IsPermanent(self: QNetworkAddressEntry) bool {
        return qtc.QNetworkAddressEntry_IsPermanent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isTemporary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn IsTemporary(self: QNetworkAddressEntry) bool {
        return qtc.QNetworkAddressEntry_IsTemporary(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dtor.QNetworkAddressEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn Delete(self: QNetworkAddressEntry) void {
        qtc.QNetworkAddressEntry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html)
pub const QNetworkInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkInterface,

    pub const _is_QNetworkInterface = {};

    /// New constructs a new QNetworkInterface object.
    ///
    pub fn New() QNetworkInterface {
        return .{ .ptr = qtc.QNetworkInterface_new() };
    }

    /// New2 constructs a new QNetworkInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkInterface `
    ///
    pub fn New2(other: anytype) QNetworkInterface {
        comptime _ = @TypeOf(other)._is_QNetworkInterface;
        return .{ .ptr = qtc.QNetworkInterface_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` other: QNetworkInterface `
    ///
    pub fn OperatorAssign(self: QNetworkInterface, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkInterface;
        qtc.QNetworkInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` other: QNetworkInterface `
    ///
    pub fn Swap(self: QNetworkInterface, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkInterface;
        qtc.QNetworkInterface_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn IsValid(self: QNetworkInterface) bool {
        return qtc.QNetworkInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn Index(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_Index(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#maximumTransmissionUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn MaximumTransmissionUnit(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_MaximumTransmissionUnit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QNetworkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#humanReadableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HumanReadableName(self: QNetworkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkInterface_HumanReadableName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.HumanReadableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnetworkinterface_enums.InterfaceFlag `
    ///
    pub fn Flags(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkinterface_enums.InterfaceType `
    ///
    pub fn Type(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#hardwareAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HardwareAddress(self: QNetworkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkInterface_HardwareAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.HardwareAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#addressEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AddressEntries(self: QNetworkInterface, allocator: std.mem.Allocator) []QNetworkAddressEntry {
        const _arr: qtc.libqt_list = qtc.QNetworkInterface_AddressEntries(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkAddressEntry, _arr.len) catch @panic("qnetworkinterface.AddressEntries: Memory allocation failed");
        const _data: [*]QtC.QNetworkAddressEntry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceIndexFromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn InterfaceIndexFromName(name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNetworkInterface_InterfaceIndexFromName(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn InterfaceFromName(name: []const u8) QNetworkInterface {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNetworkInterface_InterfaceFromName(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` index: i32 `
    ///
    pub fn InterfaceFromIndex(index: i32) QNetworkInterface {
        return .{ .ptr = qtc.QNetworkInterface_InterfaceFromIndex(@bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceNameFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn InterfaceNameFromIndex(allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QNetworkInterface_InterfaceNameFromIndex(@bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.InterfaceNameFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#allInterfaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllInterfaces(allocator: std.mem.Allocator) []QNetworkInterface {
        const _arr: qtc.libqt_list = qtc.QNetworkInterface_AllInterfaces();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkInterface, _arr.len) catch @panic("qnetworkinterface.AllInterfaces: Memory allocation failed");
        const _data: [*]QtC.QNetworkInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#allAddresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllAddresses(allocator: std.mem.Allocator) []QHostAddress {
        const _arr: qtc.libqt_list = qtc.QNetworkInterface_AllAddresses();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QHostAddress, _arr.len) catch @panic("qnetworkinterface.AllAddresses: Memory allocation failed");
        const _data: [*]QtC.QHostAddress = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#dtor.QNetworkInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn Delete(self: QNetworkInterface) void {
        qtc.QNetworkInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#public-types)
pub const enums = struct {
    pub const DnsEligibilityStatus = enum(i8) {
        pub const DnsEligibilityUnknown: i8 = -1;
        pub const DnsIneligible: i8 = 0;
        pub const DnsEligible: i8 = 1;
    };

    pub const InterfaceFlag = enum(i32) {
        pub const IsUp: i32 = 1;
        pub const IsRunning: i32 = 2;
        pub const CanBroadcast: i32 = 4;
        pub const IsLoopBack: i32 = 8;
        pub const IsPointToPoint: i32 = 16;
        pub const CanMulticast: i32 = 32;
    };

    pub const InterfaceType = enum(i32) {
        pub const Loopback: i32 = 1;
        pub const Virtual: i32 = 2;
        pub const Ethernet: i32 = 3;
        pub const Slip: i32 = 4;
        pub const CanBus: i32 = 5;
        pub const Ppp: i32 = 6;
        pub const Fddi: i32 = 7;
        pub const Wifi: i32 = 8;
        pub const Ieee80211: i32 = 8;
        pub const Phonet: i32 = 9;
        pub const Ieee802154: i32 = 10;
        pub const SixLoWPAN: i32 = 11;
        pub const Ieee80216: i32 = 12;
        pub const Ieee1394: i32 = 13;
        pub const Unknown: i32 = 0;
    };
};
