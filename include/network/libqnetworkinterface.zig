const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkinterface_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkaddressentry.html
pub const qnetworkaddressentry = struct {
    /// New constructs a new QNetworkAddressEntry object.
    ///
    ///
    pub fn New() QtC.QNetworkAddressEntry {
        return qtc.QNetworkAddressEntry_new();
    }

    /// New2 constructs a new QNetworkAddressEntry object.
    ///
    /// ``` other: QtC.QNetworkAddressEntry ```
    pub fn New2(other: ?*anyopaque) QtC.QNetworkAddressEntry {
        return qtc.QNetworkAddressEntry_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator=)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, other: QtC.QNetworkAddressEntry ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#swap)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, other: QtC.QNetworkAddressEntry ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator==)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, other: QtC.QNetworkAddressEntry ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator!=)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, other: QtC.QNetworkAddressEntry ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dnsEligibility)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn DnsEligibility(self: ?*anyopaque) i64 {
        return qtc.QNetworkAddressEntry_DnsEligibility(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setDnsEligibility)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, status: qnetworkinterface_enums.DnsEligibilityStatus ```
    pub fn SetDnsEligibility(self: ?*anyopaque, status: i64) void {
        qtc.QNetworkAddressEntry_SetDnsEligibility(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#ip)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn Ip(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkAddressEntry_Ip(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setIp)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, newIp: QtC.QHostAddress ```
    pub fn SetIp(self: ?*anyopaque, newIp: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_SetIp(@ptrCast(self), @ptrCast(newIp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#netmask)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn Netmask(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkAddressEntry_Netmask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setNetmask)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, newNetmask: QtC.QHostAddress ```
    pub fn SetNetmask(self: ?*anyopaque, newNetmask: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_SetNetmask(@ptrCast(self), @ptrCast(newNetmask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#prefixLength)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn PrefixLength(self: ?*anyopaque) i32 {
        return qtc.QNetworkAddressEntry_PrefixLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setPrefixLength)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, length: i32 ```
    pub fn SetPrefixLength(self: ?*anyopaque, length: i32) void {
        qtc.QNetworkAddressEntry_SetPrefixLength(@ptrCast(self), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#broadcast)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn Broadcast(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkAddressEntry_Broadcast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setBroadcast)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, newBroadcast: QtC.QHostAddress ```
    pub fn SetBroadcast(self: ?*anyopaque, newBroadcast: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_SetBroadcast(@ptrCast(self), @ptrCast(newBroadcast));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isLifetimeKnown)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn IsLifetimeKnown(self: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_IsLifetimeKnown(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#preferredLifetime)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn PreferredLifetime(self: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QNetworkAddressEntry_PreferredLifetime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#validityLifetime)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn ValidityLifetime(self: ?*anyopaque) QtC.QDeadlineTimer {
        return qtc.QNetworkAddressEntry_ValidityLifetime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setAddressLifetime)
    ///
    /// ``` self: QtC.QNetworkAddressEntry, preferred: QtC.QDeadlineTimer, validity: QtC.QDeadlineTimer ```
    pub fn SetAddressLifetime(self: ?*anyopaque, preferred: QtC.QDeadlineTimer, validity: QtC.QDeadlineTimer) void {
        qtc.QNetworkAddressEntry_SetAddressLifetime(@ptrCast(self), @ptrCast(preferred), @ptrCast(validity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#clearAddressLifetime)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn ClearAddressLifetime(self: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_ClearAddressLifetime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isPermanent)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn IsPermanent(self: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_IsPermanent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isTemporary)
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn IsTemporary(self: ?*anyopaque) bool {
        return qtc.QNetworkAddressEntry_IsTemporary(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dtor.QNetworkAddressEntry)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkAddressEntry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkAddressEntry_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkinterface.html
pub const qnetworkinterface = struct {
    /// New constructs a new QNetworkInterface object.
    ///
    ///
    pub fn New() QtC.QNetworkInterface {
        return qtc.QNetworkInterface_new();
    }

    /// New2 constructs a new QNetworkInterface object.
    ///
    /// ``` other: QtC.QNetworkInterface ```
    pub fn New2(other: ?*anyopaque) QtC.QNetworkInterface {
        return qtc.QNetworkInterface_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#operator=)
    ///
    /// ``` self: QtC.QNetworkInterface, other: QtC.QNetworkInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkInterface_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#swap)
    ///
    /// ``` self: QtC.QNetworkInterface, other: QtC.QNetworkInterface ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkInterface_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#isValid)
    ///
    /// ``` self: QtC.QNetworkInterface ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QNetworkInterface_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#index)
    ///
    /// ``` self: QtC.QNetworkInterface ```
    pub fn Index(self: ?*anyopaque) i32 {
        return qtc.QNetworkInterface_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#maximumTransmissionUnit)
    ///
    /// ``` self: QtC.QNetworkInterface ```
    pub fn MaximumTransmissionUnit(self: ?*anyopaque) i32 {
        return qtc.QNetworkInterface_MaximumTransmissionUnit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#name)
    ///
    /// ``` self: QtC.QNetworkInterface, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#humanReadableName)
    ///
    /// ``` self: QtC.QNetworkInterface, allocator: std.mem.Allocator ```
    pub fn HumanReadableName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_HumanReadableName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.HumanReadableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#flags)
    ///
    /// ``` self: QtC.QNetworkInterface ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QNetworkInterface_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#type)
    ///
    /// ``` self: QtC.QNetworkInterface ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QNetworkInterface_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#hardwareAddress)
    ///
    /// ``` self: QtC.QNetworkInterface, allocator: std.mem.Allocator ```
    pub fn HardwareAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_HardwareAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.HardwareAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#addressEntries)
    ///
    /// ``` self: QtC.QNetworkInterface, allocator: std.mem.Allocator ```
    pub fn AddressEntries(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QNetworkAddressEntry {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkInterface_AddressEntries(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkAddressEntry, _arr.len) catch @panic("qnetworkinterface.AddressEntries: Memory allocation failed");
        const _data: [*]QtC.QNetworkAddressEntry = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceIndexFromName)
    ///
    /// ``` name: []const u8 ```
    pub fn InterfaceIndexFromName(name: []const u8) i32 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNetworkInterface_InterfaceIndexFromName(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromName)
    ///
    /// ``` name: []const u8 ```
    pub fn InterfaceFromName(name: []const u8) QtC.QNetworkInterface {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QNetworkInterface_InterfaceFromName(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromIndex)
    ///
    /// ``` index: i32 ```
    pub fn InterfaceFromIndex(index: i32) QtC.QNetworkInterface {
        return qtc.QNetworkInterface_InterfaceFromIndex(@intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceNameFromIndex)
    ///
    /// ``` index: i32, allocator: std.mem.Allocator ```
    pub fn InterfaceNameFromIndex(index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInterface_InterfaceNameFromIndex(@intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinterface.InterfaceNameFromIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#allInterfaces)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllInterfaces(allocator: std.mem.Allocator) []QtC.QNetworkInterface {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkInterface_AllInterfaces();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkInterface, _arr.len) catch @panic("qnetworkinterface.AllInterfaces: Memory allocation failed");
        const _data: [*]QtC.QNetworkInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#allAddresses)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllAddresses(allocator: std.mem.Allocator) []QtC.QHostAddress {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkInterface_AllAddresses();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QHostAddress, _arr.len) catch @panic("qnetworkinterface.AllAddresses: Memory allocation failed");
        const _data: [*]QtC.QHostAddress = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#dtor.QNetworkInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkinterface.html#types
pub const enums = struct {
    pub const DnsEligibilityStatus = enum {
        pub const DnsEligibilityUnknown: i8 = -1;
        pub const DnsIneligible: i8 = 0;
        pub const DnsEligible: i8 = 1;
    };

    pub const InterfaceFlag = enum {
        pub const IsUp: i32 = 1;
        pub const IsRunning: i32 = 2;
        pub const CanBroadcast: i32 = 4;
        pub const IsLoopBack: i32 = 8;
        pub const IsPointToPoint: i32 = 16;
        pub const CanMulticast: i32 = 32;
    };

    pub const InterfaceType = enum {
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
