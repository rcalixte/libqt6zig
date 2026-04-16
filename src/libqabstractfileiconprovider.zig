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

    /// New constructs a new QAbstractFileIconProvider object.
    ///
    pub fn New() QAbstractFileIconProvider {
        return .{ .ptr = qtc.QAbstractFileIconProvider_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` param1: qabstractfileiconprovider_enums.IconType `
    ///
    pub fn Icon(self: QAbstractFileIconProvider, param1: i32) QIcon {
        return .{ .ptr = qtc.QAbstractFileIconProvider_Icon(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnIcon(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, i32) callconv(.c) QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIcon` instead
    ///
    pub const QBaseIcon = SuperIcon;

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
    pub fn SuperIcon(self: QAbstractFileIconProvider, param1: i32) QIcon {
        return .{ .ptr = qtc.QAbstractFileIconProvider_SuperIcon(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` param1: QFileInfo `
    ///
    pub fn Icon2(self: QAbstractFileIconProvider, param1: anytype) QIcon {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        return .{ .ptr = qtc.QAbstractFileIconProvider_Icon2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn OnIcon2(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, QFileInfo) callconv(.c) QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIcon2` instead
    ///
    pub const QBaseIcon2 = SuperIcon2;

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
    pub fn SuperIcon2(self: QAbstractFileIconProvider, param1: anytype) QIcon {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        return .{ .ptr = qtc.QAbstractFileIconProvider_SuperIcon2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn Type(self: QAbstractFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QAbstractFileIconProvider_Type(@ptrCast(self.ptr), @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` callback: *const fn (self: QAbstractFileIconProvider, param1: QFileInfo) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnType(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, QFileInfo) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractFileIconProvider_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

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
    pub fn SuperType(self: QAbstractFileIconProvider, allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QFileInfo;
        var _str = qtc.QAbstractFileIconProvider_SuperType(@ptrCast(self.ptr), @ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractfileiconprovider.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SetOptions(self: QAbstractFileIconProvider, options: i32) void {
        qtc.QAbstractFileIconProvider_SetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

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
    pub fn OnSetOptions(self: QAbstractFileIconProvider, callback: *const fn (QAbstractFileIconProvider, i32) callconv(.c) void) void {
        qtc.QAbstractFileIconProvider_OnSetOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOptions` instead
    ///
    pub const QBaseSetOptions = SuperSetOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    /// ` options: flag of qabstractfileiconprovider_enums.Option `
    ///
    pub fn SuperSetOptions(self: QAbstractFileIconProvider, options: i32) void {
        qtc.QAbstractFileIconProvider_SuperSetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

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
    pub fn Options(self: QAbstractFileIconProvider) i32 {
        return qtc.QAbstractFileIconProvider_Options(@ptrCast(self.ptr));
    }

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
    pub fn OnOptions(self: QAbstractFileIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractFileIconProvider_OnOptions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOptions` instead
    ///
    pub const QBaseOptions = SuperOptions;

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
    pub fn SuperOptions(self: QAbstractFileIconProvider) i32 {
        return qtc.QAbstractFileIconProvider_SuperOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#dtor.QAbstractFileIconProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractFileIconProvider `
    ///
    pub fn Delete(self: QAbstractFileIconProvider) void {
        qtc.QAbstractFileIconProvider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#public-types)
pub const enums = struct {
    pub const IconType = enum(i32) {
        pub const Computer: i32 = 0;
        pub const Desktop: i32 = 1;
        pub const Trashcan: i32 = 2;
        pub const Network: i32 = 3;
        pub const Drive: i32 = 4;
        pub const Folder: i32 = 5;
        pub const File: i32 = 6;
    };

    pub const Option = enum(i32) {
        pub const DontUseCustomDirectoryIcons: i32 = 1;
    };
};
