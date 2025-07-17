const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsslerror_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslerror.html
pub const qsslerror = struct {
    /// New constructs a new QSslError object.
    ///
    ///
    pub fn New() QtC.QSslError {
        return qtc.QSslError_new();
    }

    /// New2 constructs a new QSslError object.
    ///
    /// ``` errorVal: qsslerror_enums.SslError ```
    pub fn New2(errorVal: i64) QtC.QSslError {
        return qtc.QSslError_new2(@intCast(errorVal));
    }

    /// New3 constructs a new QSslError object.
    ///
    /// ``` errorVal: qsslerror_enums.SslError, certificate: QtC.QSslCertificate ```
    pub fn New3(errorVal: i64, certificate: ?*anyopaque) QtC.QSslError {
        return qtc.QSslError_new3(@intCast(errorVal), @ptrCast(certificate));
    }

    /// New4 constructs a new QSslError object.
    ///
    /// ``` other: QtC.QSslError ```
    pub fn New4(other: ?*anyopaque) QtC.QSslError {
        return qtc.QSslError_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#swap)
    ///
    /// ``` self: QtC.QSslError, other: QtC.QSslError ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslError_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator-eq)
    ///
    /// ``` self: QtC.QSslError, other: QtC.QSslError ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslError_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QSslError, other: QtC.QSslError ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslError_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator-not-eq)
    ///
    /// ``` self: QtC.QSslError, other: QtC.QSslError ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSslError_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#error)
    ///
    /// ``` self: QtC.QSslError ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QSslError_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#errorString)
    ///
    /// ``` self: QtC.QSslError, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslError_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslerror.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#certificate)
    ///
    /// ``` self: QtC.QSslError ```
    pub fn Certificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslError_Certificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#dtor.QSslError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslError ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsslerror.html#types
pub const enums = struct {
    pub const SslError = enum {
        pub const NoError: i32 = 0;
        pub const UnableToGetIssuerCertificate: i32 = 1;
        pub const UnableToDecryptCertificateSignature: i32 = 2;
        pub const UnableToDecodeIssuerPublicKey: i32 = 3;
        pub const CertificateSignatureFailed: i32 = 4;
        pub const CertificateNotYetValid: i32 = 5;
        pub const CertificateExpired: i32 = 6;
        pub const InvalidNotBeforeField: i32 = 7;
        pub const InvalidNotAfterField: i32 = 8;
        pub const SelfSignedCertificate: i32 = 9;
        pub const SelfSignedCertificateInChain: i32 = 10;
        pub const UnableToGetLocalIssuerCertificate: i32 = 11;
        pub const UnableToVerifyFirstCertificate: i32 = 12;
        pub const CertificateRevoked: i32 = 13;
        pub const InvalidCaCertificate: i32 = 14;
        pub const PathLengthExceeded: i32 = 15;
        pub const InvalidPurpose: i32 = 16;
        pub const CertificateUntrusted: i32 = 17;
        pub const CertificateRejected: i32 = 18;
        pub const SubjectIssuerMismatch: i32 = 19;
        pub const AuthorityIssuerSerialNumberMismatch: i32 = 20;
        pub const NoPeerCertificate: i32 = 21;
        pub const HostNameMismatch: i32 = 22;
        pub const NoSslSupport: i32 = 23;
        pub const CertificateBlacklisted: i32 = 24;
        pub const CertificateStatusUnknown: i32 = 25;
        pub const OcspNoResponseFound: i32 = 26;
        pub const OcspMalformedRequest: i32 = 27;
        pub const OcspMalformedResponse: i32 = 28;
        pub const OcspInternalError: i32 = 29;
        pub const OcspTryLater: i32 = 30;
        pub const OcspSigRequred: i32 = 31;
        pub const OcspUnauthorized: i32 = 32;
        pub const OcspResponseCannotBeTrusted: i32 = 33;
        pub const OcspResponseCertIdUnknown: i32 = 34;
        pub const OcspResponseExpired: i32 = 35;
        pub const OcspStatusUnknown: i32 = 36;
        pub const UnspecifiedError: i32 = -1;
    };
};
