const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFileInfo = @import("libqt6").QFileInfo;
const QIcon = @import("libqt6").QIcon;
const qabstractfileiconprovider_enums = @import("libqabstractfileiconprovider.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html)
pub const QFileIconProvider = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFileIconProvider,

    pub const _is_QFileIconProvider = {};
    pub const _is_QAbstractFileIconProvider = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFileIconProvider object in C++ memory
    ///
    pub fn new() QFileIconProvider {
        return .{ .ptr = qtc.QFileIconProvider_new() };
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` typeVal: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn icon(self: QFileIconProvider, typeVal: i32) QIcon {
        return .{ .ptr = qtc.QFileIconProvider_Icon(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `onIcon` instead
    ///
    pub const OnIcon = onIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` callback: *const fn (self: QFileIconProvider, typeVal: qabstractfileiconprovider_enums.IconType) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIcon(self: QFileIconProvider, callback: *const fn (QFileIconProvider, i32) callconv(.c) QIcon) void {
        qtc.QFileIconProvider_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon` instead
    ///
    pub const SuperIcon = superIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` typeVal: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn superIcon(self: QFileIconProvider, typeVal: i32) QIcon {
        return .{ .ptr = qtc.QFileIconProvider_SuperIcon(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `icon2` instead
    ///
    pub const Icon2 = icon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` info: QFileInfo `
    ///
    pub fn icon2(self: QFileIconProvider, info: anytype) QIcon {
        comptime _ = @TypeOf(info)._is_QFileInfo;
        return .{ .ptr = qtc.QFileIconProvider_Icon2(@ptrCast(self.ptr), @ptrCast(info.ptr)) };
    }

    /// ### DEPRECATED: Use `onIcon2` instead
    ///
    pub const OnIcon2 = onIcon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` callback: *const fn (self: QFileIconProvider, info: QFileInfo) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIcon2(self: QFileIconProvider, callback: *const fn (QFileIconProvider, QFileInfo) callconv(.c) QIcon) void {
        qtc.QFileIconProvider_OnIcon2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon2` instead
    ///
    pub const SuperIcon2 = superIcon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` info: QFileInfo `
    ///
    pub fn superIcon2(self: QFileIconProvider, info: anytype) QIcon {
        comptime _ = @TypeOf(info)._is_QFileInfo;
        return .{ .ptr = qtc.QFileIconProvider_SuperIcon2(@ptrCast(self.ptr), @ptrCast(info.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn type0(self: QFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QFileIconProvider_Type(@ptrCast(self.ptr), @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileIconProvider.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn superType(self: QFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QFileIconProvider_SuperType(@ptrCast(self.ptr), @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFileIconProvider.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileIconProvider`
    ///
    /// ` callback: *const fn (self: QFileIconProvider, param1: QFileInfo) callconv(.c) [*:0]const u8 `
    ///
    pub fn onType(self: QFileIconProvider, callback: *const fn (QFileIconProvider, QFileInfo) callconv(.c) [*:0]const u8) void {
        qtc.QFileIconProvider_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` _options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn setOptions(self: QFileIconProvider, _options: i32) void {
        qtc.QFileIconProvider_SetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `superSetOptions` instead
    ///
    pub const SuperSetOptions = superSetOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` _options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn superSetOptions(self: QFileIconProvider, _options: i32) void {
        qtc.QFileIconProvider_SuperSetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `onSetOptions` instead
    ///
    pub const OnSetOptions = onSetOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileIconProvider`
    ///
    /// ` callback: *const fn (self: QFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option) callconv(.c) void `
    ///
    pub fn onSetOptions(self: QFileIconProvider, callback: *const fn (QFileIconProvider, i32) callconv(.c) void) void {
        qtc.QFileIconProvider_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn options(self: QFileIconProvider) i32 {
        return qtc.QFileIconProvider_Options(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superOptions` instead
    ///
    pub const SuperOptions = superOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn superOptions(self: QFileIconProvider) i32 {
        return qtc.QFileIconProvider_SuperOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOptions` instead
    ///
    pub const OnOptions = onOptions;

    /// Inherited from QAbstractFileIconProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOptions(self: QFileIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.QFileIconProvider_OnOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFileIconProvider `
    ///
    pub fn delete(self: QFileIconProvider) void {
        qtc.QFileIconProvider_Delete(@ptrCast(self.ptr));
    }
};
