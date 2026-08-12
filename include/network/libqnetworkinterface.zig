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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkAddressEntry object in C++ memory
    ///
    pub fn new() QNetworkAddressEntry {
        return .{ .ptr = qtc.QNetworkAddressEntry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkAddressEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn new2(other: anytype) QNetworkAddressEntry {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        return .{ .ptr = qtc.QNetworkAddressEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn operatorAssign(self: QNetworkAddressEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        qtc.QNetworkAddressEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn swap(self: QNetworkAddressEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        qtc.QNetworkAddressEntry_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn operatorEqual(self: QNetworkAddressEntry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        return qtc.QNetworkAddressEntry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` other: QNetworkAddressEntry `
    ///
    pub fn operatorNotEqual(self: QNetworkAddressEntry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkAddressEntry;
        return qtc.QNetworkAddressEntry_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `dnsEligibility` instead
    ///
    pub const DnsEligibility = dnsEligibility;

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
    pub fn dnsEligibility(self: QNetworkAddressEntry) i8 {
        return qtc.QNetworkAddressEntry_DnsEligibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDnsEligibility` instead
    ///
    pub const SetDnsEligibility = setDnsEligibility;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setDnsEligibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` status: qnetworkinterface_enums.DnsEligibilityStatus `
    ///
    pub fn setDnsEligibility(self: QNetworkAddressEntry, status: i8) void {
        qtc.QNetworkAddressEntry_SetDnsEligibility(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### DEPRECATED: Use `ip` instead
    ///
    pub const Ip = ip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#ip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn ip(self: QNetworkAddressEntry) QHostAddress {
        return .{ .ptr = qtc.QNetworkAddressEntry_Ip(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIp` instead
    ///
    pub const SetIp = setIp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setIp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` newIp: QHostAddress `
    ///
    pub fn setIp(self: QNetworkAddressEntry, newIp: anytype) void {
        comptime _ = @TypeOf(newIp)._is_QHostAddress;
        qtc.QNetworkAddressEntry_SetIp(@ptrCast(self.ptr), @ptrCast(newIp.ptr));
    }

    /// ### DEPRECATED: Use `netmask` instead
    ///
    pub const Netmask = netmask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#netmask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn netmask(self: QNetworkAddressEntry) QHostAddress {
        return .{ .ptr = qtc.QNetworkAddressEntry_Netmask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setNetmask` instead
    ///
    pub const SetNetmask = setNetmask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setNetmask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` newNetmask: QHostAddress `
    ///
    pub fn setNetmask(self: QNetworkAddressEntry, newNetmask: anytype) void {
        comptime _ = @TypeOf(newNetmask)._is_QHostAddress;
        qtc.QNetworkAddressEntry_SetNetmask(@ptrCast(self.ptr), @ptrCast(newNetmask.ptr));
    }

    /// ### DEPRECATED: Use `prefixLength` instead
    ///
    pub const PrefixLength = prefixLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#prefixLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn prefixLength(self: QNetworkAddressEntry) i32 {
        return qtc.QNetworkAddressEntry_PrefixLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrefixLength` instead
    ///
    pub const SetPrefixLength = setPrefixLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setPrefixLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` length: i32 `
    ///
    pub fn setPrefixLength(self: QNetworkAddressEntry, length: i32) void {
        qtc.QNetworkAddressEntry_SetPrefixLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### DEPRECATED: Use `broadcast` instead
    ///
    pub const Broadcast = broadcast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#broadcast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn broadcast(self: QNetworkAddressEntry) QHostAddress {
        return .{ .ptr = qtc.QNetworkAddressEntry_Broadcast(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBroadcast` instead
    ///
    pub const SetBroadcast = setBroadcast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setBroadcast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    /// ` newBroadcast: QHostAddress `
    ///
    pub fn setBroadcast(self: QNetworkAddressEntry, newBroadcast: anytype) void {
        comptime _ = @TypeOf(newBroadcast)._is_QHostAddress;
        qtc.QNetworkAddressEntry_SetBroadcast(@ptrCast(self.ptr), @ptrCast(newBroadcast.ptr));
    }

    /// ### DEPRECATED: Use `isLifetimeKnown` instead
    ///
    pub const IsLifetimeKnown = isLifetimeKnown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isLifetimeKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn isLifetimeKnown(self: QNetworkAddressEntry) bool {
        return qtc.QNetworkAddressEntry_IsLifetimeKnown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `preferredLifetime` instead
    ///
    pub const PreferredLifetime = preferredLifetime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#preferredLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn preferredLifetime(self: QNetworkAddressEntry) QDeadlineTimer {
        return .{ .ptr = qtc.QNetworkAddressEntry_PreferredLifetime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `validityLifetime` instead
    ///
    pub const ValidityLifetime = validityLifetime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#validityLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn validityLifetime(self: QNetworkAddressEntry) QDeadlineTimer {
        return .{ .ptr = qtc.QNetworkAddressEntry_ValidityLifetime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAddressLifetime` instead
    ///
    pub const SetAddressLifetime = setAddressLifetime;

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
    pub fn setAddressLifetime(self: QNetworkAddressEntry, preferred: anytype, validity: anytype) void {
        comptime _ = @TypeOf(preferred)._is_QDeadlineTimer;
        comptime _ = @TypeOf(validity)._is_QDeadlineTimer;
        qtc.QNetworkAddressEntry_SetAddressLifetime(@ptrCast(self.ptr), @ptrCast(preferred.ptr), @ptrCast(validity.ptr));
    }

    /// ### DEPRECATED: Use `clearAddressLifetime` instead
    ///
    pub const ClearAddressLifetime = clearAddressLifetime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#clearAddressLifetime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn clearAddressLifetime(self: QNetworkAddressEntry) void {
        qtc.QNetworkAddressEntry_ClearAddressLifetime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPermanent` instead
    ///
    pub const IsPermanent = isPermanent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isPermanent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn isPermanent(self: QNetworkAddressEntry) bool {
        return qtc.QNetworkAddressEntry_IsPermanent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTemporary` instead
    ///
    pub const IsTemporary = isTemporary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isTemporary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn isTemporary(self: QNetworkAddressEntry) bool {
        return qtc.QNetworkAddressEntry_IsTemporary(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dtor.QNetworkAddressEntry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkAddressEntry `
    ///
    pub fn delete(self: QNetworkAddressEntry) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkInterface object in C++ memory
    ///
    pub fn new() QNetworkInterface {
        return .{ .ptr = qtc.QNetworkInterface_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkInterface `
    ///
    pub fn new2(other: anytype) QNetworkInterface {
        comptime _ = @TypeOf(other)._is_QNetworkInterface;
        return .{ .ptr = qtc.QNetworkInterface_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` other: QNetworkInterface `
    ///
    pub fn operatorAssign(self: QNetworkInterface, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkInterface;
        qtc.QNetworkInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` other: QNetworkInterface `
    ///
    pub fn swap(self: QNetworkInterface, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkInterface;
        qtc.QNetworkInterface_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn isValid(self: QNetworkInterface) bool {
        return qtc.QNetworkInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn index(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumTransmissionUnit` instead
    ///
    pub const MaximumTransmissionUnit = maximumTransmissionUnit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#maximumTransmissionUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn maximumTransmissionUnit(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_MaximumTransmissionUnit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QNetworkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkInterface.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `humanReadableName` instead
    ///
    pub const HumanReadableName = humanReadableName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#humanReadableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn humanReadableName(self: QNetworkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkInterface_HumanReadableName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkInterface.humanReadableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QNetworkInterface) i32 {
        return qtc.QNetworkInterface_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hardwareAddress` instead
    ///
    pub const HardwareAddress = hardwareAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#hardwareAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hardwareAddress(self: QNetworkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkInterface_HardwareAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkInterface.hardwareAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addressEntries` instead
    ///
    pub const AddressEntries = addressEntries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#addressEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn addressEntries(self: QNetworkInterface, allocator: std.mem.Allocator) []QNetworkAddressEntry {
        const _arr: qtc.libqt_list = qtc.QNetworkInterface_AddressEntries(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkAddressEntry, _arr.len) catch @panic("QNetworkInterface.addressEntries: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkAddressEntry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `interfaceIndexFromName` instead
    ///
    pub const InterfaceIndexFromName = interfaceIndexFromName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceIndexFromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn interfaceIndexFromName(_name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QNetworkInterface_InterfaceIndexFromName(name_str);
    }

    /// ### DEPRECATED: Use `interfaceFromName` instead
    ///
    pub const InterfaceFromName = interfaceFromName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn interfaceFromName(_name: []const u8) QNetworkInterface {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QNetworkInterface_InterfaceFromName(name_str) };
    }

    /// ### DEPRECATED: Use `interfaceFromIndex` instead
    ///
    pub const InterfaceFromIndex = interfaceFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` _index: i32 `
    ///
    pub fn interfaceFromIndex(_index: i32) QNetworkInterface {
        return .{ .ptr = qtc.QNetworkInterface_InterfaceFromIndex(@bitCast(_index)) };
    }

    /// ### DEPRECATED: Use `interfaceNameFromIndex` instead
    ///
    pub const InterfaceNameFromIndex = interfaceNameFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceNameFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: i32 `
    ///
    pub fn interfaceNameFromIndex(allocator: std.mem.Allocator, _index: i32) []const u8 {
        var _str = qtc.QNetworkInterface_InterfaceNameFromIndex(@bitCast(_index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkInterface.interfaceNameFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allInterfaces` instead
    ///
    pub const AllInterfaces = allInterfaces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#allInterfaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allInterfaces(allocator: std.mem.Allocator) []QNetworkInterface {
        const _arr: qtc.libqt_list = qtc.QNetworkInterface_AllInterfaces();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkInterface, _arr.len) catch @panic("QNetworkInterface.allInterfaces: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allAddresses` instead
    ///
    pub const AllAddresses = allAddresses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#allAddresses)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allAddresses(allocator: std.mem.Allocator) []QHostAddress {
        const _arr: qtc.libqt_list = qtc.QNetworkInterface_AllAddresses();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QHostAddress, _arr.len) catch @panic("QNetworkInterface.allAddresses: Memory allocation failed");
        const _data_val: [*]QtC.QHostAddress = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#dtor.QNetworkInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkInterface `
    ///
    pub fn delete(self: QNetworkInterface) void {
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
