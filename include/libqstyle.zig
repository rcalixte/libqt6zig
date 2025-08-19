const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("libqicon.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstyle_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qstyle.html
pub const qstyle = struct {
    /// New constructs a new QStyle object.
    ///
    ///
    pub fn New() QtC.QStyle {
        return qtc.QStyle_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStyle_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QStyle, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStyle_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QStyle_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QStyle_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QStyle_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ``` self: QtC.QStyle, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ``` self: QtC.QStyle, widget: QtC.QWidget ```
    pub fn Polish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_Polish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnPolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, widget: QtC.QWidget ```
    pub fn QBasePolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_QBasePolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// ``` self: QtC.QStyle, widget: QtC.QWidget ```
    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnUnpolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnUnpolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, widget: QtC.QWidget ```
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ``` self: QtC.QStyle, application: QtC.QApplication ```
    pub fn Polish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_Polish2(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, application: QtC.QApplication) callconv(.c) void ```
    pub fn OnPolish2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnPolish2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, application: QtC.QApplication ```
    pub fn QBasePolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_QBasePolish2(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// ``` self: QtC.QStyle, application: QtC.QApplication ```
    pub fn Unpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_Unpolish2(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, application: QtC.QApplication) callconv(.c) void ```
    pub fn OnUnpolish2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnUnpolish2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, application: QtC.QApplication ```
    pub fn QBaseUnpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QStyle_QBaseUnpolish2(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ``` self: QtC.QStyle, palette: QtC.QPalette ```
    pub fn Polish3(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QStyle_Polish3(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, palette: QtC.QPalette) callconv(.c) void ```
    pub fn OnPolish3(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnPolish3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, palette: QtC.QPalette ```
    pub fn QBasePolish3(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QStyle_QBasePolish3(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// ``` self: QtC.QStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8) callconv(.c) QtC.QRect ```
    pub fn OnItemTextRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, []const u8) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnItemTextRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// ``` self: QtC.QStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap) callconv(.c) QtC.QRect ```
    pub fn OnItemPixmapRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnItemPixmapRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// ``` self: QtC.QStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void ```
    pub fn OnDrawItemText(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, []const u8, i32) callconv(.c) void) void {
        qtc.QStyle_OnDrawItemText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// ``` self: QtC.QStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap ```
    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap) callconv(.c) void ```
    pub fn OnDrawItemPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawItemPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap ```
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn StandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyle_StandardPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn () callconv(.c) QtC.QPalette ```
    pub fn OnStandardPalette(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPalette) void {
        qtc.QStyle_OnStandardPalette(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle ```
    pub fn QBaseStandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyle_QBaseStandardPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
    ///
    /// ``` self: QtC.QStyle, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn DrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawPrimitive(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawPrimitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
    ///
    /// ``` self: QtC.QStyle, element: qstyle_enums.ControlElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn DrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, element: qstyle_enums.ControlElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, element: qstyle_enums.ControlElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
    ///
    /// ``` self: QtC.QStyle, subElement: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn SubElementRect(self: ?*anyopaque, subElement: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_SubElementRect(@ptrCast(self), @intCast(subElement), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, subElement: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QRect ```
    pub fn OnSubElementRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnSubElementRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, subElement: qstyle_enums.SubElement, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseSubElementRect(self: ?*anyopaque, subElement: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_QBaseSubElementRect(@ptrCast(self), @intCast(subElement), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
    ///
    /// ``` self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, p: QtC.QPainter, widget: QtC.QWidget ```
    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, p: QtC.QPainter, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDrawComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, p: QtC.QPainter, widget: QtC.QWidget ```
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
    ///
    /// ``` self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, pt: QtC.QPoint, widget: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubControl ```
    pub fn HitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QStyle_HitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, pt: QtC.QPoint, widget: QtC.QWidget) callconv(.c) i64 ```
    pub fn OnHitTestComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        qtc.QStyle_OnHitTestComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, pt: QtC.QPoint, widget: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubControl ```
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, widget: ?*anyopaque) i64 {
        return qtc.QStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
    ///
    /// ``` self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget ```
    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget) callconv(.c) QtC.QRect ```
    pub fn OnSubControlRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QStyle_OnSubControlRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, widget: QtC.QWidget ```
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, widget: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
    ///
    /// ``` self: QtC.QStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn PixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_PixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnPixelMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnPixelMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, metric: qstyle_enums.PixelMetric, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBasePixelMetric(self: ?*anyopaque, metric: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_QBasePixelMetric(@ptrCast(self), @intCast(metric), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
    ///
    /// ``` self: QtC.QStyle, ct: qstyle_enums.ContentsType, opt: QtC.QStyleOption, contentsSize: QtC.QSize, w: QtC.QWidget ```
    pub fn SizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, w: ?*anyopaque) QtC.QSize {
        return qtc.QStyle_SizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, ct: qstyle_enums.ContentsType, opt: QtC.QStyleOption, contentsSize: QtC.QSize, w: QtC.QWidget) callconv(.c) QtC.QSize ```
    pub fn OnSizeFromContents(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QStyle_OnSizeFromContents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, ct: qstyle_enums.ContentsType, opt: QtC.QStyleOption, contentsSize: QtC.QSize, w: QtC.QWidget ```
    pub fn QBaseSizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, w: ?*anyopaque) QtC.QSize {
        return qtc.QStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
    ///
    /// ``` self: QtC.QStyle, stylehint: qstyle_enums.StyleHint, opt: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn ```
    pub fn StyleHint(self: ?*anyopaque, stylehint: i64, opt: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QStyle_StyleHint(@ptrCast(self), @intCast(stylehint), @ptrCast(opt), @ptrCast(widget), @ptrCast(returnData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, stylehint: qstyle_enums.StyleHint, opt: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn) callconv(.c) i32 ```
    pub fn OnStyleHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnStyleHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, stylehint: qstyle_enums.StyleHint, opt: QtC.QStyleOption, widget: QtC.QWidget, returnData: QtC.QStyleHintReturn ```
    pub fn QBaseStyleHint(self: ?*anyopaque, stylehint: i64, opt: ?*anyopaque, widget: ?*anyopaque, returnData: ?*anyopaque) i32 {
        return qtc.QStyle_QBaseStyleHint(@ptrCast(self), @intCast(stylehint), @ptrCast(opt), @ptrCast(widget), @ptrCast(returnData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
    ///
    /// ``` self: QtC.QStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn StandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_StandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QPixmap ```
    pub fn OnStandardPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QStyle_OnStandardPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, standardPixmap: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseStandardPixmap(self: ?*anyopaque, standardPixmap: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(standardPixmap), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
    ///
    /// ``` self: QtC.QStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QIcon ```
    pub fn OnStandardIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QStyle_OnStandardIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, standardIcon: qstyle_enums.StandardPixmap, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, option: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
    ///
    /// ``` self: QtC.QStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption ```
    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption) callconv(.c) QtC.QPixmap ```
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QStyle_OnGeneratedIconPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption ```
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, boundingRect: QtC.QRect, logicalRect: QtC.QRect ```
    pub fn VisualRect(direction: i32, boundingRect: ?*anyopaque, logicalRect: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_VisualRect(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, boundingRect: QtC.QRect, logicalPos: QtC.QPoint ```
    pub fn VisualPos(direction: i32, boundingRect: ?*anyopaque, logicalPos: ?*anyopaque) QtC.QPoint {
        return qtc.QStyle_VisualPos(@intCast(direction), @ptrCast(boundingRect), @ptrCast(logicalPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ``` min: i32, max: i32, val: i32, space: i32 ```
    pub fn SliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@intCast(min), @intCast(max), @intCast(val), @intCast(space));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ``` min: i32, max: i32, pos: i32, space: i32 ```
    pub fn SliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@intCast(min), @intCast(max), @intCast(pos), @intCast(space));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: flag of qnamespace_enums.AlignmentFlag ```
    ///
    /// Returns: ``` flag of qnamespace_enums.AlignmentFlag ```
    pub fn VisualAlignment(direction: i32, alignment: i64) i64 {
        return qtc.QStyle_VisualAlignment(@intCast(direction), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: flag of qnamespace_enums.AlignmentFlag, size: QtC.QSize, rectangle: QtC.QRect ```
    pub fn AlignedRect(direction: i32, alignment: i64, size: ?*anyopaque, rectangle: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_AlignedRect(@intCast(direction), @intCast(alignment), @ptrCast(size), @ptrCast(rectangle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
    ///
    /// ``` self: QtC.QStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnLayoutSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QStyle_OnLayoutSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation ```
    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn Proxy(self: ?*anyopaque) QtC.QStyle {
        return qtc.QStyle_Proxy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QStyle_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QStyle_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ``` min: i32, max: i32, val: i32, space: i32, upsideDown: bool ```
    pub fn SliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@intCast(min), @intCast(max), @intCast(val), @intCast(space), upsideDown);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ``` min: i32, max: i32, pos: i32, space: i32, upsideDown: bool ```
    pub fn SliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@intCast(min), @intCast(max), @intCast(pos), @intCast(space), upsideDown);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption ```
    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i32, option: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QStyle, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstyle.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QStyle, name: []const u8 ```
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
    /// ``` self: QtC.QStyle ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QStyle, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QStyle, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QStyle, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QStyle, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QStyle, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QStyle, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qstyle.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QStyle, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QStyle, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QStyle, obj: QtC.QObject ```
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
    /// ``` self: QtC.QStyle, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QStyle ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QStyle, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QStyle, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QStyle, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qstyle.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstyle.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QStyle, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QStyle ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QStyle, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QStyle, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QStyle, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QStyle, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStyle_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStyle_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStyle_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStyle_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStyle_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStyle_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStyle_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStyle_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStyle_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStyle_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStyle_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStyle_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStyle_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStyle_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStyle_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStyle_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStyle_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyle_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyle_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QStyle_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStyle_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStyle_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QStyle_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStyle_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStyle_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QStyle_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStyle_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStyle_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStyle_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QStyle, slot: fn (self: QtC.QStyle, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#dtor.QStyle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyle ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyle_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyle.html#types
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
        pub const CE_CustomBase: i64 = 4026531840;
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
        pub const SE_CustomBase: i64 = 4026531840;
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
        pub const CC_CustomBase: i64 = 4026531840;
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
        pub const SC_CustomBase: i64 = 4026531840;
        pub const SC_All: i64 = 4294967295;
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
        pub const PM_CustomBase: i64 = 4026531840;
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
        pub const CT_CustomBase: i64 = 4026531840;
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
        pub const SH_CustomBase: i64 = 4026531840;
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
        pub const SP_CustomBase: i64 = 4026531840;
    };
};
