const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html)
pub const qwebengineclientcertificateselection = struct {
    /// New constructs a new QWebEngineClientCertificateSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWebEngineClientCertificateSelection `
    ///
    pub fn New(param1: ?*anyopaque) QtC.QWebEngineClientCertificateSelection {
        return qtc.QWebEngineClientCertificateSelection_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineClientCertificateSelection `
    ///
    /// ` param1: QtC.QWebEngineClientCertificateSelection `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateSelection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineClientCertificateSelection `
    ///
    pub fn Host(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineClientCertificateSelection_Host(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineClientCertificateSelection `
    ///
    /// ` certificate: QtC.QSslCertificate `
    ///
    pub fn Select(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateSelection_Select(@ptrCast(self), @ptrCast(certificate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#selectNone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineClientCertificateSelection `
    ///
    pub fn SelectNone(self: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateSelection_SelectNone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#certificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineClientCertificateSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Certificates(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QWebEngineClientCertificateSelection_Certificates(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qwebengineclientcertificateselection.Certificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#dtor.QWebEngineClientCertificateSelection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineClientCertificateSelection `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateSelection_Delete(@ptrCast(self));
    }
};
