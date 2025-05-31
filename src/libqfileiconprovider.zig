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
    pub fn Icon(self: ?*anyopaque, typeVal: i64) QtC.QIcon {
        return qtc.QFileIconProvider_Icon(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType) callconv(.c) QtC.QIcon ```
    pub fn OnIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType ```
    pub fn QBaseIcon(self: ?*anyopaque, typeVal: i64) QtC.QIcon {
        return qtc.QFileIconProvider_QBaseIcon(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ``` self: QtC.QFileIconProvider, info: QtC.QFileInfo ```
    pub fn IconWithInfo(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_IconWithInfo(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, info: QtC.QFileInfo) callconv(.c) QtC.QIcon ```
    pub fn OnIconWithInfo(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIconWithInfo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFileIconProvider, info: QtC.QFileInfo ```
    pub fn QBaseIconWithInfo(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_QBaseIconWithInfo(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ``` self: QtC.QFileIconProvider, param1: QtC.QFileInfo ```
    pub fn IconWithQFileInfo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_IconWithQFileInfo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, slot: fn (self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo) callconv(.c) QtC.QIcon ```
    pub fn OnIconWithQFileInfo(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QAbstractFileIconProvider_OnIconWithQFileInfo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFileIconProvider, param1: QtC.QFileInfo ```
    pub fn QBaseIconWithQFileInfo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_QBaseIconWithQFileInfo(@ptrCast(self), @ptrCast(param1));
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
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileiconprovider.Type: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
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
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileiconprovider.Type: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, param1: QtC.QFileInfo) callconv(.c) []const u8 ```
    pub fn OnType(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        qtc.QFileIconProvider_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, options: i32 ```
    pub fn SetOptions(self: ?*anyopaque, options: i64) void {
        qtc.QFileIconProvider_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, options: i32 ```
    pub fn QBaseSetOptions(self: ?*anyopaque, options: i64) void {
        qtc.QFileIconProvider_QBaseSetOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn (self: QtC.QFileIconProvider, options: i32) callconv(.c) void ```
    pub fn OnSetOptions(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QFileIconProvider_OnSetOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider ```
    pub fn Options(self: ?*anyopaque) i64 {
        return qtc.QFileIconProvider_Options(@ptrCast(self));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider ```
    pub fn QBaseOptions(self: ?*anyopaque) i64 {
        return qtc.QFileIconProvider_QBaseOptions(@ptrCast(self));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFileIconProvider, slot: fn () callconv(.c) i64 ```
    pub fn OnOptions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
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
