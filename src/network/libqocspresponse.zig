const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSslCertificate = @import("libqt6").QSslCertificate;
const qocspresponse_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html)
pub const QOcspResponse = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOcspResponse,

    pub const _is_QOcspResponse = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOcspResponse object in C++ memory
    ///
    pub fn new() QOcspResponse {
        return .{ .ptr = qtc.QOcspResponse_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOcspResponse object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOcspResponse `
    ///
    pub fn new2(other: anytype) QOcspResponse {
        comptime _ = @TypeOf(other)._is_QOcspResponse;
        return .{ .ptr = qtc.QOcspResponse_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    /// ` other: QOcspResponse `
    ///
    pub fn operatorAssign(self: QOcspResponse, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOcspResponse;
        qtc.QOcspResponse_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `certificateStatus` instead
    ///
    pub const CertificateStatus = certificateStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#certificateStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    /// ## Returns:
    ///
    /// ` qocspresponse_enums.QOcspCertificateStatus `
    ///
    pub fn certificateStatus(self: QOcspResponse) i32 {
        return qtc.QOcspResponse_CertificateStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revocationReason` instead
    ///
    pub const RevocationReason = revocationReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#revocationReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    /// ## Returns:
    ///
    /// ` qocspresponse_enums.QOcspRevocationReason `
    ///
    pub fn revocationReason(self: QOcspResponse) i32 {
        return qtc.QOcspResponse_RevocationReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `responder` instead
    ///
    pub const Responder = responder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#responder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    pub fn responder(self: QOcspResponse) QSslCertificate {
        return .{ .ptr = qtc.QOcspResponse_Responder(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `subject` instead
    ///
    pub const Subject = subject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    pub fn subject(self: QOcspResponse) QSslCertificate {
        return .{ .ptr = qtc.QOcspResponse_Subject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    /// ` other: QOcspResponse `
    ///
    pub fn swap(self: QOcspResponse, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOcspResponse;
        qtc.QOcspResponse_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#dtor.QOcspResponse)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOcspResponse `
    ///
    pub fn delete(self: QOcspResponse) void {
        qtc.QOcspResponse_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#public-types)
pub const enums = struct {
    pub const QOcspCertificateStatus = enum {
        pub const Good: i32 = 0;
        pub const Revoked: i32 = 1;
        pub const Unknown: i32 = 2;
    };

    pub const QOcspRevocationReason = enum {
        pub const None: i32 = -1;
        pub const Unspecified: i32 = 0;
        pub const KeyCompromise: i32 = 1;
        pub const CACompromise: i32 = 2;
        pub const AffiliationChanged: i32 = 3;
        pub const Superseded: i32 = 4;
        pub const CessationOfOperation: i32 = 5;
        pub const CertificateHold: i32 = 6;
        pub const RemoveFromCRL: i32 = 7;
    };
};
