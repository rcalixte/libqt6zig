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

    /// New constructs a new QSslConfiguration object.
    ///
    pub fn New() QSslConfiguration {
        return .{ .ptr = qtc.QSslConfiguration_new() };
    }

    /// New2 constructs a new QSslConfiguration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn New2(other: anytype) QSslConfiguration {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        return .{ .ptr = qtc.QSslConfiguration_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn OperatorAssign(self: QSslConfiguration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        qtc.QSslConfiguration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn Swap(self: QSslConfiguration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        qtc.QSslConfiguration_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn OperatorEqual(self: QSslConfiguration, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        return qtc.QSslConfiguration_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` other: QSslConfiguration `
    ///
    pub fn OperatorNotEqual(self: QSslConfiguration, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslConfiguration;
        return qtc.QSslConfiguration_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn IsNull(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_IsNull(@ptrCast(self.ptr));
    }

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
    pub fn Protocol(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_Protocol(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` protocol: qssl_enums.SslProtocol `
    ///
    pub fn SetProtocol(self: QSslConfiguration, protocol: i32) void {
        qtc.QSslConfiguration_SetProtocol(@ptrCast(self.ptr), @bitCast(protocol));
    }

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
    pub fn PeerVerifyMode(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_PeerVerifyMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` mode: qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn SetPeerVerifyMode(self: QSslConfiguration, mode: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn PeerVerifyDepth(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_PeerVerifyDepth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` depth: i32 `
    ///
    pub fn SetPeerVerifyDepth(self: QSslConfiguration, depth: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalCertificateChain(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_LocalCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslconfiguration.LocalCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` localChain: []QSslCertificate `
    ///
    pub fn SetLocalCertificateChain(self: QSslConfiguration, localChain: []QSslCertificate) void {
        const localChain_list = qtc.libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslConfiguration_SetLocalCertificateChain(@ptrCast(self.ptr), localChain_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn LocalCertificate(self: QSslConfiguration) QSslCertificate {
        return .{ .ptr = qtc.QSslConfiguration_LocalCertificate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn SetLocalCertificate(self: QSslConfiguration, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QSslConfiguration_SetLocalCertificate(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn PeerCertificate(self: QSslConfiguration) QSslCertificate {
        return .{ .ptr = qtc.QSslConfiguration_PeerCertificate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerCertificateChain(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_PeerCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslconfiguration.PeerCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn SessionCipher(self: QSslConfiguration) QSslCipher {
        return .{ .ptr = qtc.QSslConfiguration_SessionCipher(@ptrCast(self.ptr)) };
    }

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
    pub fn SessionProtocol(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_SessionProtocol(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#privateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn PrivateKey(self: QSslConfiguration) QSslKey {
        return .{ .ptr = qtc.QSslConfiguration_PrivateKey(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` key: QSslKey `
    ///
    pub fn SetPrivateKey(self: QSslConfiguration, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QSslKey;
        qtc.QSslConfiguration_SetPrivateKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ciphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Ciphers(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCipher {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_Ciphers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCipher, _arr.len) catch @panic("qsslconfiguration.Ciphers: Memory allocation failed");
        const _data: [*]QtC.QSslCipher = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` ciphers: []QSslCipher `
    ///
    pub fn SetCiphers(self: QSslConfiguration, ciphers: []QSslCipher) void {
        const ciphers_list = qtc.libqt_list{
            .len = ciphers.len,
            .data = @ptrCast(ciphers.ptr),
        };
        qtc.QSslConfiguration_SetCiphers(@ptrCast(self.ptr), ciphers_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` ciphers: []const u8 `
    ///
    pub fn SetCiphers2(self: QSslConfiguration, ciphers: []const u8) void {
        const ciphers_str = qtc.libqt_string{
            .len = ciphers.len,
            .data = ciphers.ptr,
        };
        qtc.QSslConfiguration_SetCiphers2(@ptrCast(self.ptr), ciphers_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedCiphers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedCiphers(allocator: std.mem.Allocator) []QSslCipher {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_SupportedCiphers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCipher, _arr.len) catch @panic("qsslconfiguration.SupportedCiphers: Memory allocation failed");
        const _data: [*]QtC.QSslCipher = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#caCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CaCertificates(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_CaCertificates(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslconfiguration.CaCertificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificates: []QSslCertificate `
    ///
    pub fn SetCaCertificates(self: QSslConfiguration, certificates: []QSslCertificate) void {
        const certificates_list = qtc.libqt_list{
            .len = certificates.len,
            .data = @ptrCast(certificates.ptr),
        };
        qtc.QSslConfiguration_SetCaCertificates(@ptrCast(self.ptr), certificates_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` path: []const u8 `
    ///
    pub fn AddCaCertificates(self: QSslConfiguration, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn AddCaCertificate(self: QSslConfiguration, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QSslConfiguration_AddCaCertificate(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` certificates: []QSslCertificate `
    ///
    pub fn AddCaCertificates2(self: QSslConfiguration, certificates: []QSslCertificate) void {
        const certificates_list = qtc.libqt_list{
            .len = certificates.len,
            .data = @ptrCast(certificates.ptr),
        };
        qtc.QSslConfiguration_AddCaCertificates2(@ptrCast(self.ptr), certificates_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#systemCaCertificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemCaCertificates(allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_SystemCaCertificates();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslconfiguration.SystemCaCertificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn SetSslOption(self: QSslConfiguration, option: i32, on: bool) void {
        qtc.QSslConfiguration_SetSslOption(@ptrCast(self.ptr), @bitCast(option), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#testSslOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` option: qssl_enums.SslOption `
    ///
    pub fn TestSslOption(self: QSslConfiguration, option: i32) bool {
        return qtc.QSslConfiguration_TestSslOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicket)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionTicket(self: QSslConfiguration, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslConfiguration_SessionTicket(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.SessionTicket: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setSessionTicket)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` sessionTicket: []u8 `
    ///
    pub fn SetSessionTicket(self: QSslConfiguration, sessionTicket: []u8) void {
        const sessionTicket_str = qtc.libqt_string{
            .len = sessionTicket.len,
            .data = sessionTicket.ptr,
        };
        qtc.QSslConfiguration_SetSessionTicket(@ptrCast(self.ptr), sessionTicket_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicketLifeTimeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn SessionTicketLifeTimeHint(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_SessionTicketLifeTimeHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ephemeralServerKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn EphemeralServerKey(self: QSslConfiguration) QSslKey {
        return .{ .ptr = qtc.QSslConfiguration_EphemeralServerKey(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ellipticCurves)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EllipticCurves(self: QSslConfiguration, allocator: std.mem.Allocator) []QSslEllipticCurve {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_EllipticCurves(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslEllipticCurve, _arr.len) catch @panic("qsslconfiguration.EllipticCurves: Memory allocation failed");
        const _data: [*]QtC.QSslEllipticCurve = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setEllipticCurves)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` curves: []QSslEllipticCurve `
    ///
    pub fn SetEllipticCurves(self: QSslConfiguration, curves: []QSslEllipticCurve) void {
        const curves_list = qtc.libqt_list{
            .len = curves.len,
            .data = @ptrCast(curves.ptr),
        };
        qtc.QSslConfiguration_SetEllipticCurves(@ptrCast(self.ptr), curves_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedEllipticCurves)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedEllipticCurves(allocator: std.mem.Allocator) []QSslEllipticCurve {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_SupportedEllipticCurves();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslEllipticCurve, _arr.len) catch @panic("qsslconfiguration.SupportedEllipticCurves: Memory allocation failed");
        const _data: [*]QtC.QSslEllipticCurve = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#preSharedKeyIdentityHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreSharedKeyIdentityHint(self: QSslConfiguration, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslConfiguration_PreSharedKeyIdentityHint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.PreSharedKeyIdentityHint: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPreSharedKeyIdentityHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` hint: []u8 `
    ///
    pub fn SetPreSharedKeyIdentityHint(self: QSslConfiguration, hint: []u8) void {
        const hint_str = qtc.libqt_string{
            .len = hint.len,
            .data = hint.ptr,
        };
        qtc.QSslConfiguration_SetPreSharedKeyIdentityHint(@ptrCast(self.ptr), hint_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#diffieHellmanParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn DiffieHellmanParameters(self: QSslConfiguration) QSslDiffieHellmanParameters {
        return .{ .ptr = qtc.QSslConfiguration_DiffieHellmanParameters(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDiffieHellmanParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` dhparams: QSslDiffieHellmanParameters `
    ///
    pub fn SetDiffieHellmanParameters(self: QSslConfiguration, dhparams: anytype) void {
        comptime _ = @TypeOf(dhparams)._is_QSslDiffieHellmanParameters;
        qtc.QSslConfiguration_SetDiffieHellmanParameters(@ptrCast(self.ptr), @ptrCast(dhparams.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#backendConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BackendConfiguration(self: QSslConfiguration, allocator: std.mem.Allocator) ArrayMap_u8_QVariant {
        const _map: qtc.libqt_map = qtc.QSslConfiguration_BackendConfiguration(@ptrCast(self.ptr));
        var _ret: ArrayMap_u8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qsslconfiguration.BackendConfiguration: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qsslconfiguration.BackendConfiguration: Memory allocation failed");
        }
        return _ret;
    }

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
    pub fn SetBackendConfigurationOption(self: QSslConfiguration, name: []u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSslConfiguration_SetBackendConfigurationOption(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn SetBackendConfiguration(self: QSslConfiguration) void {
        qtc.QSslConfiguration_SetBackendConfiguration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultConfiguration)
    ///
    pub fn DefaultConfiguration() QSslConfiguration {
        return .{ .ptr = qtc.QSslConfiguration_DefaultConfiguration() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn SetDefaultConfiguration(configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QSslConfiguration_SetDefaultConfiguration(@ptrCast(configuration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#dtlsCookieVerificationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn DtlsCookieVerificationEnabled(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_DtlsCookieVerificationEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDtlsCookieVerificationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDtlsCookieVerificationEnabled(self: QSslConfiguration, enable: bool) void {
        qtc.QSslConfiguration_SetDtlsCookieVerificationEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultDtlsConfiguration)
    ///
    pub fn DefaultDtlsConfiguration() QSslConfiguration {
        return .{ .ptr = qtc.QSslConfiguration_DefaultDtlsConfiguration() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultDtlsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn SetDefaultDtlsConfiguration(configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QSslConfiguration_SetDefaultDtlsConfiguration(@ptrCast(configuration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#handshakeMustInterruptOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn HandshakeMustInterruptOnError(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_HandshakeMustInterruptOnError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setHandshakeMustInterruptOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` interrupt: bool `
    ///
    pub fn SetHandshakeMustInterruptOnError(self: QSslConfiguration, interrupt: bool) void {
        qtc.QSslConfiguration_SetHandshakeMustInterruptOnError(@ptrCast(self.ptr), interrupt);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#missingCertificateIsFatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn MissingCertificateIsFatal(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_MissingCertificateIsFatal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setMissingCertificateIsFatal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` cannotRecover: bool `
    ///
    pub fn SetMissingCertificateIsFatal(self: QSslConfiguration, cannotRecover: bool) void {
        qtc.QSslConfiguration_SetMissingCertificateIsFatal(@ptrCast(self.ptr), cannotRecover);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setOcspStaplingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn SetOcspStaplingEnabled(self: QSslConfiguration, enable: bool) void {
        qtc.QSslConfiguration_SetOcspStaplingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ocspStaplingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn OcspStaplingEnabled(self: QSslConfiguration) bool {
        return qtc.QSslConfiguration_OcspStaplingEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetAllowedNextProtocols(self: QSslConfiguration, allocator: std.mem.Allocator, protocols: [][]u8) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("qsslconfiguration.SetAllowedNextProtocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |item, i|
            protocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QSslConfiguration_SetAllowedNextProtocols(@ptrCast(self.ptr), protocols_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#allowedNextProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllowedNextProtocols(self: QSslConfiguration, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QSslConfiguration_AllowedNextProtocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsslconfiguration.AllowedNextProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslconfiguration.AllowedNextProtocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#nextNegotiatedProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextNegotiatedProtocol(self: QSslConfiguration, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslConfiguration_NextNegotiatedProtocol(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.NextNegotiatedProtocol: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn NextProtocolNegotiationStatus(self: QSslConfiguration) i32 {
        return qtc.QSslConfiguration_NextProtocolNegotiationStatus(@ptrCast(self.ptr));
    }

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
    pub fn AddCaCertificates22(self: QSslConfiguration, path: []const u8, format: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates22(@ptrCast(self.ptr), path_str, @bitCast(format));
    }

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
    pub fn AddCaCertificates3(self: QSslConfiguration, path: []const u8, format: i32, syntax: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates3(@ptrCast(self.ptr), path_str, @bitCast(format), @bitCast(syntax));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` backendConfiguration: ArrayMap_u8_QVariant `
    ///
    pub fn SetBackendConfiguration1(self: QSslConfiguration, allocator: std.mem.Allocator, backendConfiguration: ArrayMap_u8_QVariant) void {
        const backendConfiguration_count = backendConfiguration.count();
        const backendConfiguration_keys = allocator.alloc(qtc.libqt_string, backendConfiguration_count) catch @panic("qsslconfiguration.SetBackendConfiguration1: Memory allocation failed");
        defer allocator.free(backendConfiguration_keys);
        const backendConfiguration_values = allocator.alloc(QtC.QVariant, backendConfiguration_count) catch @panic("qsslconfiguration.SetBackendConfiguration1: Memory allocation failed");
        defer allocator.free(backendConfiguration_values);
        var i: usize = 0;
        var backendConfiguration_it = backendConfiguration.iterator();
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#dtor.QSslConfiguration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslConfiguration `
    ///
    pub fn Delete(self: QSslConfiguration) void {
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
