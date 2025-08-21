const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qssl_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qssl.html
pub const qssl = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.KeyType ```
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.KeyType ```
    pub fn GetEnumName(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.EncodingFormat ```
    pub fn GetEnumMetaObject2(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject2(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.EncodingFormat ```
    pub fn GetEnumName2(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName2(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.KeyAlgorithm ```
    pub fn GetEnumMetaObject3(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject3(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.KeyAlgorithm ```
    pub fn GetEnumName3(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName3(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.AlternativeNameEntryType ```
    pub fn GetEnumMetaObject4(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject4(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.AlternativeNameEntryType ```
    pub fn GetEnumName4(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName4(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.SslProtocol ```
    pub fn GetEnumMetaObject5(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject5(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.SslProtocol ```
    pub fn GetEnumName5(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName5(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.SslOption ```
    pub fn GetEnumMetaObject6(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject6(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.SslOption ```
    pub fn GetEnumName6(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName6(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.AlertLevel ```
    pub fn GetEnumMetaObject7(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject7(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.AlertLevel ```
    pub fn GetEnumName7(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName7(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.AlertType ```
    pub fn GetEnumMetaObject8(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject8(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.AlertType ```
    pub fn GetEnumName8(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName8(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.ImplementedClass ```
    pub fn GetEnumMetaObject9(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject9(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.ImplementedClass ```
    pub fn GetEnumName9(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName9(@intCast(param1));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: qssl_enums.SupportedFeature ```
    pub fn GetEnumMetaObject10(param1: i32) QtC.QMetaObject {
        return qtc.QSsl_GetEnumMetaObject10(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
    ///
    /// ``` param1: qssl_enums.SupportedFeature ```
    pub fn GetEnumName10(param1: i32) []const u8 {
        const _ret = qtc.QSsl_GetEnumName10(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// https://doc.qt.io/qt-6/qssl.html#types
pub const enums = struct {
    pub const KeyType = enum {
        pub const PrivateKey: i32 = 0;
        pub const PublicKey: i32 = 1;
    };

    pub const EncodingFormat = enum {
        pub const Pem: i32 = 0;
        pub const Der: i32 = 1;
    };

    pub const KeyAlgorithm = enum {
        pub const Opaque: i32 = 0;
        pub const Rsa: i32 = 1;
        pub const Dsa: i32 = 2;
        pub const Ec: i32 = 3;
        pub const Dh: i32 = 4;
    };

    pub const AlternativeNameEntryType = enum {
        pub const EmailEntry: i32 = 0;
        pub const DnsEntry: i32 = 1;
        pub const IpAddressEntry: i32 = 2;
    };

    pub const SslProtocol = enum {
        pub const TlsV1_2: i32 = 0;
        pub const AnyProtocol: i32 = 1;
        pub const SecureProtocols: i32 = 2;
        pub const TlsV1_2OrLater: i32 = 3;
        pub const DtlsV1_2: i32 = 4;
        pub const DtlsV1_2OrLater: i32 = 5;
        pub const TlsV1_3: i32 = 6;
        pub const TlsV1_3OrLater: i32 = 7;
        pub const UnknownProtocol: i32 = -1;
    };

    pub const SslOption = enum {
        pub const SslOptionDisableEmptyFragments: i32 = 1;
        pub const SslOptionDisableSessionTickets: i32 = 2;
        pub const SslOptionDisableCompression: i32 = 4;
        pub const SslOptionDisableServerNameIndication: i32 = 8;
        pub const SslOptionDisableLegacyRenegotiation: i32 = 16;
        pub const SslOptionDisableSessionSharing: i32 = 32;
        pub const SslOptionDisableSessionPersistence: i32 = 64;
        pub const SslOptionDisableServerCipherPreference: i32 = 128;
    };

    pub const AlertLevel = enum {
        pub const Warning: i32 = 0;
        pub const Fatal: i32 = 1;
        pub const Unknown: i32 = 2;
    };

    pub const AlertType = enum {
        pub const CloseNotify: i32 = 0;
        pub const UnexpectedMessage: i32 = 10;
        pub const BadRecordMac: i32 = 20;
        pub const RecordOverflow: i32 = 22;
        pub const DecompressionFailure: i32 = 30;
        pub const HandshakeFailure: i32 = 40;
        pub const NoCertificate: i32 = 41;
        pub const BadCertificate: i32 = 42;
        pub const UnsupportedCertificate: i32 = 43;
        pub const CertificateRevoked: i32 = 44;
        pub const CertificateExpired: i32 = 45;
        pub const CertificateUnknown: i32 = 46;
        pub const IllegalParameter: i32 = 47;
        pub const UnknownCa: i32 = 48;
        pub const AccessDenied: i32 = 49;
        pub const DecodeError: i32 = 50;
        pub const DecryptError: i32 = 51;
        pub const ExportRestriction: i32 = 60;
        pub const ProtocolVersion: i32 = 70;
        pub const InsufficientSecurity: i32 = 71;
        pub const InternalError: i32 = 80;
        pub const InappropriateFallback: i32 = 86;
        pub const UserCancelled: i32 = 90;
        pub const NoRenegotiation: i32 = 100;
        pub const MissingExtension: i32 = 109;
        pub const UnsupportedExtension: i32 = 110;
        pub const CertificateUnobtainable: i32 = 111;
        pub const UnrecognizedName: i32 = 112;
        pub const BadCertificateStatusResponse: i32 = 113;
        pub const BadCertificateHashValue: i32 = 114;
        pub const UnknownPskIdentity: i32 = 115;
        pub const CertificateRequired: i32 = 116;
        pub const NoApplicationProtocol: i32 = 120;
        pub const UnknownAlertMessage: i32 = 255;
    };

    pub const ImplementedClass = enum {
        pub const Key: i32 = 0;
        pub const Certificate: i32 = 1;
        pub const Socket: i32 = 2;
        pub const DiffieHellman: i32 = 3;
        pub const EllipticCurve: i32 = 4;
        pub const Dtls: i32 = 5;
        pub const DtlsCookie: i32 = 6;
    };

    pub const SupportedFeature = enum {
        pub const CertificateVerification: i32 = 0;
        pub const ClientSideAlpn: i32 = 1;
        pub const ServerSideAlpn: i32 = 2;
        pub const Ocsp: i32 = 3;
        pub const Psk: i32 = 4;
        pub const SessionTicket: i32 = 5;
        pub const Alerts: i32 = 6;
    };
};
