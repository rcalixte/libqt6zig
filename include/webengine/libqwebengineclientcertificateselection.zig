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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineClientCertificateSelection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineClientCertificateSelection `
    ///
    pub fn new(param1: anytype) QWebEngineClientCertificateSelection {
        comptime _ = @TypeOf(param1)._is_QWebEngineClientCertificateSelection;
        return .{ .ptr = qtc.QWebEngineClientCertificateSelection_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    /// ` param1: QWebEngineClientCertificateSelection `
    ///
    pub fn operatorAssign(self: QWebEngineClientCertificateSelection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineClientCertificateSelection;
        qtc.QWebEngineClientCertificateSelection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `host` instead
    ///
    pub const Host = host;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    pub fn host(self: QWebEngineClientCertificateSelection) QUrl {
        return .{ .ptr = qtc.QWebEngineClientCertificateSelection_Host(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `select` instead
    ///
    pub const Select = select;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn select(self: QWebEngineClientCertificateSelection, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QWebEngineClientCertificateSelection_Select(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### DEPRECATED: Use `selectNone` instead
    ///
    pub const SelectNone = selectNone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#selectNone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    pub fn selectNone(self: QWebEngineClientCertificateSelection) void {
        qtc.QWebEngineClientCertificateSelection_SelectNone(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `certificates` instead
    ///
    pub const Certificates = certificates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#certificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn certificates(self: QWebEngineClientCertificateSelection, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QWebEngineClientCertificateSelection_Certificates(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QWebEngineClientCertificateSelection.certificates: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#dtor.QWebEngineClientCertificateSelection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineClientCertificateSelection `
    ///
    pub fn delete(self: QWebEngineClientCertificateSelection) void {
        qtc.QWebEngineClientCertificateSelection_Delete(@ptrCast(self.ptr));
    }
};
