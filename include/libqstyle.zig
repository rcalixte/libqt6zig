const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QApplication = @import("libqt6").QApplication;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QStyleHintReturn = @import("libqt6").QStyleHintReturn;
const QStyleOption = @import("libqt6").QStyleOption;
const QStyleOptionComplex = @import("libqt6").QStyleOptionComplex;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qicon_enums = @import("libqicon.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstyle_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html)
pub const QStyle = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStyle,

    pub const _is_QStyle = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStyle object in C++ memory
    ///
    pub fn new() QStyle {
        return .{ .ptr = qtc.QStyle_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn metaObject(self: QStyle) QMetaObject {
        return .{ .ptr = qtc.QStyle_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QStyle, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QStyle_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn superMetaObject(self: QStyle) QMetaObject {
        return .{ .ptr = qtc.QStyle_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStyle_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QStyle, callback: *const fn (QStyle, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStyle_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStyle_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStyle_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QStyle, callback: *const fn (QStyle, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStyle_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyle.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStyle_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyle.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `polish` instead
    ///
    pub const Polish = polish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn polish(self: QStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyle_Polish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPolish` instead
    ///
    pub const OnPolish = onPolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, widget: QWidget) callconv(.c) void `
    ///
    pub fn onPolish(self: QStyle, callback: *const fn (QStyle, QWidget) callconv(.c) void) void {
        qtc.QStyle_OnPolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish` instead
    ///
    pub const SuperPolish = superPolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superPolish(self: QStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyle_SuperPolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `unpolish` instead
    ///
    pub const Unpolish = unpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn unpolish(self: QStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyle_Unpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onUnpolish` instead
    ///
    pub const OnUnpolish = onUnpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, widget: QWidget) callconv(.c) void `
    ///
    pub fn onUnpolish(self: QStyle, callback: *const fn (QStyle, QWidget) callconv(.c) void) void {
        qtc.QStyle_OnUnpolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnpolish` instead
    ///
    pub const SuperUnpolish = superUnpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superUnpolish(self: QStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyle_SuperUnpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `polish2` instead
    ///
    pub const Polish2 = polish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn polish2(self: QStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QStyle_Polish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### DEPRECATED: Use `onPolish2` instead
    ///
    pub const OnPolish2 = onPolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, application: QApplication) callconv(.c) void `
    ///
    pub fn onPolish2(self: QStyle, callback: *const fn (QStyle, QApplication) callconv(.c) void) void {
        qtc.QStyle_OnPolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish2` instead
    ///
    pub const SuperPolish2 = superPolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn superPolish2(self: QStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QStyle_SuperPolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### DEPRECATED: Use `unpolish2` instead
    ///
    pub const Unpolish2 = unpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn unpolish2(self: QStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QStyle_Unpolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### DEPRECATED: Use `onUnpolish2` instead
    ///
    pub const OnUnpolish2 = onUnpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, application: QApplication) callconv(.c) void `
    ///
    pub fn onUnpolish2(self: QStyle, callback: *const fn (QStyle, QApplication) callconv(.c) void) void {
        qtc.QStyle_OnUnpolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnpolish2` instead
    ///
    pub const SuperUnpolish2 = superUnpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn superUnpolish2(self: QStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QStyle_SuperUnpolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### DEPRECATED: Use `polish3` instead
    ///
    pub const Polish3 = polish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` palette: QPalette `
    ///
    pub fn polish3(self: QStyle, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyle_Polish3(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### DEPRECATED: Use `onPolish3` instead
    ///
    pub const OnPolish3 = onPolish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, palette: QPalette) callconv(.c) void `
    ///
    pub fn onPolish3(self: QStyle, callback: *const fn (QStyle, QPalette) callconv(.c) void) void {
        qtc.QStyle_OnPolish3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish3` instead
    ///
    pub const SuperPolish3 = superPolish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` palette: QPalette `
    ///
    pub fn superPolish3(self: QStyle, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyle_SuperPolish3(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### DEPRECATED: Use `itemTextRect` instead
    ///
    pub const ItemTextRect = itemTextRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` fm: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn itemTextRect(self: QStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QStyle_ItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `onItemTextRect` instead
    ///
    pub const OnItemTextRect = onItemTextRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, fm: QFontMetrics, r: QRect, flags: i32, enabled: bool, text: [*:0]const u8) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemTextRect(self: QStyle, callback: *const fn (QStyle, QFontMetrics, QRect, i32, bool, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QStyle_OnItemTextRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemTextRect` instead
    ///
    pub const SuperItemTextRect = superItemTextRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` fm: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superItemTextRect(self: QStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QStyle_SuperItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `itemPixmapRect` instead
    ///
    pub const ItemPixmapRect = itemPixmapRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn itemPixmapRect(self: QStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QStyle_ItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemPixmapRect` instead
    ///
    pub const OnItemPixmapRect = onItemPixmapRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, r: QRect, flags: i32, pixmap: QPixmap) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemPixmapRect(self: QStyle, callback: *const fn (QStyle, QRect, i32, QPixmap) callconv(.c) QRect) void {
        qtc.QStyle_OnItemPixmapRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemPixmapRect` instead
    ///
    pub const SuperItemPixmapRect = superItemPixmapRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn superItemPixmapRect(self: QStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QStyle_SuperItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `drawItemText` instead
    ///
    pub const DrawItemText = drawItemText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn drawItemText(self: QStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyle_DrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `onDrawItemText` instead
    ///
    pub const OnDrawItemText = onDrawItemText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, painter: QPainter, rect: QRect, flags: i32, pal: QPalette, enabled: bool, text: [*:0]const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void `
    ///
    pub fn onDrawItemText(self: QStyle, callback: *const fn (QStyle, QPainter, QRect, i32, QPalette, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QStyle_OnDrawItemText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawItemText` instead
    ///
    pub const SuperDrawItemText = superDrawItemText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn superDrawItemText(self: QStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyle_SuperDrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `drawItemPixmap` instead
    ///
    pub const DrawItemPixmap = drawItemPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn drawItemPixmap(self: QStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QStyle_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `onDrawItemPixmap` instead
    ///
    pub const OnDrawItemPixmap = onDrawItemPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, painter: QPainter, rect: QRect, alignment: i32, pixmap: QPixmap) callconv(.c) void `
    ///
    pub fn onDrawItemPixmap(self: QStyle, callback: *const fn (QStyle, QPainter, QRect, i32, QPixmap) callconv(.c) void) void {
        qtc.QStyle_OnDrawItemPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawItemPixmap` instead
    ///
    pub const SuperDrawItemPixmap = superDrawItemPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn superDrawItemPixmap(self: QStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QStyle_SuperDrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `standardPalette` instead
    ///
    pub const StandardPalette = standardPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn standardPalette(self: QStyle) QPalette {
        return .{ .ptr = qtc.QStyle_StandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardPalette` instead
    ///
    pub const OnStandardPalette = onStandardPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QPalette `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardPalette(self: QStyle, callback: *const fn () callconv(.c) QPalette) void {
        qtc.QStyle_OnStandardPalette(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardPalette` instead
    ///
    pub const SuperStandardPalette = superStandardPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn superStandardPalette(self: QStyle) QPalette {
        return .{ .ptr = qtc.QStyle_SuperStandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `drawPrimitive` instead
    ///
    pub const DrawPrimitive = drawPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` pe: qstyle_enums.PrimitiveElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn drawPrimitive(self: QStyle, pe: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyle_DrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onDrawPrimitive` instead
    ///
    pub const OnDrawPrimitive = onDrawPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, pe: qstyle_enums.PrimitiveElement, opt: QStyleOption, p: QPainter, w: QWidget) callconv(.c) void `
    ///
    pub fn onDrawPrimitive(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QStyle_OnDrawPrimitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPrimitive` instead
    ///
    pub const SuperDrawPrimitive = superDrawPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` pe: qstyle_enums.PrimitiveElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn superDrawPrimitive(self: QStyle, pe: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyle_SuperDrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `drawControl` instead
    ///
    pub const DrawControl = drawControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn drawControl(self: QStyle, element: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyle_DrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onDrawControl` instead
    ///
    pub const OnDrawControl = onDrawControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, element: qstyle_enums.ControlElement, opt: QStyleOption, p: QPainter, w: QWidget) callconv(.c) void `
    ///
    pub fn onDrawControl(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QStyle_OnDrawControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawControl` instead
    ///
    pub const SuperDrawControl = superDrawControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn superDrawControl(self: QStyle, element: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyle_SuperDrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `subElementRect` instead
    ///
    pub const SubElementRect = subElementRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` subElement: qstyle_enums.SubElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn subElementRect(self: QStyle, subElement: i32, option: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SubElementRect(@ptrCast(self.ptr), @bitCast(subElement), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSubElementRect` instead
    ///
    pub const OnSubElementRect = onSubElementRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, subElement: qstyle_enums.SubElement, option: QStyleOption, widget: QWidget) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSubElementRect(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QWidget) callconv(.c) QRect) void {
        qtc.QStyle_OnSubElementRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubElementRect` instead
    ///
    pub const SuperSubElementRect = superSubElementRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` subElement: qstyle_enums.SubElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superSubElementRect(self: QStyle, subElement: i32, option: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SuperSubElementRect(@ptrCast(self.ptr), @bitCast(subElement), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `drawComplexControl` instead
    ///
    pub const DrawComplexControl = drawComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` p: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn drawComplexControl(self: QStyle, cc: i32, opt: anytype, p: anytype, widget: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyle_DrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDrawComplexControl` instead
    ///
    pub const OnDrawComplexControl = onDrawComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, p: QPainter, widget: QWidget) callconv(.c) void `
    ///
    pub fn onDrawComplexControl(self: QStyle, callback: *const fn (QStyle, i32, QStyleOptionComplex, QPainter, QWidget) callconv(.c) void) void {
        qtc.QStyle_OnDrawComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawComplexControl` instead
    ///
    pub const SuperDrawComplexControl = superDrawComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` p: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superDrawComplexControl(self: QStyle, cc: i32, opt: anytype, p: anytype, widget: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QStyle_SuperDrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `hitTestComplexControl` instead
    ///
    pub const HitTestComplexControl = hitTestComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` pt: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn hitTestComplexControl(self: QStyle, cc: i32, opt: anytype, pt: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_HitTestComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(pt.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onHitTestComplexControl` instead
    ///
    pub const OnHitTestComplexControl = onHitTestComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, pt: QPoint, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn onHitTestComplexControl(self: QStyle, callback: *const fn (QStyle, i32, QStyleOptionComplex, QPoint, QWidget) callconv(.c) i32) void {
        qtc.QStyle_OnHitTestComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHitTestComplexControl` instead
    ///
    pub const SuperHitTestComplexControl = superHitTestComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` pt: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn superHitTestComplexControl(self: QStyle, cc: i32, opt: anytype, pt: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_SuperHitTestComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(pt.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `subControlRect` instead
    ///
    pub const SubControlRect = subControlRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` widget: QWidget `
    ///
    pub fn subControlRect(self: QStyle, cc: i32, opt: anytype, sc: i32, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSubControlRect` instead
    ///
    pub const OnSubControlRect = onSubControlRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QWidget) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSubControlRect(self: QStyle, callback: *const fn (QStyle, i32, QStyleOptionComplex, i32, QWidget) callconv(.c) QRect) void {
        qtc.QStyle_OnSubControlRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubControlRect` instead
    ///
    pub const SuperSubControlRect = superSubControlRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superSubControlRect(self: QStyle, cc: i32, opt: anytype, sc: i32, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SuperSubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `pixelMetric` instead
    ///
    pub const PixelMetric = pixelMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` metric: qstyle_enums.PixelMetric `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn pixelMetric(self: QStyle, metric: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_PixelMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPixelMetric` instead
    ///
    pub const OnPixelMetric = onPixelMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, metric: qstyle_enums.PixelMetric, option: QStyleOption, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn onPixelMetric(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QStyle_OnPixelMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPixelMetric` instead
    ///
    pub const SuperPixelMetric = superPixelMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` metric: qstyle_enums.PixelMetric `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superPixelMetric(self: QStyle, metric: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_SuperPixelMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `sizeFromContents` instead
    ///
    pub const SizeFromContents = sizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` ct: qstyle_enums.ContentsType `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` contentsSize: QSize `
    ///
    /// ` w: QWidget `
    ///
    pub fn sizeFromContents(self: QStyle, ct: i32, opt: anytype, contentsSize: anytype, w: anytype) QSize {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(contentsSize)._is_QSize;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SizeFromContents(@ptrCast(self.ptr), @bitCast(ct), @ptrCast(opt.ptr), @ptrCast(contentsSize.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeFromContents` instead
    ///
    pub const OnSizeFromContents = onSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, ct: qstyle_enums.ContentsType, opt: QStyleOption, contentsSize: QSize, w: QWidget) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeFromContents(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QSize, QWidget) callconv(.c) QSize) void {
        qtc.QStyle_OnSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeFromContents` instead
    ///
    pub const SuperSizeFromContents = superSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` ct: qstyle_enums.ContentsType `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` contentsSize: QSize `
    ///
    /// ` w: QWidget `
    ///
    pub fn superSizeFromContents(self: QStyle, ct: i32, opt: anytype, contentsSize: anytype, w: anytype) QSize {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(contentsSize)._is_QSize;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SuperSizeFromContents(@ptrCast(self.ptr), @bitCast(ct), @ptrCast(opt.ptr), @ptrCast(contentsSize.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `styleHint` instead
    ///
    pub const StyleHint = styleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` stylehint: qstyle_enums.StyleHint `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    /// ` returnData: QStyleHintReturn `
    ///
    pub fn styleHint(self: QStyle, stylehint: i32, opt: anytype, widget: anytype, returnData: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(returnData)._is_QStyleHintReturn;
        return qtc.QStyle_StyleHint(@ptrCast(self.ptr), @bitCast(stylehint), @ptrCast(opt.ptr), @ptrCast(widget.ptr), @ptrCast(returnData.ptr));
    }

    /// ### DEPRECATED: Use `onStyleHint` instead
    ///
    pub const OnStyleHint = onStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, stylehint: qstyle_enums.StyleHint, opt: QStyleOption, widget: QWidget, returnData: QStyleHintReturn) callconv(.c) i32 `
    ///
    pub fn onStyleHint(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QWidget, QStyleHintReturn) callconv(.c) i32) void {
        qtc.QStyle_OnStyleHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStyleHint` instead
    ///
    pub const SuperStyleHint = superStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#styleHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` stylehint: qstyle_enums.StyleHint `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    /// ` returnData: QStyleHintReturn `
    ///
    pub fn superStyleHint(self: QStyle, stylehint: i32, opt: anytype, widget: anytype, returnData: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(returnData)._is_QStyleHintReturn;
        return qtc.QStyle_SuperStyleHint(@ptrCast(self.ptr), @bitCast(stylehint), @ptrCast(opt.ptr), @ptrCast(widget.ptr), @ptrCast(returnData.ptr));
    }

    /// ### DEPRECATED: Use `standardPixmap` instead
    ///
    pub const StandardPixmap = standardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn standardPixmap(self: QStyle, _standardPixmap: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_StandardPixmap(@ptrCast(self.ptr), @bitCast(_standardPixmap), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardPixmap` instead
    ///
    pub const OnStandardPixmap = onStandardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QStyleOption, widget: QWidget) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardPixmap(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QWidget) callconv(.c) QPixmap) void {
        qtc.QStyle_OnStandardPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardPixmap` instead
    ///
    pub const SuperStandardPixmap = superStandardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superStandardPixmap(self: QStyle, _standardPixmap: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SuperStandardPixmap(@ptrCast(self.ptr), @bitCast(_standardPixmap), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `standardIcon` instead
    ///
    pub const StandardIcon = standardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn standardIcon(self: QStyle, _standardIcon: i32, option: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_StandardIcon(@ptrCast(self.ptr), @bitCast(_standardIcon), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardIcon` instead
    ///
    pub const OnStandardIcon = onStandardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, standardIcon: qstyle_enums.StandardPixmap, option: QStyleOption, widget: QWidget) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardIcon(self: QStyle, callback: *const fn (QStyle, i32, QStyleOption, QWidget) callconv(.c) QIcon) void {
        qtc.QStyle_OnStandardIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardIcon` instead
    ///
    pub const SuperStandardIcon = superStandardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superStandardIcon(self: QStyle, _standardIcon: i32, option: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QStyle_SuperStandardIcon(@ptrCast(self.ptr), @bitCast(_standardIcon), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `generatedIconPixmap` instead
    ///
    pub const GeneratedIconPixmap = generatedIconPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn generatedIconPixmap(self: QStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QStyle_GeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeneratedIconPixmap` instead
    ///
    pub const OnGeneratedIconPixmap = onGeneratedIconPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, iconMode: qicon_enums.Mode, pixmap: QPixmap, opt: QStyleOption) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeneratedIconPixmap(self: QStyle, callback: *const fn (QStyle, i32, QPixmap, QStyleOption) callconv(.c) QPixmap) void {
        qtc.QStyle_OnGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeneratedIconPixmap` instead
    ///
    pub const SuperGeneratedIconPixmap = superGeneratedIconPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn superGeneratedIconPixmap(self: QStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QStyle_SuperGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` boundingRect: QRect `
    ///
    /// ` logicalRect: QRect `
    ///
    pub fn visualRect(direction: i32, boundingRect: anytype, logicalRect: anytype) QRect {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalRect)._is_QRect;
        return .{ .ptr = qtc.QStyle_VisualRect(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalRect.ptr)) };
    }

    /// ### DEPRECATED: Use `visualPos` instead
    ///
    pub const VisualPos = visualPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` boundingRect: QRect `
    ///
    /// ` logicalPos: QPoint `
    ///
    pub fn visualPos(direction: i32, boundingRect: anytype, logicalPos: anytype) QPoint {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalPos)._is_QPoint;
        return .{ .ptr = qtc.QStyle_VisualPos(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `sliderPositionFromValue` instead
    ///
    pub const SliderPositionFromValue = sliderPositionFromValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` val: i32 `
    ///
    /// ` space: i32 `
    ///
    pub fn sliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space));
    }

    /// ### DEPRECATED: Use `sliderValueFromPosition` instead
    ///
    pub const SliderValueFromPosition = sliderValueFromPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` pos: i32 `
    ///
    /// ` space: i32 `
    ///
    pub fn sliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space));
    }

    /// ### DEPRECATED: Use `visualAlignment` instead
    ///
    pub const VisualAlignment = visualAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn visualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@bitCast(direction), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `alignedRect` instead
    ///
    pub const AlignedRect = alignedRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` size: QSize `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn alignedRect(direction: i32, alignment: i32, size: anytype, rectangle: anytype) QRect {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QStyle_AlignedRect(@bitCast(direction), @bitCast(alignment), @ptrCast(size.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `layoutSpacing` instead
    ///
    pub const LayoutSpacing = layoutSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` control1: qsizepolicy_enums.ControlType `
    ///
    /// ` control2: qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn layoutSpacing(self: QStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_LayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutSpacing` instead
    ///
    pub const OnLayoutSpacing = onLayoutSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QStyleOption, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn onLayoutSpacing(self: QStyle, callback: *const fn (QStyle, i32, i32, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QStyle_OnLayoutSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLayoutSpacing` instead
    ///
    pub const SuperLayoutSpacing = superLayoutSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` control1: qsizepolicy_enums.ControlType `
    ///
    /// ` control2: qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superLayoutSpacing(self: QStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_SuperLayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing` instead
    ///
    pub const CombinedLayoutSpacing = combinedLayoutSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn combinedLayoutSpacing(self: QStyle, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn proxy(self: QStyle) QStyle {
        return .{ .ptr = qtc.QStyle_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyle.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyle.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sliderPositionFromValue5` instead
    ///
    pub const SliderPositionFromValue5 = sliderPositionFromValue5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` val: i32 `
    ///
    /// ` space: i32 `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn sliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space), upsideDown);
    }

    /// ### DEPRECATED: Use `sliderValueFromPosition5` instead
    ///
    pub const SliderValueFromPosition5 = sliderValueFromPosition5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` pos: i32 `
    ///
    /// ` space: i32 `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn sliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space), upsideDown);
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing4` instead
    ///
    pub const CombinedLayoutSpacing4 = combinedLayoutSpacing4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn combinedLayoutSpacing4(self: QStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing5` instead
    ///
    pub const CombinedLayoutSpacing5 = combinedLayoutSpacing5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn combinedLayoutSpacing5(self: QStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStyle.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QStyle, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn isWidgetType(self: QStyle) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn isWindowType(self: QStyle) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn isQuickItemType(self: QStyle) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn signalsBlocked(self: QStyle) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QStyle, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn thread(self: QStyle) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QStyle, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QStyle, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QStyle, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QStyle, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QStyle, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QStyle, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QStyle.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QStyle, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QStyle, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QStyle, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QStyle, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn disconnect3(self: QStyle) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QStyle, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn dumpObjectTree(self: QStyle) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn dumpObjectInfo(self: QStyle) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QStyle, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QStyle, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QStyle, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QStyle.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStyle.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn bindingStorage(self: QStyle) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn bindingStorage2(self: QStyle) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn destroyed(self: QStyle) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QStyle, callback: *const fn (QStyle) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn parent(self: QStyle) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QStyle, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn deleteLater(self: QStyle) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QStyle, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QStyle, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QStyle, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QStyle, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QStyle, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QStyle, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QStyle, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QStyle, callback: *const fn (QStyle, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QStyle, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStyle_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QStyle, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStyle_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QStyle, callback: *const fn (QStyle, QEvent) callconv(.c) bool) void {
        qtc.QStyle_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QStyle, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStyle_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QStyle, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStyle_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QStyle, callback: *const fn (QStyle, QObject, QEvent) callconv(.c) bool) void {
        qtc.QStyle_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QStyle_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QStyle_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QStyle, callback: *const fn (QStyle, QTimerEvent) callconv(.c) void) void {
        qtc.QStyle_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QStyle_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QStyle_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QStyle, callback: *const fn (QStyle, QChildEvent) callconv(.c) void) void {
        qtc.QStyle_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStyle_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStyle_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QStyle, callback: *const fn (QStyle, QEvent) callconv(.c) void) void {
        qtc.QStyle_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStyle_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStyle_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QStyle, callback: *const fn (QStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QStyle_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStyle_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStyle_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QStyle, callback: *const fn (QStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QStyle_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn sender(self: QStyle) QObject {
        return .{ .ptr = qtc.QStyle_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn superSender(self: QStyle) QObject {
        return .{ .ptr = qtc.QStyle_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QStyle, callback: *const fn () callconv(.c) QObject) void {
        qtc.QStyle_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn senderSignalIndex(self: QStyle) i32 {
        return qtc.QStyle_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    pub fn superSenderSignalIndex(self: QStyle) i32 {
        return qtc.QStyle_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QStyle, callback: *const fn () callconv(.c) i32) void {
        qtc.QStyle_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStyle_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStyle_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QStyle, callback: *const fn (QStyle, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStyle_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStyle_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStyle_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle`
    ///
    /// ` callback: *const fn (self: QStyle, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QStyle, callback: *const fn (QStyle, QMetaMethod) callconv(.c) bool) void {
        qtc.QStyle_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStyle `
    ///
    /// ` callback: *const fn (self: QStyle, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QStyle, callback: *const fn (QStyle, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#dtor.QStyle)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStyle `
    ///
    pub fn delete(self: QStyle) void {
        qtc.QStyle_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#public-types)
pub const enums = struct {
    pub const StateFlag = enum {
        pub const State_None: i32 = 0;
        pub const State_Enabled: i32 = 1;
        pub const State_Raised: i32 = 2;
        pub const State_Sunken: i32 = 4;
        pub const State_Off: i32 = 8;
        pub const State_NoChange: i32 = 16;
        pub const State_On: i32 = 32;
        pub const State_DownArrow: i32 = 64;
        pub const State_Horizontal: i32 = 128;
        pub const State_HasFocus: i32 = 256;
        pub const State_Top: i32 = 512;
        pub const State_Bottom: i32 = 1024;
        pub const State_FocusAtBorder: i32 = 2048;
        pub const State_AutoRaise: i32 = 4096;
        pub const State_MouseOver: i32 = 8192;
        pub const State_UpArrow: i32 = 16384;
        pub const State_Selected: i32 = 32768;
        pub const State_Active: i32 = 65536;
        pub const State_Window: i32 = 131072;
        pub const State_Open: i32 = 262144;
        pub const State_Children: i32 = 524288;
        pub const State_Item: i32 = 1048576;
        pub const State_Sibling: i32 = 2097152;
        pub const State_Editing: i32 = 4194304;
        pub const State_KeyboardFocusChange: i32 = 8388608;
        pub const State_ReadOnly: i32 = 33554432;
        pub const State_Small: i32 = 67108864;
        pub const State_Mini: i32 = 134217728;
    };

    pub const PrimitiveElement = enum {
        pub const PE_Frame: i32 = 0;
        pub const PE_FrameDefaultButton: i32 = 1;
        pub const PE_FrameDockWidget: i32 = 2;
        pub const PE_FrameFocusRect: i32 = 3;
        pub const PE_FrameGroupBox: i32 = 4;
        pub const PE_FrameLineEdit: i32 = 5;
        pub const PE_FrameMenu: i32 = 6;
        pub const PE_FrameStatusBarItem: i32 = 7;
        pub const PE_FrameTabWidget: i32 = 8;
        pub const PE_FrameWindow: i32 = 9;
        pub const PE_FrameButtonBevel: i32 = 10;
        pub const PE_FrameButtonTool: i32 = 11;
        pub const PE_FrameTabBarBase: i32 = 12;
        pub const PE_PanelButtonCommand: i32 = 13;
        pub const PE_PanelButtonBevel: i32 = 14;
        pub const PE_PanelButtonTool: i32 = 15;
        pub const PE_PanelMenuBar: i32 = 16;
        pub const PE_PanelToolBar: i32 = 17;
        pub const PE_PanelLineEdit: i32 = 18;
        pub const PE_IndicatorArrowDown: i32 = 19;
        pub const PE_IndicatorArrowLeft: i32 = 20;
        pub const PE_IndicatorArrowRight: i32 = 21;
        pub const PE_IndicatorArrowUp: i32 = 22;
        pub const PE_IndicatorBranch: i32 = 23;
        pub const PE_IndicatorButtonDropDown: i32 = 24;
        pub const PE_IndicatorItemViewItemCheck: i32 = 25;
        pub const PE_IndicatorCheckBox: i32 = 26;
        pub const PE_IndicatorDockWidgetResizeHandle: i32 = 27;
        pub const PE_IndicatorHeaderArrow: i32 = 28;
        pub const PE_IndicatorMenuCheckMark: i32 = 29;
        pub const PE_IndicatorProgressChunk: i32 = 30;
        pub const PE_IndicatorRadioButton: i32 = 31;
        pub const PE_IndicatorSpinDown: i32 = 32;
        pub const PE_IndicatorSpinMinus: i32 = 33;
        pub const PE_IndicatorSpinPlus: i32 = 34;
        pub const PE_IndicatorSpinUp: i32 = 35;
        pub const PE_IndicatorToolBarHandle: i32 = 36;
        pub const PE_IndicatorToolBarSeparator: i32 = 37;
        pub const PE_PanelTipLabel: i32 = 38;
        pub const PE_IndicatorTabTear: i32 = 39;
        pub const PE_IndicatorTabTearLeft: i32 = 39;
        pub const PE_PanelScrollAreaCorner: i32 = 40;
        pub const PE_Widget: i32 = 41;
        pub const PE_IndicatorColumnViewArrow: i32 = 42;
        pub const PE_IndicatorItemViewItemDrop: i32 = 43;
        pub const PE_PanelItemViewItem: i32 = 44;
        pub const PE_PanelItemViewRow: i32 = 45;
        pub const PE_PanelStatusBar: i32 = 46;
        pub const PE_IndicatorTabClose: i32 = 47;
        pub const PE_PanelMenu: i32 = 48;
        pub const PE_IndicatorTabTearRight: i32 = 49;
        pub const PE_CustomBase: i32 = 251658240;
    };

    pub const ControlElement = enum {
        pub const CE_PushButton: i32 = 0;
        pub const CE_PushButtonBevel: i32 = 1;
        pub const CE_PushButtonLabel: i32 = 2;
        pub const CE_CheckBox: i32 = 3;
        pub const CE_CheckBoxLabel: i32 = 4;
        pub const CE_RadioButton: i32 = 5;
        pub const CE_RadioButtonLabel: i32 = 6;
        pub const CE_TabBarTab: i32 = 7;
        pub const CE_TabBarTabShape: i32 = 8;
        pub const CE_TabBarTabLabel: i32 = 9;
        pub const CE_ProgressBar: i32 = 10;
        pub const CE_ProgressBarGroove: i32 = 11;
        pub const CE_ProgressBarContents: i32 = 12;
        pub const CE_ProgressBarLabel: i32 = 13;
        pub const CE_MenuItem: i32 = 14;
        pub const CE_MenuScroller: i32 = 15;
        pub const CE_MenuVMargin: i32 = 16;
        pub const CE_MenuHMargin: i32 = 17;
        pub const CE_MenuTearoff: i32 = 18;
        pub const CE_MenuEmptyArea: i32 = 19;
        pub const CE_MenuBarItem: i32 = 20;
        pub const CE_MenuBarEmptyArea: i32 = 21;
        pub const CE_ToolButtonLabel: i32 = 22;
        pub const CE_Header: i32 = 23;
        pub const CE_HeaderSection: i32 = 24;
        pub const CE_HeaderLabel: i32 = 25;
        pub const CE_ToolBoxTab: i32 = 26;
        pub const CE_SizeGrip: i32 = 27;
        pub const CE_Splitter: i32 = 28;
        pub const CE_RubberBand: i32 = 29;
        pub const CE_DockWidgetTitle: i32 = 30;
        pub const CE_ScrollBarAddLine: i32 = 31;
        pub const CE_ScrollBarSubLine: i32 = 32;
        pub const CE_ScrollBarAddPage: i32 = 33;
        pub const CE_ScrollBarSubPage: i32 = 34;
        pub const CE_ScrollBarSlider: i32 = 35;
        pub const CE_ScrollBarFirst: i32 = 36;
        pub const CE_ScrollBarLast: i32 = 37;
        pub const CE_FocusFrame: i32 = 38;
        pub const CE_ComboBoxLabel: i32 = 39;
        pub const CE_ToolBar: i32 = 40;
        pub const CE_ToolBoxTabShape: i32 = 41;
        pub const CE_ToolBoxTabLabel: i32 = 42;
        pub const CE_HeaderEmptyArea: i32 = 43;
        pub const CE_ColumnViewGrip: i32 = 44;
        pub const CE_ItemViewItem: i32 = 45;
        pub const CE_ShapedFrame: i32 = 46;
        pub const CE_CustomBase: i32 = -268435456;
    };

    pub const SubElement = enum {
        pub const SE_PushButtonContents: i32 = 0;
        pub const SE_PushButtonFocusRect: i32 = 1;
        pub const SE_CheckBoxIndicator: i32 = 2;
        pub const SE_CheckBoxContents: i32 = 3;
        pub const SE_CheckBoxFocusRect: i32 = 4;
        pub const SE_CheckBoxClickRect: i32 = 5;
        pub const SE_RadioButtonIndicator: i32 = 6;
        pub const SE_RadioButtonContents: i32 = 7;
        pub const SE_RadioButtonFocusRect: i32 = 8;
        pub const SE_RadioButtonClickRect: i32 = 9;
        pub const SE_ComboBoxFocusRect: i32 = 10;
        pub const SE_SliderFocusRect: i32 = 11;
        pub const SE_ProgressBarGroove: i32 = 12;
        pub const SE_ProgressBarContents: i32 = 13;
        pub const SE_ProgressBarLabel: i32 = 14;
        pub const SE_ToolBoxTabContents: i32 = 15;
        pub const SE_HeaderLabel: i32 = 16;
        pub const SE_HeaderArrow: i32 = 17;
        pub const SE_TabWidgetTabBar: i32 = 18;
        pub const SE_TabWidgetTabPane: i32 = 19;
        pub const SE_TabWidgetTabContents: i32 = 20;
        pub const SE_TabWidgetLeftCorner: i32 = 21;
        pub const SE_TabWidgetRightCorner: i32 = 22;
        pub const SE_ItemViewItemCheckIndicator: i32 = 23;
        pub const SE_TabBarTearIndicator: i32 = 24;
        pub const SE_TabBarTearIndicatorLeft: i32 = 24;
        pub const SE_TreeViewDisclosureItem: i32 = 25;
        pub const SE_LineEditContents: i32 = 26;
        pub const SE_FrameContents: i32 = 27;
        pub const SE_DockWidgetCloseButton: i32 = 28;
        pub const SE_DockWidgetFloatButton: i32 = 29;
        pub const SE_DockWidgetTitleBarText: i32 = 30;
        pub const SE_DockWidgetIcon: i32 = 31;
        pub const SE_CheckBoxLayoutItem: i32 = 32;
        pub const SE_ComboBoxLayoutItem: i32 = 33;
        pub const SE_DateTimeEditLayoutItem: i32 = 34;
        pub const SE_LabelLayoutItem: i32 = 35;
        pub const SE_ProgressBarLayoutItem: i32 = 36;
        pub const SE_PushButtonLayoutItem: i32 = 37;
        pub const SE_RadioButtonLayoutItem: i32 = 38;
        pub const SE_SliderLayoutItem: i32 = 39;
        pub const SE_SpinBoxLayoutItem: i32 = 40;
        pub const SE_ToolButtonLayoutItem: i32 = 41;
        pub const SE_FrameLayoutItem: i32 = 42;
        pub const SE_GroupBoxLayoutItem: i32 = 43;
        pub const SE_TabWidgetLayoutItem: i32 = 44;
        pub const SE_ItemViewItemDecoration: i32 = 45;
        pub const SE_ItemViewItemText: i32 = 46;
        pub const SE_ItemViewItemFocusRect: i32 = 47;
        pub const SE_TabBarTabLeftButton: i32 = 48;
        pub const SE_TabBarTabRightButton: i32 = 49;
        pub const SE_TabBarTabText: i32 = 50;
        pub const SE_ShapedFrameContents: i32 = 51;
        pub const SE_ToolBarHandle: i32 = 52;
        pub const SE_TabBarScrollLeftButton: i32 = 53;
        pub const SE_TabBarScrollRightButton: i32 = 54;
        pub const SE_TabBarTearIndicatorRight: i32 = 55;
        pub const SE_PushButtonBevel: i32 = 56;
        pub const SE_CustomBase: i32 = -268435456;
    };

    pub const ComplexControl = enum {
        pub const CC_SpinBox: i32 = 0;
        pub const CC_ComboBox: i32 = 1;
        pub const CC_ScrollBar: i32 = 2;
        pub const CC_Slider: i32 = 3;
        pub const CC_ToolButton: i32 = 4;
        pub const CC_TitleBar: i32 = 5;
        pub const CC_Dial: i32 = 6;
        pub const CC_GroupBox: i32 = 7;
        pub const CC_MdiControls: i32 = 8;
        pub const CC_CustomBase: i32 = -268435456;
    };

    pub const SubControl = enum {
        pub const SC_None: i32 = 0;
        pub const SC_ScrollBarAddLine: i32 = 1;
        pub const SC_ScrollBarSubLine: i32 = 2;
        pub const SC_ScrollBarAddPage: i32 = 4;
        pub const SC_ScrollBarSubPage: i32 = 8;
        pub const SC_ScrollBarFirst: i32 = 16;
        pub const SC_ScrollBarLast: i32 = 32;
        pub const SC_ScrollBarSlider: i32 = 64;
        pub const SC_ScrollBarGroove: i32 = 128;
        pub const SC_SpinBoxUp: i32 = 1;
        pub const SC_SpinBoxDown: i32 = 2;
        pub const SC_SpinBoxFrame: i32 = 4;
        pub const SC_SpinBoxEditField: i32 = 8;
        pub const SC_ComboBoxFrame: i32 = 1;
        pub const SC_ComboBoxEditField: i32 = 2;
        pub const SC_ComboBoxArrow: i32 = 4;
        pub const SC_ComboBoxListBoxPopup: i32 = 8;
        pub const SC_SliderGroove: i32 = 1;
        pub const SC_SliderHandle: i32 = 2;
        pub const SC_SliderTickmarks: i32 = 4;
        pub const SC_ToolButton: i32 = 1;
        pub const SC_ToolButtonMenu: i32 = 2;
        pub const SC_TitleBarSysMenu: i32 = 1;
        pub const SC_TitleBarMinButton: i32 = 2;
        pub const SC_TitleBarMaxButton: i32 = 4;
        pub const SC_TitleBarCloseButton: i32 = 8;
        pub const SC_TitleBarNormalButton: i32 = 16;
        pub const SC_TitleBarShadeButton: i32 = 32;
        pub const SC_TitleBarUnshadeButton: i32 = 64;
        pub const SC_TitleBarContextHelpButton: i32 = 128;
        pub const SC_TitleBarLabel: i32 = 256;
        pub const SC_DialGroove: i32 = 1;
        pub const SC_DialHandle: i32 = 2;
        pub const SC_DialTickmarks: i32 = 4;
        pub const SC_GroupBoxCheckBox: i32 = 1;
        pub const SC_GroupBoxLabel: i32 = 2;
        pub const SC_GroupBoxContents: i32 = 4;
        pub const SC_GroupBoxFrame: i32 = 8;
        pub const SC_MdiMinButton: i32 = 1;
        pub const SC_MdiNormalButton: i32 = 2;
        pub const SC_MdiCloseButton: i32 = 4;
        pub const SC_CustomBase: i32 = -268435456;
        pub const SC_All: i32 = -1;
    };

    pub const PixelMetric = enum {
        pub const PM_ButtonMargin: i32 = 0;
        pub const PM_ButtonDefaultIndicator: i32 = 1;
        pub const PM_MenuButtonIndicator: i32 = 2;
        pub const PM_ButtonShiftHorizontal: i32 = 3;
        pub const PM_ButtonShiftVertical: i32 = 4;
        pub const PM_DefaultFrameWidth: i32 = 5;
        pub const PM_SpinBoxFrameWidth: i32 = 6;
        pub const PM_ComboBoxFrameWidth: i32 = 7;
        pub const PM_MaximumDragDistance: i32 = 8;
        pub const PM_ScrollBarExtent: i32 = 9;
        pub const PM_ScrollBarSliderMin: i32 = 10;
        pub const PM_SliderThickness: i32 = 11;
        pub const PM_SliderControlThickness: i32 = 12;
        pub const PM_SliderLength: i32 = 13;
        pub const PM_SliderTickmarkOffset: i32 = 14;
        pub const PM_SliderSpaceAvailable: i32 = 15;
        pub const PM_DockWidgetSeparatorExtent: i32 = 16;
        pub const PM_DockWidgetHandleExtent: i32 = 17;
        pub const PM_DockWidgetFrameWidth: i32 = 18;
        pub const PM_TabBarTabOverlap: i32 = 19;
        pub const PM_TabBarTabHSpace: i32 = 20;
        pub const PM_TabBarTabVSpace: i32 = 21;
        pub const PM_TabBarBaseHeight: i32 = 22;
        pub const PM_TabBarBaseOverlap: i32 = 23;
        pub const PM_ProgressBarChunkWidth: i32 = 24;
        pub const PM_SplitterWidth: i32 = 25;
        pub const PM_TitleBarHeight: i32 = 26;
        pub const PM_MenuScrollerHeight: i32 = 27;
        pub const PM_MenuHMargin: i32 = 28;
        pub const PM_MenuVMargin: i32 = 29;
        pub const PM_MenuPanelWidth: i32 = 30;
        pub const PM_MenuTearoffHeight: i32 = 31;
        pub const PM_MenuDesktopFrameWidth: i32 = 32;
        pub const PM_MenuBarPanelWidth: i32 = 33;
        pub const PM_MenuBarItemSpacing: i32 = 34;
        pub const PM_MenuBarVMargin: i32 = 35;
        pub const PM_MenuBarHMargin: i32 = 36;
        pub const PM_IndicatorWidth: i32 = 37;
        pub const PM_IndicatorHeight: i32 = 38;
        pub const PM_ExclusiveIndicatorWidth: i32 = 39;
        pub const PM_ExclusiveIndicatorHeight: i32 = 40;
        pub const PM_MdiSubWindowFrameWidth: i32 = 44;
        pub const PM_MdiSubWindowMinimizedWidth: i32 = 45;
        pub const PM_HeaderMargin: i32 = 46;
        pub const PM_HeaderMarkSize: i32 = 47;
        pub const PM_HeaderGripMargin: i32 = 48;
        pub const PM_TabBarTabShiftHorizontal: i32 = 49;
        pub const PM_TabBarTabShiftVertical: i32 = 50;
        pub const PM_TabBarScrollButtonWidth: i32 = 51;
        pub const PM_ToolBarFrameWidth: i32 = 52;
        pub const PM_ToolBarHandleExtent: i32 = 53;
        pub const PM_ToolBarItemSpacing: i32 = 54;
        pub const PM_ToolBarItemMargin: i32 = 55;
        pub const PM_ToolBarSeparatorExtent: i32 = 56;
        pub const PM_ToolBarExtensionExtent: i32 = 57;
        pub const PM_SpinBoxSliderHeight: i32 = 58;
        pub const PM_ToolBarIconSize: i32 = 59;
        pub const PM_ListViewIconSize: i32 = 60;
        pub const PM_IconViewIconSize: i32 = 61;
        pub const PM_SmallIconSize: i32 = 62;
        pub const PM_LargeIconSize: i32 = 63;
        pub const PM_FocusFrameVMargin: i32 = 64;
        pub const PM_FocusFrameHMargin: i32 = 65;
        pub const PM_ToolTipLabelFrameWidth: i32 = 66;
        pub const PM_CheckBoxLabelSpacing: i32 = 67;
        pub const PM_TabBarIconSize: i32 = 68;
        pub const PM_SizeGripSize: i32 = 69;
        pub const PM_DockWidgetTitleMargin: i32 = 70;
        pub const PM_MessageBoxIconSize: i32 = 71;
        pub const PM_ButtonIconSize: i32 = 72;
        pub const PM_DockWidgetTitleBarButtonMargin: i32 = 73;
        pub const PM_RadioButtonLabelSpacing: i32 = 74;
        pub const PM_LayoutLeftMargin: i32 = 75;
        pub const PM_LayoutTopMargin: i32 = 76;
        pub const PM_LayoutRightMargin: i32 = 77;
        pub const PM_LayoutBottomMargin: i32 = 78;
        pub const PM_LayoutHorizontalSpacing: i32 = 79;
        pub const PM_LayoutVerticalSpacing: i32 = 80;
        pub const PM_TabBar_ScrollButtonOverlap: i32 = 81;
        pub const PM_TextCursorWidth: i32 = 82;
        pub const PM_TabCloseIndicatorWidth: i32 = 83;
        pub const PM_TabCloseIndicatorHeight: i32 = 84;
        pub const PM_ScrollView_ScrollBarSpacing: i32 = 85;
        pub const PM_ScrollView_ScrollBarOverlap: i32 = 86;
        pub const PM_SubMenuOverlap: i32 = 87;
        pub const PM_TreeViewIndentation: i32 = 88;
        pub const PM_HeaderDefaultSectionSizeHorizontal: i32 = 89;
        pub const PM_HeaderDefaultSectionSizeVertical: i32 = 90;
        pub const PM_TitleBarButtonIconSize: i32 = 91;
        pub const PM_TitleBarButtonSize: i32 = 92;
        pub const PM_LineEditIconSize: i32 = 93;
        pub const PM_LineEditIconMargin: i32 = 94;
        pub const PM_CustomBase: i32 = -268435456;
    };

    pub const ContentsType = enum {
        pub const CT_PushButton: i32 = 0;
        pub const CT_CheckBox: i32 = 1;
        pub const CT_RadioButton: i32 = 2;
        pub const CT_ToolButton: i32 = 3;
        pub const CT_ComboBox: i32 = 4;
        pub const CT_Splitter: i32 = 5;
        pub const CT_ProgressBar: i32 = 6;
        pub const CT_MenuItem: i32 = 7;
        pub const CT_MenuBarItem: i32 = 8;
        pub const CT_MenuBar: i32 = 9;
        pub const CT_Menu: i32 = 10;
        pub const CT_TabBarTab: i32 = 11;
        pub const CT_Slider: i32 = 12;
        pub const CT_ScrollBar: i32 = 13;
        pub const CT_LineEdit: i32 = 14;
        pub const CT_SpinBox: i32 = 15;
        pub const CT_SizeGrip: i32 = 16;
        pub const CT_TabWidget: i32 = 17;
        pub const CT_DialogButtons: i32 = 18;
        pub const CT_HeaderSection: i32 = 19;
        pub const CT_GroupBox: i32 = 20;
        pub const CT_MdiControls: i32 = 21;
        pub const CT_ItemViewItem: i32 = 22;
        pub const CT_CustomBase: i32 = -268435456;
    };

    pub const RequestSoftwareInputPanel = enum {
        pub const RSIP_OnMouseClickAndAlreadyFocused: i32 = 0;
        pub const RSIP_OnMouseClick: i32 = 1;
    };

    pub const StyleHint = enum {
        pub const SH_EtchDisabledText: i32 = 0;
        pub const SH_DitherDisabledText: i32 = 1;
        pub const SH_ScrollBar_MiddleClickAbsolutePosition: i32 = 2;
        pub const SH_ScrollBar_ScrollWhenPointerLeavesControl: i32 = 3;
        pub const SH_TabBar_SelectMouseType: i32 = 4;
        pub const SH_TabBar_Alignment: i32 = 5;
        pub const SH_Header_ArrowAlignment: i32 = 6;
        pub const SH_Slider_SnapToValue: i32 = 7;
        pub const SH_Slider_SloppyKeyEvents: i32 = 8;
        pub const SH_ProgressDialog_CenterCancelButton: i32 = 9;
        pub const SH_ProgressDialog_TextLabelAlignment: i32 = 10;
        pub const SH_PrintDialog_RightAlignButtons: i32 = 11;
        pub const SH_MainWindow_SpaceBelowMenuBar: i32 = 12;
        pub const SH_FontDialog_SelectAssociatedText: i32 = 13;
        pub const SH_Menu_AllowActiveAndDisabled: i32 = 14;
        pub const SH_Menu_SpaceActivatesItem: i32 = 15;
        pub const SH_Menu_SubMenuPopupDelay: i32 = 16;
        pub const SH_ScrollView_FrameOnlyAroundContents: i32 = 17;
        pub const SH_MenuBar_AltKeyNavigation: i32 = 18;
        pub const SH_ComboBox_ListMouseTracking: i32 = 19;
        pub const SH_Menu_MouseTracking: i32 = 20;
        pub const SH_MenuBar_MouseTracking: i32 = 21;
        pub const SH_ItemView_ChangeHighlightOnFocus: i32 = 22;
        pub const SH_Widget_ShareActivation: i32 = 23;
        pub const SH_Workspace_FillSpaceOnMaximize: i32 = 24;
        pub const SH_ComboBox_Popup: i32 = 25;
        pub const SH_TitleBar_NoBorder: i32 = 26;
        pub const SH_Slider_StopMouseOverSlider: i32 = 27;
        pub const SH_BlinkCursorWhenTextSelected: i32 = 28;
        pub const SH_RichText_FullWidthSelection: i32 = 29;
        pub const SH_Menu_Scrollable: i32 = 30;
        pub const SH_GroupBox_TextLabelVerticalAlignment: i32 = 31;
        pub const SH_GroupBox_TextLabelColor: i32 = 32;
        pub const SH_Menu_SloppySubMenus: i32 = 33;
        pub const SH_Table_GridLineColor: i32 = 34;
        pub const SH_LineEdit_PasswordCharacter: i32 = 35;
        pub const SH_DialogButtons_DefaultButton: i32 = 36;
        pub const SH_ToolBox_SelectedPageTitleBold: i32 = 37;
        pub const SH_TabBar_PreferNoArrows: i32 = 38;
        pub const SH_ScrollBar_LeftClickAbsolutePosition: i32 = 39;
        pub const SH_ListViewExpand_SelectMouseType: i32 = 40;
        pub const SH_UnderlineShortcut: i32 = 41;
        pub const SH_SpinBox_AnimateButton: i32 = 42;
        pub const SH_SpinBox_KeyPressAutoRepeatRate: i32 = 43;
        pub const SH_SpinBox_ClickAutoRepeatRate: i32 = 44;
        pub const SH_Menu_FillScreenWithScroll: i32 = 45;
        pub const SH_ToolTipLabel_Opacity: i32 = 46;
        pub const SH_DrawMenuBarSeparator: i32 = 47;
        pub const SH_TitleBar_ModifyNotification: i32 = 48;
        pub const SH_Button_FocusPolicy: i32 = 49;
        pub const SH_MessageBox_UseBorderForButtonSpacing: i32 = 50;
        pub const SH_TitleBar_AutoRaise: i32 = 51;
        pub const SH_ToolButton_PopupDelay: i32 = 52;
        pub const SH_FocusFrame_Mask: i32 = 53;
        pub const SH_RubberBand_Mask: i32 = 54;
        pub const SH_WindowFrame_Mask: i32 = 55;
        pub const SH_SpinControls_DisableOnBounds: i32 = 56;
        pub const SH_Dial_BackgroundRole: i32 = 57;
        pub const SH_ComboBox_LayoutDirection: i32 = 58;
        pub const SH_ItemView_EllipsisLocation: i32 = 59;
        pub const SH_ItemView_ShowDecorationSelected: i32 = 60;
        pub const SH_ItemView_ActivateItemOnSingleClick: i32 = 61;
        pub const SH_ScrollBar_ContextMenu: i32 = 62;
        pub const SH_ScrollBar_RollBetweenButtons: i32 = 63;
        pub const SH_Slider_AbsoluteSetButtons: i32 = 64;
        pub const SH_Slider_PageSetButtons: i32 = 65;
        pub const SH_Menu_KeyboardSearch: i32 = 66;
        pub const SH_TabBar_ElideMode: i32 = 67;
        pub const SH_DialogButtonLayout: i32 = 68;
        pub const SH_ComboBox_PopupFrameStyle: i32 = 69;
        pub const SH_MessageBox_TextInteractionFlags: i32 = 70;
        pub const SH_DialogButtonBox_ButtonsHaveIcons: i32 = 71;
        pub const SH_MessageBox_CenterButtons: i32 = 72;
        pub const SH_Menu_SelectionWrap: i32 = 73;
        pub const SH_ItemView_MovementWithoutUpdatingSelection: i32 = 74;
        pub const SH_ToolTip_Mask: i32 = 75;
        pub const SH_FocusFrame_AboveWidget: i32 = 76;
        pub const SH_TextControl_FocusIndicatorTextCharFormat: i32 = 77;
        pub const SH_WizardStyle: i32 = 78;
        pub const SH_ItemView_ArrowKeysNavigateIntoChildren: i32 = 79;
        pub const SH_Menu_Mask: i32 = 80;
        pub const SH_Menu_FlashTriggeredItem: i32 = 81;
        pub const SH_Menu_FadeOutOnHide: i32 = 82;
        pub const SH_SpinBox_ClickAutoRepeatThreshold: i32 = 83;
        pub const SH_ItemView_PaintAlternatingRowColorsForEmptyArea: i32 = 84;
        pub const SH_FormLayoutWrapPolicy: i32 = 85;
        pub const SH_TabWidget_DefaultTabPosition: i32 = 86;
        pub const SH_ToolBar_Movable: i32 = 87;
        pub const SH_FormLayoutFieldGrowthPolicy: i32 = 88;
        pub const SH_FormLayoutFormAlignment: i32 = 89;
        pub const SH_FormLayoutLabelAlignment: i32 = 90;
        pub const SH_ItemView_DrawDelegateFrame: i32 = 91;
        pub const SH_TabBar_CloseButtonPosition: i32 = 92;
        pub const SH_DockWidget_ButtonsHaveFrame: i32 = 93;
        pub const SH_ToolButtonStyle: i32 = 94;
        pub const SH_RequestSoftwareInputPanel: i32 = 95;
        pub const SH_ScrollBar_Transient: i32 = 96;
        pub const SH_Menu_SupportsSections: i32 = 97;
        pub const SH_ToolTip_WakeUpDelay: i32 = 98;
        pub const SH_ToolTip_FallAsleepDelay: i32 = 99;
        pub const SH_Widget_Animate: i32 = 100;
        pub const SH_Splitter_OpaqueResize: i32 = 101;
        pub const SH_ComboBox_UseNativePopup: i32 = 102;
        pub const SH_LineEdit_PasswordMaskDelay: i32 = 103;
        pub const SH_TabBar_ChangeCurrentDelay: i32 = 104;
        pub const SH_Menu_SubMenuUniDirection: i32 = 105;
        pub const SH_Menu_SubMenuUniDirectionFailCount: i32 = 106;
        pub const SH_Menu_SubMenuSloppySelectOtherActions: i32 = 107;
        pub const SH_Menu_SubMenuSloppyCloseTimeout: i32 = 108;
        pub const SH_Menu_SubMenuResetWhenReenteringParent: i32 = 109;
        pub const SH_Menu_SubMenuDontStartSloppyOnLeave: i32 = 110;
        pub const SH_ItemView_ScrollMode: i32 = 111;
        pub const SH_TitleBar_ShowToolTipsOnButtons: i32 = 112;
        pub const SH_Widget_Animation_Duration: i32 = 113;
        pub const SH_ComboBox_AllowWheelScrolling: i32 = 114;
        pub const SH_SpinBox_ButtonsInsideFrame: i32 = 115;
        pub const SH_SpinBox_StepModifier: i32 = 116;
        pub const SH_TabBar_AllowWheelScrolling: i32 = 117;
        pub const SH_Table_AlwaysDrawLeftTopGridLines: i32 = 118;
        pub const SH_SpinBox_SelectOnStep: i32 = 119;
        pub const SH_CustomBase: i32 = -268435456;
    };

    pub const StandardPixmap = enum {
        pub const SP_TitleBarMenuButton: i32 = 0;
        pub const SP_TitleBarMinButton: i32 = 1;
        pub const SP_TitleBarMaxButton: i32 = 2;
        pub const SP_TitleBarCloseButton: i32 = 3;
        pub const SP_TitleBarNormalButton: i32 = 4;
        pub const SP_TitleBarShadeButton: i32 = 5;
        pub const SP_TitleBarUnshadeButton: i32 = 6;
        pub const SP_TitleBarContextHelpButton: i32 = 7;
        pub const SP_DockWidgetCloseButton: i32 = 8;
        pub const SP_MessageBoxInformation: i32 = 9;
        pub const SP_MessageBoxWarning: i32 = 10;
        pub const SP_MessageBoxCritical: i32 = 11;
        pub const SP_MessageBoxQuestion: i32 = 12;
        pub const SP_DesktopIcon: i32 = 13;
        pub const SP_TrashIcon: i32 = 14;
        pub const SP_ComputerIcon: i32 = 15;
        pub const SP_DriveFDIcon: i32 = 16;
        pub const SP_DriveHDIcon: i32 = 17;
        pub const SP_DriveCDIcon: i32 = 18;
        pub const SP_DriveDVDIcon: i32 = 19;
        pub const SP_DriveNetIcon: i32 = 20;
        pub const SP_DirOpenIcon: i32 = 21;
        pub const SP_DirClosedIcon: i32 = 22;
        pub const SP_DirLinkIcon: i32 = 23;
        pub const SP_DirLinkOpenIcon: i32 = 24;
        pub const SP_FileIcon: i32 = 25;
        pub const SP_FileLinkIcon: i32 = 26;
        pub const SP_ToolBarHorizontalExtensionButton: i32 = 27;
        pub const SP_ToolBarVerticalExtensionButton: i32 = 28;
        pub const SP_FileDialogStart: i32 = 29;
        pub const SP_FileDialogEnd: i32 = 30;
        pub const SP_FileDialogToParent: i32 = 31;
        pub const SP_FileDialogNewFolder: i32 = 32;
        pub const SP_FileDialogDetailedView: i32 = 33;
        pub const SP_FileDialogInfoView: i32 = 34;
        pub const SP_FileDialogContentsView: i32 = 35;
        pub const SP_FileDialogListView: i32 = 36;
        pub const SP_FileDialogBack: i32 = 37;
        pub const SP_DirIcon: i32 = 38;
        pub const SP_DialogOkButton: i32 = 39;
        pub const SP_DialogCancelButton: i32 = 40;
        pub const SP_DialogHelpButton: i32 = 41;
        pub const SP_DialogOpenButton: i32 = 42;
        pub const SP_DialogSaveButton: i32 = 43;
        pub const SP_DialogCloseButton: i32 = 44;
        pub const SP_DialogApplyButton: i32 = 45;
        pub const SP_DialogResetButton: i32 = 46;
        pub const SP_DialogDiscardButton: i32 = 47;
        pub const SP_DialogYesButton: i32 = 48;
        pub const SP_DialogNoButton: i32 = 49;
        pub const SP_ArrowUp: i32 = 50;
        pub const SP_ArrowDown: i32 = 51;
        pub const SP_ArrowLeft: i32 = 52;
        pub const SP_ArrowRight: i32 = 53;
        pub const SP_ArrowBack: i32 = 54;
        pub const SP_ArrowForward: i32 = 55;
        pub const SP_DirHomeIcon: i32 = 56;
        pub const SP_CommandLink: i32 = 57;
        pub const SP_VistaShield: i32 = 58;
        pub const SP_BrowserReload: i32 = 59;
        pub const SP_BrowserStop: i32 = 60;
        pub const SP_MediaPlay: i32 = 61;
        pub const SP_MediaStop: i32 = 62;
        pub const SP_MediaPause: i32 = 63;
        pub const SP_MediaSkipForward: i32 = 64;
        pub const SP_MediaSkipBackward: i32 = 65;
        pub const SP_MediaSeekForward: i32 = 66;
        pub const SP_MediaSeekBackward: i32 = 67;
        pub const SP_MediaVolume: i32 = 68;
        pub const SP_MediaVolumeMuted: i32 = 69;
        pub const SP_LineEditClearButton: i32 = 70;
        pub const SP_DialogYesToAllButton: i32 = 71;
        pub const SP_DialogNoToAllButton: i32 = 72;
        pub const SP_DialogSaveAllButton: i32 = 73;
        pub const SP_DialogAbortButton: i32 = 74;
        pub const SP_DialogRetryButton: i32 = 75;
        pub const SP_DialogIgnoreButton: i32 = 76;
        pub const SP_RestoreDefaultsButton: i32 = 77;
        pub const SP_TabCloseButton: i32 = 78;
        pub const NStandardPixmap: i32 = 79;
        pub const SP_CustomBase: i32 = -268435456;
    };
};
