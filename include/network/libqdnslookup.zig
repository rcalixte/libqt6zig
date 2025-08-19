const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdnslookup_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdnsdomainnamerecord.html
pub const qdnsdomainnamerecord = struct {
    /// New constructs a new QDnsDomainNameRecord object.
    ///
    ///
    pub fn New() QtC.QDnsDomainNameRecord {
        return qtc.QDnsDomainNameRecord_new();
    }

    /// New2 constructs a new QDnsDomainNameRecord object.
    ///
    /// ``` other: QtC.QDnsDomainNameRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QDnsDomainNameRecord {
        return qtc.QDnsDomainNameRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#operator-eq)
    ///
    /// ``` self: QtC.QDnsDomainNameRecord, other: QtC.QDnsDomainNameRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsDomainNameRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#swap)
    ///
    /// ``` self: QtC.QDnsDomainNameRecord, other: QtC.QDnsDomainNameRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsDomainNameRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#name)
    ///
    /// ``` self: QtC.QDnsDomainNameRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsDomainNameRecord_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsdomainnamerecord.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#timeToLive)
    ///
    /// ``` self: QtC.QDnsDomainNameRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return qtc.QDnsDomainNameRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#value)
    ///
    /// ``` self: QtC.QDnsDomainNameRecord, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsDomainNameRecord_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsdomainnamerecord.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#dtor.QDnsDomainNameRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsDomainNameRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsDomainNameRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnshostaddressrecord.html
pub const qdnshostaddressrecord = struct {
    /// New constructs a new QDnsHostAddressRecord object.
    ///
    ///
    pub fn New() QtC.QDnsHostAddressRecord {
        return qtc.QDnsHostAddressRecord_new();
    }

    /// New2 constructs a new QDnsHostAddressRecord object.
    ///
    /// ``` other: QtC.QDnsHostAddressRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QDnsHostAddressRecord {
        return qtc.QDnsHostAddressRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#operator-eq)
    ///
    /// ``` self: QtC.QDnsHostAddressRecord, other: QtC.QDnsHostAddressRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsHostAddressRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#swap)
    ///
    /// ``` self: QtC.QDnsHostAddressRecord, other: QtC.QDnsHostAddressRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsHostAddressRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#name)
    ///
    /// ``` self: QtC.QDnsHostAddressRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsHostAddressRecord_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnshostaddressrecord.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#timeToLive)
    ///
    /// ``` self: QtC.QDnsHostAddressRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return qtc.QDnsHostAddressRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#value)
    ///
    /// ``` self: QtC.QDnsHostAddressRecord ```
    pub fn Value(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QDnsHostAddressRecord_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#dtor.QDnsHostAddressRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsHostAddressRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsHostAddressRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnsmailexchangerecord.html
pub const qdnsmailexchangerecord = struct {
    /// New constructs a new QDnsMailExchangeRecord object.
    ///
    ///
    pub fn New() QtC.QDnsMailExchangeRecord {
        return qtc.QDnsMailExchangeRecord_new();
    }

    /// New2 constructs a new QDnsMailExchangeRecord object.
    ///
    /// ``` other: QtC.QDnsMailExchangeRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QDnsMailExchangeRecord {
        return qtc.QDnsMailExchangeRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#operator-eq)
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord, other: QtC.QDnsMailExchangeRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsMailExchangeRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#swap)
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord, other: QtC.QDnsMailExchangeRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsMailExchangeRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#exchange)
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord, allocator: std.mem.Allocator ```
    pub fn Exchange(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsMailExchangeRecord_Exchange(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsmailexchangerecord.Exchange: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#name)
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsMailExchangeRecord_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsmailexchangerecord.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#preference)
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord ```
    pub fn Preference(self: ?*anyopaque) u16 {
        return qtc.QDnsMailExchangeRecord_Preference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#timeToLive)
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return qtc.QDnsMailExchangeRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#dtor.QDnsMailExchangeRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsMailExchangeRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsMailExchangeRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnsservicerecord.html
pub const qdnsservicerecord = struct {
    /// New constructs a new QDnsServiceRecord object.
    ///
    ///
    pub fn New() QtC.QDnsServiceRecord {
        return qtc.QDnsServiceRecord_new();
    }

    /// New2 constructs a new QDnsServiceRecord object.
    ///
    /// ``` other: QtC.QDnsServiceRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QDnsServiceRecord {
        return qtc.QDnsServiceRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#operator-eq)
    ///
    /// ``` self: QtC.QDnsServiceRecord, other: QtC.QDnsServiceRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsServiceRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#swap)
    ///
    /// ``` self: QtC.QDnsServiceRecord, other: QtC.QDnsServiceRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsServiceRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#name)
    ///
    /// ``` self: QtC.QDnsServiceRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsServiceRecord_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsservicerecord.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#port)
    ///
    /// ``` self: QtC.QDnsServiceRecord ```
    pub fn Port(self: ?*anyopaque) u16 {
        return qtc.QDnsServiceRecord_Port(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#priority)
    ///
    /// ``` self: QtC.QDnsServiceRecord ```
    pub fn Priority(self: ?*anyopaque) u16 {
        return qtc.QDnsServiceRecord_Priority(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#target)
    ///
    /// ``` self: QtC.QDnsServiceRecord, allocator: std.mem.Allocator ```
    pub fn Target(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsServiceRecord_Target(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnsservicerecord.Target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#timeToLive)
    ///
    /// ``` self: QtC.QDnsServiceRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return qtc.QDnsServiceRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#weight)
    ///
    /// ``` self: QtC.QDnsServiceRecord ```
    pub fn Weight(self: ?*anyopaque) u16 {
        return qtc.QDnsServiceRecord_Weight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#dtor.QDnsServiceRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsServiceRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsServiceRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnstextrecord.html
pub const qdnstextrecord = struct {
    /// New constructs a new QDnsTextRecord object.
    ///
    ///
    pub fn New() QtC.QDnsTextRecord {
        return qtc.QDnsTextRecord_new();
    }

    /// New2 constructs a new QDnsTextRecord object.
    ///
    /// ``` other: QtC.QDnsTextRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QDnsTextRecord {
        return qtc.QDnsTextRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#operator-eq)
    ///
    /// ``` self: QtC.QDnsTextRecord, other: QtC.QDnsTextRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTextRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#swap)
    ///
    /// ``` self: QtC.QDnsTextRecord, other: QtC.QDnsTextRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTextRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#name)
    ///
    /// ``` self: QtC.QDnsTextRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsTextRecord_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnstextrecord.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#timeToLive)
    ///
    /// ``` self: QtC.QDnsTextRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return qtc.QDnsTextRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#values)
    ///
    /// ``` self: QtC.QDnsTextRecord, allocator: std.mem.Allocator ```
    pub fn Values(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDnsTextRecord_Values(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdnstextrecord.Values: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdnstextrecord.Values: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#dtor.QDnsTextRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsTextRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsTextRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnstlsassociationrecord.html
pub const qdnstlsassociationrecord = struct {
    /// New constructs a new QDnsTlsAssociationRecord object.
    ///
    ///
    pub fn New() QtC.QDnsTlsAssociationRecord {
        return qtc.QDnsTlsAssociationRecord_new();
    }

    /// New2 constructs a new QDnsTlsAssociationRecord object.
    ///
    /// ``` other: QtC.QDnsTlsAssociationRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QDnsTlsAssociationRecord {
        return qtc.QDnsTlsAssociationRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#operator-eq)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord, other: QtC.QDnsTlsAssociationRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTlsAssociationRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#swap)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord, other: QtC.QDnsTlsAssociationRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDnsTlsAssociationRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#name)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsTlsAssociationRecord_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnstlsassociationrecord.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#timeToLive)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return qtc.QDnsTlsAssociationRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#usage)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord ```
    ///
    /// Returns: ``` qdnslookup_enums.CertificateUsage ```
    pub fn Usage(self: ?*anyopaque) u8 {
        return qtc.QDnsTlsAssociationRecord_Usage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#selector)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord ```
    ///
    /// Returns: ``` qdnslookup_enums.Selector ```
    pub fn Selector(self: ?*anyopaque) u8 {
        return qtc.QDnsTlsAssociationRecord_Selector(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#matchType)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord ```
    ///
    /// Returns: ``` qdnslookup_enums.MatchingType ```
    pub fn MatchType(self: ?*anyopaque) u8 {
        return qtc.QDnsTlsAssociationRecord_MatchType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#value)
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDnsTlsAssociationRecord_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdnstlsassociationrecord.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#dtor.QDnsTlsAssociationRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsTlsAssociationRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsTlsAssociationRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnslookup.html
pub const qdnslookup = struct {
    /// New constructs a new QDnsLookup object.
    ///
    ///
    pub fn New() QtC.QDnsLookup {
        return qtc.QDnsLookup_new();
    }

    /// New2 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8 ```
    pub fn New2(typeVal: i32, name: []const u8) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new2(@intCast(typeVal), name_str);
    }

    /// New3 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, nameserver: QtC.QHostAddress ```
    pub fn New3(typeVal: i32, name: []const u8, nameserver: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new3(@intCast(typeVal), name_str, @ptrCast(nameserver));
    }

    /// New4 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, nameserver: QtC.QHostAddress, port: u16 ```
    pub fn New4(typeVal: i32, name: []const u8, nameserver: ?*anyopaque, port: u16) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new4(@intCast(typeVal), name_str, @ptrCast(nameserver), @intCast(port));
    }

    /// New5 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, protocol: qdnslookup_enums.Protocol, nameserver: QtC.QHostAddress ```
    pub fn New5(typeVal: i32, name: []const u8, protocol: u8, nameserver: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new5(@intCast(typeVal), name_str, @intCast(protocol), @ptrCast(nameserver));
    }

    /// New6 constructs a new QDnsLookup object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New6(parent: ?*anyopaque) QtC.QDnsLookup {
        return qtc.QDnsLookup_new6(@ptrCast(parent));
    }

    /// New7 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, parent: QtC.QObject ```
    pub fn New7(typeVal: i32, name: []const u8, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new7(@intCast(typeVal), name_str, @ptrCast(parent));
    }

    /// New8 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, nameserver: QtC.QHostAddress, parent: QtC.QObject ```
    pub fn New8(typeVal: i32, name: []const u8, nameserver: ?*anyopaque, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new8(@intCast(typeVal), name_str, @ptrCast(nameserver), @ptrCast(parent));
    }

    /// New9 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, nameserver: QtC.QHostAddress, port: u16, parent: QtC.QObject ```
    pub fn New9(typeVal: i32, name: []const u8, nameserver: ?*anyopaque, port: u16, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new9(@intCast(typeVal), name_str, @ptrCast(nameserver), @intCast(port), @ptrCast(parent));
    }

    /// New10 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, protocol: qdnslookup_enums.Protocol, nameserver: QtC.QHostAddress, port: u16 ```
    pub fn New10(typeVal: i32, name: []const u8, protocol: u8, nameserver: ?*anyopaque, port: u16) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new10(@intCast(typeVal), name_str, @intCast(protocol), @ptrCast(nameserver), @intCast(port));
    }

    /// New11 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, protocol: qdnslookup_enums.Protocol, nameserver: QtC.QHostAddress, port: u16, parent: QtC.QObject ```
    pub fn New11(typeVal: i32, name: []const u8, protocol: u8, nameserver: ?*anyopaque, port: u16, parent: ?*anyopaque) QtC.QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDnsLookup_new11(@intCast(typeVal), name_str, @intCast(protocol), @ptrCast(nameserver), @intCast(port), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDnsLookup_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QDnsLookup, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDnsLookup_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QDnsLookup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDnsLookup_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDnsLookup_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QDnsLookup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDnsLookup_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QDnsLookup_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#isAuthenticData)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn IsAuthenticData(self: ?*anyopaque) bool {
        return qtc.QDnsLookup_IsAuthenticData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#error)
    ///
    /// ``` self: QtC.QDnsLookup ```
    ///
    /// Returns: ``` qdnslookup_enums.Error ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QDnsLookup_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#errorString)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#isFinished)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QDnsLookup_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#name)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDnsLookup_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setName)
    ///
    /// ``` self: QtC.QDnsLookup, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDnsLookup_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#type)
    ///
    /// ``` self: QtC.QDnsLookup ```
    ///
    /// Returns: ``` qdnslookup_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QDnsLookup_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setType)
    ///
    /// ``` self: QtC.QDnsLookup, typeVal: qdnslookup_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDnsLookup_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserver)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Nameserver(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QDnsLookup_Nameserver(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ``` self: QtC.QDnsLookup, nameserver: QtC.QHostAddress ```
    pub fn SetNameserver(self: ?*anyopaque, nameserver: ?*anyopaque) void {
        qtc.QDnsLookup_SetNameserver(@ptrCast(self), @ptrCast(nameserver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPort)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn NameserverPort(self: ?*anyopaque) u16 {
        return qtc.QDnsLookup_NameserverPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserverPort)
    ///
    /// ``` self: QtC.QDnsLookup, port: u16 ```
    pub fn SetNameserverPort(self: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_SetNameserverPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocol)
    ///
    /// ``` self: QtC.QDnsLookup ```
    ///
    /// Returns: ``` qdnslookup_enums.Protocol ```
    pub fn NameserverProtocol(self: ?*anyopaque) u8 {
        return qtc.QDnsLookup_NameserverProtocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserverProtocol)
    ///
    /// ``` self: QtC.QDnsLookup, protocol: qdnslookup_enums.Protocol ```
    pub fn SetNameserverProtocol(self: ?*anyopaque, protocol: u8) void {
        qtc.QDnsLookup_SetNameserverProtocol(@ptrCast(self), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ``` self: QtC.QDnsLookup, protocol: qdnslookup_enums.Protocol, nameserver: QtC.QHostAddress ```
    pub fn SetNameserver2(self: ?*anyopaque, protocol: u8, nameserver: ?*anyopaque) void {
        qtc.QDnsLookup_SetNameserver2(@ptrCast(self), @intCast(protocol), @ptrCast(nameserver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ``` self: QtC.QDnsLookup, nameserver: QtC.QHostAddress, port: u16 ```
    pub fn SetNameserver3(self: ?*anyopaque, nameserver: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_SetNameserver3(@ptrCast(self), @ptrCast(nameserver), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#canonicalNameRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn CanonicalNameRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsDomainNameRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_CanonicalNameRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsDomainNameRecord, _arr.len) catch @panic("qdnslookup.CanonicalNameRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#hostAddressRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn HostAddressRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsHostAddressRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_HostAddressRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsHostAddressRecord, _arr.len) catch @panic("qdnslookup.HostAddressRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsHostAddressRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#mailExchangeRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn MailExchangeRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsMailExchangeRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_MailExchangeRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsMailExchangeRecord, _arr.len) catch @panic("qdnslookup.MailExchangeRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsMailExchangeRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameServerRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn NameServerRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsDomainNameRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_NameServerRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsDomainNameRecord, _arr.len) catch @panic("qdnslookup.NameServerRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#pointerRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn PointerRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsDomainNameRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_PointerRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsDomainNameRecord, _arr.len) catch @panic("qdnslookup.PointerRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#serviceRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn ServiceRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsServiceRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_ServiceRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsServiceRecord, _arr.len) catch @panic("qdnslookup.ServiceRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsServiceRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#textRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn TextRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsTextRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_TextRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsTextRecord, _arr.len) catch @panic("qdnslookup.TextRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsTextRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#tlsAssociationRecords)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn TlsAssociationRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDnsTlsAssociationRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_TlsAssociationRecords(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDnsTlsAssociationRecord, _arr.len) catch @panic("qdnslookup.TlsAssociationRecords: Memory allocation failed");
        const _data: [*]QtC.QDnsTlsAssociationRecord = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setSslConfiguration)
    ///
    /// ``` self: QtC.QDnsLookup, sslConfiguration: QtC.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        qtc.QDnsLookup_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#sslConfiguration)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QDnsLookup_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#isProtocolSupported)
    ///
    /// ``` protocol: qdnslookup_enums.Protocol ```
    pub fn IsProtocolSupported(protocol: u8) bool {
        return qtc.QDnsLookup_IsProtocolSupported(@intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#defaultPortForProtocol)
    ///
    /// ``` protocol: qdnslookup_enums.Protocol ```
    pub fn DefaultPortForProtocol(protocol: u8) u16 {
        return qtc.QDnsLookup_DefaultPortForProtocol(@intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#abort)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Abort(self: ?*anyopaque) void {
        qtc.QDnsLookup_Abort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#lookup)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Lookup(self: ?*anyopaque) void {
        qtc.QDnsLookup_Lookup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#finished)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Finished(self: ?*anyopaque) void {
        qtc.QDnsLookup_Finished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#finished)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
    ///
    /// ``` self: QtC.QDnsLookup, name: []const u8 ```
    pub fn NameChanged(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDnsLookup_NameChanged(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, name: []const u8) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
    ///
    /// ``` self: QtC.QDnsLookup, typeVal: qdnslookup_enums.Type ```
    pub fn TypeChanged(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDnsLookup_TypeChanged(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, typeVal: qdnslookup_enums.Type) callconv(.c) void ```
    pub fn OnTypeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_TypeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
    ///
    /// ``` self: QtC.QDnsLookup, nameserver: QtC.QHostAddress ```
    pub fn NameserverChanged(self: ?*anyopaque, nameserver: ?*anyopaque) void {
        qtc.QDnsLookup_NameserverChanged(@ptrCast(self), @ptrCast(nameserver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, nameserver: QtC.QHostAddress) callconv(.c) void ```
    pub fn OnNameserverChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPortChanged)
    ///
    /// ``` self: QtC.QDnsLookup, port: u16 ```
    pub fn NameserverPortChanged(self: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_NameserverPortChanged(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPortChanged)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, port: u16) callconv(.c) void ```
    pub fn OnNameserverPortChanged(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverPortChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocolChanged)
    ///
    /// ``` self: QtC.QDnsLookup, protocol: qdnslookup_enums.Protocol ```
    pub fn NameserverProtocolChanged(self: ?*anyopaque, protocol: u8) void {
        qtc.QDnsLookup_NameserverProtocolChanged(@ptrCast(self), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocolChanged)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, protocol: qdnslookup_enums.Protocol) callconv(.c) void ```
    pub fn OnNameserverProtocolChanged(self: ?*anyopaque, slot: fn (?*anyopaque, u8) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverProtocolChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QDnsLookup_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QDnsLookup_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ``` self: QtC.QDnsLookup, protocol: qdnslookup_enums.Protocol, nameserver: QtC.QHostAddress, port: u16 ```
    pub fn SetNameserver32(self: ?*anyopaque, protocol: u8, nameserver: ?*anyopaque, port: u16) void {
        qtc.QDnsLookup_SetNameserver32(@ptrCast(self), @intCast(protocol), @ptrCast(nameserver), @intCast(port));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdnslookup.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QDnsLookup, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QDnsLookup, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDnsLookup, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDnsLookup, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDnsLookup, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDnsLookup, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdnslookup.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QDnsLookup, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QDnsLookup, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QDnsLookup, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QDnsLookup, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QDnsLookup, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QDnsLookup, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdnslookup.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdnslookup.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QDnsLookup, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDnsLookup, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDnsLookup, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QDnsLookup, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDnsLookup, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDnsLookup_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDnsLookup_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDnsLookup_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDnsLookup_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDnsLookup_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDnsLookup_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDnsLookup_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDnsLookup_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDnsLookup_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDnsLookup_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDnsLookup_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDnsLookup_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDnsLookup_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDnsLookup_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDnsLookup_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDnsLookup_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDnsLookup_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDnsLookup_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDnsLookup_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QDnsLookup_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDnsLookup_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDnsLookup_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QDnsLookup_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDnsLookup_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDnsLookup_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QDnsLookup_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDnsLookup_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDnsLookup_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDnsLookup_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QDnsLookup, slot: fn (self: QtC.QDnsLookup, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#dtor.QDnsLookup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDnsLookup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDnsLookup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnslookup.html#types
pub const enums = struct {
    pub const CertificateUsage = enum {
        pub const CertificateAuthorityConstrait: u8 = 0;
        pub const ServiceCertificateConstraint: u8 = 1;
        pub const TrustAnchorAssertion: u8 = 2;
        pub const DomainIssuedCertificate: u8 = 3;
        pub const PrivateUse: u8 = 255;
        pub const PKIX_TA: u8 = 0;
        pub const PKIX_EE: u8 = 1;
        pub const DANE_TA: u8 = 2;
        pub const DANE_EE: u8 = 3;
        pub const PrivCert: u8 = 255;
    };

    pub const Selector = enum {
        pub const FullCertificate: u8 = 0;
        pub const SubjectPublicKeyInfo: u8 = 1;
        pub const PrivateUse: u8 = 255;
        pub const Cert: u8 = 0;
        pub const SPKI: u8 = 1;
        pub const PrivSel: u8 = 255;
    };

    pub const MatchingType = enum {
        pub const Exact: u8 = 0;
        pub const Sha256: u8 = 1;
        pub const Sha512: u8 = 2;
        pub const PrivateUse: u8 = 255;
        pub const PrivMatch: u8 = 255;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResolverError: i32 = 1;
        pub const OperationCancelledError: i32 = 2;
        pub const InvalidRequestError: i32 = 3;
        pub const InvalidReplyError: i32 = 4;
        pub const ServerFailureError: i32 = 5;
        pub const ServerRefusedError: i32 = 6;
        pub const NotFoundError: i32 = 7;
        pub const TimeoutError: i32 = 8;
    };

    pub const Type = enum {
        pub const A: i32 = 1;
        pub const AAAA: i32 = 28;
        pub const ANY: i32 = 255;
        pub const CNAME: i32 = 5;
        pub const MX: i32 = 15;
        pub const NS: i32 = 2;
        pub const PTR: i32 = 12;
        pub const SRV: i32 = 33;
        pub const TLSA: i32 = 52;
        pub const TXT: i32 = 16;
    };

    pub const Protocol = enum {
        pub const Standard: u8 = 0;
        pub const DnsOverTls: u8 = 1;
    };
};
