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

    /// New constructs a new QOcspResponse object.
    ///
    pub fn New() QOcspResponse {
        return .{ .ptr = qtc.QOcspResponse_new() };
    }

    /// New2 constructs a new QOcspResponse object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOcspResponse `
    ///
    pub fn New2(other: anytype) QOcspResponse {
        comptime _ = @TypeOf(other)._is_QOcspResponse;
        return .{ .ptr = qtc.QOcspResponse_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    /// ` other: QOcspResponse `
    ///
    pub fn OperatorAssign(self: QOcspResponse, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOcspResponse;
        qtc.QOcspResponse_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn CertificateStatus(self: QOcspResponse) i32 {
        return qtc.QOcspResponse_CertificateStatus(@ptrCast(self.ptr));
    }

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
    pub fn RevocationReason(self: QOcspResponse) i32 {
        return qtc.QOcspResponse_RevocationReason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#responder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    pub fn Responder(self: QOcspResponse) QSslCertificate {
        return .{ .ptr = qtc.QOcspResponse_Responder(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#subject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    pub fn Subject(self: QOcspResponse) QSslCertificate {
        return .{ .ptr = qtc.QOcspResponse_Subject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOcspResponse `
    ///
    /// ` other: QOcspResponse `
    ///
    pub fn Swap(self: QOcspResponse, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOcspResponse;
        qtc.QOcspResponse_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#dtor.QOcspResponse)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOcspResponse `
    ///
    pub fn Delete(self: QOcspResponse) void {
        qtc.QOcspResponse_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qocspresponse.html#public-types)
pub const enums = struct {
    pub const QOcspCertificateStatus = enum(i32) {
        pub const Good: i32 = 0;
        pub const Revoked: i32 = 1;
        pub const Unknown: i32 = 2;
    };

    pub const QOcspRevocationReason = enum(i32) {
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
