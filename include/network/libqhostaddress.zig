const C = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = enums;
const std = @import("std");
pub const struct_cqhostaddress_i32 = struct { first: ?*C.QHostAddress, second: i32 };

/// https://doc.qt.io/qt-6/qipv6address.html
pub const qipv6address = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#operator[])
    ///
    /// ``` self: ?*C.QIPv6Address, index: i32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, index: i32) u8 {
        return C.QIPv6Address_OperatorSubscript(@ptrCast(self), @intCast(index));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QIPv6Address ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QIPv6Address_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhostaddress.html
pub const qhostaddress = struct {
    /// New constructs a new QHostAddress object.
    ///
    ///
    pub fn New() ?*C.QHostAddress {
        return C.QHostAddress_new();
    }

    /// New2 constructs a new QHostAddress object.
    ///
    /// ``` ip4Addr: u32 ```
    pub fn New2(ip4Addr: u32) ?*C.QHostAddress {
        return C.QHostAddress_new2(@intCast(ip4Addr));
    }

    /// New3 constructs a new QHostAddress object.
    ///
    /// ``` ip6Addr: ?*u8 ```
    pub fn New3(ip6Addr: ?*anyopaque) ?*C.QHostAddress {
        return C.QHostAddress_new3(@intCast(ip6Addr));
    }

    /// New4 constructs a new QHostAddress object.
    ///
    /// ``` ip6Addr: ?*C.QIPv6Address ```
    pub fn New4(ip6Addr: ?*anyopaque) ?*C.QHostAddress {
        return C.QHostAddress_new4(@ptrCast(ip6Addr));
    }

    /// New5 constructs a new QHostAddress object.
    ///
    /// ``` address: []const u8 ```
    pub fn New5(address: []const u8) ?*C.QHostAddress {
        const address_str = C.struct_libqt_string{
            .len = address.len,
            .data = @constCast(address.ptr),
        };

        return C.QHostAddress_new5(address_str);
    }

    /// New6 constructs a new QHostAddress object.
    ///
    /// ``` copyVal: ?*C.QHostAddress ```
    pub fn New6(copyVal: ?*anyopaque) ?*C.QHostAddress {
        return C.QHostAddress_new6(@ptrCast(copyVal));
    }

    /// New7 constructs a new QHostAddress object.
    ///
    /// ``` address: qhostaddress_enums.SpecialAddress ```
    pub fn New7(address: i64) ?*C.QHostAddress {
        return C.QHostAddress_new7(@intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator=)
    ///
    /// ``` self: ?*C.QHostAddress, other: ?*C.QHostAddress ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QHostAddress_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator=)
    ///
    /// ``` self: ?*C.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn OperatorAssignWithAddress(self: ?*anyopaque, address: i64) void {
        C.QHostAddress_OperatorAssignWithAddress(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#swap)
    ///
    /// ``` self: ?*C.QHostAddress, other: ?*C.QHostAddress ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QHostAddress_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: ?*C.QHostAddress, ip4Addr: u32 ```
    pub fn SetAddress(self: ?*anyopaque, ip4Addr: u32) void {
        C.QHostAddress_SetAddress(@ptrCast(self), @intCast(ip4Addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: ?*C.QHostAddress, ip6Addr: ?*u8 ```
    pub fn SetAddressWithIp6Addr(self: ?*anyopaque, ip6Addr: ?*anyopaque) void {
        C.QHostAddress_SetAddressWithIp6Addr(@ptrCast(self), @intCast(ip6Addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: ?*C.QHostAddress, ip6Addr: ?*C.QIPv6Address ```
    pub fn SetAddress2(self: ?*anyopaque, ip6Addr: ?*anyopaque) void {
        C.QHostAddress_SetAddress2(@ptrCast(self), @ptrCast(ip6Addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: ?*C.QHostAddress, address: []const u8 ```
    pub fn SetAddress3(self: ?*anyopaque, address: []const u8) bool {
        const address_str = C.struct_libqt_string{
            .len = address.len,
            .data = @constCast(address.ptr),
        };
        return C.QHostAddress_SetAddress3(@ptrCast(self), address_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
    ///
    /// ``` self: ?*C.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn SetAddress4(self: ?*anyopaque, address: i64) void {
        C.QHostAddress_SetAddress4(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#protocol)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn Protocol(self: ?*anyopaque) i64 {
        return C.QHostAddress_Protocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn ToIPv4Address(self: ?*anyopaque) u32 {
        return C.QHostAddress_ToIPv4Address(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv6Address)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn ToIPv6Address(self: ?*anyopaque) ?*C.QIPv6Address {
        return C.QHostAddress_ToIPv6Address(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toString)
    ///
    /// ``` self: ?*C.QHostAddress, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QHostAddress_ToString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#scopeId)
    ///
    /// ``` self: ?*C.QHostAddress, allocator: std.mem.Allocator ```
    pub fn ScopeId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QHostAddress_ScopeId(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setScopeId)
    ///
    /// ``` self: ?*C.QHostAddress, id: []const u8 ```
    pub fn SetScopeId(self: ?*anyopaque, id: []const u8) void {
        const id_str = C.struct_libqt_string{
            .len = id.len,
            .data = @constCast(id.ptr),
        };
        C.QHostAddress_SetScopeId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
    ///
    /// ``` self: ?*C.QHostAddress, address: ?*C.QHostAddress ```
    pub fn IsEqual(self: ?*anyopaque, address: ?*anyopaque) bool {
        return C.QHostAddress_IsEqual(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator==)
    ///
    /// ``` self: ?*C.QHostAddress, address: ?*C.QHostAddress ```
    pub fn OperatorEqual(self: ?*anyopaque, address: ?*anyopaque) bool {
        return C.QHostAddress_OperatorEqual(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator==)
    ///
    /// ``` self: ?*C.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn OperatorEqualWithAddress(self: ?*anyopaque, address: i64) bool {
        return C.QHostAddress_OperatorEqualWithAddress(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator!=)
    ///
    /// ``` self: ?*C.QHostAddress, address: ?*C.QHostAddress ```
    pub fn OperatorNotEqual(self: ?*anyopaque, address: ?*anyopaque) bool {
        return C.QHostAddress_OperatorNotEqual(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator!=)
    ///
    /// ``` self: ?*C.QHostAddress, address: qhostaddress_enums.SpecialAddress ```
    pub fn OperatorNotEqualWithAddress(self: ?*anyopaque, address: i64) bool {
        return C.QHostAddress_OperatorNotEqualWithAddress(@ptrCast(self), @intCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isNull)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return C.QHostAddress_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#clear)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QHostAddress_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
    ///
    /// ``` self: ?*C.QHostAddress, subnet: ?*C.QHostAddress, netmask: i32 ```
    pub fn IsInSubnet(self: ?*anyopaque, subnet: ?*anyopaque, netmask: i32) bool {
        return C.QHostAddress_IsInSubnet(@ptrCast(self), @ptrCast(subnet), @intCast(netmask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLoopback)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsLoopback(self: ?*anyopaque) bool {
        return C.QHostAddress_IsLoopback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isGlobal)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsGlobal(self: ?*anyopaque) bool {
        return C.QHostAddress_IsGlobal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLinkLocal)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsLinkLocal(self: ?*anyopaque) bool {
        return C.QHostAddress_IsLinkLocal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isSiteLocal)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsSiteLocal(self: ?*anyopaque) bool {
        return C.QHostAddress_IsSiteLocal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isUniqueLocalUnicast)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsUniqueLocalUnicast(self: ?*anyopaque) bool {
        return C.QHostAddress_IsUniqueLocalUnicast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isMulticast)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsMulticast(self: ?*anyopaque) bool {
        return C.QHostAddress_IsMulticast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isBroadcast)
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn IsBroadcast(self: ?*anyopaque) bool {
        return C.QHostAddress_IsBroadcast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#parseSubnet)
    ///
    /// ``` subnet: []const u8 ```
    pub fn ParseSubnet(subnet: []const u8) struct_cqhostaddress_i32 {
        const subnet_str = C.struct_libqt_string{
            .len = subnet.len,
            .data = @constCast(subnet.ptr),
        };
        const _pair: C.struct_libqt_pair = C.QHostAddress_ParseSubnet(subnet_str);
        return struct_cqhostaddress_i32{ .first = @ptrCast(_pair.first), .second = @intCast(@intFromPtr(_pair.second)) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
    ///
    /// ``` self: ?*C.QHostAddress, ok: ?*bool ```
    pub fn ToIPv4Address1(self: ?*anyopaque, ok: ?*anyopaque) u32 {
        return C.QHostAddress_ToIPv4Address1(@ptrCast(self), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
    ///
    /// ``` self: ?*C.QHostAddress, address: ?*C.QHostAddress, mode: i32 ```
    pub fn IsEqual2(self: ?*anyopaque, address: ?*anyopaque, mode: i64) bool {
        return C.QHostAddress_IsEqual2(@ptrCast(self), @ptrCast(address), @intCast(mode));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QHostAddress ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QHostAddress_Delete(@ptrCast(self));
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
