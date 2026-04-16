const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html)
pub const QPlaceSupplier = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceSupplier,

    pub const _is_QPlaceSupplier = {};

    /// New constructs a new QPlaceSupplier object.
    ///
    pub fn New() QPlaceSupplier {
        return .{ .ptr = qtc.QPlaceSupplier_new() };
    }

    /// New2 constructs a new QPlaceSupplier object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSupplier `
    ///
    pub fn New2(other: anytype) QPlaceSupplier {
        comptime _ = @TypeOf(other)._is_QPlaceSupplier;
        return .{ .ptr = qtc.QPlaceSupplier_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` other: QPlaceSupplier `
    ///
    pub fn OperatorAssign(self: QPlaceSupplier, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSupplier;
        qtc.QPlaceSupplier_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` other: QPlaceSupplier `
    ///
    pub fn Swap(self: QPlaceSupplier, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSupplier;
        qtc.QPlaceSupplier_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QPlaceSupplier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSupplier_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesupplier.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetName(self: QPlaceSupplier, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QPlaceSupplier_SetName(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#supplierId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupplierId(self: QPlaceSupplier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSupplier_SupplierId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacesupplier.SupplierId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setSupplierId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetSupplierId(self: QPlaceSupplier, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceSupplier_SetSupplierId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn Url(self: QPlaceSupplier) QUrl {
        return .{ .ptr = qtc.QPlaceSupplier_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` data: QUrl `
    ///
    pub fn SetUrl(self: QPlaceSupplier, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QUrl;
        qtc.QPlaceSupplier_SetUrl(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn Icon(self: QPlaceSupplier) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSupplier_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` icon: QPlaceIcon `
    ///
    pub fn SetIcon(self: QPlaceSupplier, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        qtc.QPlaceSupplier_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn IsEmpty(self: QPlaceSupplier) bool {
        return qtc.QPlaceSupplier_IsEmpty(@ptrCast(self.ptr));
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
    /// ` self: QPlaceSupplier `
    ///
    pub fn Delete(self: QPlaceSupplier) void {
        qtc.QPlaceSupplier_Delete(@ptrCast(self.ptr));
    }
};
