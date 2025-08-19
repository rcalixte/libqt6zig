const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = enums;
const std = @import("std");
pub const struct_qtcqhostaddress_i32 = struct { first: QtC.QHostAddress, second: i32 };

/// https://doc.qt.io/qt-6/qipv6address.html
pub const qipv6address = struct {
    /// New constructs a new QIPv6Address object.
    ///
    ///
    pub fn New() QtC.QIPv6Address {
        return qtc.QIPv6Address_new();
    }

    /// New2 constructs a new QIPv6Address object.
    ///
    /// ``` param1: QtC.QIPv6Address ```
    pub fn New2(param1: ?*anyopaque) QtC.QIPv6Address {
        return qtc.QIPv6Address_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#operator-5b-5d)
    ///
    /// ``` self: QtC.QIPv6Address, index: i32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, index: i32) u8 {
        return qtc.QIPv6Address_OperatorSubscript(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#dtor.QIPv6Address)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QIPv6Address ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIPv6Address_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhostaddress.html
pub const qhostaddress = struct {
    /// New constructs a new QHostAddress object.
    ///
    ///
    pub fn New() QtC.QHostAddress {
        return qtc.QHostAddress_new();
    }

    /// New2 constructs a new QHostAddress object.
    ///
    /// ``` ip4Addr: u32 ```
    pub fn New2(ip4Addr: u32) QtC.QHostAddress {
        return qtc.QHostAddress_new2(@intCast(ip4Addr));
    }

    /// New3 constructs a new QHostAddress object.
    ///
    /// ``` ip6Addr: *const u8 ```
    pub fn New3(ip6Addr: *const u8) QtC.QHostAddress {
        return qtc.QHostAddress_new3(@ptrCast(ip6Addr));
    }

    /// New4 constructs a new QHostAddress object.
    ///
    /// ``` ip6Addr: QtC.QIPv6Address ```
    pub fn New4(ip6Addr: ?*anyopaque) QtC.QHostAddress {
        return qtc.QHostAddress_new4(@ptrCast(ip6Addr));
    }

    /// New5 constructs a new QHostAddress object.
    ///
    /// ``` address: []const u8 ```
    pub fn New5(address: []const u8) QtC.QHostAddress {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };

        return qtc.QHostAddress_new5(address_str);
    }

    /// New6 constructs a new QHostAddress object.
    ///
    /// ``` copyVal: QtC.QHostAddress ```
    pub fn New6(copyVal: ?*anyopaque) QtC.QHostAddress {
        return qtc.QHostAddress_new6(@ptrCast(copyVal));
    }

    /// New7 constructs a new QHostAddress object.
    ///
    /// ``` address: qhostaddress_enums.SpecialAddress ```
    pub fn New7(address: i32) QtC.QHostAddress {
        return qtc.QHostAddress_new7(@intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq)
    ///
    /// ``` self: QtC.QHostAddress, other: QtC.QHostAddress ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHostAddress_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq)
    ///
    /// ``` self: QtC.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn OperatorAssign2(self: ?*anyopaque, address: i32) void {
        qtc.QHostAddress_OperatorAssign2(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#swap)
    ///
    /// ``` self: QtC.QHostAddress, other: QtC.QHostAddress ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHostAddress_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: QtC.QHostAddress, ip4Addr: u32 ```
    pub fn SetAddress(self: ?*anyopaque, ip4Addr: u32) void {
        qtc.QHostAddress_SetAddress(@ptrCast(self), @intCast(ip4Addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: QtC.QHostAddress, ip6Addr: *const u8 ```
    pub fn SetAddress2(self: ?*anyopaque, ip6Addr: *const u8) void {
        qtc.QHostAddress_SetAddress2(@ptrCast(self), @ptrCast(ip6Addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: QtC.QHostAddress, ip6Addr: QtC.QIPv6Address ```
    pub fn SetAddress3(self: ?*anyopaque, ip6Addr: ?*anyopaque) void {
        qtc.QHostAddress_SetAddress3(@ptrCast(self), @ptrCast(ip6Addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: QtC.QHostAddress, address: []const u8 ```
    pub fn SetAddress5(self: ?*anyopaque, address: []const u8) bool {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return qtc.QHostAddress_SetAddress5(@ptrCast(self), address_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: QtC.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn SetAddress6(self: ?*anyopaque, address: i32) void {
        qtc.QHostAddress_SetAddress6(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#protocol)
    ///
    /// ``` self: QtC.QHostAddress ```
    ///
    /// Returns: ``` qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn Protocol(self: ?*anyopaque) i32 {
        return qtc.QHostAddress_Protocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn ToIPv4Address(self: ?*anyopaque) u32 {
        return qtc.QHostAddress_ToIPv4Address(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv6Address)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn ToIPv6Address(self: ?*anyopaque) QtC.QIPv6Address {
        return qtc.QHostAddress_ToIPv6Address(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toString)
    ///
    /// ``` self: QtC.QHostAddress, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHostAddress_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostaddress.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#scopeId)
    ///
    /// ``` self: QtC.QHostAddress, allocator: std.mem.Allocator ```
    pub fn ScopeId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHostAddress_ScopeId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostaddress.ScopeId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setScopeId)
    ///
    /// ``` self: QtC.QHostAddress, id: []const u8 ```
    pub fn SetScopeId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QHostAddress_SetScopeId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
    ///
    /// ``` self: QtC.QHostAddress, address: QtC.QHostAddress ```
    pub fn IsEqual(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QHostAddress_IsEqual(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QHostAddress, address: QtC.QHostAddress ```
    pub fn OperatorEqual(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QHostAddress_OperatorEqual(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn OperatorEqual2(self: ?*anyopaque, address: i32) bool {
        return qtc.QHostAddress_OperatorEqual2(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-not-eq)
    ///
    /// ``` self: QtC.QHostAddress, address: QtC.QHostAddress ```
    pub fn OperatorNotEqual(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QHostAddress_OperatorNotEqual(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-not-eq)
    ///
    /// ``` self: QtC.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn OperatorNotEqual2(self: ?*anyopaque, address: i32) bool {
        return qtc.QHostAddress_OperatorNotEqual2(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isNull)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#clear)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QHostAddress_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
    ///
    /// ``` self: QtC.QHostAddress, subnet: QtC.QHostAddress, netmask: i32 ```
    pub fn IsInSubnet(self: ?*anyopaque, subnet: ?*anyopaque, netmask: i32) bool {
        return qtc.QHostAddress_IsInSubnet(@ptrCast(self), @ptrCast(subnet), @intCast(netmask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLoopback)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsLoopback(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsLoopback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isGlobal)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsGlobal(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsGlobal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLinkLocal)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsLinkLocal(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsLinkLocal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isSiteLocal)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsSiteLocal(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsSiteLocal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isUniqueLocalUnicast)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsUniqueLocalUnicast(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsUniqueLocalUnicast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isMulticast)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsMulticast(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsMulticast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isBroadcast)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsBroadcast(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsBroadcast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isPrivateUse)
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn IsPrivateUse(self: ?*anyopaque) bool {
        return qtc.QHostAddress_IsPrivateUse(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#parseSubnet)
    ///
    /// ``` subnet: []const u8 ```
    pub fn ParseSubnet(subnet: []const u8) struct_qtcqhostaddress_i32 {
        const subnet_str = qtc.libqt_string{
            .len = subnet.len,
            .data = subnet.ptr,
        };
        const _pair: qtc.libqt_pair = qtc.QHostAddress_ParseSubnet(subnet_str);
        return struct_qtcqhostaddress_i32{
            .first = @ptrCast(_pair.first),
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
    ///
    /// ``` self: QtC.QHostAddress, ok: *bool ```
    pub fn ToIPv4Address1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QHostAddress_ToIPv4Address1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
    ///
    /// ``` self: QtC.QHostAddress, address: QtC.QHostAddress, mode: flag of qhostaddress_enums.ConversionModeFlag ```
    pub fn IsEqual2(self: ?*anyopaque, address: ?*anyopaque, mode: i64) bool {
        return qtc.QHostAddress_IsEqual2(@ptrCast(self), @ptrCast(address), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#dtor.QHostAddress)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHostAddress ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHostAddress_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhostaddress.html#types
pub const enums = struct {
    pub const SpecialAddress = enum {
        pub const Null: i32 = 0;
        pub const Broadcast: i32 = 1;
        pub const LocalHost: i32 = 2;
        pub const LocalHostIPv6: i32 = 3;
        pub const Any: i32 = 4;
        pub const AnyIPv6: i32 = 5;
        pub const AnyIPv4: i32 = 6;
    };

    pub const ConversionModeFlag = enum {
        pub const ConvertV4MappedToIPv4: i32 = 1;
        pub const ConvertV4CompatToIPv4: i32 = 2;
        pub const ConvertUnspecifiedAddress: i32 = 4;
        pub const ConvertLocalHost: i32 = 8;
        pub const TolerantConversion: i32 = 255;
        pub const StrictConversion: i32 = 0;
    };
};
