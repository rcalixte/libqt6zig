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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslCertificateExtension object in C++ memory
    ///
    pub fn new() QSslCertificateExtension {
        return .{ .ptr = qtc.QSslCertificateExtension_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslCertificateExtension object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslCertificateExtension `
    ///
    pub fn new2(other: anytype) QSslCertificateExtension {
        comptime _ = @TypeOf(other)._is_QSslCertificateExtension;
        return .{ .ptr = qtc.QSslCertificateExtension_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` other: QSslCertificateExtension `
    ///
    pub fn operatorAssign(self: QSslCertificateExtension, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificateExtension;
        qtc.QSslCertificateExtension_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` other: QSslCertificateExtension `
    ///
    pub fn swap(self: QSslCertificateExtension, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslCertificateExtension;
        qtc.QSslCertificateExtension_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `oid` instead
    ///
    pub const Oid = oid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#oid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn oid(self: QSslCertificateExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificateExtension_Oid(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCertificateExtension.oid: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QSslCertificateExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslCertificateExtension_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslCertificateExtension.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn value(self: QSslCertificateExtension) QVariant {
        return .{ .ptr = qtc.QSslCertificateExtension_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isCritical` instead
    ///
    pub const IsCritical = isCritical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#isCritical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn isCritical(self: QSslCertificateExtension) bool {
        return qtc.QSslCertificateExtension_IsCritical(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn isSupported(self: QSslCertificateExtension) bool {
        return qtc.QSslCertificateExtension_IsSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#dtor.QSslCertificateExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslCertificateExtension `
    ///
    pub fn delete(self: QSslCertificateExtension) void {
        qtc.QSslCertificateExtension_Delete(@ptrCast(self.ptr));
    }
};
