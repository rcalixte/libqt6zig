const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSslCertificate = @import("libqt6").QSslCertificate;
const QSslKey = @import("libqt6").QSslKey;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html)
pub const QWebEngineClientCertificateStore = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineClientCertificateStore,

    pub const _is_QWebEngineClientCertificateStore = {};

    /// ### DEPRECATED: Use `add` instead
    ///
    pub const Add = add;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateStore `
    ///
    /// ` certificate: QSslCertificate `
    ///
    /// ` privateKey: QSslKey `
    ///
    pub fn add(self: QWebEngineClientCertificateStore, certificate: anytype, privateKey: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        comptime _ = @TypeOf(privateKey)._is_QSslKey;
        qtc.QWebEngineClientCertificateStore_Add(@ptrCast(self.ptr), @ptrCast(certificate.ptr), @ptrCast(privateKey.ptr));
    }

    /// ### DEPRECATED: Use `certificates` instead
    ///
    pub const Certificates = certificates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#certificates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn certificates(self: QWebEngineClientCertificateStore, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QWebEngineClientCertificateStore_Certificates(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QWebEngineClientCertificateStore.certificates: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateStore `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn remove(self: QWebEngineClientCertificateStore, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QWebEngineClientCertificateStore_Remove(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineClientCertificateStore `
    ///
    pub fn clear(self: QWebEngineClientCertificateStore) void {
        qtc.QWebEngineClientCertificateStore_Clear(@ptrCast(self.ptr));
    }
};
