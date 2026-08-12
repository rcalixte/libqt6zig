const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSslCertificate = @import("libqt6").QSslCertificate;
const QSslCipher = @import("libqt6").QSslCipher;
const QSslDiffieHellmanParameters = @import("libqt6").QSslDiffieHellmanParameters;
const QSslEllipticCurve = @import("libqt6").QSslEllipticCurve;
const QSslKey = @import("libqt6").QSslKey;
const QVariant = @import("libqt6").QVariant;
const qssl_enums = @import("libqssl.zig").enums;
const qsslcertificate_enums = @import("libqsslcertificate.zig").enums;
const qsslconfiguration_enums = enums;
const qsslsocket_enums = @import("libqsslsocket.zig").enums;
const std = @import("std");
const ArrayMap_u8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html)
pub const QSslConfiguration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslConfiguration,

    pub const _is_QSslConfiguration = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslConfiguration object in C++ memory
    ///
    pub fn new() QSslConfiguration {
        return .{ .ptr = qtc.QSslConfiguration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslConfiguration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn new2(other: anytype) QSslConfiguration {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        return .{ .ptr = qtc.QSslConfiguration_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn operatorAssign(self: QSslConfiguration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        qtc.QSslConfiguration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn swap(self: QSslConfiguration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        qtc.QSslConfiguration_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn operatorEqual(self: QSslConfiguration, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        return qtc.QSslConfiguration_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn operatorNotEqual(self: QSslConfiguration, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        return qtc.QSslConfiguration_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn isNull(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `protocol` instead
    ///
    pub const Protocol = protocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#protocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn protocol(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_Protocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProtocol` instead
    ///
    pub const SetProtocol = setProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` _protocol: qssl_enums.SslProtocol `
    ///
    pub fn setProtocol(self: QSslConfiguration, _protocol: i32) void {
        qtc.QSslConfiguration_SetProtocol(@ptrCast(self.ptr), @bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `peerVerifyMode` instead
    ///
    pub const PeerVerifyMode = peerVerifyMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ## Returns:
    ///
    /// ` qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn peerVerifyMode(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_PeerVerifyMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPeerVerifyMode` instead
    ///
    pub const SetPeerVerifyMode = setPeerVerifyMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` mode: qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn setPeerVerifyMode(self: QSslConfiguration, mode: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `peerVerifyDepth` instead
    ///
    pub const PeerVerifyDepth = peerVerifyDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn peerVerifyDepth(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_PeerVerifyDepth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPeerVerifyDepth` instead
    ///
    pub const SetPeerVerifyDepth = setPeerVerifyDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` depth: i32 `
    ///
    pub fn setPeerVerifyDepth(self: QSslConfiguration, depth: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `localCertificateChain` instead
    ///
    pub const LocalCertificateChain = localCertificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localCertificateChain(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_LocalCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslConfiguration.localCertificateChain: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocalCertificateChain` instead
    ///
    pub const SetLocalCertificateChain = setLocalCertificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` localChain: []QSslCertificate `
    ///
    pub fn setLocalCertificateChain(self: QSslConfiguration, localChain: []QSslCertificate) void {
        const localChain_list = qtc.libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslConfiguration_SetLocalCertificateChain(@ptrCast(self.ptr), localChain_list);
    }

    /// ### DEPRECATED: Use `localCertificate` instead
    ///
    pub const LocalCertificate = localCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn localCertificate(self: QSslConfiguration) QSslCertificate {
        return .{ .ptr = qtc.QSslConfiguration_LocalCertificate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLocalCertificate` instead
    ///
    pub const SetLocalCertificate = setLocalCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn setLocalCertificate(self: QSslConfiguration, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QSslConfiguration_SetLocalCertificate(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### DEPRECATED: Use `peerCertificate` instead
    ///
    pub const PeerCertificate = peerCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn peerCertificate(self: QSslConfiguration) QSslCertificate {
        return .{ .ptr = qtc.QSslConfiguration_PeerCertificate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerCertificateChain` instead
    ///
    pub const PeerCertificateChain = peerCertificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerCertificateChain(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_PeerCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslConfiguration.peerCertificateChain: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `sessionCipher` instead
    ///
    pub const SessionCipher = sessionCipher;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn sessionCipher(self: QSslConfiguration) QSslCipher {
        return .{ .ptr = qtc.QSslConfiguration_SessionCipher(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sessionProtocol` instead
    ///
    pub const SessionProtocol = sessionProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn sessionProtocol(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_SessionProtocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `privateKey` instead
    ///
    pub const PrivateKey = privateKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#privateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn privateKey(self: QSslConfiguration) QSslKey {
        return .{ .ptr = qtc.QSslConfiguration_PrivateKey(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPrivateKey` instead
    ///
    pub const SetPrivateKey = setPrivateKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` key: QSslKey `
    ///
    pub fn setPrivateKey(self: QSslConfiguration, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QSslKey;
        qtc.QSslConfiguration_SetPrivateKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `ciphers` instead
    ///
    pub const Ciphers = ciphers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ciphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ciphers(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCipher {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_Ciphers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCipher, _arr.len) catch @panic("QSslConfiguration.ciphers: Memory allocation failed");
        const _data_val: [*]QtC.QSslCipher = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCiphers` instead
    ///
    pub const SetCiphers = setCiphers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` _ciphers: []QSslCipher `
    ///
    pub fn setCiphers(self: QSslConfiguration, _ciphers: []QSslCipher) void {
        const ciphers_list = qtc.libqt_list{
            .len = _ciphers.len,
            .data = @ptrCast(_ciphers.ptr),
        };
        qtc.QSslConfiguration_SetCiphers(@ptrCast(self.ptr), ciphers_list);
    }

    /// ### DEPRECATED: Use `setCiphers2` instead
    ///
    pub const SetCiphers2 = setCiphers2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` _ciphers: []const u8 `
    ///
    pub fn setCiphers2(self: QSslConfiguration, _ciphers: []const u8) void {
        const ciphers_str = qtc.libqt_string{
            .len = _ciphers.len,
            .data = _ciphers.ptr,
        };
        qtc.QSslConfiguration_SetCiphers2(@ptrCast(self.ptr), ciphers_str);
    }

    /// ### DEPRECATED: Use `supportedCiphers` instead
    ///
    pub const SupportedCiphers = supportedCiphers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedCiphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedCiphers(allocator: std.mem.Allocator) []QSslCipher {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_SupportedCiphers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCipher, _arr.len) catch @panic("QSslConfiguration.supportedCiphers: Memory allocation failed");
        const _data_val: [*]QtC.QSslCipher = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `caCertificates` instead
    ///
    pub const CaCertificates = caCertificates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#caCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn caCertificates(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_CaCertificates(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslConfiguration.caCertificates: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCaCertificates` instead
    ///
    pub const SetCaCertificates = setCaCertificates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificates: []QSslCertificate `
    ///
    pub fn setCaCertificates(self: QSslConfiguration, certificates: []QSslCertificate) void {
        const certificates_list = qtc.libqt_list{
            .len = certificates.len,
            .data = @ptrCast(certificates.ptr),
        };
        qtc.QSslConfiguration_SetCaCertificates(@ptrCast(self.ptr), certificates_list);
    }

    /// ### DEPRECATED: Use `addCaCertificates` instead
    ///
    pub const AddCaCertificates = addCaCertificates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` path: []const u8 `
    ///
    pub fn addCaCertificates(self: QSslConfiguration, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `addCaCertificate` instead
    ///
    pub const AddCaCertificate = addCaCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn addCaCertificate(self: QSslConfiguration, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QSslConfiguration_AddCaCertificate(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### DEPRECATED: Use `addCaCertificates2` instead
    ///
    pub const AddCaCertificates2 = addCaCertificates2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificates: []QSslCertificate `
    ///
    pub fn addCaCertificates2(self: QSslConfiguration, certificates: []QSslCertificate) void {
        const certificates_list = qtc.libqt_list{
            .len = certificates.len,
            .data = @ptrCast(certificates.ptr),
        };
        qtc.QSslConfiguration_AddCaCertificates2(@ptrCast(self.ptr), certificates_list);
    }

    /// ### DEPRECATED: Use `systemCaCertificates` instead
    ///
    pub const SystemCaCertificates = systemCaCertificates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#systemCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemCaCertificates(allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_SystemCaCertificates();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslConfiguration.systemCaCertificates: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setSslOption` instead
    ///
    pub const SetSslOption = setSslOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setSslOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` option: qssl_enums.SslOption `
    ///
    /// ` on: bool `
    ///
    pub fn setSslOption(self: QSslConfiguration, option: i32, on: bool) void {
        qtc.QSslConfiguration_SetSslOption(@ptrCast(self.ptr), @bitCast(option), on);
    }

    /// ### DEPRECATED: Use `testSslOption` instead
    ///
    pub const TestSslOption = testSslOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#testSslOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` option: qssl_enums.SslOption `
    ///
    pub fn testSslOption(self: QSslConfiguration, option: i32) bool {
        return qtc.QSslConfiguration_TestSslOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `sessionTicket` instead
    ///
    pub const SessionTicket = sessionTicket;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicket)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sessionTicket(self: QSslConfiguration, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslConfiguration_SessionTicket(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslConfiguration.sessionTicket: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSessionTicket` instead
    ///
    pub const SetSessionTicket = setSessionTicket;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setSessionTicket)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` _sessionTicket: []u8 `
    ///
    pub fn setSessionTicket(self: QSslConfiguration, _sessionTicket: []u8) void {
        const sessionTicket_str = qtc.libqt_string{
            .len = _sessionTicket.len,
            .data = _sessionTicket.ptr,
        };
        qtc.QSslConfiguration_SetSessionTicket(@ptrCast(self.ptr), sessionTicket_str);
    }

    /// ### DEPRECATED: Use `sessionTicketLifeTimeHint` instead
    ///
    pub const SessionTicketLifeTimeHint = sessionTicketLifeTimeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicketLifeTimeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn sessionTicketLifeTimeHint(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_SessionTicketLifeTimeHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ephemeralServerKey` instead
    ///
    pub const EphemeralServerKey = ephemeralServerKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ephemeralServerKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn ephemeralServerKey(self: QSslConfiguration) QSslKey {
        return .{ .ptr = qtc.QSslConfiguration_EphemeralServerKey(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ellipticCurves` instead
    ///
    pub const EllipticCurves = ellipticCurves;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ellipticCurves)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ellipticCurves(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslEllipticCurve {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_EllipticCurves(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslEllipticCurve, _arr.len) catch @panic("QSslConfiguration.ellipticCurves: Memory allocation failed");
        const _data_val: [*]QtC.QSslEllipticCurve = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setEllipticCurves` instead
    ///
    pub const SetEllipticCurves = setEllipticCurves;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setEllipticCurves)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` curves: []QSslEllipticCurve `
    ///
    pub fn setEllipticCurves(self: QSslConfiguration, curves: []QSslEllipticCurve) void {
        const curves_list = qtc.libqt_list{
            .len = curves.len,
            .data = @ptrCast(curves.ptr),
        };
        qtc.QSslConfiguration_SetEllipticCurves(@ptrCast(self.ptr), curves_list);
    }

    /// ### DEPRECATED: Use `supportedEllipticCurves` instead
    ///
    pub const SupportedEllipticCurves = supportedEllipticCurves;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedEllipticCurves)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedEllipticCurves(allocator: std.mem.Allocator) []QSslEllipticCurve {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_SupportedEllipticCurves();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslEllipticCurve, _arr.len) catch @panic("QSslConfiguration.supportedEllipticCurves: Memory allocation failed");
        const _data_val: [*]QtC.QSslEllipticCurve = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `preSharedKeyIdentityHint` instead
    ///
    pub const PreSharedKeyIdentityHint = preSharedKeyIdentityHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#preSharedKeyIdentityHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preSharedKeyIdentityHint(self: QSslConfiguration, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslConfiguration_PreSharedKeyIdentityHint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslConfiguration.preSharedKeyIdentityHint: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPreSharedKeyIdentityHint` instead
    ///
    pub const SetPreSharedKeyIdentityHint = setPreSharedKeyIdentityHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPreSharedKeyIdentityHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` hint: []u8 `
    ///
    pub fn setPreSharedKeyIdentityHint(self: QSslConfiguration, hint: []u8) void {
        const hint_str = qtc.libqt_string{
            .len = hint.len,
            .data = hint.ptr,
        };
        qtc.QSslConfiguration_SetPreSharedKeyIdentityHint(@ptrCast(self.ptr), hint_str);
    }

    /// ### DEPRECATED: Use `diffieHellmanParameters` instead
    ///
    pub const DiffieHellmanParameters = diffieHellmanParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#diffieHellmanParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn diffieHellmanParameters(self: QSslConfiguration) QSslDiffieHellmanParameters {
        return .{ .ptr = qtc.QSslConfiguration_DiffieHellmanParameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDiffieHellmanParameters` instead
    ///
    pub const SetDiffieHellmanParameters = setDiffieHellmanParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDiffieHellmanParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` dhparams: QSslDiffieHellmanParameters `
    ///
    pub fn setDiffieHellmanParameters(self: QSslConfiguration, dhparams: anytype) void {
        comptime _ = @TypeOf(dhparams)._is_QSslDiffieHellmanParameters;
        qtc.QSslConfiguration_SetDiffieHellmanParameters(@ptrCast(self.ptr), @ptrCast(dhparams.ptr));
    }

    /// ### DEPRECATED: Use `backendConfiguration` instead
    ///
    pub const BackendConfiguration = backendConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#backendConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn backendConfiguration(self: QSslConfiguration, allocator: std.mem.Allocator) ArrayMap_u8_QVariant {
        const _map: qtc.libqt_map = qtc.QSslConfiguration_BackendConfiguration(@ptrCast(self.ptr));
        var _ret: ArrayMap_u8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSslConfiguration.backendConfiguration: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QSslConfiguration.backendConfiguration: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setBackendConfigurationOption` instead
    ///
    pub const SetBackendConfigurationOption = setBackendConfigurationOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfigurationOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` name: []u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setBackendConfigurationOption(self: QSslConfiguration, name: []u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSslConfiguration_SetBackendConfigurationOption(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setBackendConfiguration` instead
    ///
    pub const SetBackendConfiguration = setBackendConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn setBackendConfiguration(self: QSslConfiguration) void {
        qtc.QSslConfiguration_SetBackendConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultConfiguration` instead
    ///
    pub const DefaultConfiguration = defaultConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultConfiguration)
    ///
    pub fn defaultConfiguration() QSslConfiguration {
        return .{ .ptr = qtc.QSslConfiguration_DefaultConfiguration() };
    }

    /// ### DEPRECATED: Use `setDefaultConfiguration` instead
    ///
    pub const SetDefaultConfiguration = setDefaultConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn setDefaultConfiguration(configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QSslConfiguration_SetDefaultConfiguration(@ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `dtlsCookieVerificationEnabled` instead
    ///
    pub const DtlsCookieVerificationEnabled = dtlsCookieVerificationEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#dtlsCookieVerificationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn dtlsCookieVerificationEnabled(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_DtlsCookieVerificationEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDtlsCookieVerificationEnabled` instead
    ///
    pub const SetDtlsCookieVerificationEnabled = setDtlsCookieVerificationEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDtlsCookieVerificationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setDtlsCookieVerificationEnabled(self: QSslConfiguration, enable: bool) void {
        qtc.QSslConfiguration_SetDtlsCookieVerificationEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `defaultDtlsConfiguration` instead
    ///
    pub const DefaultDtlsConfiguration = defaultDtlsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultDtlsConfiguration)
    ///
    pub fn defaultDtlsConfiguration() QSslConfiguration {
        return .{ .ptr = qtc.QSslConfiguration_DefaultDtlsConfiguration() };
    }

    /// ### DEPRECATED: Use `setDefaultDtlsConfiguration` instead
    ///
    pub const SetDefaultDtlsConfiguration = setDefaultDtlsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultDtlsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn setDefaultDtlsConfiguration(configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QSslConfiguration_SetDefaultDtlsConfiguration(@ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `handshakeMustInterruptOnError` instead
    ///
    pub const HandshakeMustInterruptOnError = handshakeMustInterruptOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#handshakeMustInterruptOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn handshakeMustInterruptOnError(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_HandshakeMustInterruptOnError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHandshakeMustInterruptOnError` instead
    ///
    pub const SetHandshakeMustInterruptOnError = setHandshakeMustInterruptOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setHandshakeMustInterruptOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` interrupt: bool `
    ///
    pub fn setHandshakeMustInterruptOnError(self: QSslConfiguration, interrupt: bool) void {
        qtc.QSslConfiguration_SetHandshakeMustInterruptOnError(@ptrCast(self.ptr), interrupt);
    }

    /// ### DEPRECATED: Use `missingCertificateIsFatal` instead
    ///
    pub const MissingCertificateIsFatal = missingCertificateIsFatal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#missingCertificateIsFatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn missingCertificateIsFatal(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_MissingCertificateIsFatal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMissingCertificateIsFatal` instead
    ///
    pub const SetMissingCertificateIsFatal = setMissingCertificateIsFatal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setMissingCertificateIsFatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` cannotRecover: bool `
    ///
    pub fn setMissingCertificateIsFatal(self: QSslConfiguration, cannotRecover: bool) void {
        qtc.QSslConfiguration_SetMissingCertificateIsFatal(@ptrCast(self.ptr), cannotRecover);
    }

    /// ### DEPRECATED: Use `setOcspStaplingEnabled` instead
    ///
    pub const SetOcspStaplingEnabled = setOcspStaplingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setOcspStaplingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setOcspStaplingEnabled(self: QSslConfiguration, enable: bool) void {
        qtc.QSslConfiguration_SetOcspStaplingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `ocspStaplingEnabled` instead
    ///
    pub const OcspStaplingEnabled = ocspStaplingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ocspStaplingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn ocspStaplingEnabled(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_OcspStaplingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAllowedNextProtocols` instead
    ///
    pub const SetAllowedNextProtocols = setAllowedNextProtocols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setAllowedNextProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocols: [][]u8 `
    ///
    pub fn setAllowedNextProtocols(self: QSslConfiguration, allocator: std.mem.Allocator, protocols: [][]u8) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("QSslConfiguration.setAllowedNextProtocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |str_item, i|
            protocols_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QSslConfiguration_SetAllowedNextProtocols(@ptrCast(self.ptr), protocols_list);
    }

    /// ### DEPRECATED: Use `allowedNextProtocols` instead
    ///
    pub const AllowedNextProtocols = allowedNextProtocols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#allowedNextProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allowedNextProtocols(self: QSslConfiguration, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_AllowedNextProtocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSslConfiguration.allowedNextProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslConfiguration.allowedNextProtocols: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `nextNegotiatedProtocol` instead
    ///
    pub const NextNegotiatedProtocol = nextNegotiatedProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#nextNegotiatedProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nextNegotiatedProtocol(self: QSslConfiguration, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslConfiguration_NextNegotiatedProtocol(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslConfiguration.nextNegotiatedProtocol: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextProtocolNegotiationStatus` instead
    ///
    pub const NextProtocolNegotiationStatus = nextProtocolNegotiationStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#nextProtocolNegotiationStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ## Returns:
    ///
    /// ` qsslconfiguration_enums.NextProtocolNegotiationStatus `
    ///
    pub fn nextProtocolNegotiationStatus(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_NextProtocolNegotiationStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addCaCertificates22` instead
    ///
    pub const AddCaCertificates22 = addCaCertificates22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` path: []const u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn addCaCertificates22(self: QSslConfiguration, path: []const u8, format: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates22(@ptrCast(self.ptr), path_str, @bitCast(format));
    }

    /// ### DEPRECATED: Use `addCaCertificates3` instead
    ///
    pub const AddCaCertificates3 = addCaCertificates3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` path: []const u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` syntax: qsslcertificate_enums.PatternSyntax `
    ///
    pub fn addCaCertificates3(self: QSslConfiguration, path: []const u8, format: i32, syntax: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates3(@ptrCast(self.ptr), path_str, @bitCast(format), @bitCast(syntax));
    }

    /// ### DEPRECATED: Use `setBackendConfiguration1` instead
    ///
    pub const SetBackendConfiguration1 = setBackendConfiguration1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _backendConfiguration: ArrayMap_u8_QVariant `
    ///
    pub fn setBackendConfiguration1(self: QSslConfiguration, allocator: std.mem.Allocator, _backendConfiguration: ArrayMap_u8_QVariant) void {
        const backendConfiguration_count = _backendConfiguration.count();
        const backendConfiguration_keys = allocator.alloc(qtc.libqt_string, backendConfiguration_count) catch @panic("QSslConfiguration.setBackendConfiguration1: Memory allocation failed");
        defer allocator.free(backendConfiguration_keys);
        const backendConfiguration_values = allocator.alloc(QtC.QVariant, backendConfiguration_count) catch @panic("QSslConfiguration.setBackendConfiguration1: Memory allocation failed");
        defer allocator.free(backendConfiguration_values);
        var i: usize = 0;
        var backendConfiguration_it = _backendConfiguration.iterator();
        while (backendConfiguration_it.next()) |it_entry| : (i += 1) {
            const backendConfiguration_key = it_entry.key_ptr.*;
            backendConfiguration_keys[i] = qtc.libqt_string{
                .len = backendConfiguration_key.len,
                .data = backendConfiguration_key.ptr,
            };
            backendConfiguration_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const backendConfiguration_map = qtc.libqt_map{
            .len = backendConfiguration_count,
            .keys = @ptrCast(backendConfiguration_keys.ptr),
            .values = @ptrCast(backendConfiguration_values.ptr),
        };
        qtc.QSslConfiguration_SetBackendConfiguration1(@ptrCast(self.ptr), backendConfiguration_map);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#dtor.QSslConfiguration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn delete(self: QSslConfiguration) void {
        qtc.QSslConfiguration_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#public-types)
pub const enums = struct {
    pub const NextProtocolNegotiationStatus = enum(i32) {
        pub const NextProtocolNegotiationNone: i32 = 0;
        pub const NextProtocolNegotiationNegotiated: i32 = 1;
        pub const NextProtocolNegotiationUnsupported: i32 = 2;
    };
};
