const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractfileiconprovider_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html
pub const qabstractfileiconprovider = struct {
    /// New constructs a new QAbstractFileIconProvider object.
    ///
    ///
    pub fn New() QtC.QAbstractFileIconProvider {
        return qtc.QAbstractFileIconProvider_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, param1: qabstractfileiconprovider_enums.IconType ```
    pub fn Icon(self: ?*anyopaque, param1: i32) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_Icon(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, slot: fn (self: QtC.QAbstractFileIconProvider, param1: qabstractfileiconprovider_enums.IconType) callconv(.c) QtC.QIcon ```
    pub fn OnIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, param1: qabstractfileiconprovider_enums.IconType ```
    pub fn QBaseIcon(self: ?*anyopaque, param1: i32) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_QBaseIcon(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo ```
    pub fn Icon2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_Icon2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, slot: fn (self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo) callconv(.c) QtC.QIcon ```
    pub fn OnIcon2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo ```
    pub fn QBaseIcon2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_QBaseIcon2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn Type(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractFileIconProvider_Type(@ptrCast(self), @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, slot: fn (self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo) callconv(.c) []const u8 ```
    pub fn OnType(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []const u8) void {
        qtc.QAbstractFileIconProvider_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, param1: QtC.QFileInfo, allocator: std.mem.Allocator ```
    pub fn QBaseType(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractFileIconProvider_QBaseType(@ptrCast(self), @ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option ```
    pub fn SetOptions(self: ?*anyopaque, options: i64) void {
        qtc.QAbstractFileIconProvider_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, slot: fn (self: QtC.QAbstractFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option) callconv(.c) void ```
    pub fn OnSetOptions(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QAbstractFileIconProvider_OnSetOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, options: flag of qabstractfileiconprovider_enums.Option ```
    pub fn QBaseSetOptions(self: ?*anyopaque, options: i64) void {
        qtc.QAbstractFileIconProvider_QBaseSetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// ``` self: QtC.QAbstractFileIconProvider ```
    ///
    /// Returns: ``` flag of qabstractfileiconprovider_enums.Option ```
    pub fn Options(self: ?*anyopaque) i64 {
        return qtc.QAbstractFileIconProvider_Options(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractFileIconProvider, slot: fn () callconv(.c) i64 ```
    pub fn OnOptions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QAbstractFileIconProvider_OnOptions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractFileIconProvider ```
    ///
    /// Returns: ``` flag of qabstractfileiconprovider_enums.Option ```
    pub fn QBaseOptions(self: ?*anyopaque) i64 {
        return qtc.QAbstractFileIconProvider_QBaseOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#dtor.QAbstractFileIconProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractFileIconProvider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractFileIconProvider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html#types
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
