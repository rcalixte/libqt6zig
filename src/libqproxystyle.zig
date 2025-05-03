const C = @import("qt6c");
const qicon_enums = @import("libqicon.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qproxystyle.html
pub const qproxystyle = struct {
    /// New constructs a new QProxyStyle object.
    ///
    ///
    pub fn New() ?*C.QProxyStyle {
        return C.QProxyStyle_new();
    }

    /// New2 constructs a new QProxyStyle object.
    ///
    /// ``` key: []const u8 ```
    pub fn New2(key: []const u8) ?*C.QProxyStyle {
        const key_str = C.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };

        return C.QProxyStyle_new2(key_str);
    }

    /// New3 constructs a new QProxyStyle object.
    ///
    /// ``` style: ?*C.QStyle ```
    pub fn New3(style: ?*anyopaque) ?*C.QProxyStyle {
        return C.QProxyStyle_new3(@ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QProxyStyle_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QProxyStyle, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QProxyStyle_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QProxyStyle_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QProxyStyle_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QProxyStyle_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QProxyStyle_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn BaseStyle(self: ?*anyopaque) ?*C.QStyle {
        return C.QProxyStyle_BaseStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
    ///
    /// ``` self: ?*C.QProxyStyle, style: ?*C.QStyle ```
    pub fn SetBaseStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QProxyStyle_SetBaseStyle(@ptrCast(self), @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// ``` self: ?*C.QProxyStyle, element: qstyle_enums.PrimitiveElement, option: ?*C.QStyleOption, painter: ?*C.QPainter, widget: ?*C.QWidget ```
    pub fn DrawPrimitive(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_DrawPrimitive(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.PrimitiveElement, ?*C.QStyleOption, ?*C.QPainter, ?*C.QWidget) callconv(.c) void ```
    pub fn OnDrawPrimitive(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnDrawPrimitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, element: qstyle_enums.PrimitiveElement, option: ?*C.QStyleOption, painter: ?*C.QPainter, widget: ?*C.QWidget ```
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// ``` self: ?*C.QProxyStyle, element: qstyle_enums.ControlElement, option: ?*C.QStyleOption, painter: ?*C.QPainter, widget: ?*C.QWidget ```
    pub fn DrawControl(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.ControlElement, ?*C.QStyleOption, ?*C.QPainter, ?*C.QWidget) callconv(.c) void ```
    pub fn OnDrawControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnDrawControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, element: qstyle_enums.ControlElement, option: ?*C.QStyleOption, painter: ?*C.QPainter, widget: ?*C.QWidget ```
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// ``` self: ?*C.QProxyStyle, control: qstyle_enums.ComplexControl, option: ?*C.QStyleOptionComplex, painter: ?*C.QPainter, widget: ?*C.QWidget ```
    pub fn DrawComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_DrawComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.ComplexControl, ?*C.QStyleOptionComplex, ?*C.QPainter, ?*C.QWidget) callconv(.c) void ```
    pub fn OnDrawComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnDrawComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, control: qstyle_enums.ComplexControl, option: ?*C.QStyleOptionComplex, painter: ?*C.QPainter, widget: ?*C.QWidget ```
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// ``` self: ?*C.QProxyStyle, painter: ?*C.QPainter, rect: ?*C.QRect, flags: i32, pal: ?*C.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i64) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QProxyStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QPainter, ?*C.QRect, i32, ?*C.QPalette, bool, []const u8, qpalette_enums.ColorRole) callconv(.c) void ```
    pub fn OnDrawItemText(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, []const u8, i64) callconv(.c) void) void {
        C.QProxyStyle_OnDrawItemText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, painter: ?*C.QPainter, rect: ?*C.QRect, flags: i32, pal: ?*C.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i64) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QProxyStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// ``` self: ?*C.QProxyStyle, painter: ?*C.QPainter, rect: ?*C.QRect, alignment: i32, pixmap: ?*C.QPixmap ```
    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        C.QProxyStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QPainter, ?*C.QRect, i32, ?*C.QPixmap) callconv(.c) void ```
    pub fn OnDrawItemPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnDrawItemPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, painter: ?*C.QPainter, rect: ?*C.QRect, alignment: i32, pixmap: ?*C.QPixmap ```
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        C.QProxyStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// ``` self: ?*C.QProxyStyle, typeVal: qstyle_enums.ContentsType, option: ?*C.QStyleOption, size: ?*C.QSize, widget: ?*C.QWidget ```
    pub fn SizeFromContents(self: ?*anyopaque, typeVal: i64, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) ?*C.QSize {
        return C.QProxyStyle_SizeFromContents(@ptrCast(self), @intCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.ContentsType, ?*C.QStyleOption, ?*C.QSize, ?*C.QWidget) callconv(.c) ?*C.QSize ```
    pub fn OnSizeFromContents(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QSize) void {
        C.QProxyStyle_OnSizeFromContents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, typeVal: qstyle_enums.ContentsType, option: ?*C.QStyleOption, size: ?*C.QSize, widget: ?*C.QWidget ```
    pub fn QBaseSizeFromContents(self: ?*anyopaque, typeVal: i64, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) ?*C.QSize {
        return C.QProxyStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// ``` self: ?*C.QProxyStyle, element: qstyle_enums.SubElement, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn SubElementRect(self: ?*anyopaque, element: i64, option: ?*anyopaque, widget: ?*anyopaque) ?*C.QRect {
        return C.QProxyStyle_SubElementRect(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.SubElement, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) ?*C.QRect ```
    pub fn OnSubElementRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QProxyStyle_OnSubElementRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, element: qstyle_enums.SubElement, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseSubElementRect(self: ?*anyopaque, element: i64, option: ?*anyopaque, widget: ?*anyopaque) ?*C.QRect {
        return C.QProxyStyle_QBaseSubElementRect(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// ``` self: ?*C.QProxyStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: ?*C.QWidget ```
    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) ?*C.QRect {
        return C.QProxyStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.ComplexControl, ?*C.QStyleOptionComplex, qstyle_enums.SubControl, ?*C.QWidget) callconv(.c) ?*C.QRect ```
    pub fn OnSubControlRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QProxyStyle_OnSubControlRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: ?*C.QWidget ```
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) ?*C.QRect {
        return C.QProxyStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// ``` self: ?*C.QProxyStyle, fm: ?*C.QFontMetrics, r: ?*C.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QProxyStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QFontMetrics, ?*C.QRect, i32, bool, []const u8) callconv(.c) ?*C.QRect ```
    pub fn OnItemTextRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, []const u8) callconv(.c) ?*C.QRect) void {
        C.QProxyStyle_OnItemTextRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, fm: ?*C.QFontMetrics, r: ?*C.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QProxyStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// ``` self: ?*C.QProxyStyle, r: ?*C.QRect, flags: i32, pixmap: ?*C.QPixmap ```
    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) ?*C.QRect {
        return C.QProxyStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QRect, i32, ?*C.QPixmap) callconv(.c) ?*C.QRect ```
    pub fn OnItemPixmapRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QProxyStyle_OnItemPixmapRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, r: ?*C.QRect, flags: i32, pixmap: ?*C.QPixmap ```
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) ?*C.QRect {
        return C.QProxyStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// ``` self: ?*C.QProxyStyle, control: qstyle_enums.ComplexControl, option: ?*C.QStyleOptionComplex, pos: ?*C.QPoint, widget: ?*C.QWidget ```
    pub fn HitTestComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i64 {
        return C.QProxyStyle_HitTestComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.ComplexControl, ?*C.QStyleOptionComplex, ?*C.QPoint, ?*C.QWidget) callconv(.c) i64 ```
    pub fn OnHitTestComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QProxyStyle_OnHitTestComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, control: qstyle_enums.ComplexControl, option: ?*C.QStyleOptionComplex, pos: ?*C.QPoint, widget: ?*C.QWidget ```
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i64 {
        return C.QProxyStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// ``` self: ?*C.QProxyStyle, hint: qstyle_enums.StyleHint, option: ?*C.QStyleOption, widget: ?*C.QWidget, returnData: ?*C.QStyleHintReturn ```
    pub fn StyleHint(self: ?*anyopaque, hint: i64, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return C.QProxyStyle_StyleHint(@ptrCast(self), @intCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.StyleHint, ?*C.QStyleOption, ?*C.QWidget, ?*C.QStyleHintReturn) callconv(.c) i32 ```
    pub fn OnStyleHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QProxyStyle_OnStyleHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, hint: qstyle_enums.StyleHint, option: ?*C.QStyleOption, widget: ?*C.QWidget, returnData: ?*C.QStyleHintReturn ```
    pub fn QBaseStyleHint(self: ?*anyopaque, hint: i64, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return C.QProxyStyle_QBaseStyleHint(@ptrCast(self), @intCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// ``` self: ?*C.QProxyStyle, metric: qstyle_enums.PixelMetric, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn PixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QProxyStyle_PixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.PixelMetric, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnPixelMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QProxyStyle_OnPixelMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, metric: qstyle_enums.PixelMetric, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBasePixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QProxyStyle_QBasePixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// ``` self: ?*C.QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn LayoutSpacing(self: ?*anyopaque, control1: i64, control2: i64, orientation: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QProxyStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qsizepolicy_enums.ControlType, qsizepolicy_enums.ControlType, qnamespace_enums.Orientation, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnLayoutSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QProxyStyle_OnLayoutSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i64, control2: i64, orientation: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QProxyStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// ``` self: ?*C.QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) ?*C.QIcon {
        return C.QProxyStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.StandardPixmap, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) ?*C.QIcon ```
    pub fn OnStandardIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QIcon) void {
        C.QProxyStyle_OnStandardIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) ?*C.QIcon {
        return C.QProxyStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// ``` self: ?*C.QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn StandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QPixmap {
        return C.QProxyStyle_StandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qstyle_enums.StandardPixmap, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) ?*C.QPixmap ```
    pub fn OnStandardPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPixmap) void {
        C.QProxyStyle_OnStandardPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseStandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QPixmap {
        return C.QProxyStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// ``` self: ?*C.QProxyStyle, iconMode: qicon_enums.Mode, pixmap: ?*C.QPixmap, opt: ?*C.QStyleOption ```
    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i64, pixmap: ?*anyopaque, opt: ?*anyopaque) ?*C.QPixmap {
        return C.QProxyStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, qicon_enums.Mode, ?*C.QPixmap, ?*C.QStyleOption) callconv(.c) ?*C.QPixmap ```
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPixmap) void {
        C.QProxyStyle_OnGeneratedIconPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, iconMode: qicon_enums.Mode, pixmap: ?*C.QPixmap, opt: ?*C.QStyleOption ```
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i64, pixmap: ?*anyopaque, opt: ?*anyopaque) ?*C.QPixmap {
        return C.QProxyStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn StandardPalette(self: ?*anyopaque) ?*C.QPalette {
        return C.QProxyStyle_StandardPalette(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn () callconv(.c) ?*C.QPalette ```
    pub fn OnStandardPalette(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPalette) void {
        C.QProxyStyle_OnStandardPalette(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn QBaseStandardPalette(self: ?*anyopaque) ?*C.QPalette {
        return C.QProxyStyle_QBaseStandardPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ``` self: ?*C.QProxyStyle, widget: ?*C.QWidget ```
    pub fn Polish(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_Polish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnPolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, widget: ?*C.QWidget ```
    pub fn QBasePolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_QBasePolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ``` self: ?*C.QProxyStyle, pal: ?*C.QPalette ```
    pub fn PolishWithPal(self: ?*anyopaque, pal: ?*anyopaque) void {
        C.QProxyStyle_PolishWithPal(@ptrCast(self), @ptrCast(pal));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QPalette) callconv(.c) void ```
    pub fn OnPolishWithPal(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnPolishWithPal(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, pal: ?*C.QPalette ```
    pub fn QBasePolishWithPal(self: ?*anyopaque, pal: ?*anyopaque) void {
        C.QProxyStyle_QBasePolishWithPal(@ptrCast(self), @ptrCast(pal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ``` self: ?*C.QProxyStyle, app: ?*C.QApplication ```
    pub fn PolishWithApp(self: ?*anyopaque, app: ?*anyopaque) void {
        C.QProxyStyle_PolishWithApp(@ptrCast(self), @ptrCast(app));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QApplication) callconv(.c) void ```
    pub fn OnPolishWithApp(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnPolishWithApp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, app: ?*C.QApplication ```
    pub fn QBasePolishWithApp(self: ?*anyopaque, app: ?*anyopaque) void {
        C.QProxyStyle_QBasePolishWithApp(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ``` self: ?*C.QProxyStyle, widget: ?*C.QWidget ```
    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QWidget) callconv(.c) void ```
    pub fn OnUnpolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnUnpolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, widget: ?*C.QWidget ```
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QProxyStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ``` self: ?*C.QProxyStyle, app: ?*C.QApplication ```
    pub fn UnpolishWithApp(self: ?*anyopaque, app: ?*anyopaque) void {
        C.QProxyStyle_UnpolishWithApp(@ptrCast(self), @ptrCast(app));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QApplication) callconv(.c) void ```
    pub fn OnUnpolishWithApp(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnUnpolishWithApp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, app: ?*C.QApplication ```
    pub fn QBaseUnpolishWithApp(self: ?*anyopaque, app: ?*anyopaque) void {
        C.QProxyStyle_QBaseUnpolishWithApp(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// ``` self: ?*C.QProxyStyle, e: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QProxyStyle_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QProxyStyle_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, e: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QProxyStyle_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QProxyStyle_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QProxyStyle_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCommonStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: ?*C.QProxyStyle, widget: ?*C.QWidget ```
    pub fn PolishWithWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCommonStyle_PolishWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QCommonStyle
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPolishWithWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnPolishWithWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCommonStyle
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, widget: ?*C.QWidget ```
    pub fn QBasePolishWithWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCommonStyle_QBasePolishWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QCommonStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ``` self: ?*C.QProxyStyle, application: ?*C.QApplication ```
    pub fn UnpolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QCommonStyle_UnpolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// Inherited from QCommonStyle
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QApplication) callconv(.c) void ```
    pub fn OnUnpolishWithApplication(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnUnpolishWithApplication(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCommonStyle
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, application: ?*C.QApplication ```
    pub fn QBaseUnpolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QCommonStyle_QBaseUnpolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ``` self: ?*C.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QStyle_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ``` self: ?*C.QProxyStyle, application: ?*C.QApplication ```
    pub fn PolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QStyle_PolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// Inherited from QStyle
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStyle, slot: fn (?*C.QStyle, ?*C.QApplication) callconv(.c) void ```
    pub fn OnPolishWithApplication(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStyle_OnPolishWithApplication(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, application: ?*C.QApplication ```
    pub fn QBasePolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QStyle_QBasePolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ``` self: ?*C.QProxyStyle, palette: ?*C.QPalette ```
    pub fn PolishWithPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QStyle_PolishWithPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyle
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QStyle, slot: fn (?*C.QStyle, ?*C.QPalette) callconv(.c) void ```
    pub fn OnPolishWithPalette(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QStyle_OnPolishWithPalette(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProxyStyle, palette: ?*C.QPalette ```
    pub fn QBasePolishWithPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QStyle_QBasePolishWithPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, boundingRect: ?*C.QRect, logicalRect: ?*C.QRect ```
    pub fn VisualRect(direction: i64, boundingRect: ?*anyopaque, logicalRect: ?*anyopaque) ?*C.QRect {
        return C.QStyle_VisualRect(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalRect));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, boundingRect: ?*C.QRect, logicalPos: ?*C.QPoint ```
    pub fn VisualPos(direction: i64, boundingRect: ?*anyopaque, logicalPos: ?*anyopaque) ?*C.QPoint {
        return C.QStyle_VisualPos(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalPos));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ``` min: i32, max: i32, val: i32, space: i32 ```
    pub fn SliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return C.QStyle_SliderPositionFromValue(@intCast(min), @intCast(max), @intCast(val), @intCast(space));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ``` min: i32, max: i32, pos: i32, space: i32 ```
    pub fn SliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return C.QStyle_SliderValueFromPosition(@intCast(min), @intCast(max), @intCast(pos), @intCast(space));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: i32 ```
    pub fn VisualAlignment(direction: i64, alignment: i64) i64 {
        return C.QStyle_VisualAlignment(@intCast(direction), @intCast(alignment));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: i32, size: ?*C.QSize, rectangle: ?*C.QRect ```
    pub fn AlignedRect(direction: i64, alignment: i64, size: ?*anyopaque, rectangle: ?*anyopaque) ?*C.QRect {
        return C.QStyle_AlignedRect(@intCast(direction), @intCast(alignment), @ptrCast(size), @ptrCast(rectangle));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: ?*C.QProxyStyle, controls1: i32, controls2: i32, orientation: qnamespace_enums.Orientation ```
    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i64) i32 {
        return C.QStyle_CombinedLayoutSpacing(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QStyle {
        return C.QStyle_Proxy(@ptrCast(self));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ``` min: i32, max: i32, val: i32, space: i32, upsideDown: bool ```
    pub fn SliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return C.QStyle_SliderPositionFromValue5(@intCast(min), @intCast(max), @intCast(val), @intCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ``` min: i32, max: i32, pos: i32, space: i32, upsideDown: bool ```
    pub fn SliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return C.QStyle_SliderValueFromPosition5(@intCast(min), @intCast(max), @intCast(pos), @intCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: ?*C.QProxyStyle, controls1: i32, controls2: i32, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption ```
    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i64, option: ?*anyopaque) i32 {
        return C.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: ?*C.QProxyStyle, controls1: i32, controls2: i32, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QProxyStyle, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QProxyStyle, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QProxyStyle, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QProxyStyle, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QProxyStyle, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QProxyStyle, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QProxyStyle, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QProxyStyle, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QProxyStyle, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QProxyStyle, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QProxyStyle, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QProxyStyle, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QProxyStyle, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QProxyStyle, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QProxyStyle, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QProxyStyle_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QProxyStyle_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QProxyStyle_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProxyStyle_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProxyStyle_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProxyStyle_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProxyStyle_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProxyStyle_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProxyStyle_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProxyStyle_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProxyStyle_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProxyStyle_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProxyStyle_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProxyStyle_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QProxyStyle_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QProxyStyle_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QProxyStyle_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QProxyStyle_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QProxyStyle_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QProxyStyle_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QProxyStyle_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QProxyStyle_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QProxyStyle_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QProxyStyle_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QProxyStyle_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProxyStyle, slot: fn (?*C.QProxyStyle, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QProxyStyle_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QProxyStyle ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QProxyStyle_Delete(@ptrCast(self));
    }
};
