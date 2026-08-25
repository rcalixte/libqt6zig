const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFileInfo = @import("libqt6").QFileInfo;
const QIcon = @import("libqt6").QIcon;
const qabstractfileiconprovider_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html)
pub const QAbstractFileIconProvider = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractFileIconProvider,

    pub const _is_QAbstractFileIconProvider = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractFileIconProvider object in C++ memory
    ///
    pub fn new() QAbstractFileIconProvider {
        return .{ .ptr = qtc.QAbstractFileIconProvider_new() };
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` param1: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn icon(self: QAbstractFileIconProvider, param1: i32) QIcon {
        return .{ .ptr = qtc.QAbstractFileIconProvider_Icon(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onIcon` instead
    ///
    pub const OnIcon = onIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` callback: *const fn (self: QAbstractFileIconProvider, param1: qabstractfileiconprovider_enums.IconType) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIcon(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, i32) callconv(.c) QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon` instead
    ///
    pub const SuperIcon = superIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` param1: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn superIcon(self: QAbstractFileIconProvider, param1: i32) QIcon {
        return .{ .ptr = qtc.QAbstractFileIconProvider_SuperIcon(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `icon2` instead
    ///
    pub const Icon2 = icon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn icon2(self: QAbstractFileIconProvider, param1: anytype) QIcon {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        return .{ .ptr = qtc.QAbstractFileIconProvider_Icon2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onIcon2` instead
    ///
    pub const OnIcon2 = onIcon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` callback: *const fn (self: QAbstractFileIconProvider, param1: QFileInfo) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIcon2(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, QFileInfo) callconv(.c) QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon2` instead
    ///
    pub const SuperIcon2 = superIcon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn superIcon2(self: QAbstractFileIconProvider, param1: anytype) QIcon {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        return .{ .ptr = qtc.QAbstractFileIconProvider_SuperIcon2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn type0(self: QAbstractFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QAbstractFileIconProvider_Type(@ptrCast(self.ptr), @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractFileIconProvider.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` callback: *const fn (self: QAbstractFileIconProvider, param1: QFileInfo) callconv(.c) [*:0]const u8 `
    ///
    pub fn onType(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, QFileInfo) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractFileIconProvider_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn superType(self: QAbstractFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QAbstractFileIconProvider_SuperType(@ptrCast(self.ptr), @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractFileIconProvider.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` _options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn setOptions(self: QAbstractFileIconProvider, _options: i32) void {
        qtc.QAbstractFileIconProvider_SetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `onSetOptions` instead
    ///
    pub const OnSetOptions = onSetOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` callback: *const fn (self: QAbstractFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option) callconv(.c) void `
    ///
    pub fn onSetOptions(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, i32) callconv(.c) void) void {
        qtc.QAbstractFileIconProvider_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOptions` instead
    ///
    pub const SuperSetOptions = superSetOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` _options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn superSetOptions(self: QAbstractFileIconProvider, _options: i32) void {
        qtc.QAbstractFileIconProvider_SuperSetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn options(self: QAbstractFileIconProvider) i32 {
        return qtc.QAbstractFileIconProvider_Options(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOptions` instead
    ///
    pub const OnOptions = onOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onOptions(self: QAbstractFileIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractFileIconProvider_OnOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOptions` instead
    ///
    pub const SuperOptions = superOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn superOptions(self: QAbstractFileIconProvider) i32 {
        return qtc.QAbstractFileIconProvider_SuperOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#dtor.QAbstractFileIconProvider)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    pub fn delete(self: QAbstractFileIconProvider) void {
        qtc.QAbstractFileIconProvider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#public-types)
pub const enums = struct {
    pub const IconType = enum {
        pub const Computer: i32 = 0;
        pub const Desktop: i32 = 1;
        pub const Trashcan: i32 = 2;
        pub const Network: i32 = 3;
        pub const Drive: i32 = 4;
        pub const Folder: i32 = 5;
        pub const File: i32 = 6;
    };

    pub const Option = enum {
        pub const DontUseCustomDirectoryIcons: i32 = 1;
    };
};
