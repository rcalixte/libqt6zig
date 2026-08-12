const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = enums;
const std = @import("std");
const Struct_QHostAddress_i32 = extern struct { first: QHostAddress, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qipv6address.html)
pub const QIPv6Address = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qipv6address.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIPv6Address,

    pub const _is_QIPv6Address = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QIPv6Address object in C++ memory
    ///
    pub fn new() QIPv6Address {
        return .{ .ptr = qtc.QIPv6Address_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QIPv6Address object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIPv6Address `
    ///
    pub fn new2(param1: anytype) QIPv6Address {
        comptime _ = @TypeOf(param1)._is_QIPv6Address;
        return .{ .ptr = qtc.QIPv6Address_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qipv6address.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIPv6Address `
    ///
    /// ` index: i32 `
    ///
    pub fn operatorSubscript(self: QIPv6Address, index: i32) ?*u8 {
        return @ptrCast(qtc.QIPv6Address_OperatorSubscript(@ptrCast(self.ptr), @bitCast(index)));
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qipv6address.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIPv6Address `
    ///
    /// ` index: i32 `
    ///
    pub fn operatorSubscript2(self: QIPv6Address, index: i32) u8 {
        return qtc.QIPv6Address_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qipv6address.html#dtor.QIPv6Address)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QIPv6Address `
    ///
    pub fn delete(self: QIPv6Address) void {
        qtc.QIPv6Address_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html)
pub const QHostAddress = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHostAddress,

    pub const _is_QHostAddress = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    pub fn new() QHostAddress {
        return .{ .ptr = qtc.QHostAddress_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ip4Addr: u32 `
    ///
    pub fn new2(ip4Addr: u32) QHostAddress {
        return .{ .ptr = qtc.QHostAddress_new2(@bitCast(ip4Addr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ip6Addr: *const u8 `
    ///
    pub fn new3(ip6Addr: *const u8) QHostAddress {
        return .{ .ptr = qtc.QHostAddress_new3(@ptrCast(ip6Addr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ip6Addr: QIPv6Address `
    ///
    pub fn new4(ip6Addr: anytype) QHostAddress {
        comptime _ = @TypeOf(ip6Addr)._is_QIPv6Address;
        return .{ .ptr = qtc.QHostAddress_new4(@ptrCast(ip6Addr.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    pub fn new5(address: []const u8) QHostAddress {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return .{ .ptr = qtc.QHostAddress_new5(address_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` copy: QHostAddress `
    ///
    pub fn new6(copy: anytype) QHostAddress {
        comptime _ = @TypeOf(copy)._is_QHostAddress;
        return .{ .ptr = qtc.QHostAddress_new6(@ptrCast(copy.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QHostAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` address: qhostaddress_enums.SpecialAddress `
    ///
    pub fn new7(address: i32) QHostAddress {
        return .{ .ptr = qtc.QHostAddress_new7(@bitCast(address)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` other: QHostAddress `
    ///
    pub fn operatorAssign(self: QHostAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHostAddress;
        qtc.QHostAddress_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: qhostaddress_enums.SpecialAddress `
    ///
    pub fn operatorAssign2(self: QHostAddress, address: i32) void {
        qtc.QHostAddress_OperatorAssign2(@ptrCast(self.ptr), @bitCast(address));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` other: QHostAddress `
    ///
    pub fn swap(self: QHostAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHostAddress;
        qtc.QHostAddress_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setAddress` instead
    ///
    pub const SetAddress = setAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` ip4Addr: u32 `
    ///
    pub fn setAddress(self: QHostAddress, ip4Addr: u32) void {
        qtc.QHostAddress_SetAddress(@ptrCast(self.ptr), @bitCast(ip4Addr));
    }

    /// ### DEPRECATED: Use `setAddress2` instead
    ///
    pub const SetAddress2 = setAddress2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` ip6Addr: *const u8 `
    ///
    pub fn setAddress2(self: QHostAddress, ip6Addr: *const u8) void {
        qtc.QHostAddress_SetAddress2(@ptrCast(self.ptr), @ptrCast(ip6Addr));
    }

    /// ### DEPRECATED: Use `setAddress3` instead
    ///
    pub const SetAddress3 = setAddress3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` ip6Addr: QIPv6Address `
    ///
    pub fn setAddress3(self: QHostAddress, ip6Addr: anytype) void {
        comptime _ = @TypeOf(ip6Addr)._is_QIPv6Address;
        qtc.QHostAddress_SetAddress3(@ptrCast(self.ptr), @ptrCast(ip6Addr.ptr));
    }

    /// ### DEPRECATED: Use `setAddress5` instead
    ///
    pub const SetAddress5 = setAddress5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: []const u8 `
    ///
    pub fn setAddress5(self: QHostAddress, address: []const u8) bool {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return qtc.QHostAddress_SetAddress5(@ptrCast(self.ptr), address_str);
    }

    /// ### DEPRECATED: Use `setAddress6` instead
    ///
    pub const SetAddress6 = setAddress6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: qhostaddress_enums.SpecialAddress `
    ///
    pub fn setAddress6(self: QHostAddress, address: i32) void {
        qtc.QHostAddress_SetAddress6(@ptrCast(self.ptr), @bitCast(address));
    }

    /// ### DEPRECATED: Use `protocol` instead
    ///
    pub const Protocol = protocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#protocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn protocol(self: QHostAddress) i32 {
        return qtc.QHostAddress_Protocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toIPv4Address` instead
    ///
    pub const ToIPv4Address = toIPv4Address;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn toIPv4Address(self: QHostAddress) u32 {
        return qtc.QHostAddress_ToIPv4Address(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toIPv6Address` instead
    ///
    pub const ToIPv6Address = toIPv6Address;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#toIPv6Address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn toIPv6Address(self: QHostAddress) QIPv6Address {
        return .{ .ptr = qtc.QHostAddress_ToIPv6Address(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QHostAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostAddress_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHostAddress.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scopeId` instead
    ///
    pub const ScopeId = scopeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#scopeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scopeId(self: QHostAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHostAddress_ScopeId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHostAddress.scopeId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setScopeId` instead
    ///
    pub const SetScopeId = setScopeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#setScopeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` id: []const u8 `
    ///
    pub fn setScopeId(self: QHostAddress, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QHostAddress_SetScopeId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn isEqual(self: QHostAddress, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QHostAddress_IsEqual(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn operatorEqual(self: QHostAddress, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QHostAddress_OperatorEqual(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual2` instead
    ///
    pub const OperatorEqual2 = operatorEqual2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: qhostaddress_enums.SpecialAddress `
    ///
    pub fn operatorEqual2(self: QHostAddress, address: i32) bool {
        return qtc.QHostAddress_OperatorEqual2(@ptrCast(self.ptr), @bitCast(address));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn operatorNotEqual(self: QHostAddress, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QHostAddress_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual2` instead
    ///
    pub const OperatorNotEqual2 = operatorNotEqual2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: qhostaddress_enums.SpecialAddress `
    ///
    pub fn operatorNotEqual2(self: QHostAddress, address: i32) bool {
        return qtc.QHostAddress_OperatorNotEqual2(@ptrCast(self.ptr), @bitCast(address));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isNull(self: QHostAddress) bool {
        return qtc.QHostAddress_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn clear(self: QHostAddress) void {
        qtc.QHostAddress_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInSubnet` instead
    ///
    pub const IsInSubnet = isInSubnet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` subnet: QHostAddress `
    ///
    /// ` netmask: i32 `
    ///
    pub fn isInSubnet(self: QHostAddress, subnet: anytype, netmask: i32) bool {
        comptime _ = @TypeOf(subnet)._is_QHostAddress;
        return qtc.QHostAddress_IsInSubnet(@ptrCast(self.ptr), @ptrCast(subnet.ptr), @bitCast(netmask));
    }

    /// ### DEPRECATED: Use `isLoopback` instead
    ///
    pub const IsLoopback = isLoopback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isLoopback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isLoopback(self: QHostAddress) bool {
        return qtc.QHostAddress_IsLoopback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isGlobal` instead
    ///
    pub const IsGlobal = isGlobal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isGlobal(self: QHostAddress) bool {
        return qtc.QHostAddress_IsGlobal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLinkLocal` instead
    ///
    pub const IsLinkLocal = isLinkLocal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isLinkLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isLinkLocal(self: QHostAddress) bool {
        return qtc.QHostAddress_IsLinkLocal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSiteLocal` instead
    ///
    pub const IsSiteLocal = isSiteLocal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isSiteLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isSiteLocal(self: QHostAddress) bool {
        return qtc.QHostAddress_IsSiteLocal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUniqueLocalUnicast` instead
    ///
    pub const IsUniqueLocalUnicast = isUniqueLocalUnicast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isUniqueLocalUnicast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isUniqueLocalUnicast(self: QHostAddress) bool {
        return qtc.QHostAddress_IsUniqueLocalUnicast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMulticast` instead
    ///
    pub const IsMulticast = isMulticast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isMulticast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isMulticast(self: QHostAddress) bool {
        return qtc.QHostAddress_IsMulticast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBroadcast` instead
    ///
    pub const IsBroadcast = isBroadcast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isBroadcast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isBroadcast(self: QHostAddress) bool {
        return qtc.QHostAddress_IsBroadcast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPrivateUse` instead
    ///
    pub const IsPrivateUse = isPrivateUse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isPrivateUse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    pub fn isPrivateUse(self: QHostAddress) bool {
        return qtc.QHostAddress_IsPrivateUse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parseSubnet` instead
    ///
    pub const ParseSubnet = parseSubnet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#parseSubnet)
    ///
    /// ## Parameter(s):
    ///
    /// ` subnet: []const u8 `
    ///
    pub fn parseSubnet(subnet: []const u8) Struct_QHostAddress_i32 {
        const subnet_str = qtc.libqt_string{
            .len = subnet.len,
            .data = subnet.ptr,
        };
        const _pair = qtc.QHostAddress_ParseSubnet(subnet_str);
        return .{
            .first = .{ .ptr = @ptrCast(_pair.first) },
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `toIPv4Address1` instead
    ///
    pub const ToIPv4Address1 = toIPv4Address1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` ok: *bool `
    ///
    pub fn toIPv4Address1(self: QHostAddress, ok: *bool) u32 {
        return qtc.QHostAddress_ToIPv4Address1(@ptrCast(self.ptr), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `isEqual2` instead
    ///
    pub const IsEqual2 = isEqual2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHostAddress `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` mode: flag of qhostaddress_enums.ConversionModeFlag `
    ///
    pub fn isEqual2(self: QHostAddress, address: anytype, mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QHostAddress_IsEqual2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#dtor.QHostAddress)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHostAddress `
    ///
    pub fn delete(self: QHostAddress) void {
        qtc.QHostAddress_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhostaddress.html#public-types)
pub const enums = struct {
    pub const SpecialAddress = enum(i32) {
        pub const Null: i32 = 0;
        pub const Broadcast: i32 = 1;
        pub const LocalHost: i32 = 2;
        pub const LocalHostIPv6: i32 = 3;
        pub const Any: i32 = 4;
        pub const AnyIPv6: i32 = 5;
        pub const AnyIPv4: i32 = 6;
    };

    pub const ConversionModeFlag = enum(i32) {
        pub const ConvertV4MappedToIPv4: i32 = 1;
        pub const ConvertV4CompatToIPv4: i32 = 2;
        pub const ConvertUnspecifiedAddress: i32 = 4;
        pub const ConvertLocalHost: i32 = 8;
        pub const TolerantConversion: i32 = 255;
        pub const StrictConversion: i32 = 0;
    };
};
