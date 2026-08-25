const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSslCertificate = @import("libqt6").QSslCertificate;
const qsslerror_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html)
pub const QSslError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslError,

    pub const _is_QSslError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslError object in C++ memory
    ///
    pub fn new() QSslError {
        return .{ .ptr = qtc.QSslError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qsslerror_enums.SslError `
    ///
    pub fn new2(errorVal: i32) QSslError {
        return .{ .ptr = qtc.QSslError_new2(@bitCast(errorVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSslError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: qsslerror_enums.SslError `
    ///
    /// ` _certificate: QSslCertificate `
    ///
    pub fn new3(errorVal: i32, _certificate: anytype) QSslError {
        comptime _ = @TypeOf(_certificate)._is_QSslCertificate;
        return .{ .ptr = qtc.QSslError_new3(@bitCast(errorVal), @ptrCast(_certificate.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSslError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslError `
    ///
    pub fn new4(other: anytype) QSslError {
        comptime _ = @TypeOf(other)._is_QSslError;
        return .{ .ptr = qtc.QSslError_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    /// ` other: QSslError `
    ///
    pub fn swap(self: QSslError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslError;
        qtc.QSslError_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    /// ` other: QSslError `
    ///
    pub fn operatorAssign(self: QSslError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslError;
        qtc.QSslError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    /// ` other: QSslError `
    ///
    pub fn operatorEqual(self: QSslError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslError;
        return qtc.QSslError_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    /// ` other: QSslError `
    ///
    pub fn operatorNotEqual(self: QSslError, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSslError;
        return qtc.QSslError_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    /// ## Returns:
    ///
    /// ` qsslerror_enums.SslError `
    ///
    pub fn error0(self: QSslError) i32 {
        return qtc.QSslError_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QSslError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslError_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslError.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `certificate` instead
    ///
    pub const Certificate = certificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#certificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslError `
    ///
    pub fn certificate(self: QSslError) QSslCertificate {
        return .{ .ptr = qtc.QSslError_Certificate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#dtor.QSslError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslError `
    ///
    pub fn delete(self: QSslError) void {
        qtc.QSslError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslerror.html#public-types)
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
