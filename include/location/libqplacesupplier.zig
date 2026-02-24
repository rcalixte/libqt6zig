const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html)
pub const qplacesupplier = struct {
    /// New constructs a new QPlaceSupplier object.
    ///
    pub fn New() QtC.QPlaceSupplier {
        return qtc.QPlaceSupplier_new();
    }

    /// New2 constructs a new QPlaceSupplier object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceSupplier `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceSupplier {
        return qtc.QPlaceSupplier_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` other: QtC.QPlaceSupplier `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceSupplier_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` other: QtC.QPlaceSupplier `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceSupplier_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSupplier_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesupplier.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QPlaceSupplier_SetName(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#supplierId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupplierId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSupplier_SupplierId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesupplier.SupplierId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setSupplierId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetSupplierId(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceSupplier_SetSupplierId(@ptrCast(self), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QPlaceSupplier_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` data: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QPlaceSupplier_SetUrl(@ptrCast(self), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QPlaceIcon {
        return qtc.QPlaceSupplier_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QPlaceSupplier_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPlaceSupplier_IsEmpty(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#dtor.QPlaceSupplier)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceSupplier `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPlaceSupplier_Delete(@ptrCast(self));
    }
};
