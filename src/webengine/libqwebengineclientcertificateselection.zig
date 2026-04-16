const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSslCertificate = @import("libqt6").QSslCertificate;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html)
pub const QWebEngineClientCertificateSelection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineClientCertificateSelection,

    pub const _is_QWebEngineClientCertificateSelection = {};

    /// New constructs a new QWebEngineClientCertificateSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineClientCertificateSelection `
    ///
    pub fn New(param1: anytype) QWebEngineClientCertificateSelection {
        comptime _ = @TypeOf(param1)._is_QWebEngineClientCertificateSelection;
        return .{ .ptr = qtc.QWebEngineClientCertificateSelection_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    /// ` param1: QWebEngineClientCertificateSelection `
    ///
    pub fn OperatorAssign(self: QWebEngineClientCertificateSelection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineClientCertificateSelection;
        qtc.QWebEngineClientCertificateSelection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    pub fn Host(self: QWebEngineClientCertificateSelection) QUrl {
        return .{ .ptr = qtc.QWebEngineClientCertificateSelection_Host(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn Select(self: QWebEngineClientCertificateSelection, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QWebEngineClientCertificateSelection_Select(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#selectNone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    pub fn SelectNone(self: QWebEngineClientCertificateSelection) void {
        qtc.QWebEngineClientCertificateSelection_SelectNone(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#certificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Certificates(self: QWebEngineClientCertificateSelection, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QWebEngineClientCertificateSelection_Certificates(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qwebengineclientcertificateselection.Certificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#dtor.QWebEngineClientCertificateSelection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    pub fn Delete(self: QWebEngineClientCertificateSelection) void {
        qtc.QWebEngineClientCertificateSelection_Delete(@ptrCast(self.ptr));
    }
};
