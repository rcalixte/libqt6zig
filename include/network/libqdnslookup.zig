const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qdnslookup_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html)
pub const QDnsDomainNameRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsDomainNameRecord,

    pub const _is_QDnsDomainNameRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsDomainNameRecord object in C++ memory
    ///
    pub fn new() QDnsDomainNameRecord {
        return .{ .ptr = qtc.QDnsDomainNameRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsDomainNameRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDnsDomainNameRecord `
    ///
    pub fn new2(other: anytype) QDnsDomainNameRecord {
        comptime _ = @TypeOf(other)._is_QDnsDomainNameRecord;
        return .{ .ptr = qtc.QDnsDomainNameRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsDomainNameRecord `
    ///
    /// ` other: QDnsDomainNameRecord `
    ///
    pub fn operatorAssign(self: QDnsDomainNameRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsDomainNameRecord;
        qtc.QDnsDomainNameRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsDomainNameRecord `
    ///
    /// ` other: QDnsDomainNameRecord `
    ///
    pub fn swap(self: QDnsDomainNameRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsDomainNameRecord;
        qtc.QDnsDomainNameRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsDomainNameRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsDomainNameRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsDomainNameRecord_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsDomainNameRecord.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `timeToLive` instead
    ///
    pub const TimeToLive = timeToLive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#timeToLive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsDomainNameRecord `
    ///
    pub fn timeToLive(self: QDnsDomainNameRecord) u32 {
        return qtc.QDnsDomainNameRecord_TimeToLive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsDomainNameRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QDnsDomainNameRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsDomainNameRecord_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsDomainNameRecord.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#dtor.QDnsDomainNameRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsDomainNameRecord `
    ///
    pub fn delete(self: QDnsDomainNameRecord) void {
        qtc.QDnsDomainNameRecord_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html)
pub const QDnsHostAddressRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsHostAddressRecord,

    pub const _is_QDnsHostAddressRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsHostAddressRecord object in C++ memory
    ///
    pub fn new() QDnsHostAddressRecord {
        return .{ .ptr = qtc.QDnsHostAddressRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsHostAddressRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDnsHostAddressRecord `
    ///
    pub fn new2(other: anytype) QDnsHostAddressRecord {
        comptime _ = @TypeOf(other)._is_QDnsHostAddressRecord;
        return .{ .ptr = qtc.QDnsHostAddressRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsHostAddressRecord `
    ///
    /// ` other: QDnsHostAddressRecord `
    ///
    pub fn operatorAssign(self: QDnsHostAddressRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsHostAddressRecord;
        qtc.QDnsHostAddressRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsHostAddressRecord `
    ///
    /// ` other: QDnsHostAddressRecord `
    ///
    pub fn swap(self: QDnsHostAddressRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsHostAddressRecord;
        qtc.QDnsHostAddressRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsHostAddressRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsHostAddressRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsHostAddressRecord_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsHostAddressRecord.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `timeToLive` instead
    ///
    pub const TimeToLive = timeToLive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#timeToLive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsHostAddressRecord `
    ///
    pub fn timeToLive(self: QDnsHostAddressRecord) u32 {
        return qtc.QDnsHostAddressRecord_TimeToLive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsHostAddressRecord `
    ///
    pub fn value(self: QDnsHostAddressRecord) QHostAddress {
        return .{ .ptr = qtc.QDnsHostAddressRecord_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#dtor.QDnsHostAddressRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsHostAddressRecord `
    ///
    pub fn delete(self: QDnsHostAddressRecord) void {
        qtc.QDnsHostAddressRecord_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html)
pub const QDnsMailExchangeRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsMailExchangeRecord,

    pub const _is_QDnsMailExchangeRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsMailExchangeRecord object in C++ memory
    ///
    pub fn new() QDnsMailExchangeRecord {
        return .{ .ptr = qtc.QDnsMailExchangeRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsMailExchangeRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDnsMailExchangeRecord `
    ///
    pub fn new2(other: anytype) QDnsMailExchangeRecord {
        comptime _ = @TypeOf(other)._is_QDnsMailExchangeRecord;
        return .{ .ptr = qtc.QDnsMailExchangeRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    /// ` other: QDnsMailExchangeRecord `
    ///
    pub fn operatorAssign(self: QDnsMailExchangeRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsMailExchangeRecord;
        qtc.QDnsMailExchangeRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    /// ` other: QDnsMailExchangeRecord `
    ///
    pub fn swap(self: QDnsMailExchangeRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsMailExchangeRecord;
        qtc.QDnsMailExchangeRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `exchange` instead
    ///
    pub const Exchange = exchange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#exchange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn exchange(self: QDnsMailExchangeRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsMailExchangeRecord_Exchange(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsMailExchangeRecord.exchange: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsMailExchangeRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsMailExchangeRecord_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsMailExchangeRecord.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `preference` instead
    ///
    pub const Preference = preference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#preference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    pub fn preference(self: QDnsMailExchangeRecord) u16 {
        return qtc.QDnsMailExchangeRecord_Preference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timeToLive` instead
    ///
    pub const TimeToLive = timeToLive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#timeToLive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    pub fn timeToLive(self: QDnsMailExchangeRecord) u32 {
        return qtc.QDnsMailExchangeRecord_TimeToLive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#dtor.QDnsMailExchangeRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsMailExchangeRecord `
    ///
    pub fn delete(self: QDnsMailExchangeRecord) void {
        qtc.QDnsMailExchangeRecord_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html)
pub const QDnsServiceRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsServiceRecord,

    pub const _is_QDnsServiceRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsServiceRecord object in C++ memory
    ///
    pub fn new() QDnsServiceRecord {
        return .{ .ptr = qtc.QDnsServiceRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsServiceRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDnsServiceRecord `
    ///
    pub fn new2(other: anytype) QDnsServiceRecord {
        comptime _ = @TypeOf(other)._is_QDnsServiceRecord;
        return .{ .ptr = qtc.QDnsServiceRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    /// ` other: QDnsServiceRecord `
    ///
    pub fn operatorAssign(self: QDnsServiceRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsServiceRecord;
        qtc.QDnsServiceRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    /// ` other: QDnsServiceRecord `
    ///
    pub fn swap(self: QDnsServiceRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsServiceRecord;
        qtc.QDnsServiceRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsServiceRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsServiceRecord_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsServiceRecord.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `port` instead
    ///
    pub const Port = port;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    pub fn port(self: QDnsServiceRecord) u16 {
        return qtc.QDnsServiceRecord_Port(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    pub fn priority(self: QDnsServiceRecord) u16 {
        return qtc.QDnsServiceRecord_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn target(self: QDnsServiceRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsServiceRecord_Target(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsServiceRecord.target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `timeToLive` instead
    ///
    pub const TimeToLive = timeToLive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#timeToLive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    pub fn timeToLive(self: QDnsServiceRecord) u32 {
        return qtc.QDnsServiceRecord_TimeToLive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `weight` instead
    ///
    pub const Weight = weight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#weight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsServiceRecord `
    ///
    pub fn weight(self: QDnsServiceRecord) u16 {
        return qtc.QDnsServiceRecord_Weight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#dtor.QDnsServiceRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsServiceRecord `
    ///
    pub fn delete(self: QDnsServiceRecord) void {
        qtc.QDnsServiceRecord_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html)
pub const QDnsTextRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsTextRecord,

    pub const _is_QDnsTextRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsTextRecord object in C++ memory
    ///
    pub fn new() QDnsTextRecord {
        return .{ .ptr = qtc.QDnsTextRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsTextRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDnsTextRecord `
    ///
    pub fn new2(other: anytype) QDnsTextRecord {
        comptime _ = @TypeOf(other)._is_QDnsTextRecord;
        return .{ .ptr = qtc.QDnsTextRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTextRecord `
    ///
    /// ` other: QDnsTextRecord `
    ///
    pub fn operatorAssign(self: QDnsTextRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsTextRecord;
        qtc.QDnsTextRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTextRecord `
    ///
    /// ` other: QDnsTextRecord `
    ///
    pub fn swap(self: QDnsTextRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsTextRecord;
        qtc.QDnsTextRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTextRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsTextRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsTextRecord_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsTextRecord.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `timeToLive` instead
    ///
    pub const TimeToLive = timeToLive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#timeToLive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTextRecord `
    ///
    pub fn timeToLive(self: QDnsTextRecord) u32 {
        return qtc.QDnsTextRecord_TimeToLive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `values` instead
    ///
    pub const Values = values;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTextRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn values(self: QDnsTextRecord, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDnsTextRecord_Values(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDnsTextRecord.values: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDnsTextRecord.values: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#dtor.QDnsTextRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsTextRecord `
    ///
    pub fn delete(self: QDnsTextRecord) void {
        qtc.QDnsTextRecord_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html)
pub const QDnsTlsAssociationRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsTlsAssociationRecord,

    pub const _is_QDnsTlsAssociationRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsTlsAssociationRecord object in C++ memory
    ///
    pub fn new() QDnsTlsAssociationRecord {
        return .{ .ptr = qtc.QDnsTlsAssociationRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsTlsAssociationRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDnsTlsAssociationRecord `
    ///
    pub fn new2(other: anytype) QDnsTlsAssociationRecord {
        comptime _ = @TypeOf(other)._is_QDnsTlsAssociationRecord;
        return .{ .ptr = qtc.QDnsTlsAssociationRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ` other: QDnsTlsAssociationRecord `
    ///
    pub fn operatorAssign(self: QDnsTlsAssociationRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsTlsAssociationRecord;
        qtc.QDnsTlsAssociationRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ` other: QDnsTlsAssociationRecord `
    ///
    pub fn swap(self: QDnsTlsAssociationRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDnsTlsAssociationRecord;
        qtc.QDnsTlsAssociationRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsTlsAssociationRecord, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsTlsAssociationRecord_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsTlsAssociationRecord.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `timeToLive` instead
    ///
    pub const TimeToLive = timeToLive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#timeToLive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    pub fn timeToLive(self: QDnsTlsAssociationRecord) u32 {
        return qtc.QDnsTlsAssociationRecord_TimeToLive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `usage` instead
    ///
    pub const Usage = usage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#usage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ## Returns:
    ///
    /// ` qdnslookup_enums.CertificateUsage `
    ///
    pub fn usage(self: QDnsTlsAssociationRecord) u8 {
        return qtc.QDnsTlsAssociationRecord_Usage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selector` instead
    ///
    pub const Selector = selector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#selector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ## Returns:
    ///
    /// ` qdnslookup_enums.Selector `
    ///
    pub fn selector(self: QDnsTlsAssociationRecord) u8 {
        return qtc.QDnsTlsAssociationRecord_Selector(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `matchType` instead
    ///
    pub const MatchType = matchType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#matchType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ## Returns:
    ///
    /// ` qdnslookup_enums.MatchingType `
    ///
    pub fn matchType(self: QDnsTlsAssociationRecord) u8 {
        return qtc.QDnsTlsAssociationRecord_MatchType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QDnsTlsAssociationRecord, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDnsTlsAssociationRecord_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDnsTlsAssociationRecord.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#dtor.QDnsTlsAssociationRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsTlsAssociationRecord `
    ///
    pub fn delete(self: QDnsTlsAssociationRecord) void {
        qtc.QDnsTlsAssociationRecord_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)
pub const QDnsLookup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDnsLookup,

    pub const _is_QDnsLookup = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    pub fn new() QDnsLookup {
        return .{ .ptr = qtc.QDnsLookup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new2(typeVal: i32, _name: []const u8) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDnsLookup_new2(@bitCast(typeVal), name_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    pub fn new3(typeVal: i32, _name: []const u8, _nameserver: anytype) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        return .{ .ptr = qtc.QDnsLookup_new3(@bitCast(typeVal), name_str, @ptrCast(_nameserver.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _port: u16 `
    ///
    pub fn new4(typeVal: i32, _name: []const u8, _nameserver: anytype, _port: u16) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        return .{ .ptr = qtc.QDnsLookup_new4(@bitCast(typeVal), name_str, @ptrCast(_nameserver.ptr), @bitCast(_port)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    pub fn new5(typeVal: i32, _name: []const u8, protocol: u8, _nameserver: anytype) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        return .{ .ptr = qtc.QDnsLookup_new5(@bitCast(typeVal), name_str, @bitCast(protocol), @ptrCast(_nameserver.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(_parent: anytype) QDnsLookup {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDnsLookup_new6(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new7(typeVal: i32, _name: []const u8, _parent: anytype) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDnsLookup_new7(@bitCast(typeVal), name_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(typeVal: i32, _name: []const u8, _nameserver: anytype, _parent: anytype) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDnsLookup_new8(@bitCast(typeVal), name_str, @ptrCast(_nameserver.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _port: u16 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new9(typeVal: i32, _name: []const u8, _nameserver: anytype, _port: u16, _parent: anytype) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDnsLookup_new9(@bitCast(typeVal), name_str, @ptrCast(_nameserver.ptr), @bitCast(_port), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _port: u16 `
    ///
    pub fn new10(typeVal: i32, _name: []const u8, protocol: u8, _nameserver: anytype, _port: u16) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        return .{ .ptr = qtc.QDnsLookup_new10(@bitCast(typeVal), name_str, @bitCast(protocol), @ptrCast(_nameserver.ptr), @bitCast(_port)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QDnsLookup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _port: u16 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new11(typeVal: i32, _name: []const u8, protocol: u8, _nameserver: anytype, _port: u16, _parent: anytype) QDnsLookup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDnsLookup_new11(@bitCast(typeVal), name_str, @bitCast(protocol), @ptrCast(_nameserver.ptr), @bitCast(_port), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn metaObject(self: QDnsLookup) QMetaObject {
        return .{ .ptr = qtc.QDnsLookup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDnsLookup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDnsLookup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn superMetaObject(self: QDnsLookup) QMetaObject {
        return .{ .ptr = qtc.QDnsLookup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDnsLookup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDnsLookup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDnsLookup, callback: *const fn (QDnsLookup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDnsLookup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDnsLookup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDnsLookup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDnsLookup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDnsLookup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDnsLookup, callback: *const fn (QDnsLookup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDnsLookup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDnsLookup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDnsLookup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsLookup.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAuthenticData` instead
    ///
    pub const IsAuthenticData = isAuthenticData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#isAuthenticData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn isAuthenticData(self: QDnsLookup) bool {
        return qtc.QDnsLookup_IsAuthenticData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ## Returns:
    ///
    /// ` qdnslookup_enums.Error `
    ///
    pub fn error0(self: QDnsLookup) i32 {
        return qtc.QDnsLookup_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QDnsLookup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsLookup_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsLookup.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn isFinished(self: QDnsLookup) bool {
        return qtc.QDnsLookup_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDnsLookup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDnsLookup_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsLookup.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QDnsLookup, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDnsLookup_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ## Returns:
    ///
    /// ` qdnslookup_enums.Type `
    ///
    pub fn type0(self: QDnsLookup) i32 {
        return qtc.QDnsLookup_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    pub fn setType(self: QDnsLookup, typeVal: i32) void {
        qtc.QDnsLookup_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `nameserver` instead
    ///
    pub const Nameserver = nameserver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn nameserver(self: QDnsLookup) QHostAddress {
        return .{ .ptr = qtc.QDnsLookup_Nameserver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setNameserver` instead
    ///
    pub const SetNameserver = setNameserver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    pub fn setNameserver(self: QDnsLookup, _nameserver: anytype) void {
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        qtc.QDnsLookup_SetNameserver(@ptrCast(self.ptr), @ptrCast(_nameserver.ptr));
    }

    /// ### DEPRECATED: Use `nameserverPort` instead
    ///
    pub const NameserverPort = nameserverPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn nameserverPort(self: QDnsLookup) u16 {
        return qtc.QDnsLookup_NameserverPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNameserverPort` instead
    ///
    pub const SetNameserverPort = setNameserverPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _port: u16 `
    ///
    pub fn setNameserverPort(self: QDnsLookup, _port: u16) void {
        qtc.QDnsLookup_SetNameserverPort(@ptrCast(self.ptr), @bitCast(_port));
    }

    /// ### DEPRECATED: Use `nameserverProtocol` instead
    ///
    pub const NameserverProtocol = nameserverProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ## Returns:
    ///
    /// ` qdnslookup_enums.Protocol `
    ///
    pub fn nameserverProtocol(self: QDnsLookup) u8 {
        return qtc.QDnsLookup_NameserverProtocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNameserverProtocol` instead
    ///
    pub const SetNameserverProtocol = setNameserverProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserverProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    pub fn setNameserverProtocol(self: QDnsLookup, protocol: u8) void {
        qtc.QDnsLookup_SetNameserverProtocol(@ptrCast(self.ptr), @bitCast(protocol));
    }

    /// ### DEPRECATED: Use `setNameserver2` instead
    ///
    pub const SetNameserver2 = setNameserver2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    pub fn setNameserver2(self: QDnsLookup, protocol: u8, _nameserver: anytype) void {
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        qtc.QDnsLookup_SetNameserver2(@ptrCast(self.ptr), @bitCast(protocol), @ptrCast(_nameserver.ptr));
    }

    /// ### DEPRECATED: Use `setNameserver3` instead
    ///
    pub const SetNameserver3 = setNameserver3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _port: u16 `
    ///
    pub fn setNameserver3(self: QDnsLookup, _nameserver: anytype, _port: u16) void {
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        qtc.QDnsLookup_SetNameserver3(@ptrCast(self.ptr), @ptrCast(_nameserver.ptr), @bitCast(_port));
    }

    /// ### DEPRECATED: Use `canonicalNameRecords` instead
    ///
    pub const CanonicalNameRecords = canonicalNameRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#canonicalNameRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn canonicalNameRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsDomainNameRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_CanonicalNameRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsDomainNameRecord, _arr.len) catch @panic("QDnsLookup.canonicalNameRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `hostAddressRecords` instead
    ///
    pub const HostAddressRecords = hostAddressRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#hostAddressRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hostAddressRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsHostAddressRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_HostAddressRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsHostAddressRecord, _arr.len) catch @panic("QDnsLookup.hostAddressRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsHostAddressRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `mailExchangeRecords` instead
    ///
    pub const MailExchangeRecords = mailExchangeRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#mailExchangeRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mailExchangeRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsMailExchangeRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_MailExchangeRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsMailExchangeRecord, _arr.len) catch @panic("QDnsLookup.mailExchangeRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsMailExchangeRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `nameServerRecords` instead
    ///
    pub const NameServerRecords = nameServerRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameServerRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nameServerRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsDomainNameRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_NameServerRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsDomainNameRecord, _arr.len) catch @panic("QDnsLookup.nameServerRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointerRecords` instead
    ///
    pub const PointerRecords = pointerRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#pointerRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pointerRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsDomainNameRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_PointerRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsDomainNameRecord, _arr.len) catch @panic("QDnsLookup.pointerRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsDomainNameRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceRecords` instead
    ///
    pub const ServiceRecords = serviceRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#serviceRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsServiceRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_ServiceRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsServiceRecord, _arr.len) catch @panic("QDnsLookup.serviceRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsServiceRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `textRecords` instead
    ///
    pub const TextRecords = textRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#textRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsTextRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_TextRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsTextRecord, _arr.len) catch @panic("QDnsLookup.textRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsTextRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `tlsAssociationRecords` instead
    ///
    pub const TlsAssociationRecords = tlsAssociationRecords;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#tlsAssociationRecords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tlsAssociationRecords(self: QDnsLookup, allocator: std.mem.Allocator) []QDnsTlsAssociationRecord {
        const _arr: qtc.libqt_list = qtc.QDnsLookup_TlsAssociationRecords(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDnsTlsAssociationRecord, _arr.len) catch @panic("QDnsLookup.tlsAssociationRecords: Memory allocation failed");
        const _data_val: [*]QtC.QDnsTlsAssociationRecord = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _sslConfiguration: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QDnsLookup, _sslConfiguration: anytype) void {
        comptime _ = @TypeOf(_sslConfiguration)._is_QSslConfiguration;
        qtc.QDnsLookup_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(_sslConfiguration.ptr));
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn sslConfiguration(self: QDnsLookup) QSslConfiguration {
        return .{ .ptr = qtc.QDnsLookup_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isProtocolSupported` instead
    ///
    pub const IsProtocolSupported = isProtocolSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#isProtocolSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    pub fn isProtocolSupported(protocol: u8) bool {
        return qtc.QDnsLookup_IsProtocolSupported(@bitCast(protocol));
    }

    /// ### DEPRECATED: Use `defaultPortForProtocol` instead
    ///
    pub const DefaultPortForProtocol = defaultPortForProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#defaultPortForProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    pub fn defaultPortForProtocol(protocol: u8) u16 {
        return qtc.QDnsLookup_DefaultPortForProtocol(@bitCast(protocol));
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn abort(self: QDnsLookup) void {
        qtc.QDnsLookup_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lookup` instead
    ///
    pub const Lookup = lookup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#lookup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn lookup(self: QDnsLookup) void {
        qtc.QDnsLookup_Lookup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn finished(self: QDnsLookup) void {
        qtc.QDnsLookup_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup) callconv(.c) void `
    ///
    pub fn onFinished(self: QDnsLookup, callback: *const fn (QDnsLookup) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nameChanged` instead
    ///
    pub const NameChanged = nameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn nameChanged(self: QDnsLookup, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDnsLookup_NameChanged(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onNameChanged` instead
    ///
    pub const OnNameChanged = onNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QDnsLookup, callback: *const fn (QDnsLookup, [*:0]const u8) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `typeChanged` instead
    ///
    pub const TypeChanged = typeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` typeVal: qdnslookup_enums.Type `
    ///
    pub fn typeChanged(self: QDnsLookup, typeVal: i32) void {
        qtc.QDnsLookup_TypeChanged(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onTypeChanged` instead
    ///
    pub const OnTypeChanged = onTypeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, typeVal: qdnslookup_enums.Type) callconv(.c) void `
    ///
    pub fn onTypeChanged(self: QDnsLookup, callback: *const fn (QDnsLookup, i32) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_TypeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nameserverChanged` instead
    ///
    pub const NameserverChanged = nameserverChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    pub fn nameserverChanged(self: QDnsLookup, _nameserver: anytype) void {
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        qtc.QDnsLookup_NameserverChanged(@ptrCast(self.ptr), @ptrCast(_nameserver.ptr));
    }

    /// ### DEPRECATED: Use `onNameserverChanged` instead
    ///
    pub const OnNameserverChanged = onNameserverChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, nameserver: QHostAddress) callconv(.c) void `
    ///
    pub fn onNameserverChanged(self: QDnsLookup, callback: *const fn (QDnsLookup, QHostAddress) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nameserverPortChanged` instead
    ///
    pub const NameserverPortChanged = nameserverPortChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPortChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _port: u16 `
    ///
    pub fn nameserverPortChanged(self: QDnsLookup, _port: u16) void {
        qtc.QDnsLookup_NameserverPortChanged(@ptrCast(self.ptr), @bitCast(_port));
    }

    /// ### DEPRECATED: Use `onNameserverPortChanged` instead
    ///
    pub const OnNameserverPortChanged = onNameserverPortChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPortChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, port: u16) callconv(.c) void `
    ///
    pub fn onNameserverPortChanged(self: QDnsLookup, callback: *const fn (QDnsLookup, u16) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverPortChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nameserverProtocolChanged` instead
    ///
    pub const NameserverProtocolChanged = nameserverProtocolChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocolChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    pub fn nameserverProtocolChanged(self: QDnsLookup, protocol: u8) void {
        qtc.QDnsLookup_NameserverProtocolChanged(@ptrCast(self.ptr), @bitCast(protocol));
    }

    /// ### DEPRECATED: Use `onNameserverProtocolChanged` instead
    ///
    pub const OnNameserverProtocolChanged = onNameserverProtocolChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocolChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, protocol: qdnslookup_enums.Protocol) callconv(.c) void `
    ///
    pub fn onNameserverProtocolChanged(self: QDnsLookup, callback: *const fn (QDnsLookup, u8) callconv(.c) void) void {
        qtc.QDnsLookup_Connect_NameserverProtocolChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsLookup.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsLookup.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNameserver32` instead
    ///
    pub const SetNameserver32 = setNameserver32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` protocol: qdnslookup_enums.Protocol `
    ///
    /// ` _nameserver: QHostAddress `
    ///
    /// ` _port: u16 `
    ///
    pub fn setNameserver32(self: QDnsLookup, protocol: u8, _nameserver: anytype, _port: u16) void {
        comptime _ = @TypeOf(_nameserver)._is_QHostAddress;
        qtc.QDnsLookup_SetNameserver32(@ptrCast(self.ptr), @bitCast(protocol), @ptrCast(_nameserver.ptr), @bitCast(_port));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDnsLookup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDnsLookup.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QDnsLookup, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn isWidgetType(self: QDnsLookup) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn isWindowType(self: QDnsLookup) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn isQuickItemType(self: QDnsLookup) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn signalsBlocked(self: QDnsLookup) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDnsLookup, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn thread(self: QDnsLookup) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDnsLookup, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDnsLookup, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDnsLookup, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDnsLookup, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDnsLookup, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDnsLookup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDnsLookup.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDnsLookup, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDnsLookup, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDnsLookup, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDnsLookup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn disconnect3(self: QDnsLookup) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDnsLookup, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn dumpObjectTree(self: QDnsLookup) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn dumpObjectInfo(self: QDnsLookup) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QDnsLookup, _name: [:0]const u8, _value: anytype) bool {
        const name_Cstring = _name.ptr;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QDnsLookup, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDnsLookup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDnsLookup.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDnsLookup.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn bindingStorage(self: QDnsLookup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn bindingStorage2(self: QDnsLookup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn destroyed(self: QDnsLookup) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDnsLookup, callback: *const fn (QDnsLookup) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn parent(self: QDnsLookup) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDnsLookup, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn deleteLater(self: QDnsLookup) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDnsLookup, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDnsLookup, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDnsLookup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDnsLookup, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDnsLookup, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDnsLookup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDnsLookup, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDnsLookup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDnsLookup, callback: *const fn (QDnsLookup, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDnsLookup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDnsLookup_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDnsLookup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDnsLookup_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDnsLookup, callback: *const fn (QDnsLookup, QEvent) callconv(.c) bool) void {
        qtc.QDnsLookup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDnsLookup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDnsLookup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDnsLookup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDnsLookup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDnsLookup, callback: *const fn (QDnsLookup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDnsLookup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDnsLookup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDnsLookup_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDnsLookup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDnsLookup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDnsLookup, callback: *const fn (QDnsLookup, QTimerEvent) callconv(.c) void) void {
        qtc.QDnsLookup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDnsLookup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDnsLookup_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDnsLookup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDnsLookup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDnsLookup, callback: *const fn (QDnsLookup, QChildEvent) callconv(.c) void) void {
        qtc.QDnsLookup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDnsLookup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDnsLookup_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDnsLookup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDnsLookup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDnsLookup, callback: *const fn (QDnsLookup, QEvent) callconv(.c) void) void {
        qtc.QDnsLookup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDnsLookup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDnsLookup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDnsLookup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDnsLookup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDnsLookup, callback: *const fn (QDnsLookup, QMetaMethod) callconv(.c) void) void {
        qtc.QDnsLookup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDnsLookup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDnsLookup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDnsLookup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDnsLookup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDnsLookup, callback: *const fn (QDnsLookup, QMetaMethod) callconv(.c) void) void {
        qtc.QDnsLookup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn sender(self: QDnsLookup) QObject {
        return .{ .ptr = qtc.QDnsLookup_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn superSender(self: QDnsLookup) QObject {
        return .{ .ptr = qtc.QDnsLookup_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDnsLookup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDnsLookup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn senderSignalIndex(self: QDnsLookup) i32 {
        return qtc.QDnsLookup_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn superSenderSignalIndex(self: QDnsLookup) i32 {
        return qtc.QDnsLookup_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDnsLookup, callback: *const fn () callconv(.c) i32) void {
        qtc.QDnsLookup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDnsLookup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDnsLookup_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDnsLookup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDnsLookup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDnsLookup, callback: *const fn (QDnsLookup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDnsLookup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDnsLookup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDnsLookup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDnsLookup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDnsLookup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup`
    ///
    /// ` callback: *const fn (self: QDnsLookup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDnsLookup, callback: *const fn (QDnsLookup, QMetaMethod) callconv(.c) bool) void {
        qtc.QDnsLookup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDnsLookup `
    ///
    /// ` callback: *const fn (self: QDnsLookup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDnsLookup, callback: *const fn (QDnsLookup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#dtor.QDnsLookup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDnsLookup `
    ///
    pub fn delete(self: QDnsLookup) void {
        qtc.QDnsLookup_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)
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
