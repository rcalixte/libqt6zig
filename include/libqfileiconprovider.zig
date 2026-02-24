const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractfileiconprovider_enums = @import("libqabstractfileiconprovider.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html)
pub const qfileiconprovider = struct {
    /// New constructs a new QFileIconProvider object.
    ///
    pub fn New() QtC.QFileIconProvider {
        return qtc.QFileIconProvider_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` typeVal: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn Icon(self: ?*anyopaque, typeVal: i32) QtC.QIcon {
        return qtc.QFileIconProvider_Icon(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` callback: *const fn (self: QtC.QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType) callconv(.c) QtC.QIcon `
    ///
    pub fn OnIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIcon` instead
    ///
    pub const QBaseIcon = SuperIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` typeVal: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn SuperIcon(self: ?*anyopaque, typeVal: i32) QtC.QIcon {
        return qtc.QFileIconProvider_SuperIcon(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` info: QtC.QFileInfo `
    ///
    pub fn Icon2(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_Icon2(@ptrCast(self), @ptrCast(info));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` callback: *const fn (self: QtC.QFileIconProvider, info: QtC.QFileInfo) callconv(.c) QtC.QIcon `
    ///
    pub fn OnIcon2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QFileIconProvider_OnIcon2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIcon2` instead
    ///
    pub const QBaseIcon2 = SuperIcon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` info: QtC.QFileInfo `
    ///
    pub fn SuperIcon2(self: ?*anyopaque, info: ?*anyopaque) QtC.QIcon {
        return qtc.QFileIconProvider_SuperIcon2(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` param1: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileIconProvider_Type(@ptrCast(self), @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` param1: QtC.QFileInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperType(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFileIconProvider_SuperType(@ptrCast(self), @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileIconProvider`
    ///
    /// ` callback: *const fn (self: QtC.QFileIconProvider, param1: QtC.QFileInfo) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QFileIconProvider_OnType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFileIconProvider_SetOptions(@ptrCast(self), @bitCast(options));
    }

    /// ### DEPRECATED: Use `SuperSetOptions` instead
    ///
    pub const QBaseSetOptions = SuperSetOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ` options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SuperSetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFileIconProvider_SuperSetOptions(@ptrCast(self), @bitCast(options));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileIconProvider`
    ///
    /// ` callback: *const fn (self: QtC.QFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option) callconv(.c) void `
    ///
    pub fn OnSetOptions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFileIconProvider_OnSetOptions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn Options(self: ?*anyopaque) i32 {
        return qtc.QFileIconProvider_Options(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperOptions` instead
    ///
    pub const QBaseOptions = SuperOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SuperOptions(self: ?*anyopaque) i32 {
        return qtc.QFileIconProvider_SuperOptions(@ptrCast(self));
    }

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFileIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnOptions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QFileIconProvider_OnOptions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFileIconProvider `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QFileIconProvider_Delete(@ptrCast(self));
    }
};
