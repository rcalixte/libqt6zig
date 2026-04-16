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

    /// New constructs a new QFileIconProvider object.
    ///
    pub fn New() QFileIconProvider {
        return .{ .ptr = qtc.QFileIconProvider_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` typeVal: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn Icon(self: QFileIconProvider, typeVal: i32) QIcon {
        return .{ .ptr = qtc.QFileIconProvider_Icon(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

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
    pub fn OnIcon(self: QFileIconProvider, callback: *const fn (QFileIconProvider, i32) callconv(.c) QIcon) void {
        qtc.QFileIconProvider_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QFileIconProvider `
    ///
    /// ` typeVal: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn SuperIcon(self: QFileIconProvider, typeVal: i32) QIcon {
        return .{ .ptr = qtc.QFileIconProvider_SuperIcon(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFileIconProvider `
    ///
    /// ` info: QFileInfo `
    ///
    pub fn Icon2(self: QFileIconProvider, info: anytype) QIcon {
        comptime _ = @TypeOf(info)._is_QFileInfo;
        return .{ .ptr = qtc.QFileIconProvider_Icon2(@ptrCast(self.ptr), @ptrCast(info.ptr)) };
    }

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
    pub fn OnIcon2(self: QFileIconProvider, callback: *const fn (QFileIconProvider, QFileInfo) callconv(.c) QIcon) void {
        qtc.QFileIconProvider_OnIcon2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QFileIconProvider `
    ///
    /// ` info: QFileInfo `
    ///
    pub fn SuperIcon2(self: QFileIconProvider, info: anytype) QIcon {
        comptime _ = @TypeOf(info)._is_QFileInfo;
        return .{ .ptr = qtc.QFileIconProvider_SuperIcon2(@ptrCast(self.ptr), @ptrCast(info.ptr)) };
    }

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
    pub fn Type(self: QFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QFileIconProvider_Type(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QFileIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn SuperType(self: QFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QFileIconProvider_SuperType(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QFileIconProvider`
    ///
    /// ` callback: *const fn (self: QFileIconProvider, param1: QFileInfo) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnType(self: QFileIconProvider, callback: *const fn (QFileIconProvider, QFileInfo) callconv(.c) [*:0]const u8) void {
        qtc.QFileIconProvider_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SetOptions(self: QFileIconProvider, options: i32) void {
        qtc.QFileIconProvider_SetOptions(@ptrCast(self.ptr), @bitCast(options));
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
    /// ` self: QFileIconProvider `
    ///
    /// ` options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SuperSetOptions(self: QFileIconProvider, options: i32) void {
        qtc.QFileIconProvider_SuperSetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

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
    pub fn OnSetOptions(self: QFileIconProvider, callback: *const fn (QFileIconProvider, i32) callconv(.c) void) void {
        qtc.QFileIconProvider_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Options(self: QFileIconProvider) i32 {
        return qtc.QFileIconProvider_Options(@ptrCast(self.ptr));
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
    /// ` self: QFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SuperOptions(self: QFileIconProvider) i32 {
        return qtc.QFileIconProvider_SuperOptions(@ptrCast(self.ptr));
    }

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
    pub fn OnOptions(self: QFileIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.QFileIconProvider_OnOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QFileIconProvider `
    ///
    pub fn Delete(self: QFileIconProvider) void {
        qtc.QFileIconProvider_Delete(@ptrCast(self.ptr));
    }
};
