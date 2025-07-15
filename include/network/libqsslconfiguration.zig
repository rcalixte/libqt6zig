const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qssl_enums = @import("libqssl.zig").enums;
const qsslcertificate_enums = @import("libqsslcertificate.zig").enums;
const qsslconfiguration_enums = enums;
const qsslsocket_enums = @import("libqsslsocket.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslconfiguration.html
pub const qsslconfiguration = struct {
    /// New constructs a new QSslConfiguration object.
    ///
    ///
    pub fn New() QtC.QSslConfiguration {
        return qtc.QSslConfiguration_new();
    }

    /// New2 constructs a new QSslConfiguration object.
    ///
    /// ``` other: QtC.QSslConfiguration ```
    pub fn New2(other: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QSslConfiguration_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator=)
    ///
    /// ``` self: QtC.QSslConfiguration, other: QtC.QSslConfiguration ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslConfiguration_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#swap)
    ///
    /// ``` self: QtC.QSslConfiguration, other: QtC.QSslConfiguration ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslConfiguration_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator==)
    ///
    /// ``` self: QtC.QSslConfiguration, other: QtC.QSslConfiguration ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslConfiguration_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator!=)
    ///
    /// ``` self: QtC.QSslConfiguration, other: QtC.QSslConfiguration ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslConfiguration_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#isNull)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSslConfiguration_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#protocol)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn Protocol(self: ?*anyopaque) i64 {
        return qtc.QSslConfiguration_Protocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setProtocol)
    ///
    /// ``` self: QtC.QSslConfiguration, protocol: qssl_enums.SslProtocol ```
    pub fn SetProtocol(self: ?*anyopaque, protocol: i64) void {
        qtc.QSslConfiguration_SetProtocol(@ptrCast(self), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyMode)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn PeerVerifyMode(self: ?*anyopaque) i64 {
        return qtc.QSslConfiguration_PeerVerifyMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyMode)
    ///
    /// ``` self: QtC.QSslConfiguration, mode: qsslsocket_enums.PeerVerifyMode ```
    pub fn SetPeerVerifyMode(self: ?*anyopaque, mode: i64) void {
        qtc.QSslConfiguration_SetPeerVerifyMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyDepth)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn PeerVerifyDepth(self: ?*anyopaque) i32 {
        return qtc.QSslConfiguration_PeerVerifyDepth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyDepth)
    ///
    /// ``` self: QtC.QSslConfiguration, depth: i32 ```
    pub fn SetPeerVerifyDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QSslConfiguration_SetPeerVerifyDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificateChain)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn LocalCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_LocalCertificateChain(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslconfiguration.LocalCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificateChain)
    ///
    /// ``` self: QtC.QSslConfiguration, localChain: []QtC.QSslCertificate ```
    pub fn SetLocalCertificateChain(self: ?*anyopaque, localChain: []QtC.QSslCertificate) void {
        const localChain_list = qtc.struct_libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslConfiguration_SetLocalCertificateChain(@ptrCast(self), localChain_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificate)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn LocalCertificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslConfiguration_LocalCertificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificate)
    ///
    /// ``` self: QtC.QSslConfiguration, certificate: QtC.QSslCertificate ```
    pub fn SetLocalCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslConfiguration_SetLocalCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificate)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn PeerCertificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslConfiguration_PeerCertificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificateChain)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn PeerCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_PeerCertificateChain(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslconfiguration.PeerCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionCipher)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn SessionCipher(self: ?*anyopaque) QtC.QSslCipher {
        return qtc.QSslConfiguration_SessionCipher(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionProtocol)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn SessionProtocol(self: ?*anyopaque) i64 {
        return qtc.QSslConfiguration_SessionProtocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#privateKey)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn PrivateKey(self: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslConfiguration_PrivateKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPrivateKey)
    ///
    /// ``` self: QtC.QSslConfiguration, key: QtC.QSslKey ```
    pub fn SetPrivateKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSslConfiguration_SetPrivateKey(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ciphers)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn Ciphers(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCipher {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_Ciphers(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCipher, _arr.len) catch @panic("qsslconfiguration.Ciphers: Memory allocation failed");
        const _data: [*]QtC.QSslCipher = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
    ///
    /// ``` self: QtC.QSslConfiguration, ciphers: []QtC.QSslCipher ```
    pub fn SetCiphers(self: ?*anyopaque, ciphers: []QtC.QSslCipher) void {
        const ciphers_list = qtc.struct_libqt_list{
            .len = ciphers.len,
            .data = @ptrCast(ciphers.ptr),
        };
        qtc.QSslConfiguration_SetCiphers(@ptrCast(self), ciphers_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
    ///
    /// ``` self: QtC.QSslConfiguration, ciphers: []const u8 ```
    pub fn SetCiphers2(self: ?*anyopaque, ciphers: []const u8) void {
        const ciphers_str = qtc.struct_libqt_string{
            .len = ciphers.len,
            .data = ciphers.ptr,
        };
        qtc.QSslConfiguration_SetCiphers2(@ptrCast(self), ciphers_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedCiphers)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SupportedCiphers(allocator: std.mem.Allocator) []QtC.QSslCipher {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_SupportedCiphers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCipher, _arr.len) catch @panic("qsslconfiguration.SupportedCiphers: Memory allocation failed");
        const _data: [*]QtC.QSslCipher = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#caCertificates)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn CaCertificates(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_CaCertificates(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslconfiguration.CaCertificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCaCertificates)
    ///
    /// ``` self: QtC.QSslConfiguration, certificates: []QtC.QSslCertificate ```
    pub fn SetCaCertificates(self: ?*anyopaque, certificates: []QtC.QSslCertificate) void {
        const certificates_list = qtc.struct_libqt_list{
            .len = certificates.len,
            .data = @ptrCast(certificates.ptr),
        };
        qtc.QSslConfiguration_SetCaCertificates(@ptrCast(self), certificates_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ``` self: QtC.QSslConfiguration, path: []const u8 ```
    pub fn AddCaCertificates(self: ?*anyopaque, path: []const u8) bool {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificate)
    ///
    /// ``` self: QtC.QSslConfiguration, certificate: QtC.QSslCertificate ```
    pub fn AddCaCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslConfiguration_AddCaCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ``` self: QtC.QSslConfiguration, certificates: []QtC.QSslCertificate ```
    pub fn AddCaCertificates2(self: ?*anyopaque, certificates: []QtC.QSslCertificate) void {
        const certificates_list = qtc.struct_libqt_list{
            .len = certificates.len,
            .data = @ptrCast(certificates.ptr),
        };
        qtc.QSslConfiguration_AddCaCertificates2(@ptrCast(self), certificates_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#systemCaCertificates)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SystemCaCertificates(allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_SystemCaCertificates();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslconfiguration.SystemCaCertificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setSslOption)
    ///
    /// ``` self: QtC.QSslConfiguration, option: qssl_enums.SslOption, on: bool ```
    pub fn SetSslOption(self: ?*anyopaque, option: i64, on: bool) void {
        qtc.QSslConfiguration_SetSslOption(@ptrCast(self), @intCast(option), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#testSslOption)
    ///
    /// ``` self: QtC.QSslConfiguration, option: qssl_enums.SslOption ```
    pub fn TestSslOption(self: ?*anyopaque, option: i64) bool {
        return qtc.QSslConfiguration_TestSslOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicket)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn SessionTicket(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QSslConfiguration_SessionTicket(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.SessionTicket: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setSessionTicket)
    ///
    /// ``` self: QtC.QSslConfiguration, sessionTicket: []u8 ```
    pub fn SetSessionTicket(self: ?*anyopaque, sessionTicket: []u8) void {
        const sessionTicket_str = qtc.struct_libqt_string{
            .len = sessionTicket.len,
            .data = sessionTicket.ptr,
        };
        qtc.QSslConfiguration_SetSessionTicket(@ptrCast(self), sessionTicket_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicketLifeTimeHint)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn SessionTicketLifeTimeHint(self: ?*anyopaque) i32 {
        return qtc.QSslConfiguration_SessionTicketLifeTimeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ephemeralServerKey)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn EphemeralServerKey(self: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslConfiguration_EphemeralServerKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ellipticCurves)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn EllipticCurves(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslEllipticCurve {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_EllipticCurves(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslEllipticCurve, _arr.len) catch @panic("qsslconfiguration.EllipticCurves: Memory allocation failed");
        const _data: [*]QtC.QSslEllipticCurve = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setEllipticCurves)
    ///
    /// ``` self: QtC.QSslConfiguration, curves: []QtC.QSslEllipticCurve ```
    pub fn SetEllipticCurves(self: ?*anyopaque, curves: []QtC.QSslEllipticCurve) void {
        const curves_list = qtc.struct_libqt_list{
            .len = curves.len,
            .data = @ptrCast(curves.ptr),
        };
        qtc.QSslConfiguration_SetEllipticCurves(@ptrCast(self), curves_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedEllipticCurves)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SupportedEllipticCurves(allocator: std.mem.Allocator) []QtC.QSslEllipticCurve {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_SupportedEllipticCurves();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslEllipticCurve, _arr.len) catch @panic("qsslconfiguration.SupportedEllipticCurves: Memory allocation failed");
        const _data: [*]QtC.QSslEllipticCurve = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#preSharedKeyIdentityHint)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn PreSharedKeyIdentityHint(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QSslConfiguration_PreSharedKeyIdentityHint(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.PreSharedKeyIdentityHint: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPreSharedKeyIdentityHint)
    ///
    /// ``` self: QtC.QSslConfiguration, hint: []u8 ```
    pub fn SetPreSharedKeyIdentityHint(self: ?*anyopaque, hint: []u8) void {
        const hint_str = qtc.struct_libqt_string{
            .len = hint.len,
            .data = hint.ptr,
        };
        qtc.QSslConfiguration_SetPreSharedKeyIdentityHint(@ptrCast(self), hint_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#diffieHellmanParameters)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn DiffieHellmanParameters(self: ?*anyopaque) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslConfiguration_DiffieHellmanParameters(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDiffieHellmanParameters)
    ///
    /// ``` self: QtC.QSslConfiguration, dhparams: QtC.QSslDiffieHellmanParameters ```
    pub fn SetDiffieHellmanParameters(self: ?*anyopaque, dhparams: ?*anyopaque) void {
        qtc.QSslConfiguration_SetDiffieHellmanParameters(@ptrCast(self), @ptrCast(dhparams));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfigurationOption)
    ///
    /// ``` self: QtC.QSslConfiguration, name: []u8, value: QtC.QVariant ```
    pub fn SetBackendConfigurationOption(self: ?*anyopaque, name: []u8, value: ?*anyopaque) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslConfiguration_SetBackendConfigurationOption(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn SetBackendConfiguration(self: ?*anyopaque) void {
        qtc.QSslConfiguration_SetBackendConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultConfiguration)
    ///
    ///
    pub fn DefaultConfiguration() QtC.QSslConfiguration {
        return qtc.QSslConfiguration_DefaultConfiguration();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultConfiguration)
    ///
    /// ``` configuration: QtC.QSslConfiguration ```
    pub fn SetDefaultConfiguration(configuration: ?*anyopaque) void {
        qtc.QSslConfiguration_SetDefaultConfiguration(@ptrCast(configuration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#dtlsCookieVerificationEnabled)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn DtlsCookieVerificationEnabled(self: ?*anyopaque) bool {
        return qtc.QSslConfiguration_DtlsCookieVerificationEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDtlsCookieVerificationEnabled)
    ///
    /// ``` self: QtC.QSslConfiguration, enable: bool ```
    pub fn SetDtlsCookieVerificationEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSslConfiguration_SetDtlsCookieVerificationEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultDtlsConfiguration)
    ///
    ///
    pub fn DefaultDtlsConfiguration() QtC.QSslConfiguration {
        return qtc.QSslConfiguration_DefaultDtlsConfiguration();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultDtlsConfiguration)
    ///
    /// ``` configuration: QtC.QSslConfiguration ```
    pub fn SetDefaultDtlsConfiguration(configuration: ?*anyopaque) void {
        qtc.QSslConfiguration_SetDefaultDtlsConfiguration(@ptrCast(configuration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#handshakeMustInterruptOnError)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn HandshakeMustInterruptOnError(self: ?*anyopaque) bool {
        return qtc.QSslConfiguration_HandshakeMustInterruptOnError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setHandshakeMustInterruptOnError)
    ///
    /// ``` self: QtC.QSslConfiguration, interrupt: bool ```
    pub fn SetHandshakeMustInterruptOnError(self: ?*anyopaque, interrupt: bool) void {
        qtc.QSslConfiguration_SetHandshakeMustInterruptOnError(@ptrCast(self), interrupt);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#missingCertificateIsFatal)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn MissingCertificateIsFatal(self: ?*anyopaque) bool {
        return qtc.QSslConfiguration_MissingCertificateIsFatal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setMissingCertificateIsFatal)
    ///
    /// ``` self: QtC.QSslConfiguration, cannotRecover: bool ```
    pub fn SetMissingCertificateIsFatal(self: ?*anyopaque, cannotRecover: bool) void {
        qtc.QSslConfiguration_SetMissingCertificateIsFatal(@ptrCast(self), cannotRecover);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setOcspStaplingEnabled)
    ///
    /// ``` self: QtC.QSslConfiguration, enable: bool ```
    pub fn SetOcspStaplingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSslConfiguration_SetOcspStaplingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ocspStaplingEnabled)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn OcspStaplingEnabled(self: ?*anyopaque) bool {
        return qtc.QSslConfiguration_OcspStaplingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setAllowedNextProtocols)
    ///
    /// ``` self: QtC.QSslConfiguration, protocols: [][]u8, allocator: std.mem.Allocator ```
    pub fn SetAllowedNextProtocols(self: ?*anyopaque, protocols: [][]u8, allocator: std.mem.Allocator) void {
        var protocols_arr = allocator.alloc(qtc.struct_libqt_string, protocols.len) catch @panic("qsslconfiguration.SetAllowedNextProtocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |item, i| {
            protocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const protocols_list = qtc.struct_libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QSslConfiguration_SetAllowedNextProtocols(@ptrCast(self), protocols_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#allowedNextProtocols)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn AllowedNextProtocols(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QSslConfiguration_AllowedNextProtocols(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#nextNegotiatedProtocol)
    ///
    /// ``` self: QtC.QSslConfiguration, allocator: std.mem.Allocator ```
    pub fn NextNegotiatedProtocol(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QSslConfiguration_NextNegotiatedProtocol(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslconfiguration.NextNegotiatedProtocol: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#nextProtocolNegotiationStatus)
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn NextProtocolNegotiationStatus(self: ?*anyopaque) i64 {
        return qtc.QSslConfiguration_NextProtocolNegotiationStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ``` self: QtC.QSslConfiguration, path: []const u8, format: qssl_enums.EncodingFormat ```
    pub fn AddCaCertificates22(self: ?*anyopaque, path: []const u8, format: i64) bool {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates22(@ptrCast(self), path_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
    ///
    /// ``` self: QtC.QSslConfiguration, path: []const u8, format: qssl_enums.EncodingFormat, syntax: qsslcertificate_enums.PatternSyntax ```
    pub fn AddCaCertificates3(self: ?*anyopaque, path: []const u8, format: i64, syntax: i64) bool {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QSslConfiguration_AddCaCertificates3(@ptrCast(self), path_str, @intCast(format), @intCast(syntax));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#dtor.QSslConfiguration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslConfiguration ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslConfiguration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsslconfiguration.html#types
pub const enums = struct {
    pub const NextProtocolNegotiationStatus = enum {
        pub const NextProtocolNegotiationNone: i32 = 0;
        pub const NextProtocolNegotiationNegotiated: i32 = 1;
        pub const NextProtocolNegotiationUnsupported: i32 = 2;
    };
};
