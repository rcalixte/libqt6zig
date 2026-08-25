const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSslCertificate = @import("libqt6").QSslCertificate;
const QUrl = @import("libqt6").QUrl;
const qwebenginecertificateerror_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html)
pub const QWebEngineCertificateError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineCertificateError,

    pub const _is_QWebEngineCertificateError = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineCertificateError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineCertificateError `
    ///
    pub fn new(other: anytype) QWebEngineCertificateError {
        comptime _ = @TypeOf(other)._is_QWebEngineCertificateError;
        return .{ .ptr = qtc.QWebEngineCertificateError_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    /// ` other: QWebEngineCertificateError `
    ///
    pub fn operatorAssign(self: QWebEngineCertificateError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineCertificateError;
        qtc.QWebEngineCertificateError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginecertificateerror_enums.Type `
    ///
    pub fn type0(self: QWebEngineCertificateError) i32 {
        return qtc.QWebEngineCertificateError_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn url(self: QWebEngineCertificateError) QUrl {
        return .{ .ptr = qtc.QWebEngineCertificateError_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isOverridable` instead
    ///
    pub const IsOverridable = isOverridable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isOverridable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn isOverridable(self: QWebEngineCertificateError) bool {
        return qtc.QWebEngineCertificateError_IsOverridable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QWebEngineCertificateError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineCertificateError_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineCertificateError.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isMainFrame` instead
    ///
    pub const IsMainFrame = isMainFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isMainFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn isMainFrame(self: QWebEngineCertificateError) bool {
        return qtc.QWebEngineCertificateError_IsMainFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defer0` instead
    ///
    pub const Defer = defer0;

    pub const @"defer" = defer0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#defer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn defer0(self: QWebEngineCertificateError) void {
        qtc.QWebEngineCertificateError_Defer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rejectCertificate` instead
    ///
    pub const RejectCertificate = rejectCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#rejectCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn rejectCertificate(self: QWebEngineCertificateError) void {
        qtc.QWebEngineCertificateError_RejectCertificate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `acceptCertificate` instead
    ///
    pub const AcceptCertificate = acceptCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#acceptCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn acceptCertificate(self: QWebEngineCertificateError) void {
        qtc.QWebEngineCertificateError_AcceptCertificate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `certificateChain` instead
    ///
    pub const CertificateChain = certificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#certificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn certificateChain(self: QWebEngineCertificateError, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QWebEngineCertificateError_CertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QWebEngineCertificateError.certificateChain: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#dtor.QWebEngineCertificateError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineCertificateError `
    ///
    pub fn delete(self: QWebEngineCertificateError) void {
        qtc.QWebEngineCertificateError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const SslPinnedKeyNotInCertificateChain: i32 = -150;
        pub const CertificateCommonNameInvalid: i32 = -200;
        pub const CertificateDateInvalid: i32 = -201;
        pub const CertificateAuthorityInvalid: i32 = -202;
        pub const CertificateContainsErrors: i32 = -203;
        pub const CertificateNoRevocationMechanism: i32 = -204;
        pub const CertificateUnableToCheckRevocation: i32 = -205;
        pub const CertificateRevoked: i32 = -206;
        pub const CertificateInvalid: i32 = -207;
        pub const CertificateWeakSignatureAlgorithm: i32 = -208;
        pub const CertificateNonUniqueName: i32 = -210;
        pub const CertificateWeakKey: i32 = -211;
        pub const CertificateNameConstraintViolation: i32 = -212;
        pub const CertificateValidityTooLong: i32 = -213;
        pub const CertificateTransparencyRequired: i32 = -214;
        pub const CertificateSymantecLegacy: i32 = -215;
        pub const CertificateKnownInterceptionBlocked: i32 = -217;
        pub const SslObsoleteVersion: i32 = -218;
    };
};
