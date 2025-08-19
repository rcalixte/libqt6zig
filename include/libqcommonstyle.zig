const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("libqicon.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcommonstyle.html
pub const qcommonstyle = struct {
    /// New constructs a new QCommonStyle object.
    ///
    ///
    pub fn New() QtC.QCommonStyle {
        return qtc.QCommonStyle_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCommonStyle_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QCommonStyle, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCommonStyle_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCommonStyle_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QCommonStyle_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// ``` self: QtC.QCommonStyle, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn DrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawPrimitive(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawPrimitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// ``` self: QtC.QCommonStyle, element: qstyle_enums.ControlElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn DrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, element: qstyle_enums.ControlElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, element: qstyle_enums.ControlElement, opt: QtC.QStyleOption, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// ``` self: QtC.QCommonStyle, r: qstyle_enums.SubElement, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn SubElementRect(self: ?*anyopaque, r: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_SubElementRect(@ptrCast(self), @intCast(r), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, r: qstyle_enums.SubElement, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QRect ```
    pub fn OnSubElementRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QCommonStyle_OnSubElementRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, r: qstyle_enums.SubElement, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseSubElementRect(self: ?*anyopaque, r: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_QBaseSubElementRect(@ptrCast(self), @intCast(r), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// ``` self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, p: QtC.QPainter, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnDrawComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, p: QtC.QPainter, w: QtC.QWidget ```
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// ``` self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, pt: QtC.QPoint, w: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubControl ```
    pub fn HitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, w: ?*anyopaque) i64 {
        return qtc.QCommonStyle_HitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, pt: QtC.QPoint, w: QtC.QWidget) callconv(.c) i64 ```
    pub fn OnHitTestComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        qtc.QCommonStyle_OnHitTestComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, pt: QtC.QPoint, w: QtC.QWidget ```
    ///
    /// Returns: ``` qstyle_enums.SubControl ```
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, w: ?*anyopaque) i64 {
        return qtc.QCommonStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// ``` self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, w: QtC.QWidget ```
    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, w: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, w: QtC.QWidget) callconv(.c) QtC.QRect ```
    pub fn OnSubControlRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QCommonStyle_OnSubControlRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex, sc: qstyle_enums.SubControl, w: QtC.QWidget ```
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, w: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// ``` self: QtC.QCommonStyle, ct: qstyle_enums.ContentsType, opt: QtC.QStyleOption, contentsSize: QtC.QSize, widget: QtC.QWidget ```
    pub fn SizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QCommonStyle_SizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, ct: qstyle_enums.ContentsType, opt: QtC.QStyleOption, contentsSize: QtC.QSize, widget: QtC.QWidget) callconv(.c) QtC.QSize ```
    pub fn OnSizeFromContents(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCommonStyle_OnSizeFromContents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, ct: qstyle_enums.ContentsType, opt: QtC.QStyleOption, contentsSize: QtC.QSize, widget: QtC.QWidget ```
    pub fn QBaseSizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, widget: ?*anyopaque) QtC.QSize {
        return qtc.QCommonStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// ``` self: QtC.QCommonStyle, m: qstyle_enums.PixelMetric, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn PixelMetric(self: ?*anyopaque, m: i64, opt: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_PixelMetric(@ptrCast(self), @intCast(m), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, m: qstyle_enums.PixelMetric, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnPixelMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnPixelMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, m: qstyle_enums.PixelMetric, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBasePixelMetric(self: ?*anyopaque, m: i64, opt: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBasePixelMetric(@ptrCast(self), @intCast(m), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// ``` self: QtC.QCommonStyle, sh: qstyle_enums.StyleHint, opt: QtC.QStyleOption, w: QtC.QWidget, shret: QtC.QStyleHintReturn ```
    pub fn StyleHint(self: ?*anyopaque, sh: i64, opt: ?*anyopaque, w: ?*anyopaque, shret: ?*anyopaque) i32 {
        return qtc.QCommonStyle_StyleHint(@ptrCast(self), @intCast(sh), @ptrCast(opt), @ptrCast(w), @ptrCast(shret));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, sh: qstyle_enums.StyleHint, opt: QtC.QStyleOption, w: QtC.QWidget, shret: QtC.QStyleHintReturn) callconv(.c) i32 ```
    pub fn OnStyleHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnStyleHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, sh: qstyle_enums.StyleHint, opt: QtC.QStyleOption, w: QtC.QWidget, shret: QtC.QStyleHintReturn ```
    pub fn QBaseStyleHint(self: ?*anyopaque, sh: i64, opt: ?*anyopaque, w: ?*anyopaque, shret: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBaseStyleHint(@ptrCast(self), @intCast(sh), @ptrCast(opt), @ptrCast(w), @ptrCast(shret));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// ``` self: QtC.QCommonStyle, standardIcon: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QCommonStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, standardIcon: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QIcon ```
    pub fn OnStandardIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QCommonStyle_OnStandardIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, standardIcon: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QIcon {
        return qtc.QCommonStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// ``` self: QtC.QCommonStyle, sp: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn StandardPixmap(self: ?*anyopaque, sp: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_StandardPixmap(@ptrCast(self), @intCast(sp), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, sp: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) QtC.QPixmap ```
    pub fn OnStandardPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QCommonStyle_OnStandardPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, sp: qstyle_enums.StandardPixmap, opt: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseStandardPixmap(self: ?*anyopaque, sp: i64, opt: ?*anyopaque, widget: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(sp), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// ``` self: QtC.QCommonStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption ```
    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption) callconv(.c) QtC.QPixmap ```
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QCommonStyle_OnGeneratedIconPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, iconMode: qicon_enums.Mode, pixmap: QtC.QPixmap, opt: QtC.QStyleOption ```
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i32, pixmap: ?*anyopaque, opt: ?*anyopaque) QtC.QPixmap {
        return qtc.QCommonStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// ``` self: QtC.QCommonStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn LayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnLayoutSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnLayoutSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i32, control2: i32, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: QtC.QCommonStyle, param1: QtC.QPalette ```
    pub fn Polish(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCommonStyle_Polish(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, param1: QtC.QPalette) callconv(.c) void ```
    pub fn OnPolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, param1: QtC.QPalette ```
    pub fn QBasePolish(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCommonStyle_QBasePolish(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: QtC.QCommonStyle, app: QtC.QApplication ```
    pub fn Polish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QCommonStyle_Polish2(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, app: QtC.QApplication) callconv(.c) void ```
    pub fn OnPolish2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, app: QtC.QApplication ```
    pub fn QBasePolish2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QCommonStyle_QBasePolish2(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: QtC.QCommonStyle, widget: QtC.QWidget ```
    pub fn Polish3(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_Polish3(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPolish3(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, widget: QtC.QWidget ```
    pub fn QBasePolish3(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_QBasePolish3(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ``` self: QtC.QCommonStyle, widget: QtC.QWidget ```
    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnUnpolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, widget: QtC.QWidget ```
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ``` self: QtC.QCommonStyle, application: QtC.QApplication ```
    pub fn Unpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QCommonStyle_Unpolish2(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, application: QtC.QApplication) callconv(.c) void ```
    pub fn OnUnpolish2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QCommonStyle, application: QtC.QApplication ```
    pub fn QBaseUnpolish2(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseUnpolish2(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCommonStyle_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QCommonStyle_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ``` self: QtC.QCommonStyle, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStyle_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Name: Memory allocation failed");
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
    pub fn VisualAlignment(direction: i32, alignment: i64) i64 {
        return qtc.QStyle_VisualAlignment(@intCast(direction), @intCast(alignment));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection, alignment: flag of qnamespace_enums.AlignmentFlag, size: QtC.QSize, rectangle: QtC.QRect ```
    pub fn AlignedRect(direction: i32, alignment: i64, size: ?*anyopaque, rectangle: ?*anyopaque) QtC.QRect {
        return qtc.QStyle_AlignedRect(@intCast(direction), @intCast(alignment), @ptrCast(size), @ptrCast(rectangle));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QCommonStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation ```
    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ``` self: QtC.QCommonStyle ```
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
    /// ``` self: QtC.QCommonStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption ```
    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i32, option: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: QtC.QCommonStyle, controls1: flag of qsizepolicy_enums.ControlType, controls2: flag of qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QtC.QStyleOption, widget: QtC.QWidget ```
    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i32, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QCommonStyle, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QCommonStyle, name: []const u8 ```
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
    /// ``` self: QtC.QCommonStyle ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QCommonStyle, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCommonStyle, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCommonStyle, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCommonStyle, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCommonStyle, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QCommonStyle, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcommonstyle.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QCommonStyle, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QCommonStyle, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QCommonStyle, obj: QtC.QObject ```
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
    /// ``` self: QtC.QCommonStyle, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QCommonStyle ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QCommonStyle, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QCommonStyle, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QCommonStyle, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcommonstyle.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommonstyle.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QCommonStyle, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCommonStyle, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCommonStyle, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QCommonStyle, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCommonStyle, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QCommonStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QCommonStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, fm: QtC.QFontMetrics, r: QtC.QRect, flags: i32, enabled: bool, text: []const u8) callconv(.c) QtC.QRect ```
    pub fn OnItemTextRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, []const u8) callconv(.c) QtC.QRect) void {
        qtc.QCommonStyle_OnItemTextRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) QtC.QRect {
        return qtc.QCommonStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap) callconv(.c) QtC.QRect ```
    pub fn OnItemPixmapRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QCommonStyle_OnItemPixmapRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCommonStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCommonStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, painter: QtC.QPainter, rect: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void ```
    pub fn OnDrawItemText(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, []const u8, i32) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawItemText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap ```
    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QCommonStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap ```
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, painter: QtC.QPainter, rect: QtC.QRect, alignment: i32, pixmap: QtC.QPixmap) callconv(.c) void ```
    pub fn OnDrawItemPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawItemPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn StandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QCommonStyle_StandardPalette(@ptrCast(self));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn QBaseStandardPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QCommonStyle_QBaseStandardPalette(@ptrCast(self));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn () callconv(.c) QtC.QPalette ```
    pub fn OnStandardPalette(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPalette) void {
        qtc.QCommonStyle_OnStandardPalette(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCommonStyle_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCommonStyle_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCommonStyle_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCommonStyle_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCommonStyle_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCommonStyle_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCommonStyle_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCommonStyle_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCommonStyle_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCommonStyle_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCommonStyle_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCommonStyle_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCommonStyle_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCommonStyle_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCommonStyle_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QCommonStyle_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCommonStyle_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCommonStyle_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCommonStyle_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCommonStyle_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCommonStyle_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QCommonStyle_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCommonStyle_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCommonStyle_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCommonStyle_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCommonStyle, slot: fn (self: QtC.QCommonStyle, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#dtor.QCommonStyle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCommonStyle ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommonStyle_Delete(@ptrCast(self));
    }
};
