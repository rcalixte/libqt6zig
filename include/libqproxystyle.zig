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
const QStyle = @import("libqt6").QStyle;
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
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html)
pub const QProxyStyle = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QProxyStyle,

    pub const _is_QProxyStyle = {};
    pub const _is_QCommonStyle = {};
    pub const _is_QStyle = {};
    pub const _is_QObject = {};

    /// New constructs a new QProxyStyle object.
    ///
    pub fn New() QProxyStyle {
        return .{ .ptr = qtc.QProxyStyle_new() };
    }

    /// New2 constructs a new QProxyStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn New2(key: []const u8) QProxyStyle {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QProxyStyle_new2(key_str) };
    }

    /// New3 constructs a new QProxyStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` style: QStyle `
    ///
    pub fn New3(style: anytype) QProxyStyle {
        comptime _ = @TypeOf(style)._is_QStyle;
        return .{ .ptr = qtc.QProxyStyle_new3(@ptrCast(style.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn MetaObject(self: QProxyStyle) QMetaObject {
        return .{ .ptr = qtc.QProxyStyle_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QProxyStyle, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QProxyStyle_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn SuperMetaObject(self: QProxyStyle) QMetaObject {
        return .{ .ptr = qtc.QProxyStyle_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QProxyStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QProxyStyle, callback: *const fn (QProxyStyle, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QProxyStyle_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QProxyStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QProxyStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProxyStyle_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QProxyStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn BaseStyle(self: QProxyStyle) QStyle {
        return .{ .ptr = qtc.QProxyStyle_BaseStyle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetBaseStyle(self: QProxyStyle, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QProxyStyle_SetBaseStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` element: qstyle_enums.PrimitiveElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` painter: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DrawPrimitive(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_DrawPrimitive(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, element: qstyle_enums.PrimitiveElement, option: QStyleOption, painter: QPainter, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawPrimitive(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawPrimitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPrimitive` instead
    ///
    pub const QBaseDrawPrimitive = SuperDrawPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` element: qstyle_enums.PrimitiveElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` painter: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDrawPrimitive(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperDrawPrimitive(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` painter: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DrawControl(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_DrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, element: qstyle_enums.ControlElement, option: QStyleOption, painter: QPainter, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawControl(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawControl` instead
    ///
    pub const QBaseDrawControl = SuperDrawControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` painter: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDrawControl(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperDrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QStyleOptionComplex `
    ///
    /// ` painter: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DrawComplexControl(self: QProxyStyle, control: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_DrawComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, control: qstyle_enums.ComplexControl, option: QStyleOptionComplex, painter: QPainter, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawComplexControl(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOptionComplex, QPainter, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawComplexControl` instead
    ///
    pub const QBaseDrawComplexControl = SuperDrawComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QStyleOptionComplex `
    ///
    /// ` painter: QPainter `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDrawComplexControl(self: QProxyStyle, control: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperDrawComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn DrawItemText(self: QProxyStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_DrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, painter: QPainter, rect: QRect, flags: i32, pal: QPalette, enabled: bool, text: [*:0]const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void `
    ///
    pub fn OnDrawItemText(self: QProxyStyle, callback: *const fn (QProxyStyle, QPainter, QRect, i32, QPalette, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawItemText` instead
    ///
    pub const QBaseDrawItemText = SuperDrawItemText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn SuperDrawItemText(self: QProxyStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_SuperDrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn DrawItemPixmap(self: QProxyStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QProxyStyle_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, painter: QPainter, rect: QRect, alignment: i32, pixmap: QPixmap) callconv(.c) void `
    ///
    pub fn OnDrawItemPixmap(self: QProxyStyle, callback: *const fn (QProxyStyle, QPainter, QRect, i32, QPixmap) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawItemPixmap` instead
    ///
    pub const QBaseDrawItemPixmap = SuperDrawItemPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperDrawItemPixmap(self: QProxyStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QProxyStyle_SuperDrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` typeVal: qstyle_enums.ContentsType `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` size: QSize `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SizeFromContents(self: QProxyStyle, typeVal: i32, option: anytype, size: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SizeFromContents(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(option.ptr), @ptrCast(size.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, typeVal: qstyle_enums.ContentsType, option: QStyleOption, size: QSize, widget: QWidget) callconv(.c) QSize `
    ///
    pub fn OnSizeFromContents(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QSize, QWidget) callconv(.c) QSize) void {
        qtc.QProxyStyle_OnSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeFromContents` instead
    ///
    pub const QBaseSizeFromContents = SuperSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` typeVal: qstyle_enums.ContentsType `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` size: QSize `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSizeFromContents(self: QProxyStyle, typeVal: i32, option: anytype, size: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperSizeFromContents(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(option.ptr), @ptrCast(size.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` element: qstyle_enums.SubElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SubElementRect(self: QProxyStyle, element: i32, option: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SubElementRect(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, element: qstyle_enums.SubElement, option: QStyleOption, widget: QWidget) callconv(.c) QRect `
    ///
    pub fn OnSubElementRect(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnSubElementRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubElementRect` instead
    ///
    pub const QBaseSubElementRect = SuperSubElementRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` element: qstyle_enums.SubElement `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSubElementRect(self: QProxyStyle, element: i32, option: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperSubElementRect(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SubControlRect(self: QProxyStyle, cc: i32, opt: anytype, sc: i32, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QWidget) callconv(.c) QRect `
    ///
    pub fn OnSubControlRect(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOptionComplex, i32, QWidget) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnSubControlRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubControlRect` instead
    ///
    pub const QBaseSubControlRect = SuperSubControlRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSubControlRect(self: QProxyStyle, cc: i32, opt: anytype, sc: i32, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperSubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn ItemTextRect(self: QProxyStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QProxyStyle_ItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, fm: QFontMetrics, r: QRect, flags: i32, enabled: bool, text: [*:0]const u8) callconv(.c) QRect `
    ///
    pub fn OnItemTextRect(self: QProxyStyle, callback: *const fn (QProxyStyle, QFontMetrics, QRect, i32, bool, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnItemTextRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemTextRect` instead
    ///
    pub const QBaseItemTextRect = SuperItemTextRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn SuperItemTextRect(self: QProxyStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QProxyStyle_SuperItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn ItemPixmapRect(self: QProxyStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QProxyStyle_ItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, r: QRect, flags: i32, pixmap: QPixmap) callconv(.c) QRect `
    ///
    pub fn OnItemPixmapRect(self: QProxyStyle, callback: *const fn (QProxyStyle, QRect, i32, QPixmap) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnItemPixmapRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemPixmapRect` instead
    ///
    pub const QBaseItemPixmapRect = SuperItemPixmapRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperItemPixmapRect(self: QProxyStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QProxyStyle_SuperItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QStyleOptionComplex `
    ///
    /// ` pos: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn HitTestComplexControl(self: QProxyStyle, control: i32, option: anytype, pos: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_HitTestComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(pos.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, control: qstyle_enums.ComplexControl, option: QStyleOptionComplex, pos: QPoint, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn OnHitTestComplexControl(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOptionComplex, QPoint, QWidget) callconv(.c) i32) void {
        qtc.QProxyStyle_OnHitTestComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHitTestComplexControl` instead
    ///
    pub const QBaseHitTestComplexControl = SuperHitTestComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QStyleOptionComplex `
    ///
    /// ` pos: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn SuperHitTestComplexControl(self: QProxyStyle, control: i32, option: anytype, pos: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_SuperHitTestComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(pos.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` hint: qstyle_enums.StyleHint `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    /// ` returnData: QStyleHintReturn `
    ///
    pub fn StyleHint(self: QProxyStyle, hint: i32, option: anytype, widget: anytype, returnData: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(returnData)._is_QStyleHintReturn;
        return qtc.QProxyStyle_StyleHint(@ptrCast(self.ptr), @bitCast(hint), @ptrCast(option.ptr), @ptrCast(widget.ptr), @ptrCast(returnData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, hint: qstyle_enums.StyleHint, option: QStyleOption, widget: QWidget, returnData: QStyleHintReturn) callconv(.c) i32 `
    ///
    pub fn OnStyleHint(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget, QStyleHintReturn) callconv(.c) i32) void {
        qtc.QProxyStyle_OnStyleHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStyleHint` instead
    ///
    pub const QBaseStyleHint = SuperStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` hint: qstyle_enums.StyleHint `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    /// ` returnData: QStyleHintReturn `
    ///
    pub fn SuperStyleHint(self: QProxyStyle, hint: i32, option: anytype, widget: anytype, returnData: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(returnData)._is_QStyleHintReturn;
        return qtc.QProxyStyle_SuperStyleHint(@ptrCast(self.ptr), @bitCast(hint), @ptrCast(option.ptr), @ptrCast(widget.ptr), @ptrCast(returnData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` metric: qstyle_enums.PixelMetric `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn PixelMetric(self: QProxyStyle, metric: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_PixelMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, metric: qstyle_enums.PixelMetric, option: QStyleOption, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn OnPixelMetric(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QProxyStyle_OnPixelMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPixelMetric` instead
    ///
    pub const QBasePixelMetric = SuperPixelMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` metric: qstyle_enums.PixelMetric `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPixelMetric(self: QProxyStyle, metric: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_SuperPixelMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn LayoutSpacing(self: QProxyStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_LayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QStyleOption, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn OnLayoutSpacing(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, i32, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QProxyStyle_OnLayoutSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLayoutSpacing` instead
    ///
    pub const QBaseLayoutSpacing = SuperLayoutSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn SuperLayoutSpacing(self: QProxyStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_SuperLayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn StandardIcon(self: QProxyStyle, standardIcon: i32, option: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_StandardIcon(@ptrCast(self.ptr), @bitCast(standardIcon), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: QStyleOption, widget: QWidget) callconv(.c) QIcon `
    ///
    pub fn OnStandardIcon(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) QIcon) void {
        qtc.QProxyStyle_OnStandardIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStandardIcon` instead
    ///
    pub const QBaseStandardIcon = SuperStandardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperStandardIcon(self: QProxyStyle, standardIcon: i32, option: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperStandardIcon(@ptrCast(self.ptr), @bitCast(standardIcon), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn StandardPixmap(self: QProxyStyle, standardPixmap: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_StandardPixmap(@ptrCast(self.ptr), @bitCast(standardPixmap), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QStyleOption, widget: QWidget) callconv(.c) QPixmap `
    ///
    pub fn OnStandardPixmap(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) QPixmap) void {
        qtc.QProxyStyle_OnStandardPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStandardPixmap` instead
    ///
    pub const QBaseStandardPixmap = SuperStandardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperStandardPixmap(self: QProxyStyle, standardPixmap: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperStandardPixmap(@ptrCast(self.ptr), @bitCast(standardPixmap), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn GeneratedIconPixmap(self: QProxyStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QProxyStyle_GeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, iconMode: qicon_enums.Mode, pixmap: QPixmap, opt: QStyleOption) callconv(.c) QPixmap `
    ///
    pub fn OnGeneratedIconPixmap(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QPixmap, QStyleOption) callconv(.c) QPixmap) void {
        qtc.QProxyStyle_OnGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeneratedIconPixmap` instead
    ///
    pub const QBaseGeneratedIconPixmap = SuperGeneratedIconPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn SuperGeneratedIconPixmap(self: QProxyStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QProxyStyle_SuperGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn StandardPalette(self: QProxyStyle) QPalette {
        return .{ .ptr = qtc.QProxyStyle_StandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QPalette `
    ///
    pub fn OnStandardPalette(self: QProxyStyle, callback: *const fn () callconv(.c) QPalette) void {
        qtc.QProxyStyle_OnStandardPalette(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStandardPalette` instead
    ///
    pub const QBaseStandardPalette = SuperStandardPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn SuperStandardPalette(self: QProxyStyle) QPalette {
        return .{ .ptr = qtc.QProxyStyle_SuperStandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Polish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_Polish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPolish(self: QProxyStyle, callback: *const fn (QProxyStyle, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPolish` instead
    ///
    pub const QBasePolish = SuperPolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPolish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperPolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` pal: QPalette `
    ///
    pub fn Polish2(self: QProxyStyle, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QProxyStyle_Polish2(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, pal: QPalette) callconv(.c) void `
    ///
    pub fn OnPolish2(self: QProxyStyle, callback: *const fn (QProxyStyle, QPalette) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPolish2` instead
    ///
    pub const QBasePolish2 = SuperPolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` pal: QPalette `
    ///
    pub fn SuperPolish2(self: QProxyStyle, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QProxyStyle_SuperPolish2(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn Polish3(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_Polish3(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, app: QApplication) callconv(.c) void `
    ///
    pub fn OnPolish3(self: QProxyStyle, callback: *const fn (QProxyStyle, QApplication) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPolish3` instead
    ///
    pub const QBasePolish3 = SuperPolish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn SuperPolish3(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_SuperPolish3(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Unpolish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_Unpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnUnpolish(self: QProxyStyle, callback: *const fn (QProxyStyle, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnpolish` instead
    ///
    pub const QBaseUnpolish = SuperUnpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperUnpolish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperUnpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn Unpolish2(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_Unpolish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, app: QApplication) callconv(.c) void `
    ///
    pub fn OnUnpolish2(self: QProxyStyle, callback: *const fn (QProxyStyle, QApplication) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnpolish2` instead
    ///
    pub const QBaseUnpolish2 = SuperUnpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn SuperUnpolish2(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_SuperUnpolish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QProxyStyle, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QProxyStyle_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QEvent) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QProxyStyle, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QProxyStyle_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QProxyStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStyle_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
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
    pub fn VisualRect(direction: i32, boundingRect: anytype, logicalRect: anytype) QRect {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalRect)._is_QRect;
        return .{ .ptr = qtc.QStyle_VisualRect(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalRect.ptr)) };
    }

    /// Inherited from QStyle
    ///
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
    pub fn VisualPos(direction: i32, boundingRect: anytype, logicalPos: anytype) QPoint {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalPos)._is_QPoint;
        return .{ .ptr = qtc.QStyle_VisualPos(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalPos.ptr)) };
    }

    /// Inherited from QStyle
    ///
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
    pub fn SliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space));
    }

    /// Inherited from QStyle
    ///
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
    pub fn SliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space));
    }

    /// Inherited from QStyle
    ///
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
    pub fn VisualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@bitCast(direction), @bitCast(alignment));
    }

    /// Inherited from QStyle
    ///
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
    pub fn AlignedRect(direction: i32, alignment: i32, size: anytype, rectangle: anytype) QRect {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QStyle_AlignedRect(@bitCast(direction), @bitCast(alignment), @ptrCast(size.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn CombinedLayoutSpacing(self: QProxyStyle, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Proxy(self: QProxyStyle) QStyle {
        return .{ .ptr = qtc.QStyle_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyle
    ///
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
    pub fn SliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
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
    pub fn SliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn CombinedLayoutSpacing4(self: QProxyStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
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
    pub fn CombinedLayoutSpacing5(self: QProxyStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QProxyStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QProxyStyle, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn IsWidgetType(self: QProxyStyle) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn IsWindowType(self: QProxyStyle) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn IsQuickItemType(self: QProxyStyle) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn SignalsBlocked(self: QProxyStyle) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QProxyStyle, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Thread(self: QProxyStyle) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QProxyStyle, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QProxyStyle, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QProxyStyle, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QProxyStyle, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QProxyStyle, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QProxyStyle, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qproxystyle.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QProxyStyle, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QProxyStyle, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QProxyStyle, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QProxyStyle, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Disconnect3(self: QProxyStyle) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QProxyStyle, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn DumpObjectTree(self: QProxyStyle) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn DumpObjectInfo(self: QProxyStyle) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QProxyStyle, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QProxyStyle, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QProxyStyle, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qproxystyle.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qproxystyle.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn BindingStorage(self: QProxyStyle) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn BindingStorage2(self: QProxyStyle) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Destroyed(self: QProxyStyle) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QProxyStyle, callback: *const fn (QProxyStyle) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Parent(self: QProxyStyle) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QProxyStyle, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn DeleteLater(self: QProxyStyle) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QProxyStyle, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QProxyStyle, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QProxyStyle, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QProxyStyle, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QProxyStyle, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QProxyStyle, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QProxyStyle, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QProxyStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QProxyStyle, callback: *const fn (QProxyStyle, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QProxyStyle, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QProxyStyle_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QProxyStyle, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QProxyStyle_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QProxyStyle, callback: *const fn (QProxyStyle, QObject, QEvent) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QProxyStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QProxyStyle_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QProxyStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QProxyStyle_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QTimerEvent) callconv(.c) void) void {
        qtc.QProxyStyle_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QProxyStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QProxyStyle_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QProxyStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QProxyStyle_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QChildEvent) callconv(.c) void) void {
        qtc.QProxyStyle_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QProxyStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QProxyStyle_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QProxyStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QProxyStyle_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QEvent) callconv(.c) void) void {
        qtc.QProxyStyle_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QProxyStyle, callback: *const fn (QProxyStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QProxyStyle_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QProxyStyle, callback: *const fn (QProxyStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QProxyStyle_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Sender(self: QProxyStyle) QObject {
        return .{ .ptr = qtc.QProxyStyle_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn SuperSender(self: QProxyStyle) QObject {
        return .{ .ptr = qtc.QProxyStyle_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QProxyStyle, callback: *const fn () callconv(.c) QObject) void {
        qtc.QProxyStyle_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn SenderSignalIndex(self: QProxyStyle) i32 {
        return qtc.QProxyStyle_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn SuperSenderSignalIndex(self: QProxyStyle) i32 {
        return qtc.QProxyStyle_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QProxyStyle, callback: *const fn () callconv(.c) i32) void {
        qtc.QProxyStyle_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QProxyStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QProxyStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QProxyStyle, callback: *const fn (QProxyStyle, [*:0]const u8) callconv(.c) i32) void {
        qtc.QProxyStyle_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QProxyStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProxyStyle_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QProxyStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProxyStyle_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QProxyStyle, callback: *const fn (QProxyStyle, QMetaMethod) callconv(.c) bool) void {
        qtc.QProxyStyle_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QProxyStyle, callback: *const fn (QProxyStyle, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#dtor.QProxyStyle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn Delete(self: QProxyStyle) void {
        qtc.QProxyStyle_Delete(@ptrCast(self.ptr));
    }
};
