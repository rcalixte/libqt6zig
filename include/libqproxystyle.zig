const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("libqicon.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html)
pub const qproxystyle = struct {
    /// New constructs a new QProxyStyle object.
    ///
    pub fn New() QtC.QProxyStyle {
        return qtc.QProxyStyle_new();
    }

    /// New2 constructs a new QProxyStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn New2(key: []const u8) QtC.QProxyStyle {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QProxyStyle_new2(key_str);
    }

    /// New3 constructs a new QProxyStyle object.
    ///
    /// ## Parameter(s):
    ///
    /// ` style: QtC.QStyle `
    ///
    pub fn New3(style: ?*anyopaque) QtC.QProxyStyle {
        return qtc.QProxyStyle_new3(@ptrCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QProxyStyle_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QProxyStyle_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QProxyStyle_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QProxyStyle_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProxyStyle_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn BaseStyle(self: ?*anyopaque) QtC.QStyle {
        return qtc.QProxyStyle_BaseStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` style: QtC.QStyle `
    ///
    pub fn SetBaseStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QProxyStyle_SetBaseStyle(@ptrCast(self), @ptrCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` element: qstyle_enums.PrimitiveElement `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn DrawPrimitive(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawPrimitive(@ptrCast(self), @bitCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, element: qstyle_enums.PrimitiveElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnDrawPrimitive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawPrimitive(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` element: qstyle_enums.PrimitiveElement `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperDrawPrimitive(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_SuperDrawPrimitive(@ptrCast(self), @bitCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn DrawControl(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawControl(@ptrCast(self), @bitCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, element: qstyle_enums.ControlElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnDrawControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawControl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperDrawControl(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_SuperDrawControl(@ptrCast(self), @bitCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QtC.QStyleOptionComplex `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn DrawComplexControl(self: ?*anyopaque, control: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawComplexControl(@ptrCast(self), @bitCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, painter: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnDrawComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawComplexControl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QtC.QStyleOptionComplex `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperDrawComplexControl(self: ?*anyopaque, control: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_SuperDrawComplexControl(@ptrCast(self), @bitCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QtC.QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(flags), @ptrCast(pal), enabled, text_str, @bitCast(textRole));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: [*:0]const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void `
    ///
    pub fn OnDrawItemText(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QtC.QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn SuperDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_SuperDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(flags), @ptrCast(pal), enabled, text_str, @bitCast(textRole));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QProxyStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(alignment), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap) callconv(.c) void `
    ///
    pub fn OnDrawItemPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SuperDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QProxyStyle_SuperDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(alignment), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` typeVal: qstyle_enums.ContentsType `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SizeFromContents(self: ?*anyopaque, typeVal: i32, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QProxyStyle_SizeFromContents(@ptrCast(self), @bitCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, typeVal: qstyle_enums.ContentsType, option: QtC.QStyleOption, size: QtC.QSize, widget: QtC.QWidget) callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeFromContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QProxyStyle_OnSizeFromContents(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` typeVal: qstyle_enums.ContentsType `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperSizeFromContents(self: ?*anyopaque, typeVal: i32, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QProxyStyle_SuperSizeFromContents(@ptrCast(self), @bitCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` element: qstyle_enums.SubElement `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SubElementRect(self: ?*anyopaque, element: i32, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SubElementRect(@ptrCast(self), @bitCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, element: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QRect `
    ///
    pub fn OnSubElementRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnSubElementRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` element: qstyle_enums.SubElement `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperSubElementRect(self: ?*anyopaque, element: i32, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SuperSubElementRect(@ptrCast(self), @bitCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QtC.QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SubControlRect(self: ?*anyopaque, cc: i32, opt: ?*anyopaque, sc: i32, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SubControlRect(@ptrCast(self), @bitCast(cc), @ptrCast(opt), @bitCast(sc), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget) callconv(.c) QtC.QRect `
    ///
    pub fn OnSubControlRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnSubControlRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QtC.QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperSubControlRect(self: ?*anyopaque, cc: i32, opt: ?*anyopaque, sc: i32, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SuperSubControlRect(@ptrCast(self), @bitCast(cc), @ptrCast(opt), @bitCast(sc), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` fm: QtC.QFontMetrics `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QProxyStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @bitCast(flags), enabled, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: [*:0]const u8) callconv(.c) QtC.QRect `
    ///
    pub fn OnItemTextRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, [*:0]const u8) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnItemTextRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` fm: QtC.QFontMetrics `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QProxyStyle_SuperItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @bitCast(flags), enabled, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), @bitCast(flags), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap) callconv(.c) QtC.QRect `
    ///
    pub fn OnItemPixmapRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnItemPixmapRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SuperItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SuperItemPixmapRect(@ptrCast(self), @ptrCast(r), @bitCast(flags), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QtC.QStyleOptionComplex `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn HitTestComplexControl(self: ?*anyopaque, control: i32, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_HitTestComplexControl(@ptrCast(self), @bitCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, pos: QtC.QPoint, widget: QtC.QWidget) callconv(.c) i32 `
    ///
    pub fn OnHitTestComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnHitTestComplexControl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` control: qstyle_enums.ComplexControl `
    ///
    /// ` option: QtC.QStyleOptionComplex `
    ///
    /// ` pos: QtC.QPoint `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn SuperHitTestComplexControl(self: ?*anyopaque, control: i32, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperHitTestComplexControl(@ptrCast(self), @bitCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` hint: qstyle_enums.StyleHint `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` returnData: QtC.QStyleHintReturn `
    ///
    pub fn StyleHint(self: ?*anyopaque, hint: i32, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QProxyStyle_StyleHint(@ptrCast(self), @bitCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, hint: qstyle_enums.StyleHint, option: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn) callconv(.c) i32 `
    ///
    pub fn OnStyleHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnStyleHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` hint: qstyle_enums.StyleHint `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` returnData: QtC.QStyleHintReturn `
    ///
    pub fn SuperStyleHint(self: ?*anyopaque, hint: i32, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperStyleHint(@ptrCast(self), @bitCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` metric: qstyle_enums.PixelMetric `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn PixelMetric(self: ?*anyopaque, metric: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_PixelMetric(@ptrCast(self), @bitCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 `
    ///
    pub fn OnPixelMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnPixelMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` metric: qstyle_enums.PixelMetric `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperPixelMetric(self: ?*anyopaque, metric: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperPixelMetric(@ptrCast(self), @bitCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` control1: qsizepolicy_enums.ControlType `
    ///
    /// ` control2: qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_LayoutSpacing(@ptrCast(self), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 `
    ///
    pub fn OnLayoutSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnLayoutSpacing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` control1: qsizepolicy_enums.ControlType `
    ///
    /// ` control2: qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperLayoutSpacing(@ptrCast(self), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i32, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QProxyStyle_StandardIcon(@ptrCast(self), @bitCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QIcon `
    ///
    pub fn OnStandardIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QProxyStyle_OnStandardIcon(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperStandardIcon(self: ?*anyopaque, standardIcon: i32, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QProxyStyle_SuperStandardIcon(@ptrCast(self), @bitCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn StandardPixmap(self: ?*anyopaque, standardPixmap: i32, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_StandardPixmap(@ptrCast(self), @bitCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnStandardPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QProxyStyle_OnStandardPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` standardPixmap: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperStandardPixmap(self: ?*anyopaque, standardPixmap: i32, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_SuperStandardPixmap(@ptrCast(self), @bitCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` opt: QtC.QStyleOption `
    ///
    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_GeneratedIconPixmap(@ptrCast(self), @bitCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QProxyStyle_OnGeneratedIconPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` opt: QtC.QStyleOption `
    ///
    pub fn SuperGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_SuperGeneratedIconPixmap(@ptrCast(self), @bitCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn StandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QProxyStyle_StandardPalette(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPalette `
    ///
    pub fn OnStandardPalette(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPalette) void {
        qtc.QProxyStyle_OnStandardPalette(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn SuperStandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QProxyStyle_SuperStandardPalette(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Polish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_Polish(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnPolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperPolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_SuperPolish(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` pal: QtC.QPalette `
    ///
    pub fn Polish2(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QProxyStyle_Polish2(@ptrCast(self), @ptrCast(pal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, pal: QtC.QPalette) callconv(.c) void `
    ///
    pub fn OnPolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` pal: QtC.QPalette `
    ///
    pub fn SuperPolish2(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QProxyStyle_SuperPolish2(@ptrCast(self), @ptrCast(pal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` app: QtC.QApplication `
    ///
    pub fn Polish3(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_Polish3(@ptrCast(self), @ptrCast(app));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, app: QtC.QApplication) callconv(.c) void `
    ///
    pub fn OnPolish3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish3(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` app: QtC.QApplication `
    ///
    pub fn SuperPolish3(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_SuperPolish3(@ptrCast(self), @ptrCast(app));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnUnpolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_SuperUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` app: QtC.QApplication `
    ///
    pub fn Unpolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_Unpolish2(@ptrCast(self), @ptrCast(app));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, app: QtC.QApplication) callconv(.c) void `
    ///
    pub fn OnUnpolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` app: QtC.QApplication `
    ///
    pub fn SuperUnpolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_SuperUnpolish2(@ptrCast(self), @ptrCast(app));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProxyStyle_Event(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, e: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProxyStyle_SuperEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStyle_Name(@ptrCast(self));
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
    /// ` boundingRect: QtC.QRect `
    ///
    /// ` logicalRect: QtC.QRect `
    ///
    pub fn VisualRect(direction: i32, boundingRect: ?*anyopaque, logicalRect: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_VisualRect(@bitCast(direction), @ptrCast(boundingRect), @ptrCast(logicalRect));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` boundingRect: QtC.QRect `
    ///
    /// ` logicalPos: QtC.QPoint `
    ///
    pub fn VisualPos(direction: i32, boundingRect: ?*anyopaque, logicalPos: ?*anyopaque) QtC.QPoint {
        return qtc.QStyle_VisualPos(@bitCast(direction), @ptrCast(boundingRect), @ptrCast(logicalPos));
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
    /// ` size: QtC.QSize `
    ///
    /// ` rectangle: QtC.QRect `
    ///
    pub fn AlignedRect(direction: i32, alignment: i32, size: ?*anyopaque, rectangle: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_AlignedRect(@bitCast(direction), @bitCast(alignment), @ptrCast(size), @ptrCast(rectangle));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Proxy(self: ?*anyopaque) QtC.QStyle {
        return qtc.QStyle_Proxy(@ptrCast(self));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32, option: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QtC.QStyleOption `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qproxystyle.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProxyStyle_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProxyStyle_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QProxyStyle_Sender(@ptrCast(self));
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QProxyStyle_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QProxyStyle_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QProxyStyle_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QProxyStyle_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QProxyStyle_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QProxyStyle_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle`
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QProxyStyle `
    ///
    /// ` callback: *const fn (self: QtC.QProxyStyle, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QProxyStyle `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QProxyStyle_Delete(@ptrCast(self));
    }
};
