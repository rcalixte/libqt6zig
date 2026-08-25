const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const QSslCertificateExtension = @import("libqt6").QSslCertificateExtension;
const QSslError = @import("libqt6").QSslError;
const QSslKey = @import("libqt6").QSslKey;
const qcryptographichash_enums = @import("../libqcryptographichash.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const qsslcertificate_enums = enums;
const std = @import("std");
const ArrayMap_i32_constconstu8 = std.array_hash_map.Auto(i32, []const []const u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)
pub const QSslCertificate = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslCertificate,

    pub const _is_QSslCertificate = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslCertificate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn new(device: anytype) QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslCertificate_new(@ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslCertificate object in C++ memory
    ///
    pub fn new2() QSslCertificate {
        return .{ .ptr = qtc.QSslCertificate_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSslCertificate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn new3(other: anytype) QSslCertificate {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        return .{ .ptr = qtc.QSslCertificate_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSslCertificate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn new4(device: anytype, format: i32) QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslCertificate_new4(@ptrCast(device.ptr), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSslCertificate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn new5(data: []u8) QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QSslCertificate_new5(data_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSslCertificate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn new6(data: []u8, format: i32) QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QSslCertificate_new6(data_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn operatorAssign(self: QSslCertificate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        qtc.QSslCertificate_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn swap(self: QSslCertificate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        qtc.QSslCertificate_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn operatorEqual(self: QSslCertificate, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        return qtc.QSslCertificate_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn operatorNotEqual(self: QSslCertificate, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        return qtc.QSslCertificate_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn isNull(self: QSslCertificate) bool {
        return qtc.QSslCertificate_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlacklisted` instead
    ///
    pub const IsBlacklisted = isBlacklisted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isBlacklisted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn isBlacklisted(self: QSslCertificate) bool {
        return qtc.QSslCertificate_IsBlacklisted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSelfSigned` instead
    ///
    pub const IsSelfSigned = isSelfSigned;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isSelfSigned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn isSelfSigned(self: QSslCertificate) bool {
        return qtc.QSslCertificate_IsSelfSigned(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn clear(self: QSslCertificate) void {
        qtc.QSslCertificate_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslCertificate.version: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `serialNumber` instead
    ///
    pub const SerialNumber = serialNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#serialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serialNumber(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_SerialNumber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslCertificate.serialNumber: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `digest` instead
    ///
    pub const Digest = digest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn digest(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslCertificate.digest: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `issuerInfo` instead
    ///
    pub const IssuerInfo = issuerInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` info: qsslcertificate_enums.SubjectInfo `
    ///
    pub fn issuerInfo(self: QSslCertificate, allocator: std.mem.Allocator, info: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfo(@ptrCast(self.ptr), @bitCast(info));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSslCertificate.issuerInfo: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslCertificate.issuerInfo: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `issuerInfo2` instead
    ///
    pub const IssuerInfo2 = issuerInfo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` attribute: []u8 `
    ///
    pub fn issuerInfo2(self: QSslCertificate, allocator: std.mem.Allocator, attribute: []u8) []const []const u8 {
        const attribute_str = qtc.libqt_string{
            .len = attribute.len,
            .data = attribute.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfo2(@ptrCast(self.ptr), attribute_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSslCertificate.issuerInfo2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslCertificate.issuerInfo2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `subjectInfo` instead
    ///
    pub const SubjectInfo = subjectInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` info: qsslcertificate_enums.SubjectInfo `
    ///
    pub fn subjectInfo(self: QSslCertificate, allocator: std.mem.Allocator, info: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfo(@ptrCast(self.ptr), @bitCast(info));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSslCertificate.subjectInfo: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslCertificate.subjectInfo: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `subjectInfo2` instead
    ///
    pub const SubjectInfo2 = subjectInfo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` attribute: []u8 `
    ///
    pub fn subjectInfo2(self: QSslCertificate, allocator: std.mem.Allocator, attribute: []u8) []const []const u8 {
        const attribute_str = qtc.libqt_string{
            .len = attribute.len,
            .data = attribute.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfo2(@ptrCast(self.ptr), attribute_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSslCertificate.subjectInfo2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslCertificate.subjectInfo2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `issuerDisplayName` instead
    ///
    pub const IssuerDisplayName = issuerDisplayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn issuerDisplayName(self: QSslCertificate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificate_IssuerDisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCertificate.issuerDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subjectDisplayName` instead
    ///
    pub const SubjectDisplayName = subjectDisplayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subjectDisplayName(self: QSslCertificate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificate_SubjectDisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCertificate.subjectDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subjectInfoAttributes` instead
    ///
    pub const SubjectInfoAttributes = subjectInfoAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfoAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subjectInfoAttributes(self: QSslCertificate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfoAttributes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSslCertificate.subjectInfoAttributes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslCertificate.subjectInfoAttributes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `issuerInfoAttributes` instead
    ///
    pub const IssuerInfoAttributes = issuerInfoAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfoAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn issuerInfoAttributes(self: QSslCertificate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfoAttributes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSslCertificate.issuerInfoAttributes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslCertificate.issuerInfoAttributes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `subjectAlternativeNames` instead
    ///
    pub const SubjectAlternativeNames = subjectAlternativeNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectAlternativeNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_constconstu8 (key: qssl_enums.AlternativeNameEntryType) `
    ///
    pub fn subjectAlternativeNames(self: QSslCertificate, allocator: std.mem.Allocator) ArrayMap_i32_constconstu8 {
        const _map: qtc.libqt_map = qtc.QSslCertificate_SubjectAlternativeNames(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constconstu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSslCertificate.subjectAlternativeNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j|
                    qtc.libqt_free(_value_strings[j].data);
                qtc.libqt_free(_value_list.data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value.data));
            const _value_slice = allocator.alloc([]const u8, _value.len) catch @panic("QSslCertificate.subjectAlternativeNames: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("QSslCertificate.subjectAlternativeNames: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `effectiveDate` instead
    ///
    pub const EffectiveDate = effectiveDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#effectiveDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn effectiveDate(self: QSslCertificate) QDateTime {
        return .{ .ptr = qtc.QSslCertificate_EffectiveDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `expiryDate` instead
    ///
    pub const ExpiryDate = expiryDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#expiryDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn expiryDate(self: QSslCertificate) QDateTime {
        return .{ .ptr = qtc.QSslCertificate_ExpiryDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `publicKey` instead
    ///
    pub const PublicKey = publicKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#publicKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn publicKey(self: QSslCertificate) QSslKey {
        return .{ .ptr = qtc.QSslCertificate_PublicKey(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `extensions` instead
    ///
    pub const Extensions = extensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#extensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extensions(self: QSslCertificate, allocator: std.mem.Allocator) []QSslCertificateExtension {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Extensions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificateExtension, _arr.len) catch @panic("QSslCertificate.extensions: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificateExtension = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toPem` instead
    ///
    pub const ToPem = toPem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toPem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPem(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToPem(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslCertificate.toPem: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDer` instead
    ///
    pub const ToDer = toDer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toDer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toDer(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToDer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslCertificate.toDer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toText(self: QSslCertificate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificate_ToText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCertificate.toText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromPath` instead
    ///
    pub const FromPath = fromPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn fromPath(allocator: std.mem.Allocator, path: []const u8) []QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath(path_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromPath: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromDevice` instead
    ///
    pub const FromDevice = fromDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` device: QIODevice `
    ///
    pub fn fromDevice(allocator: std.mem.Allocator, device: anytype) []QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromDevice(@ptrCast(device.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromDevice: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromData` instead
    ///
    pub const FromData = fromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: []u8 `
    ///
    pub fn fromData(allocator: std.mem.Allocator, data: []u8) []QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromData(data_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromData: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `verify` instead
    ///
    pub const Verify = verify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` certificateChain: []QSslCertificate `
    ///
    pub fn verify(allocator: std.mem.Allocator, certificateChain: []QSslCertificate) []QSslError {
        const certificateChain_list = qtc.libqt_list{
            .len = certificateChain.len,
            .data = @ptrCast(certificateChain.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Verify(certificateChain_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("QSslCertificate.verify: Memory allocation failed");
        const _data_val: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `importPkcs12` instead
    ///
    pub const ImportPkcs12 = importPkcs12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` key: QSslKey `
    ///
    /// ` cert: QSslCertificate `
    ///
    pub fn importPkcs12(device: anytype, key: anytype, cert: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(key)._is_QSslKey;
        comptime _ = @TypeOf(cert)._is_QSslCertificate;
        return qtc.QSslCertificate_ImportPkcs12(@ptrCast(device.ptr), @ptrCast(key.ptr), @ptrCast(cert.ptr));
    }

    /// ### DEPRECATED: Use `handle` instead
    ///
    pub const Handle = handle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn handle(self: QSslCertificate) ?*anyopaque {
        return qtc.QSslCertificate_Handle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `digest1` instead
    ///
    pub const Digest1 = digest1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` algorithm: qcryptographichash_enums.Algorithm `
    ///
    pub fn digest1(self: QSslCertificate, allocator: std.mem.Allocator, algorithm: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest1(@ptrCast(self.ptr), @bitCast(algorithm));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslCertificate.digest1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromPath2` instead
    ///
    pub const FromPath2 = fromPath2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn fromPath2(allocator: std.mem.Allocator, path: []const u8, format: i32) []QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath2(path_str, @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromPath2: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromPath3` instead
    ///
    pub const FromPath3 = fromPath3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` syntax: qsslcertificate_enums.PatternSyntax `
    ///
    pub fn fromPath3(allocator: std.mem.Allocator, path: []const u8, format: i32, syntax: i32) []QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath3(path_str, @bitCast(format), @bitCast(syntax));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromPath3: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromDevice2` instead
    ///
    pub const FromDevice2 = fromDevice2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn fromDevice2(allocator: std.mem.Allocator, device: anytype, format: i32) []QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromDevice2(@ptrCast(device.ptr), @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromDevice2: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `fromData2` instead
    ///
    pub const FromData2 = fromData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn fromData2(allocator: std.mem.Allocator, data: []u8, format: i32) []QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromData2(data_str, @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslCertificate.fromData2: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `verify2` instead
    ///
    pub const Verify2 = verify2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` certificateChain: []QSslCertificate `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn verify2(allocator: std.mem.Allocator, certificateChain: []QSslCertificate, hostName: []const u8) []QSslError {
        const certificateChain_list = qtc.libqt_list{
            .len = certificateChain.len,
            .data = @ptrCast(certificateChain.ptr),
        };
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Verify2(certificateChain_list, hostName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("QSslCertificate.verify2: Memory allocation failed");
        const _data_val: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `importPkcs124` instead
    ///
    pub const ImportPkcs124 = importPkcs124;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` key: QSslKey `
    ///
    /// ` cert: QSslCertificate `
    ///
    /// ` caCertificates: []QSslCertificate `
    ///
    pub fn importPkcs124(device: anytype, key: anytype, cert: anytype, caCertificates: []QSslCertificate) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(key)._is_QSslKey;
        comptime _ = @TypeOf(cert)._is_QSslCertificate;
        const caCertificates_list = qtc.libqt_list{
            .len = caCertificates.len,
            .data = @ptrCast(caCertificates.ptr),
        };
        return qtc.QSslCertificate_ImportPkcs124(@ptrCast(device.ptr), @ptrCast(key.ptr), @ptrCast(cert.ptr), caCertificates_list);
    }

    /// ### DEPRECATED: Use `importPkcs125` instead
    ///
    pub const ImportPkcs125 = importPkcs125;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` key: QSslKey `
    ///
    /// ` cert: QSslCertificate `
    ///
    /// ` caCertificates: []QSslCertificate `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn importPkcs125(device: anytype, key: anytype, cert: anytype, caCertificates: []QSslCertificate, passPhrase: []u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(key)._is_QSslKey;
        comptime _ = @TypeOf(cert)._is_QSslCertificate;
        const caCertificates_list = qtc.libqt_list{
            .len = caCertificates.len,
            .data = @ptrCast(caCertificates.ptr),
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        return qtc.QSslCertificate_ImportPkcs125(@ptrCast(device.ptr), @ptrCast(key.ptr), @ptrCast(cert.ptr), caCertificates_list, passPhrase_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#dtor.QSslCertificate)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn delete(self: QSslCertificate) void {
        qtc.QSslCertificate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#public-types)
pub const enums = struct {
    pub const SubjectInfo = enum {
        pub const Organization: i32 = 0;
        pub const CommonName: i32 = 1;
        pub const LocalityName: i32 = 2;
        pub const OrganizationalUnitName: i32 = 3;
        pub const CountryName: i32 = 4;
        pub const StateOrProvinceName: i32 = 5;
        pub const DistinguishedNameQualifier: i32 = 6;
        pub const SerialNumber: i32 = 7;
        pub const EmailAddress: i32 = 8;
    };

    pub const PatternSyntax = enum {
        pub const RegularExpression: i32 = 0;
        pub const Wildcard: i32 = 1;
        pub const FixedString: i32 = 2;
    };
};
