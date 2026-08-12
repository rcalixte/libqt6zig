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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceSupplier object in C++ memory
    ///
    pub fn new() QPlaceSupplier {
        return .{ .ptr = qtc.QPlaceSupplier_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceSupplier object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceSupplier `
    ///
    pub fn new2(other: anytype) QPlaceSupplier {
        comptime _ = @TypeOf(other)._is_QPlaceSupplier;
        return .{ .ptr = qtc.QPlaceSupplier_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` other: QPlaceSupplier `
    ///
    pub fn operatorAssign(self: QPlaceSupplier, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSupplier;
        qtc.QPlaceSupplier_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` other: QPlaceSupplier `
    ///
    pub fn swap(self: QPlaceSupplier, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceSupplier;
        qtc.QPlaceSupplier_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QPlaceSupplier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSupplier_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSupplier.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` data: []const u8 `
    ///
    pub fn setName(self: QPlaceSupplier, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QPlaceSupplier_SetName(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `supplierId` instead
    ///
    pub const SupplierId = supplierId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#supplierId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supplierId(self: QPlaceSupplier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceSupplier_SupplierId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSupplier.supplierId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSupplierId` instead
    ///
    pub const SetSupplierId = setSupplierId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setSupplierId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn setSupplierId(self: QPlaceSupplier, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceSupplier_SetSupplierId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn url(self: QPlaceSupplier) QUrl {
        return .{ .ptr = qtc.QPlaceSupplier_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` data: QUrl `
    ///
    pub fn setUrl(self: QPlaceSupplier, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QUrl;
        qtc.QPlaceSupplier_SetUrl(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn icon(self: QPlaceSupplier) QPlaceIcon {
        return .{ .ptr = qtc.QPlaceSupplier_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    /// ` _icon: QPlaceIcon `
    ///
    pub fn setIcon(self: QPlaceSupplier, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QPlaceIcon;
        qtc.QPlaceSupplier_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn isEmpty(self: QPlaceSupplier) bool {
        return qtc.QPlaceSupplier_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#dtor.QPlaceSupplier)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceSupplier `
    ///
    pub fn delete(self: QPlaceSupplier) void {
        qtc.QPlaceSupplier_Delete(@ptrCast(self.ptr));
    }
};
