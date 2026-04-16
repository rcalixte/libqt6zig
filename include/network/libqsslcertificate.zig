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

    /// New constructs a new QSslCertificate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New(device: anytype) QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslCertificate_new(@ptrCast(device.ptr)) };
    }

    /// New2 constructs a new QSslCertificate object.
    ///
    pub fn New2() QSslCertificate {
        return .{ .ptr = qtc.QSslCertificate_new2() };
    }

    /// New3 constructs a new QSslCertificate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn New3(other: anytype) QSslCertificate {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        return .{ .ptr = qtc.QSslCertificate_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QSslCertificate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn New4(device: anytype, format: i32) QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslCertificate_new4(@ptrCast(device.ptr), @bitCast(format)) };
    }

    /// New5 constructs a new QSslCertificate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn New5(data: []u8) QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QSslCertificate_new5(data_str) };
    }

    /// New6 constructs a new QSslCertificate object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn New6(data: []u8, format: i32) QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QSslCertificate_new6(data_str, @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn OperatorAssign(self: QSslCertificate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        qtc.QSslCertificate_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn Swap(self: QSslCertificate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        qtc.QSslCertificate_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn OperatorEqual(self: QSslCertificate, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        return qtc.QSslCertificate_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` other: QSslCertificate `
    ///
    pub fn OperatorNotEqual(self: QSslCertificate, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslCertificate;
        return qtc.QSslCertificate_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn IsNull(self: QSslCertificate) bool {
        return qtc.QSslCertificate_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isBlacklisted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn IsBlacklisted(self: QSslCertificate) bool {
        return qtc.QSslCertificate_IsBlacklisted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isSelfSigned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn IsSelfSigned(self: QSslCertificate) bool {
        return qtc.QSslCertificate_IsSelfSigned(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn Clear(self: QSslCertificate) void {
        qtc.QSslCertificate_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Version: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#serialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SerialNumber(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_SerialNumber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.SerialNumber: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Digest(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Digest: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn IssuerInfo(self: QSslCertificate, allocator: std.mem.Allocator, info: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfo(@ptrCast(self.ptr), @bitCast(info));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsslcertificate.IssuerInfo: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslcertificate.IssuerInfo: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn IssuerInfo2(self: QSslCertificate, allocator: std.mem.Allocator, attribute: []u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsslcertificate.IssuerInfo2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslcertificate.IssuerInfo2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn SubjectInfo(self: QSslCertificate, allocator: std.mem.Allocator, info: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfo(@ptrCast(self.ptr), @bitCast(info));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsslcertificate.SubjectInfo: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslcertificate.SubjectInfo: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn SubjectInfo2(self: QSslCertificate, allocator: std.mem.Allocator, attribute: []u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsslcertificate.SubjectInfo2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslcertificate.SubjectInfo2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IssuerDisplayName(self: QSslCertificate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificate_IssuerDisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.IssuerDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubjectDisplayName(self: QSslCertificate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificate_SubjectDisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.SubjectDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfoAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubjectInfoAttributes(self: QSslCertificate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfoAttributes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsslcertificate.SubjectInfoAttributes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslcertificate.SubjectInfoAttributes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfoAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IssuerInfoAttributes(self: QSslCertificate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfoAttributes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsslcertificate.IssuerInfoAttributes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslcertificate.IssuerInfoAttributes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn SubjectAlternativeNames(self: QSslCertificate, allocator: std.mem.Allocator) ArrayMap_i32_constconstu8 {
        const _map: qtc.libqt_map = qtc.QSslCertificate_SubjectAlternativeNames(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_constconstu8 = .empty;
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
            const _value_slice = allocator.alloc([]const u8, _value.len) catch @panic("qsslcertificate.SubjectAlternativeNames: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("qsslcertificate.SubjectAlternativeNames: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.put(allocator, _key, _value_slice) catch @panic("qsslcertificate.SubjectAlternativeNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#effectiveDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn EffectiveDate(self: QSslCertificate) QDateTime {
        return .{ .ptr = qtc.QSslCertificate_EffectiveDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#expiryDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn ExpiryDate(self: QSslCertificate) QDateTime {
        return .{ .ptr = qtc.QSslCertificate_ExpiryDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#publicKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn PublicKey(self: QSslCertificate) QSslKey {
        return .{ .ptr = qtc.QSslCertificate_PublicKey(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#extensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Extensions(self: QSslCertificate, allocator: std.mem.Allocator) []QSslCertificateExtension {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Extensions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificateExtension, _arr.len) catch @panic("qsslcertificate.Extensions: Memory allocation failed");
        const _data: [*]QtC.QSslCertificateExtension = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toPem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPem(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToPem(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.ToPem: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toDer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDer(self: QSslCertificate, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToDer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.ToDer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToText(self: QSslCertificate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificate_ToText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.ToText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn FromPath(allocator: std.mem.Allocator, path: []const u8) []QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath(path_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromPath: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` device: QIODevice `
    ///
    pub fn FromDevice(allocator: std.mem.Allocator, device: anytype) []QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromDevice(@ptrCast(device.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromDevice: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: []u8 `
    ///
    pub fn FromData(allocator: std.mem.Allocator, data: []u8) []QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromData(data_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromData: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` certificateChain: []QSslCertificate `
    ///
    pub fn Verify(allocator: std.mem.Allocator, certificateChain: []QSslCertificate) []QSslError {
        const certificateChain_list = qtc.libqt_list{
            .len = certificateChain.len,
            .data = @ptrCast(certificateChain.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Verify(certificateChain_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("qsslcertificate.Verify: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn ImportPkcs12(device: anytype, key: anytype, cert: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(key)._is_QSslKey;
        comptime _ = @TypeOf(cert)._is_QSslCertificate;
        return qtc.QSslCertificate_ImportPkcs12(@ptrCast(device.ptr), @ptrCast(key.ptr), @ptrCast(cert.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn Handle(self: QSslCertificate) ?*anyopaque {
        return qtc.QSslCertificate_Handle(@ptrCast(self.ptr));
    }

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
    pub fn Digest1(self: QSslCertificate, allocator: std.mem.Allocator, algorithm: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest1(@ptrCast(self.ptr), @bitCast(algorithm));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Digest1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn FromPath2(allocator: std.mem.Allocator, path: []const u8, format: i32) []QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath2(path_str, @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromPath2: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn FromPath3(allocator: std.mem.Allocator, path: []const u8, format: i32, syntax: i32) []QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath3(path_str, @bitCast(format), @bitCast(syntax));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromPath3: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn FromDevice2(allocator: std.mem.Allocator, device: anytype, format: i32) []QSslCertificate {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromDevice2(@ptrCast(device.ptr), @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromDevice2: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn FromData2(allocator: std.mem.Allocator, data: []u8, format: i32) []QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromData2(data_str, @bitCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromData2: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn Verify2(allocator: std.mem.Allocator, certificateChain: []QSslCertificate, hostName: []const u8) []QSslError {
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
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("qsslcertificate.Verify2: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn ImportPkcs124(device: anytype, key: anytype, cert: anytype, caCertificates: []QSslCertificate) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(key)._is_QSslKey;
        comptime _ = @TypeOf(cert)._is_QSslCertificate;
        const caCertificates_list = qtc.libqt_list{
            .len = caCertificates.len,
            .data = @ptrCast(caCertificates.ptr),
        };
        return qtc.QSslCertificate_ImportPkcs124(@ptrCast(device.ptr), @ptrCast(key.ptr), @ptrCast(cert.ptr), caCertificates_list);
    }

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
    pub fn ImportPkcs125(device: anytype, key: anytype, cert: anytype, caCertificates: []QSslCertificate, passPhrase: []u8) bool {
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#dtor.QSslCertificate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslCertificate `
    ///
    pub fn Delete(self: QSslCertificate) void {
        qtc.QSslCertificate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#public-types)
pub const enums = struct {
    pub const SubjectInfo = enum(i32) {
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

    pub const PatternSyntax = enum(i32) {
        pub const RegularExpression: i32 = 0;
        pub const Wildcard: i32 = 1;
        pub const FixedString: i32 = 2;
    };
};
