const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
    pub fn New() QtC.QProxyStyle {
        return qtc.QProxyStyle_new();
    }

    /// New2 constructs a new QProxyStyle object.
    ///
    /// ``` key: []const u8 ```
    pub fn New2(key: []const u8) QtC.QProxyStyle {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QProxyStyle_new2(key_str);
    }

    /// New3 constructs a new QProxyStyle object.
    ///
    /// ``` style: QtC.QStyle ```
    pub fn New3(style: ?*anyopaque) QtC.QProxyStyle {
        return qtc.QProxyStyle_new3(@ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QProxyStyle_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QProxyStyle, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProxyStyle_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QProxyStyle_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QProxyStyle_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn BaseStyle(self: ?*anyopaque) QtC.QStyle {
        return qtc.QProxyStyle_BaseStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
    ///
    /// ``` self: QtC.QProxyStyle, style: QtC.QStyle ```
    pub fn SetBaseStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QProxyStyle_SetBaseStyle(@ptrCast(self), @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// ``` self: QtC.QProxyStyle, element: qstyle_enums.PrimitiveElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget ```
    pub fn DrawPrimitive(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawPrimitive(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, element: qstyle_enums.PrimitiveElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawPrimitive(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawPrimitive(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, element: qstyle_enums.PrimitiveElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget ```
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, element: i32, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// ``` self: QtC.QProxyStyle, element: qstyle_enums.ControlElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget ```
    pub fn DrawControl(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, element: qstyle_enums.ControlElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, element: qstyle_enums.ControlElement, option: QtC.QStyleOption, painter: QtC.QPainter, widget: QtC.QWidget ```
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// ``` self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, painter: QtC.QPainter, widget: QtC.QWidget ```
    pub fn DrawComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_DrawComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, painter: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, painter: QtC.QPainter, widget: QtC.QWidget ```
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, painter: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(painter), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// ``` self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: [*:0]const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void ```
    pub fn OnDrawItemText(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QProxyStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// ``` self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap ```
    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QProxyStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap) callconv(.c) void ```
    pub fn OnDrawItemPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDrawItemPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap ```
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// ``` self: QtC.QProxyStyle, typeVal: qstyle_enums.ContentsType, option: QtC.QStyleOption, size: QtC.QSize, widget: QtC.QWidget ```
    pub fn SizeFromContents(self: ?*anyopaque, typeVal: i64, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QProxyStyle_SizeFromContents(@ptrCast(self), @intCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, typeVal: qstyle_enums.ContentsType, option: QtC.QStyleOption, size: QtC.QSize, widget: QtC.QWidget) callconv(.c) QtC.QSize ```
    pub fn OnSizeFromContents(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QProxyStyle_OnSizeFromContents(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, typeVal: qstyle_enums.ContentsType, option: QtC.QStyleOption, size: QtC.QSize, widget: QtC.QWidget ```
    pub fn QBaseSizeFromContents(self: ?*anyopaque, typeVal: i64, option: ?*anyopaque, size: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QProxyStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(typeVal), @ptrCast(option), @ptrCast(size), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// ``` self: QtC.QProxyStyle, element: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn SubElementRect(self: ?*anyopaque, element: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SubElementRect(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, element: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QRect ```
    pub fn OnSubElementRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnSubElementRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, element: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseSubElementRect(self: ?*anyopaque, element: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_QBaseSubElementRect(@ptrCast(self), @intCast(element), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// ``` self: QtC.QProxyStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget ```
    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget) callconv(.c) QtC.QRect ```
    pub fn OnSubControlRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnSubControlRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget ```
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// ``` self: QtC.QProxyStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QProxyStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: [*:0]const u8) callconv(.c) QtC.QRect ```
    pub fn OnItemTextRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, [*:0]const u8) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnItemTextRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QProxyStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// ``` self: QtC.QProxyStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap) callconv(.c) QtC.QRect ```
    pub fn OnItemPixmapRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QProxyStyle_OnItemPixmapRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QProxyStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// ``` self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, pos: QtC.QPoint, widget: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubControl ```
    pub fn HitTestComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QProxyStyle_HitTestComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, pos: QtC.QPoint, widget: QtC.QWidget) callconv(.c) i64 ```
    pub fn OnHitTestComplexControl(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        qtc.QProxyStyle_OnHitTestComplexControl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, control: qstyle_enums.ComplexControl, option: QtC.QStyleOptionComplex, pos: QtC.QPoint, widget: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubControl ```
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, control: i64, option: ?*anyopaque, pos: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QProxyStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(control), @ptrCast(option), @ptrCast(pos), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// ``` self: QtC.QProxyStyle, hint: qstyle_enums.StyleHint, option: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn ```
    pub fn StyleHint(self: ?*anyopaque, hint: i64, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QProxyStyle_StyleHint(@ptrCast(self), @intCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, hint: qstyle_enums.StyleHint, option: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn) callconv(.c) i32 ```
    pub fn OnStyleHint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnStyleHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, hint: qstyle_enums.StyleHint, option: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn ```
    pub fn QBaseStyleHint(self: ?*anyopaque, hint: i64, option: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBaseStyleHint(@ptrCast(self), @intCast(hint), @ptrCast(option), @ptrCast(widget), @ptrCast(returnData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// ``` self: QtC.QProxyStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn PixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_PixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnPixelMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnPixelMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBasePixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBasePixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// ``` self: QtC.QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnLayoutSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProxyStyle_OnLayoutSpacing(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// ``` self: QtC.QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QProxyStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QIcon ```
    pub fn OnStandardIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QProxyStyle_OnStandardIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QProxyStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// ``` self: QtC.QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn StandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_StandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QPixmap ```
    pub fn OnStandardPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QProxyStyle_OnStandardPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseStandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// ``` self: QtC.QProxyStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption ```
    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption) callconv(.c) QtC.QPixmap ```
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QProxyStyle_OnGeneratedIconPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption ```
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QProxyStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn StandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QProxyStyle_StandardPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn () callconv(.c) QtC.QPalette ```
    pub fn OnStandardPalette(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPalette) void {
        qtc.QProxyStyle_OnStandardPalette(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn QBaseStandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QProxyStyle_QBaseStandardPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ``` self: QtC.QProxyStyle, widget: QtC.QWidget ```
    pub fn Polish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_Polish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, widget: QtC.QWidget ```
    pub fn QBasePolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBasePolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ``` self: QtC.QProxyStyle, pal: QtC.QPalette ```
    pub fn Polish2(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QProxyStyle_Polish2(@ptrCast(self), @ptrCast(pal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, pal: QtC.QPalette) callconv(.c) void ```
    pub fn OnPolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, pal: QtC.QPalette ```
    pub fn QBasePolish2(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QProxyStyle_QBasePolish2(@ptrCast(self), @ptrCast(pal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// ``` self: QtC.QProxyStyle, app: QtC.QApplication ```
    pub fn Polish3(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_Polish3(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, app: QtC.QApplication) callconv(.c) void ```
    pub fn OnPolish3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnPolish3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, app: QtC.QApplication ```
    pub fn QBasePolish3(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_QBasePolish3(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ``` self: QtC.QProxyStyle, widget: QtC.QWidget ```
    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnUnpolish(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, widget: QtC.QWidget ```
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// ``` self: QtC.QProxyStyle, app: QtC.QApplication ```
    pub fn Unpolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_Unpolish2(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, app: QtC.QApplication) callconv(.c) void ```
    pub fn OnUnpolish2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnUnpolish2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, app: QtC.QApplication ```
    pub fn QBaseUnpolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseUnpolish2(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// ``` self: QtC.QProxyStyle, e: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProxyStyle_Event(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProxyStyle, e: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProxyStyle_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QProxyStyle_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QProxyStyle_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ``` self: QtC.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, boundingRect: QtC.QRect, logicalRect: QtC.QRect ```
    pub fn VisualRect(direction: i32, boundingRect: ?*anyopaque, logicalRect: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_VisualRect(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalRect));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, boundingRect: QtC.QRect, logicalPos: QtC.QPoint ```
    pub fn VisualPos(direction: i32, boundingRect: ?*anyopaque, logicalPos: ?*anyopaque) QtC.QPoint {
        return qtc.QStyle_VisualPos(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalPos));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ``` min: i32, max: i32, val: i32, space: i32 ```
    pub fn SliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@intCast(min), @intCast(max), @intCast(val), @intCast(space));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ``` min: i32, max: i32, pos: i32, space: i32 ```
    pub fn SliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@intCast(min), @intCast(max), @intCast(pos), @intCast(space));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: flag of qnamespace_enums.AlignmentFlag ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn VisualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@intCast(direction), @intCast(alignment));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: flag of qnamespace_enums.AlignmentFlag, size: QtC.QSize, rectangle: QtC.QRect ```
    pub fn AlignedRect(direction: i32, alignment: i32, size: ?*anyopaque, rectangle: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_AlignedRect(@intCast(direction), @intCast(alignment), @ptrCast(size), @ptrCast(rectangle));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QProxyStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation ```
    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn Proxy(self: ?*anyopaque) QtC.QStyle {
        return qtc.QStyle_Proxy(@ptrCast(self));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ``` min: i32, max: i32, val: i32, space: i32, upsideDown: bool ```
    pub fn SliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@intCast(min), @intCast(max), @intCast(val), @intCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ``` min: i32, max: i32, pos: i32, space: i32, upsideDown: bool ```
    pub fn SliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@intCast(min), @intCast(max), @intCast(pos), @intCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QProxyStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption ```
    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32, option: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QProxyStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i32, controls2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qproxystyle.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QProxyStyle, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QProxyStyle, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QProxyStyle, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QProxyStyle, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QProxyStyle, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QProxyStyle, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QProxyStyle, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QProxyStyle, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QProxyStyle, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QProxyStyle, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QProxyStyle, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QProxyStyle, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QProxyStyle, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QProxyStyle, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QProxyStyle, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QProxyStyle, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QProxyStyle, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QProxyStyle, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QProxyStyle, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProxyStyle_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProxyStyle_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProxyStyle_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProxyStyle_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QProxyStyle_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QProxyStyle_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QProxyStyle_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QProxyStyle_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QProxyStyle_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QProxyStyle_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProxyStyle_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QProxyStyle_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QProxyStyle_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QProxyStyle_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProxyStyle_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QProxyStyle, callback: *const fn (self: QtC.QProxyStyle, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#dtor.QProxyStyle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QProxyStyle ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProxyStyle_Delete(@ptrCast(self));
    }
};
