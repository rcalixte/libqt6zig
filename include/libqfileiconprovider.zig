const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractfileiconprovider_enums = @import("libqabstractfileiconprovider.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfileiconprovider.html
pub const qfileiconprovider = struct {
    /// New constructs a new QFileIconProvider object.
    ///
    ///
    pub fn New() QtC.QFileIconProvider {
        return qtc.QFileIconProvider_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ``` self: QtC.QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType ```
    pub fn Icon(self: ?*anyopaque, typeVal: i32) QtC.QIcon {
        return qtc.QFileIconProvider_Icon(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType) callconv(.c) QtC.QIcon ```
    pub fn OnIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType ```
    pub fn QBaseIcon(self: ?*anyopaque, typeVal: i32) QtC.QIcon {
        return qtc.QFileIconProvider_QBaseIcon(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ``` self: QtC.QFileIconProvider, info: QtC.QFileInfo ```
    pub fn Icon2(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_Icon2(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, info: QtC.QFileInfo) callconv(.c) QtC.QIcon ```
    pub fn OnIcon2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFileIconProvider, info: QtC.QFileInfo ```
    pub fn QBaseIcon2(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_QBaseIcon2(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, param1: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn Type(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileIconProvider_Type(@ptrCast(self), @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, param1: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn QBaseType(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileIconProvider_QBaseType(@ptrCast(self), @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, param1: QtC.QFileInfo) callconv(.c) [*:0]const u8 ```
    pub fn OnType(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QFileIconProvider_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option ```
    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFileIconProvider_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option ```
    pub fn QBaseSetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFileIconProvider_QBaseSetOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option) callconv(.c) void ```
    pub fn OnSetOptions(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFileIconProvider_OnSetOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider ```
    ///
    /// Returns: ``` flag of qabstractfileiconprovider_enums.Option ```
    pub fn Options(self: ?*anyopaque) i32 {
        return qtc.QFileIconProvider_Options(@ptrCast(self));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider ```
    ///
    /// Returns: ``` flag of qabstractfileiconprovider_enums.Option ```
    pub fn QBaseOptions(self: ?*anyopaque) i32 {
        return qtc.QFileIconProvider_QBaseOptions(@ptrCast(self));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn () callconv(.c) i32 ```
    pub fn OnOptions(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QFileIconProvider_OnOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFileIconProvider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileIconProvider_Delete(@ptrCast(self));
    }
};
