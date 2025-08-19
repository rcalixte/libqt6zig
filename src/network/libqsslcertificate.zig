const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcryptographichash_enums = @import("../libqcryptographichash.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const qsslcertificate_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslcertificate.html
pub const qsslcertificate = struct {
    /// New constructs a new QSslCertificate object.
    ///
    /// ``` device: QtC.QIODevice ```
    pub fn New(device: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslCertificate_new(@ptrCast(device));
    }

    /// New2 constructs a new QSslCertificate object.
    ///
    ///
    pub fn New2() QtC.QSslCertificate {
        return qtc.QSslCertificate_new2();
    }

    /// New3 constructs a new QSslCertificate object.
    ///
    /// ``` other: QtC.QSslCertificate ```
    pub fn New3(other: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslCertificate_new3(@ptrCast(other));
    }

    /// New4 constructs a new QSslCertificate object.
    ///
    /// ``` device: QtC.QIODevice, format: qssl_enums.EncodingFormat ```
    pub fn New4(device: ?*anyopaque, format: i32) QtC.QSslCertificate {
        return qtc.QSslCertificate_new4(@ptrCast(device), @intCast(format));
    }

    /// New5 constructs a new QSslCertificate object.
    ///
    /// ``` data: []u8 ```
    pub fn New5(data: []u8) QtC.QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QSslCertificate_new5(data_str);
    }

    /// New6 constructs a new QSslCertificate object.
    ///
    /// ``` data: []u8, format: qssl_enums.EncodingFormat ```
    pub fn New6(data: []u8, format: i32) QtC.QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QSslCertificate_new6(data_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq)
    ///
    /// ``` self: QtC.QSslCertificate, other: QtC.QSslCertificate ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificate_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#swap)
    ///
    /// ``` self: QtC.QSslCertificate, other: QtC.QSslCertificate ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificate_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QSslCertificate, other: QtC.QSslCertificate ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCertificate_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator-not-eq)
    ///
    /// ``` self: QtC.QSslCertificate, other: QtC.QSslCertificate ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslCertificate_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isNull)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSslCertificate_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isBlacklisted)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn IsBlacklisted(self: ?*anyopaque) bool {
        return qtc.QSslCertificate_IsBlacklisted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isSelfSigned)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn IsSelfSigned(self: ?*anyopaque) bool {
        return qtc.QSslCertificate_IsSelfSigned(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#clear)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSslCertificate_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#version)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Version: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#serialNumber)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn SerialNumber(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_SerialNumber(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.SerialNumber: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn Digest(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Digest: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
    ///
    /// ``` self: QtC.QSslCertificate, info: qsslcertificate_enums.SubjectInfo, allocator: std.mem.Allocator ```
    pub fn IssuerInfo(self: ?*anyopaque, info: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfo(@ptrCast(self), @intCast(info));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
    ///
    /// ``` self: QtC.QSslCertificate, attribute: []u8, allocator: std.mem.Allocator ```
    pub fn IssuerInfo2(self: ?*anyopaque, attribute: []u8, allocator: std.mem.Allocator) [][]const u8 {
        const attribute_str = qtc.libqt_string{
            .len = attribute.len,
            .data = attribute.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfo2(@ptrCast(self), attribute_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
    ///
    /// ``` self: QtC.QSslCertificate, info: qsslcertificate_enums.SubjectInfo, allocator: std.mem.Allocator ```
    pub fn SubjectInfo(self: ?*anyopaque, info: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfo(@ptrCast(self), @intCast(info));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
    ///
    /// ``` self: QtC.QSslCertificate, attribute: []u8, allocator: std.mem.Allocator ```
    pub fn SubjectInfo2(self: ?*anyopaque, attribute: []u8, allocator: std.mem.Allocator) [][]const u8 {
        const attribute_str = qtc.libqt_string{
            .len = attribute.len,
            .data = attribute.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfo2(@ptrCast(self), attribute_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerDisplayName)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn IssuerDisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificate_IssuerDisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.IssuerDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectDisplayName)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn SubjectDisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificate_SubjectDisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.SubjectDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfoAttributes)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn SubjectInfoAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_SubjectInfoAttributes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfoAttributes)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn IssuerInfoAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_IssuerInfoAttributes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#effectiveDate)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn EffectiveDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QSslCertificate_EffectiveDate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#expiryDate)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn ExpiryDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QSslCertificate_ExpiryDate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#publicKey)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn PublicKey(self: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslCertificate_PublicKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#extensions)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn Extensions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificateExtension {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Extensions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificateExtension, _arr.len) catch @panic("qsslcertificate.Extensions: Memory allocation failed");
        const _data: [*]QtC.QSslCertificateExtension = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toPem)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn ToPem(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToPem(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.ToPem: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toDer)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn ToDer(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_ToDer(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.ToDer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toText)
    ///
    /// ``` self: QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn ToText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificate_ToText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificate.ToText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ``` path: []const u8, allocator: std.mem.Allocator ```
    pub fn FromPath(path: []const u8, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath(path_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromPath: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
    ///
    /// ``` device: QtC.QIODevice, allocator: std.mem.Allocator ```
    pub fn FromDevice(device: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromDevice(@ptrCast(device));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromDevice: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
    ///
    /// ``` data: []u8, allocator: std.mem.Allocator ```
    pub fn FromData(data: []u8, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromData(data_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromData: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
    ///
    /// ``` certificateChain: []QtC.QSslCertificate, allocator: std.mem.Allocator ```
    pub fn Verify(certificateChain: []QtC.QSslCertificate, allocator: std.mem.Allocator) []QtC.QSslError {
        const certificateChain_list = qtc.libqt_list{
            .len = certificateChain.len,
            .data = @ptrCast(certificateChain.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_Verify(certificateChain_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslError, _arr.len) catch @panic("qsslcertificate.Verify: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
    ///
    /// ``` device: QtC.QIODevice, key: QtC.QSslKey, cert: QtC.QSslCertificate ```
    pub fn ImportPkcs12(device: ?*anyopaque, key: ?*anyopaque, cert: ?*anyopaque) bool {
        return qtc.QSslCertificate_ImportPkcs12(@ptrCast(device), @ptrCast(key), @ptrCast(cert));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#handle)
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn Handle(self: ?*anyopaque) ?*anyopaque {
        return qtc.QSslCertificate_Handle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
    ///
    /// ``` self: QtC.QSslCertificate, algorithm: qcryptographichash_enums.Algorithm, allocator: std.mem.Allocator ```
    pub fn Digest1(self: ?*anyopaque, algorithm: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSslCertificate_Digest1(@ptrCast(self), @intCast(algorithm));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslcertificate.Digest1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ``` path: []const u8, format: qssl_enums.EncodingFormat, allocator: std.mem.Allocator ```
    pub fn FromPath2(path: []const u8, format: i32, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath2(path_str, @intCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromPath2: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
    ///
    /// ``` path: []const u8, format: qssl_enums.EncodingFormat, syntax: qsslcertificate_enums.PatternSyntax, allocator: std.mem.Allocator ```
    pub fn FromPath3(path: []const u8, format: i32, syntax: i32, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromPath3(path_str, @intCast(format), @intCast(syntax));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromPath3: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
    ///
    /// ``` device: QtC.QIODevice, format: qssl_enums.EncodingFormat, allocator: std.mem.Allocator ```
    pub fn FromDevice2(device: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromDevice2(@ptrCast(device), @intCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromDevice2: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
    ///
    /// ``` data: []u8, format: qssl_enums.EncodingFormat, allocator: std.mem.Allocator ```
    pub fn FromData2(data: []u8, format: i32, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslCertificate_FromData2(data_str, @intCast(format));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslcertificate.FromData2: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
    ///
    /// ``` certificateChain: []QtC.QSslCertificate, hostName: []const u8, allocator: std.mem.Allocator ```
    pub fn Verify2(certificateChain: []QtC.QSslCertificate, hostName: []const u8, allocator: std.mem.Allocator) []QtC.QSslError {
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
        const _ret = allocator.alloc(QtC.QSslError, _arr.len) catch @panic("qsslcertificate.Verify2: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
    ///
    /// ``` device: QtC.QIODevice, key: QtC.QSslKey, cert: QtC.QSslCertificate, caCertificates: []QtC.QSslCertificate ```
    pub fn ImportPkcs124(device: ?*anyopaque, key: ?*anyopaque, cert: ?*anyopaque, caCertificates: []QtC.QSslCertificate) bool {
        const caCertificates_list = qtc.libqt_list{
            .len = caCertificates.len,
            .data = @ptrCast(caCertificates.ptr),
        };
        return qtc.QSslCertificate_ImportPkcs124(@ptrCast(device), @ptrCast(key), @ptrCast(cert), caCertificates_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
    ///
    /// ``` device: QtC.QIODevice, key: QtC.QSslKey, cert: QtC.QSslCertificate, caCertificates: []QtC.QSslCertificate, passPhrase: []u8 ```
    pub fn ImportPkcs125(device: ?*anyopaque, key: ?*anyopaque, cert: ?*anyopaque, caCertificates: []QtC.QSslCertificate, passPhrase: []u8) bool {
        const caCertificates_list = qtc.libqt_list{
            .len = caCertificates.len,
            .data = @ptrCast(caCertificates.ptr),
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        return qtc.QSslCertificate_ImportPkcs125(@ptrCast(device), @ptrCast(key), @ptrCast(cert), caCertificates_list, passPhrase_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#dtor.QSslCertificate)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslCertificate ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslCertificate_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsslcertificate.html#types
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
