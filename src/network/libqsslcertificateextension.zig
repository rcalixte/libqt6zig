const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html)
pub const QSslCertificateExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslCertificateExtension,

    pub const _is_QSslCertificateExtension = {};

    /// New constructs a new QSslCertificateExtension object.
    ///
    pub fn New() QSslCertificateExtension {
        return .{ .ptr = qtc.QSslCertificateExtension_new() };
    }

    /// New2 constructs a new QSslCertificateExtension object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslCertificateExtension `
    ///
    pub fn New2(other: anytype) QSslCertificateExtension {
        comptime _ = @TypeOf(other)._is_QSslCertificateExtension;
        return .{ .ptr = qtc.QSslCertificateExtension_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` other: QSslCertificateExtension `
    ///
    pub fn OperatorAssign(self: QSslCertificateExtension, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificateExtension;
        qtc.QSslCertificateExtension_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` other: QSslCertificateExtension `
    ///
    pub fn Swap(self: QSslCertificateExtension, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificateExtension;
        qtc.QSslCertificateExtension_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#oid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Oid(self: QSslCertificateExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificateExtension_Oid(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificateextension.Oid: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QSslCertificateExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificateExtension_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslcertificateextension.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn Value(self: QSslCertificateExtension) QVariant {
        return .{ .ptr = qtc.QSslCertificateExtension_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#isCritical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn IsCritical(self: QSslCertificateExtension) bool {
        return qtc.QSslCertificateExtension_IsCritical(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn IsSupported(self: QSslCertificateExtension) bool {
        return qtc.QSslCertificateExtension_IsSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#dtor.QSslCertificateExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn Delete(self: QSslCertificateExtension) void {
        qtc.QSslCertificateExtension_Delete(@ptrCast(self.ptr));
    }
};
