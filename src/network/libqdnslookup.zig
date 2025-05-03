const C = @import("qt6c");
const qdnslookup_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdnsdomainnamerecord.html
pub const qdnsdomainnamerecord = struct {
    /// New constructs a new QDnsDomainNameRecord object.
    ///
    ///
    pub fn New() ?*C.QDnsDomainNameRecord {
        return C.QDnsDomainNameRecord_new();
    }

    /// New2 constructs a new QDnsDomainNameRecord object.
    ///
    /// ``` other: ?*C.QDnsDomainNameRecord ```
    pub fn New2(other: ?*anyopaque) ?*C.QDnsDomainNameRecord {
        return C.QDnsDomainNameRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#operator=)
    ///
    /// ``` self: ?*C.QDnsDomainNameRecord, other: ?*C.QDnsDomainNameRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsDomainNameRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#swap)
    ///
    /// ``` self: ?*C.QDnsDomainNameRecord, other: ?*C.QDnsDomainNameRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsDomainNameRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#name)
    ///
    /// ``` self: ?*C.QDnsDomainNameRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsDomainNameRecord_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#timeToLive)
    ///
    /// ``` self: ?*C.QDnsDomainNameRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return C.QDnsDomainNameRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#value)
    ///
    /// ``` self: ?*C.QDnsDomainNameRecord, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsDomainNameRecord_Value(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDnsDomainNameRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDnsDomainNameRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnshostaddressrecord.html
pub const qdnshostaddressrecord = struct {
    /// New constructs a new QDnsHostAddressRecord object.
    ///
    ///
    pub fn New() ?*C.QDnsHostAddressRecord {
        return C.QDnsHostAddressRecord_new();
    }

    /// New2 constructs a new QDnsHostAddressRecord object.
    ///
    /// ``` other: ?*C.QDnsHostAddressRecord ```
    pub fn New2(other: ?*anyopaque) ?*C.QDnsHostAddressRecord {
        return C.QDnsHostAddressRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#operator=)
    ///
    /// ``` self: ?*C.QDnsHostAddressRecord, other: ?*C.QDnsHostAddressRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsHostAddressRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#swap)
    ///
    /// ``` self: ?*C.QDnsHostAddressRecord, other: ?*C.QDnsHostAddressRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsHostAddressRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#name)
    ///
    /// ``` self: ?*C.QDnsHostAddressRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsHostAddressRecord_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#timeToLive)
    ///
    /// ``` self: ?*C.QDnsHostAddressRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return C.QDnsHostAddressRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#value)
    ///
    /// ``` self: ?*C.QDnsHostAddressRecord ```
    pub fn Value(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QDnsHostAddressRecord_Value(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDnsHostAddressRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDnsHostAddressRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnsmailexchangerecord.html
pub const qdnsmailexchangerecord = struct {
    /// New constructs a new QDnsMailExchangeRecord object.
    ///
    ///
    pub fn New() ?*C.QDnsMailExchangeRecord {
        return C.QDnsMailExchangeRecord_new();
    }

    /// New2 constructs a new QDnsMailExchangeRecord object.
    ///
    /// ``` other: ?*C.QDnsMailExchangeRecord ```
    pub fn New2(other: ?*anyopaque) ?*C.QDnsMailExchangeRecord {
        return C.QDnsMailExchangeRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#operator=)
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord, other: ?*C.QDnsMailExchangeRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsMailExchangeRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#swap)
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord, other: ?*C.QDnsMailExchangeRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsMailExchangeRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#exchange)
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord, allocator: std.mem.Allocator ```
    pub fn Exchange(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsMailExchangeRecord_Exchange(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#name)
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsMailExchangeRecord_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#preference)
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord ```
    pub fn Preference(self: ?*anyopaque) u16 {
        return C.QDnsMailExchangeRecord_Preference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#timeToLive)
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return C.QDnsMailExchangeRecord_TimeToLive(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDnsMailExchangeRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDnsMailExchangeRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnsservicerecord.html
pub const qdnsservicerecord = struct {
    /// New constructs a new QDnsServiceRecord object.
    ///
    ///
    pub fn New() ?*C.QDnsServiceRecord {
        return C.QDnsServiceRecord_new();
    }

    /// New2 constructs a new QDnsServiceRecord object.
    ///
    /// ``` other: ?*C.QDnsServiceRecord ```
    pub fn New2(other: ?*anyopaque) ?*C.QDnsServiceRecord {
        return C.QDnsServiceRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#operator=)
    ///
    /// ``` self: ?*C.QDnsServiceRecord, other: ?*C.QDnsServiceRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsServiceRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#swap)
    ///
    /// ``` self: ?*C.QDnsServiceRecord, other: ?*C.QDnsServiceRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsServiceRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#name)
    ///
    /// ``` self: ?*C.QDnsServiceRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsServiceRecord_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#port)
    ///
    /// ``` self: ?*C.QDnsServiceRecord ```
    pub fn Port(self: ?*anyopaque) u16 {
        return C.QDnsServiceRecord_Port(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#priority)
    ///
    /// ``` self: ?*C.QDnsServiceRecord ```
    pub fn Priority(self: ?*anyopaque) u16 {
        return C.QDnsServiceRecord_Priority(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#target)
    ///
    /// ``` self: ?*C.QDnsServiceRecord, allocator: std.mem.Allocator ```
    pub fn Target(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsServiceRecord_Target(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#timeToLive)
    ///
    /// ``` self: ?*C.QDnsServiceRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return C.QDnsServiceRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#weight)
    ///
    /// ``` self: ?*C.QDnsServiceRecord ```
    pub fn Weight(self: ?*anyopaque) u16 {
        return C.QDnsServiceRecord_Weight(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDnsServiceRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDnsServiceRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnstextrecord.html
pub const qdnstextrecord = struct {
    /// New constructs a new QDnsTextRecord object.
    ///
    ///
    pub fn New() ?*C.QDnsTextRecord {
        return C.QDnsTextRecord_new();
    }

    /// New2 constructs a new QDnsTextRecord object.
    ///
    /// ``` other: ?*C.QDnsTextRecord ```
    pub fn New2(other: ?*anyopaque) ?*C.QDnsTextRecord {
        return C.QDnsTextRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#operator=)
    ///
    /// ``` self: ?*C.QDnsTextRecord, other: ?*C.QDnsTextRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsTextRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#swap)
    ///
    /// ``` self: ?*C.QDnsTextRecord, other: ?*C.QDnsTextRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QDnsTextRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#name)
    ///
    /// ``` self: ?*C.QDnsTextRecord, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsTextRecord_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#timeToLive)
    ///
    /// ``` self: ?*C.QDnsTextRecord ```
    pub fn TimeToLive(self: ?*anyopaque) u32 {
        return C.QDnsTextRecord_TimeToLive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#values)
    ///
    /// ``` self: ?*C.QDnsTextRecord, allocator: std.mem.Allocator ```
    pub fn Values(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QDnsTextRecord_Values(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDnsTextRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDnsTextRecord_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnslookup.html
pub const qdnslookup = struct {
    /// New constructs a new QDnsLookup object.
    ///
    ///
    pub fn New() ?*C.QDnsLookup {
        return C.QDnsLookup_new();
    }

    /// New2 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8 ```
    pub fn New2(typeVal: i64, name: []const u8) ?*C.QDnsLookup {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QDnsLookup_new2(@intCast(typeVal), name_str);
    }

    /// New3 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, nameserver: ?*C.QHostAddress ```
    pub fn New3(typeVal: i64, name: []const u8, nameserver: ?*anyopaque) ?*C.QDnsLookup {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QDnsLookup_new3(@intCast(typeVal), name_str, @ptrCast(nameserver));
    }

    /// New4 constructs a new QDnsLookup object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New4(parent: ?*anyopaque) ?*C.QDnsLookup {
        return C.QDnsLookup_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, parent: ?*C.QObject ```
    pub fn New5(typeVal: i64, name: []const u8, parent: ?*anyopaque) ?*C.QDnsLookup {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QDnsLookup_new5(@intCast(typeVal), name_str, @ptrCast(parent));
    }

    /// New6 constructs a new QDnsLookup object.
    ///
    /// ``` typeVal: qdnslookup_enums.Type, name: []const u8, nameserver: ?*C.QHostAddress, parent: ?*C.QObject ```
    pub fn New6(typeVal: i64, name: []const u8, nameserver: ?*anyopaque, parent: ?*anyopaque) ?*C.QDnsLookup {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QDnsLookup_new6(@intCast(typeVal), name_str, @ptrCast(nameserver), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QDnsLookup_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QDnsLookup, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QDnsLookup_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QDnsLookup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QDnsLookup_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QDnsLookup_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDnsLookup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QDnsLookup_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QDnsLookup_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#error)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QDnsLookup_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#errorString)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsLookup_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#isFinished)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return C.QDnsLookup_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#name)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QDnsLookup_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setName)
    ///
    /// ``` self: ?*C.QDnsLookup, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QDnsLookup_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#type)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QDnsLookup_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setType)
    ///
    /// ``` self: ?*C.QDnsLookup, typeVal: qdnslookup_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i64) void {
        C.QDnsLookup_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserver)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Nameserver(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QDnsLookup_Nameserver(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ``` self: ?*C.QDnsLookup, nameserver: ?*C.QHostAddress ```
    pub fn SetNameserver(self: ?*anyopaque, nameserver: ?*anyopaque) void {
        C.QDnsLookup_SetNameserver(@ptrCast(self), @ptrCast(nameserver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#canonicalNameRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn CanonicalNameRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsDomainNameRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_CanonicalNameRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsDomainNameRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#hostAddressRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn HostAddressRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsHostAddressRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_HostAddressRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsHostAddressRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsHostAddressRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#mailExchangeRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn MailExchangeRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsMailExchangeRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_MailExchangeRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsMailExchangeRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsMailExchangeRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameServerRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn NameServerRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsDomainNameRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_NameServerRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsDomainNameRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#pointerRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn PointerRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsDomainNameRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_PointerRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsDomainNameRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#serviceRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn ServiceRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsServiceRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_ServiceRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsServiceRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsServiceRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#textRecords)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn TextRecords(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QDnsTextRecord {
        const _arr: C.struct_libqt_list = C.QDnsLookup_TextRecords(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QDnsTextRecord, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QDnsTextRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#abort)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Abort(self: ?*anyopaque) void {
        C.QDnsLookup_Abort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#lookup)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Lookup(self: ?*anyopaque) void {
        C.QDnsLookup_Lookup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#finished)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Finished(self: ?*anyopaque) void {
        C.QDnsLookup_Finished(@ptrCast(self));
    }

    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
    ///
    /// ``` self: ?*C.QDnsLookup, name: []const u8 ```
    pub fn NameChanged(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QDnsLookup_NameChanged(@ptrCast(self), name_str);
    }

    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, []const u8) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QDnsLookup_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
    ///
    /// ``` self: ?*C.QDnsLookup, typeVal: qdnslookup_enums.Type ```
    pub fn TypeChanged(self: ?*anyopaque, typeVal: i64) void {
        C.QDnsLookup_TypeChanged(@ptrCast(self), @intCast(typeVal));
    }

    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, qdnslookup_enums.Type) callconv(.c) void ```
    pub fn OnTypeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QDnsLookup_Connect_TypeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
    ///
    /// ``` self: ?*C.QDnsLookup, nameserver: ?*C.QHostAddress ```
    pub fn NameserverChanged(self: ?*anyopaque, nameserver: ?*anyopaque) void {
        C.QDnsLookup_NameserverChanged(@ptrCast(self), @ptrCast(nameserver));
    }

    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnNameserverChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_Connect_NameserverChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QDnsLookup_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QDnsLookup_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QDnsLookup, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QDnsLookup, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QDnsLookup, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QDnsLookup, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QDnsLookup, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QDnsLookup, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QDnsLookup, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QDnsLookup, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QDnsLookup, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QDnsLookup, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QDnsLookup, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QDnsLookup, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QDnsLookup, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QDnsLookup, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QDnsLookup, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QDnsLookup, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QDnsLookup_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QDnsLookup_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDnsLookup_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QDnsLookup_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QDnsLookup_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDnsLookup_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDnsLookup_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDnsLookup_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDnsLookup_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDnsLookup_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDnsLookup_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDnsLookup_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDnsLookup_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDnsLookup_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDnsLookup_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDnsLookup_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDnsLookup_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QDnsLookup_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QDnsLookup_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QDnsLookup_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QDnsLookup_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QDnsLookup_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QDnsLookup_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QDnsLookup_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QDnsLookup_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QDnsLookup_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QDnsLookup_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QDnsLookup_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDnsLookup, slot: fn (?*C.QDnsLookup, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDnsLookup_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDnsLookup ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDnsLookup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdnslookup.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResolverError: i32 = 1;
        pub const OperationCancelledError: i32 = 2;
        pub const InvalidRequestError: i32 = 3;
        pub const InvalidReplyError: i32 = 4;
        pub const ServerFailureError: i32 = 5;
        pub const ServerRefusedError: i32 = 6;
        pub const NotFoundError: i32 = 7;
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
        pub const TXT: i32 = 16;
    };
};
