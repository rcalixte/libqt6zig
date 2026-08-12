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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QProxyStyle object in C++ memory
    ///
    pub fn new() QProxyStyle {
        return .{ .ptr = qtc.QProxyStyle_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QProxyStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn new2(key: []const u8) QProxyStyle {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QProxyStyle_new2(key_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QProxyStyle object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` style: QStyle `
    ///
    pub fn new3(style: anytype) QProxyStyle {
        comptime _ = @TypeOf(style)._is_QStyle;
        return .{ .ptr = qtc.QProxyStyle_new3(@ptrCast(style.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn metaObject(self: QProxyStyle) QMetaObject {
        return .{ .ptr = qtc.QProxyStyle_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QProxyStyle, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QProxyStyle_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    pub fn superMetaObject(self: QProxyStyle) QMetaObject {
        return .{ .ptr = qtc.QProxyStyle_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QProxyStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QProxyStyle, callback: *const fn (QProxyStyle, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QProxyStyle_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QProxyStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QProxyStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProxyStyle_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QProxyStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProxyStyle.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `baseStyle` instead
    ///
    pub const BaseStyle = baseStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn baseStyle(self: QProxyStyle) QStyle {
        return .{ .ptr = qtc.QProxyStyle_BaseStyle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseStyle` instead
    ///
    pub const SetBaseStyle = setBaseStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` style: QStyle `
    ///
    pub fn setBaseStyle(self: QProxyStyle, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QProxyStyle_SetBaseStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// ### DEPRECATED: Use `drawPrimitive` instead
    ///
    pub const DrawPrimitive = drawPrimitive;

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
    pub fn drawPrimitive(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_DrawPrimitive(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDrawPrimitive` instead
    ///
    pub const OnDrawPrimitive = onDrawPrimitive;

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
    pub fn onDrawPrimitive(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawPrimitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPrimitive` instead
    ///
    pub const SuperDrawPrimitive = superDrawPrimitive;

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
    pub fn superDrawPrimitive(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperDrawPrimitive(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `drawControl` instead
    ///
    pub const DrawControl = drawControl;

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
    pub fn drawControl(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_DrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDrawControl` instead
    ///
    pub const OnDrawControl = onDrawControl;

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
    pub fn onDrawControl(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawControl` instead
    ///
    pub const SuperDrawControl = superDrawControl;

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
    pub fn superDrawControl(self: QProxyStyle, element: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperDrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `drawComplexControl` instead
    ///
    pub const DrawComplexControl = drawComplexControl;

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
    pub fn drawComplexControl(self: QProxyStyle, control: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_DrawComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDrawComplexControl` instead
    ///
    pub const OnDrawComplexControl = onDrawComplexControl;

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
    pub fn onDrawComplexControl(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOptionComplex, QPainter, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawComplexControl` instead
    ///
    pub const SuperDrawComplexControl = superDrawComplexControl;

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
    pub fn superDrawComplexControl(self: QProxyStyle, control: i32, option: anytype, painter: anytype, widget: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperDrawComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(painter.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `drawItemText` instead
    ///
    pub const DrawItemText = drawItemText;

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
    pub fn drawItemText(self: QProxyStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_DrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `onDrawItemText` instead
    ///
    pub const OnDrawItemText = onDrawItemText;

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
    pub fn onDrawItemText(self: QProxyStyle, callback: *const fn (QProxyStyle, QPainter, QRect, i32, QPalette, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawItemText` instead
    ///
    pub const SuperDrawItemText = superDrawItemText;

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
    pub fn superDrawItemText(self: QProxyStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_SuperDrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `drawItemPixmap` instead
    ///
    pub const DrawItemPixmap = drawItemPixmap;

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
    pub fn drawItemPixmap(self: QProxyStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QProxyStyle_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `onDrawItemPixmap` instead
    ///
    pub const OnDrawItemPixmap = onDrawItemPixmap;

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
    pub fn onDrawItemPixmap(self: QProxyStyle, callback: *const fn (QProxyStyle, QPainter, QRect, i32, QPixmap) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawItemPixmap` instead
    ///
    pub const SuperDrawItemPixmap = superDrawItemPixmap;

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
    pub fn superDrawItemPixmap(self: QProxyStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QProxyStyle_SuperDrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `sizeFromContents` instead
    ///
    pub const SizeFromContents = sizeFromContents;

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
    pub fn sizeFromContents(self: QProxyStyle, typeVal: i32, option: anytype, size: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SizeFromContents(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(option.ptr), @ptrCast(size.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeFromContents` instead
    ///
    pub const OnSizeFromContents = onSizeFromContents;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeFromContents(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QSize, QWidget) callconv(.c) QSize) void {
        qtc.QProxyStyle_OnSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeFromContents` instead
    ///
    pub const SuperSizeFromContents = superSizeFromContents;

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
    pub fn superSizeFromContents(self: QProxyStyle, typeVal: i32, option: anytype, size: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperSizeFromContents(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(option.ptr), @ptrCast(size.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `subElementRect` instead
    ///
    pub const SubElementRect = subElementRect;

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
    pub fn subElementRect(self: QProxyStyle, element: i32, option: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SubElementRect(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSubElementRect` instead
    ///
    pub const OnSubElementRect = onSubElementRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSubElementRect(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnSubElementRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubElementRect` instead
    ///
    pub const SuperSubElementRect = superSubElementRect;

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
    pub fn superSubElementRect(self: QProxyStyle, element: i32, option: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperSubElementRect(@ptrCast(self.ptr), @bitCast(element), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `subControlRect` instead
    ///
    pub const SubControlRect = subControlRect;

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
    pub fn subControlRect(self: QProxyStyle, cc: i32, opt: anytype, sc: i32, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSubControlRect` instead
    ///
    pub const OnSubControlRect = onSubControlRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSubControlRect(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOptionComplex, i32, QWidget) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnSubControlRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubControlRect` instead
    ///
    pub const SuperSubControlRect = superSubControlRect;

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
    pub fn superSubControlRect(self: QProxyStyle, cc: i32, opt: anytype, sc: i32, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperSubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `itemTextRect` instead
    ///
    pub const ItemTextRect = itemTextRect;

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
    pub fn itemTextRect(self: QProxyStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QProxyStyle_ItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `onItemTextRect` instead
    ///
    pub const OnItemTextRect = onItemTextRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemTextRect(self: QProxyStyle, callback: *const fn (QProxyStyle, QFontMetrics, QRect, i32, bool, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnItemTextRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemTextRect` instead
    ///
    pub const SuperItemTextRect = superItemTextRect;

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
    pub fn superItemTextRect(self: QProxyStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QProxyStyle_SuperItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `itemPixmapRect` instead
    ///
    pub const ItemPixmapRect = itemPixmapRect;

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
    pub fn itemPixmapRect(self: QProxyStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QProxyStyle_ItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemPixmapRect` instead
    ///
    pub const OnItemPixmapRect = onItemPixmapRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemPixmapRect(self: QProxyStyle, callback: *const fn (QProxyStyle, QRect, i32, QPixmap) callconv(.c) QRect) void {
        qtc.QProxyStyle_OnItemPixmapRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemPixmapRect` instead
    ///
    pub const SuperItemPixmapRect = superItemPixmapRect;

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
    pub fn superItemPixmapRect(self: QProxyStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QProxyStyle_SuperItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `hitTestComplexControl` instead
    ///
    pub const HitTestComplexControl = hitTestComplexControl;

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
    pub fn hitTestComplexControl(self: QProxyStyle, control: i32, option: anytype, pos: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_HitTestComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(pos.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onHitTestComplexControl` instead
    ///
    pub const OnHitTestComplexControl = onHitTestComplexControl;

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
    pub fn onHitTestComplexControl(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOptionComplex, QPoint, QWidget) callconv(.c) i32) void {
        qtc.QProxyStyle_OnHitTestComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHitTestComplexControl` instead
    ///
    pub const SuperHitTestComplexControl = superHitTestComplexControl;

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
    pub fn superHitTestComplexControl(self: QProxyStyle, control: i32, option: anytype, pos: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_SuperHitTestComplexControl(@ptrCast(self.ptr), @bitCast(control), @ptrCast(option.ptr), @ptrCast(pos.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `styleHint` instead
    ///
    pub const StyleHint = styleHint;

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
    pub fn styleHint(self: QProxyStyle, hint: i32, option: anytype, widget: anytype, returnData: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(returnData)._is_QStyleHintReturn;
        return qtc.QProxyStyle_StyleHint(@ptrCast(self.ptr), @bitCast(hint), @ptrCast(option.ptr), @ptrCast(widget.ptr), @ptrCast(returnData.ptr));
    }

    /// ### DEPRECATED: Use `onStyleHint` instead
    ///
    pub const OnStyleHint = onStyleHint;

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
    pub fn onStyleHint(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget, QStyleHintReturn) callconv(.c) i32) void {
        qtc.QProxyStyle_OnStyleHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStyleHint` instead
    ///
    pub const SuperStyleHint = superStyleHint;

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
    pub fn superStyleHint(self: QProxyStyle, hint: i32, option: anytype, widget: anytype, returnData: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(returnData)._is_QStyleHintReturn;
        return qtc.QProxyStyle_SuperStyleHint(@ptrCast(self.ptr), @bitCast(hint), @ptrCast(option.ptr), @ptrCast(widget.ptr), @ptrCast(returnData.ptr));
    }

    /// ### DEPRECATED: Use `pixelMetric` instead
    ///
    pub const PixelMetric = pixelMetric;

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
    pub fn pixelMetric(self: QProxyStyle, metric: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_PixelMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPixelMetric` instead
    ///
    pub const OnPixelMetric = onPixelMetric;

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
    pub fn onPixelMetric(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QProxyStyle_OnPixelMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPixelMetric` instead
    ///
    pub const SuperPixelMetric = superPixelMetric;

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
    pub fn superPixelMetric(self: QProxyStyle, metric: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_SuperPixelMetric(@ptrCast(self.ptr), @bitCast(metric), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `layoutSpacing` instead
    ///
    pub const LayoutSpacing = layoutSpacing;

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
    pub fn layoutSpacing(self: QProxyStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_LayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutSpacing` instead
    ///
    pub const OnLayoutSpacing = onLayoutSpacing;

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
    pub fn onLayoutSpacing(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, i32, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QProxyStyle_OnLayoutSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLayoutSpacing` instead
    ///
    pub const SuperLayoutSpacing = superLayoutSpacing;

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
    pub fn superLayoutSpacing(self: QProxyStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QProxyStyle_SuperLayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `standardIcon` instead
    ///
    pub const StandardIcon = standardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` _standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn standardIcon(self: QProxyStyle, _standardIcon: i32, option: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_StandardIcon(@ptrCast(self.ptr), @bitCast(_standardIcon), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardIcon` instead
    ///
    pub const OnStandardIcon = onStandardIcon;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardIcon(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) QIcon) void {
        qtc.QProxyStyle_OnStandardIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardIcon` instead
    ///
    pub const SuperStandardIcon = superStandardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` _standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superStandardIcon(self: QProxyStyle, _standardIcon: i32, option: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperStandardIcon(@ptrCast(self.ptr), @bitCast(_standardIcon), @ptrCast(option.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `standardPixmap` instead
    ///
    pub const StandardPixmap = standardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` _standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn standardPixmap(self: QProxyStyle, _standardPixmap: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_StandardPixmap(@ptrCast(self.ptr), @bitCast(_standardPixmap), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardPixmap` instead
    ///
    pub const OnStandardPixmap = onStandardPixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardPixmap(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QStyleOption, QWidget) callconv(.c) QPixmap) void {
        qtc.QProxyStyle_OnStandardPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardPixmap` instead
    ///
    pub const SuperStandardPixmap = superStandardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` _standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superStandardPixmap(self: QProxyStyle, _standardPixmap: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QProxyStyle_SuperStandardPixmap(@ptrCast(self.ptr), @bitCast(_standardPixmap), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `generatedIconPixmap` instead
    ///
    pub const GeneratedIconPixmap = generatedIconPixmap;

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
    pub fn generatedIconPixmap(self: QProxyStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QProxyStyle_GeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeneratedIconPixmap` instead
    ///
    pub const OnGeneratedIconPixmap = onGeneratedIconPixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeneratedIconPixmap(self: QProxyStyle, callback: *const fn (QProxyStyle, i32, QPixmap, QStyleOption) callconv(.c) QPixmap) void {
        qtc.QProxyStyle_OnGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeneratedIconPixmap` instead
    ///
    pub const SuperGeneratedIconPixmap = superGeneratedIconPixmap;

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
    pub fn superGeneratedIconPixmap(self: QProxyStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QProxyStyle_SuperGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### DEPRECATED: Use `standardPalette` instead
    ///
    pub const StandardPalette = standardPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn standardPalette(self: QProxyStyle) QPalette {
        return .{ .ptr = qtc.QProxyStyle_StandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardPalette` instead
    ///
    pub const OnStandardPalette = onStandardPalette;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardPalette(self: QProxyStyle, callback: *const fn () callconv(.c) QPalette) void {
        qtc.QProxyStyle_OnStandardPalette(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardPalette` instead
    ///
    pub const SuperStandardPalette = superStandardPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn superStandardPalette(self: QProxyStyle) QPalette {
        return .{ .ptr = qtc.QProxyStyle_SuperStandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `polish` instead
    ///
    pub const Polish = polish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn polish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_Polish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPolish` instead
    ///
    pub const OnPolish = onPolish;

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
    pub fn onPolish(self: QProxyStyle, callback: *const fn (QProxyStyle, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish` instead
    ///
    pub const SuperPolish = superPolish;

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
    pub fn superPolish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperPolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `polish2` instead
    ///
    pub const Polish2 = polish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` pal: QPalette `
    ///
    pub fn polish2(self: QProxyStyle, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QProxyStyle_Polish2(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### DEPRECATED: Use `onPolish2` instead
    ///
    pub const OnPolish2 = onPolish2;

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
    pub fn onPolish2(self: QProxyStyle, callback: *const fn (QProxyStyle, QPalette) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish2` instead
    ///
    pub const SuperPolish2 = superPolish2;

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
    pub fn superPolish2(self: QProxyStyle, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QProxyStyle_SuperPolish2(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### DEPRECATED: Use `polish3` instead
    ///
    pub const Polish3 = polish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn polish3(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_Polish3(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `onPolish3` instead
    ///
    pub const OnPolish3 = onPolish3;

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
    pub fn onPolish3(self: QProxyStyle, callback: *const fn (QProxyStyle, QApplication) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish3` instead
    ///
    pub const SuperPolish3 = superPolish3;

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
    pub fn superPolish3(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_SuperPolish3(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `unpolish` instead
    ///
    pub const Unpolish = unpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn unpolish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_Unpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onUnpolish` instead
    ///
    pub const OnUnpolish = onUnpolish;

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
    pub fn onUnpolish(self: QProxyStyle, callback: *const fn (QProxyStyle, QWidget) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnpolish` instead
    ///
    pub const SuperUnpolish = superUnpolish;

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
    pub fn superUnpolish(self: QProxyStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QProxyStyle_SuperUnpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `unpolish2` instead
    ///
    pub const Unpolish2 = unpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn unpolish2(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_Unpolish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `onUnpolish2` instead
    ///
    pub const OnUnpolish2 = onUnpolish2;

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
    pub fn onUnpolish2(self: QProxyStyle, callback: *const fn (QProxyStyle, QApplication) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnpolish2` instead
    ///
    pub const SuperUnpolish2 = superUnpolish2;

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
    pub fn superUnpolish2(self: QProxyStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QProxyStyle_SuperUnpolish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QProxyStyle, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QProxyStyle_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QEvent) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QProxyStyle, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QProxyStyle_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProxyStyle.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProxyStyle.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: QProxyStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStyle_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProxyStyle.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

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
    pub fn visualRect(direction: i32, boundingRect: anytype, logicalRect: anytype) QRect {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalRect)._is_QRect;
        return .{ .ptr = qtc.QStyle_VisualRect(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalRect.ptr)) };
    }

    /// ### DEPRECATED: Use `visualPos` instead
    ///
    pub const VisualPos = visualPos;

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
    pub fn visualPos(direction: i32, boundingRect: anytype, logicalPos: anytype) QPoint {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalPos)._is_QPoint;
        return .{ .ptr = qtc.QStyle_VisualPos(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `sliderPositionFromValue` instead
    ///
    pub const SliderPositionFromValue = sliderPositionFromValue;

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
    pub fn sliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space));
    }

    /// ### DEPRECATED: Use `sliderValueFromPosition` instead
    ///
    pub const SliderValueFromPosition = sliderValueFromPosition;

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
    pub fn sliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space));
    }

    /// ### DEPRECATED: Use `visualAlignment` instead
    ///
    pub const VisualAlignment = visualAlignment;

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
    pub fn visualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@bitCast(direction), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `alignedRect` instead
    ///
    pub const AlignedRect = alignedRect;

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
    pub fn alignedRect(direction: i32, alignment: i32, size: anytype, rectangle: anytype) QRect {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QStyle_AlignedRect(@bitCast(direction), @bitCast(alignment), @ptrCast(size.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing` instead
    ///
    pub const CombinedLayoutSpacing = combinedLayoutSpacing;

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
    pub fn combinedLayoutSpacing(self: QProxyStyle, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn proxy(self: QProxyStyle) QStyle {
        return .{ .ptr = qtc.QStyle_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sliderPositionFromValue5` instead
    ///
    pub const SliderPositionFromValue5 = sliderPositionFromValue5;

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
    pub fn sliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space), upsideDown);
    }

    /// ### DEPRECATED: Use `sliderValueFromPosition5` instead
    ///
    pub const SliderValueFromPosition5 = sliderValueFromPosition5;

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
    pub fn sliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space), upsideDown);
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing4` instead
    ///
    pub const CombinedLayoutSpacing4 = combinedLayoutSpacing4;

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
    pub fn combinedLayoutSpacing4(self: QProxyStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing5` instead
    ///
    pub const CombinedLayoutSpacing5 = combinedLayoutSpacing5;

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
    pub fn combinedLayoutSpacing5(self: QProxyStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
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
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QProxyStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProxyStyle.objectName: Memory allocation failed");
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
    /// ` self: QProxyStyle `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QProxyStyle, _name: []const u8) void {
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
    /// ` self: QProxyStyle `
    ///
    pub fn isWidgetType(self: QProxyStyle) bool {
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
    /// ` self: QProxyStyle `
    ///
    pub fn isWindowType(self: QProxyStyle) bool {
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
    /// ` self: QProxyStyle `
    ///
    pub fn isQuickItemType(self: QProxyStyle) bool {
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
    /// ` self: QProxyStyle `
    ///
    pub fn signalsBlocked(self: QProxyStyle) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QProxyStyle, b: bool) bool {
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
    /// ` self: QProxyStyle `
    ///
    pub fn thread(self: QProxyStyle) QThread {
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
    /// ` self: QProxyStyle `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QProxyStyle, _thread: anytype) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QProxyStyle, interval: i32) i32 {
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
    /// ` self: QProxyStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QProxyStyle, time: i64) i32 {
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
    /// ` self: QProxyStyle `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QProxyStyle, id: i32) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QProxyStyle, id: i32) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QProxyStyle, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QProxyStyle.children: Memory allocation failed");
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
    /// ` self: QProxyStyle `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QProxyStyle, _parent: anytype) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QProxyStyle, filterObj: anytype) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QProxyStyle, obj: anytype) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QProxyStyle, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QProxyStyle `
    ///
    pub fn disconnect3(self: QProxyStyle) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QProxyStyle, receiver: anytype) bool {
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
    /// ` self: QProxyStyle `
    ///
    pub fn dumpObjectTree(self: QProxyStyle) void {
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
    /// ` self: QProxyStyle `
    ///
    pub fn dumpObjectInfo(self: QProxyStyle) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QProxyStyle, _name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QProxyStyle, _name: [:0]const u8) QVariant {
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
    /// ` self: QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QProxyStyle, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QProxyStyle.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProxyStyle.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QProxyStyle `
    ///
    pub fn bindingStorage(self: QProxyStyle) QBindingStorage {
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
    /// ` self: QProxyStyle `
    ///
    pub fn bindingStorage2(self: QProxyStyle) QBindingStorage {
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
    /// ` self: QProxyStyle `
    ///
    pub fn destroyed(self: QProxyStyle) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QProxyStyle, callback: *const fn (QProxyStyle) callconv(.c) void) void {
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
    /// ` self: QProxyStyle `
    ///
    pub fn parent(self: QProxyStyle) QObject {
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
    /// ` self: QProxyStyle `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QProxyStyle, classname: [:0]const u8) bool {
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
    /// ` self: QProxyStyle `
    ///
    pub fn deleteLater(self: QProxyStyle) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QProxyStyle, interval: i32, timerType: i32) i32 {
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
    /// ` self: QProxyStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QProxyStyle, time: i64, timerType: i32) i32 {
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
    /// ` self: QProxyStyle `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QProxyStyle, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QProxyStyle, signal: [:0]const u8) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QProxyStyle, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QProxyStyle, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QProxyStyle, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QProxyStyle `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QProxyStyle, param1: anytype) void {
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
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QProxyStyle, callback: *const fn (QProxyStyle, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QProxyStyle, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QProxyStyle_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QProxyStyle, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QProxyStyle_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QProxyStyle, callback: *const fn (QProxyStyle, QObject, QEvent) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QProxyStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QProxyStyle_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QProxyStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QProxyStyle_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QTimerEvent) callconv(.c) void) void {
        qtc.QProxyStyle_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QProxyStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QProxyStyle_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QProxyStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QProxyStyle_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QChildEvent) callconv(.c) void) void {
        qtc.QProxyStyle_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QProxyStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QProxyStyle_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QProxyStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QProxyStyle_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QProxyStyle, callback: *const fn (QProxyStyle, QEvent) callconv(.c) void) void {
        qtc.QProxyStyle_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QProxyStyle, callback: *const fn (QProxyStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QProxyStyle_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QProxyStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProxyStyle_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QProxyStyle, callback: *const fn (QProxyStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QProxyStyle_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    pub fn sender(self: QProxyStyle) QObject {
        return .{ .ptr = qtc.QProxyStyle_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QProxyStyle `
    ///
    pub fn superSender(self: QProxyStyle) QObject {
        return .{ .ptr = qtc.QProxyStyle_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QProxyStyle, callback: *const fn () callconv(.c) QObject) void {
        qtc.QProxyStyle_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    pub fn senderSignalIndex(self: QProxyStyle) i32 {
        return qtc.QProxyStyle_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QProxyStyle `
    ///
    pub fn superSenderSignalIndex(self: QProxyStyle) i32 {
        return qtc.QProxyStyle_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QProxyStyle, callback: *const fn () callconv(.c) i32) void {
        qtc.QProxyStyle_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QProxyStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QProxyStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QProxyStyle, callback: *const fn (QProxyStyle, [*:0]const u8) callconv(.c) i32) void {
        qtc.QProxyStyle_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QProxyStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProxyStyle_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProxyStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QProxyStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProxyStyle_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProxyStyle`
    ///
    /// ` callback: *const fn (self: QProxyStyle, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QProxyStyle, callback: *const fn (QProxyStyle, QMetaMethod) callconv(.c) bool) void {
        qtc.QProxyStyle_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProxyStyle `
    ///
    /// ` callback: *const fn (self: QProxyStyle, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QProxyStyle, callback: *const fn (QProxyStyle, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#dtor.QProxyStyle)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QProxyStyle `
    ///
    pub fn delete(self: QProxyStyle) void {
        qtc.QProxyStyle_Delete(@ptrCast(self.ptr));
    }
};
