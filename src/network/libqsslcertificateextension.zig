const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslcertificateextension.html
pub const qsslcertificateextension = struct {
    /// New constructs a new QSslCertificateExtension object.
    ///
    ///
    pub fn New() QtC.QSslCertificateExtension {
        return qtc.QSslCertificateExtension_new();
    }

    /// New2 constructs a new QSslCertificateExtension object.
    ///
    /// ``` other: QtC.QSslCertificateExtension ```
    pub fn New2(other: ?*anyopaque) QtC.QSslCertificateExtension {
        return qtc.QSslCertificateExtension_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#operator=)
    ///
    /// ``` self: QtC.QSslCertificateExtension, other: QtC.QSslCertificateExtension ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificateExtension_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#swap)
    ///
    /// ``` self: QtC.QSslCertificateExtension, other: QtC.QSslCertificateExtension ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslCertificateExtension_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#oid)
    ///
    /// ``` self: QtC.QSslCertificateExtension, allocator: std.mem.Allocator ```
    pub fn Oid(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificateExtension_Oid(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificateextension.Oid: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#name)
    ///
    /// ``` self: QtC.QSslCertificateExtension, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslCertificateExtension_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificateextension.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#value)
    ///
    /// ``` self: QtC.QSslCertificateExtension ```
    pub fn Value(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSslCertificateExtension_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#isCritical)
    ///
    /// ``` self: QtC.QSslCertificateExtension ```
    pub fn IsCritical(self: ?*anyopaque) bool {
        return qtc.QSslCertificateExtension_IsCritical(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#isSupported)
    ///
    /// ``` self: QtC.QSslCertificateExtension ```
    pub fn IsSupported(self: ?*anyopaque) bool {
        return qtc.QSslCertificateExtension_IsSupported(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#dtor.QSslCertificateExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslCertificateExtension ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslCertificateExtension_Delete(@ptrCast(self));
    }
};
