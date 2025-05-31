const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html
pub const qwebengineclientcertificatestore = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#add)
    ///
    /// ``` self: QtC.QWebEngineClientCertificateStore, certificate: QtC.QSslCertificate, privateKey: QtC.QSslKey ```
    pub fn Add(self: ?*anyopaque, certificate: ?*anyopaque, privateKey: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateStore_Add(@ptrCast(self), @ptrCast(certificate), @ptrCast(privateKey));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#certificates)
    ///
    /// ``` self: QtC.QWebEngineClientCertificateStore, allocator: std.mem.Allocator ```
    pub fn Certificates(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.struct_libqt_list = qtc.QWebEngineClientCertificateStore_Certificates(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qwebengineclientcertificatestore.Certificates: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#remove)
    ///
    /// ``` self: QtC.QWebEngineClientCertificateStore, certificate: QtC.QSslCertificate ```
    pub fn Remove(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateStore_Remove(@ptrCast(self), @ptrCast(certificate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#clear)
    ///
    /// ``` self: QtC.QWebEngineClientCertificateStore ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QWebEngineClientCertificateStore_Clear(@ptrCast(self));
    }
};
