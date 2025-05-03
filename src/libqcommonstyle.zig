const C = @import("qt6c");
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
    pub fn New() ?*C.QCommonStyle {
        return C.QCommonStyle_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QCommonStyle_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QCommonStyle, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QCommonStyle_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCommonStyle_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QCommonStyle_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCommonStyle_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QCommonStyle_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// ``` self: ?*C.QCommonStyle, pe: qstyle_enums.PrimitiveElement, opt: ?*C.QStyleOption, p: ?*C.QPainter, w: ?*C.QWidget ```
    pub fn DrawPrimitive(self: ?*anyopaque, pe: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        C.QCommonStyle_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.PrimitiveElement, ?*C.QStyleOption, ?*C.QPainter, ?*C.QWidget) callconv(.c) void ```
    pub fn OnDrawPrimitive(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnDrawPrimitive(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, pe: qstyle_enums.PrimitiveElement, opt: ?*C.QStyleOption, p: ?*C.QPainter, w: ?*C.QWidget ```
    pub fn QBaseDrawPrimitive(self: ?*anyopaque, pe: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        C.QCommonStyle_QBaseDrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// ``` self: ?*C.QCommonStyle, element: qstyle_enums.ControlElement, opt: ?*C.QStyleOption, p: ?*C.QPainter, w: ?*C.QWidget ```
    pub fn DrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        C.QCommonStyle_DrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.ControlElement, ?*C.QStyleOption, ?*C.QPainter, ?*C.QWidget) callconv(.c) void ```
    pub fn OnDrawControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnDrawControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, element: qstyle_enums.ControlElement, opt: ?*C.QStyleOption, p: ?*C.QPainter, w: ?*C.QWidget ```
    pub fn QBaseDrawControl(self: ?*anyopaque, element: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        C.QCommonStyle_QBaseDrawControl(@ptrCast(self), @intCast(element), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// ``` self: ?*C.QCommonStyle, r: qstyle_enums.SubElement, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn SubElementRect(self: ?*anyopaque, r: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QRect {
        return C.QCommonStyle_SubElementRect(@ptrCast(self), @intCast(r), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.SubElement, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) ?*C.QRect ```
    pub fn OnSubElementRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QCommonStyle_OnSubElementRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, r: qstyle_enums.SubElement, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseSubElementRect(self: ?*anyopaque, r: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QRect {
        return C.QCommonStyle_QBaseSubElementRect(@ptrCast(self), @intCast(r), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// ``` self: ?*C.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, p: ?*C.QPainter, w: ?*C.QWidget ```
    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        C.QCommonStyle_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.ComplexControl, ?*C.QStyleOptionComplex, ?*C.QPainter, ?*C.QWidget) callconv(.c) void ```
    pub fn OnDrawComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnDrawComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, p: ?*C.QPainter, w: ?*C.QWidget ```
    pub fn QBaseDrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, p: ?*anyopaque, w: ?*anyopaque) void {
        C.QCommonStyle_QBaseDrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(p), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// ``` self: ?*C.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, pt: ?*C.QPoint, w: ?*C.QWidget ```
    pub fn HitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, w: ?*anyopaque) i64 {
        return C.QCommonStyle_HitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.ComplexControl, ?*C.QStyleOptionComplex, ?*C.QPoint, ?*C.QWidget) callconv(.c) i64 ```
    pub fn OnHitTestComplexControl(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QCommonStyle_OnHitTestComplexControl(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, pt: ?*C.QPoint, w: ?*C.QWidget ```
    pub fn QBaseHitTestComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, pt: ?*anyopaque, w: ?*anyopaque) i64 {
        return C.QCommonStyle_QBaseHitTestComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt), @ptrCast(pt), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// ``` self: ?*C.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, sc: qstyle_enums.SubControl, w: ?*C.QWidget ```
    pub fn SubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, w: ?*anyopaque) ?*C.QRect {
        return C.QCommonStyle_SubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(w));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.ComplexControl, ?*C.QStyleOptionComplex, qstyle_enums.SubControl, ?*C.QWidget) callconv(.c) ?*C.QRect ```
    pub fn OnSubControlRect(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QCommonStyle_OnSubControlRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, cc: qstyle_enums.ComplexControl, opt: ?*C.QStyleOptionComplex, sc: qstyle_enums.SubControl, w: ?*C.QWidget ```
    pub fn QBaseSubControlRect(self: ?*anyopaque, cc: i64, opt: ?*anyopaque, sc: i64, w: ?*anyopaque) ?*C.QRect {
        return C.QCommonStyle_QBaseSubControlRect(@ptrCast(self), @intCast(cc), @ptrCast(opt), @intCast(sc), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// ``` self: ?*C.QCommonStyle, ct: qstyle_enums.ContentsType, opt: ?*C.QStyleOption, contentsSize: ?*C.QSize, widget: ?*C.QWidget ```
    pub fn SizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, widget: ?*anyopaque) ?*C.QSize {
        return C.QCommonStyle_SizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.ContentsType, ?*C.QStyleOption, ?*C.QSize, ?*C.QWidget) callconv(.c) ?*C.QSize ```
    pub fn OnSizeFromContents(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QSize) void {
        C.QCommonStyle_OnSizeFromContents(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, ct: qstyle_enums.ContentsType, opt: ?*C.QStyleOption, contentsSize: ?*C.QSize, widget: ?*C.QWidget ```
    pub fn QBaseSizeFromContents(self: ?*anyopaque, ct: i64, opt: ?*anyopaque, contentsSize: ?*anyopaque, widget: ?*anyopaque) ?*C.QSize {
        return C.QCommonStyle_QBaseSizeFromContents(@ptrCast(self), @intCast(ct), @ptrCast(opt), @ptrCast(contentsSize), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// ``` self: ?*C.QCommonStyle, m: qstyle_enums.PixelMetric, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn PixelMetric(self: ?*anyopaque, m: i64, opt: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QCommonStyle_PixelMetric(@ptrCast(self), @intCast(m), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.PixelMetric, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnPixelMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QCommonStyle_OnPixelMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, m: qstyle_enums.PixelMetric, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBasePixelMetric(self: ?*anyopaque, m: i64, opt: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QCommonStyle_QBasePixelMetric(@ptrCast(self), @intCast(m), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// ``` self: ?*C.QCommonStyle, sh: qstyle_enums.StyleHint, opt: ?*C.QStyleOption, w: ?*C.QWidget, shret: ?*C.QStyleHintReturn ```
    pub fn StyleHint(self: ?*anyopaque, sh: i64, opt: ?*anyopaque, w: ?*anyopaque, shret: ?*anyopaque) i32 {
        return C.QCommonStyle_StyleHint(@ptrCast(self), @intCast(sh), @ptrCast(opt), @ptrCast(w), @ptrCast(shret));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.StyleHint, ?*C.QStyleOption, ?*C.QWidget, ?*C.QStyleHintReturn) callconv(.c) i32 ```
    pub fn OnStyleHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QCommonStyle_OnStyleHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, sh: qstyle_enums.StyleHint, opt: ?*C.QStyleOption, w: ?*C.QWidget, shret: ?*C.QStyleHintReturn ```
    pub fn QBaseStyleHint(self: ?*anyopaque, sh: i64, opt: ?*anyopaque, w: ?*anyopaque, shret: ?*anyopaque) i32 {
        return C.QCommonStyle_QBaseStyleHint(@ptrCast(self), @intCast(sh), @ptrCast(opt), @ptrCast(w), @ptrCast(shret));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// ``` self: ?*C.QCommonStyle, standardIcon: qstyle_enums.StandardPixmap, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn StandardIcon(self: ?*anyopaque, standardIcon: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QIcon {
        return C.QCommonStyle_StandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.StandardPixmap, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) ?*C.QIcon ```
    pub fn OnStandardIcon(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QIcon) void {
        C.QCommonStyle_OnStandardIcon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, standardIcon: qstyle_enums.StandardPixmap, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseStandardIcon(self: ?*anyopaque, standardIcon: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QIcon {
        return C.QCommonStyle_QBaseStandardIcon(@ptrCast(self), @intCast(standardIcon), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// ``` self: ?*C.QCommonStyle, sp: qstyle_enums.StandardPixmap, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn StandardPixmap(self: ?*anyopaque, sp: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QPixmap {
        return C.QCommonStyle_StandardPixmap(@ptrCast(self), @intCast(sp), @ptrCast(opt), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qstyle_enums.StandardPixmap, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) ?*C.QPixmap ```
    pub fn OnStandardPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPixmap) void {
        C.QCommonStyle_OnStandardPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, sp: qstyle_enums.StandardPixmap, opt: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseStandardPixmap(self: ?*anyopaque, sp: i64, opt: ?*anyopaque, widget: ?*anyopaque) ?*C.QPixmap {
        return C.QCommonStyle_QBaseStandardPixmap(@ptrCast(self), @intCast(sp), @ptrCast(opt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// ``` self: ?*C.QCommonStyle, iconMode: qicon_enums.Mode, pixmap: ?*C.QPixmap, opt: ?*C.QStyleOption ```
    pub fn GeneratedIconPixmap(self: ?*anyopaque, iconMode: i64, pixmap: ?*anyopaque, opt: ?*anyopaque) ?*C.QPixmap {
        return C.QCommonStyle_GeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qicon_enums.Mode, ?*C.QPixmap, ?*C.QStyleOption) callconv(.c) ?*C.QPixmap ```
    pub fn OnGeneratedIconPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPixmap) void {
        C.QCommonStyle_OnGeneratedIconPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, iconMode: qicon_enums.Mode, pixmap: ?*C.QPixmap, opt: ?*C.QStyleOption ```
    pub fn QBaseGeneratedIconPixmap(self: ?*anyopaque, iconMode: i64, pixmap: ?*anyopaque, opt: ?*anyopaque) ?*C.QPixmap {
        return C.QCommonStyle_QBaseGeneratedIconPixmap(@ptrCast(self), @intCast(iconMode), @ptrCast(pixmap), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// ``` self: ?*C.QCommonStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn LayoutSpacing(self: ?*anyopaque, control1: i64, control2: i64, orientation: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QCommonStyle_LayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, qsizepolicy_enums.ControlType, qsizepolicy_enums.ControlType, qnamespace_enums.Orientation, ?*C.QStyleOption, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnLayoutSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64, i64, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QCommonStyle_OnLayoutSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn QBaseLayoutSpacing(self: ?*anyopaque, control1: i64, control2: i64, orientation: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QCommonStyle_QBaseLayoutSpacing(@ptrCast(self), @intCast(control1), @intCast(control2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: ?*C.QCommonStyle, param1: ?*C.QPalette ```
    pub fn Polish(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QCommonStyle_Polish(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QPalette) callconv(.c) void ```
    pub fn OnPolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnPolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, param1: ?*C.QPalette ```
    pub fn QBasePolish(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QCommonStyle_QBasePolish(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: ?*C.QCommonStyle, app: ?*C.QApplication ```
    pub fn PolishWithApp(self: ?*anyopaque, app: ?*anyopaque) void {
        C.QCommonStyle_PolishWithApp(@ptrCast(self), @ptrCast(app));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QApplication) callconv(.c) void ```
    pub fn OnPolishWithApp(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnPolishWithApp(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, app: ?*C.QApplication ```
    pub fn QBasePolishWithApp(self: ?*anyopaque, app: ?*anyopaque) void {
        C.QCommonStyle_QBasePolishWithApp(@ptrCast(self), @ptrCast(app));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ``` self: ?*C.QCommonStyle, widget: ?*C.QWidget ```
    pub fn PolishWithWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCommonStyle_PolishWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPolishWithWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnPolishWithWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, widget: ?*C.QWidget ```
    pub fn QBasePolishWithWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCommonStyle_QBasePolishWithWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ``` self: ?*C.QCommonStyle, widget: ?*C.QWidget ```
    pub fn Unpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCommonStyle_Unpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QWidget) callconv(.c) void ```
    pub fn OnUnpolish(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnUnpolish(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, widget: ?*C.QWidget ```
    pub fn QBaseUnpolish(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QCommonStyle_QBaseUnpolish(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ``` self: ?*C.QCommonStyle, application: ?*C.QApplication ```
    pub fn UnpolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QCommonStyle_UnpolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QApplication) callconv(.c) void ```
    pub fn OnUnpolishWithApplication(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnUnpolishWithApplication(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCommonStyle, application: ?*C.QApplication ```
    pub fn QBaseUnpolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QCommonStyle_QBaseUnpolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QCommonStyle_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QCommonStyle_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ``` self: ?*C.QCommonStyle, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCommonStyle, application: ?*C.QApplication ```
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
    /// ``` self: ?*C.QCommonStyle, application: ?*C.QApplication ```
    pub fn QBasePolishWithApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        C.QStyle_QBasePolishWithApplication(@ptrCast(self), @ptrCast(application));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
    ///
    /// ``` self: ?*C.QCommonStyle, palette: ?*C.QPalette ```
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
    /// ``` self: ?*C.QCommonStyle, palette: ?*C.QPalette ```
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
    /// ``` self: ?*C.QCommonStyle, controls1: i32, controls2: i32, orientation: qnamespace_enums.Orientation ```
    pub fn CombinedLayoutSpacing(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i64) i32 {
        return C.QStyle_CombinedLayoutSpacing(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ``` self: ?*C.QCommonStyle ```
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
    /// ``` self: ?*C.QCommonStyle, controls1: i32, controls2: i32, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption ```
    pub fn CombinedLayoutSpacing4(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i64, option: ?*anyopaque) i32 {
        return C.QStyle_CombinedLayoutSpacing4(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ``` self: ?*C.QCommonStyle, controls1: i32, controls2: i32, orientation: qnamespace_enums.Orientation, option: ?*C.QStyleOption, widget: ?*C.QWidget ```
    pub fn CombinedLayoutSpacing5(self: ?*anyopaque, controls1: i64, controls2: i64, orientation: i64, option: ?*anyopaque, widget: ?*anyopaque) i32 {
        return C.QStyle_CombinedLayoutSpacing5(@ptrCast(self), @intCast(controls1), @intCast(controls2), @intCast(orientation), @ptrCast(option), @ptrCast(widget));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QCommonStyle, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCommonStyle, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QCommonStyle, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QCommonStyle, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCommonStyle, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QCommonStyle, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QCommonStyle, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCommonStyle, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QCommonStyle, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QCommonStyle, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QCommonStyle, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QCommonStyle ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QCommonStyle, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QCommonStyle, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QCommonStyle, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCommonStyle ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCommonStyle ```
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
    /// ``` self: ?*C.QCommonStyle ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QCommonStyle, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCommonStyle, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QCommonStyle, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCommonStyle, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, fm: ?*C.QFontMetrics, r: ?*C.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn ItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QCommonStyle_ItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, fm: ?*C.QFontMetrics, r: ?*C.QRect, flags: i32, enabled: bool, text: []const u8 ```
    pub fn QBaseItemTextRect(self: ?*anyopaque, fm: ?*anyopaque, r: ?*anyopaque, flags: i32, enabled: bool, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QCommonStyle_QBaseItemTextRect(@ptrCast(self), @ptrCast(fm), @ptrCast(r), @intCast(flags), enabled, text_str);
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QFontMetrics, ?*C.QRect, i32, bool, []const u8) callconv(.c) ?*C.QRect ```
    pub fn OnItemTextRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, bool, []const u8) callconv(.c) ?*C.QRect) void {
        C.QCommonStyle_OnItemTextRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, r: ?*C.QRect, flags: i32, pixmap: ?*C.QPixmap ```
    pub fn ItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) ?*C.QRect {
        return C.QCommonStyle_ItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, r: ?*C.QRect, flags: i32, pixmap: ?*C.QPixmap ```
    pub fn QBaseItemPixmapRect(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) ?*C.QRect {
        return C.QCommonStyle_QBaseItemPixmapRect(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QRect, i32, ?*C.QPixmap) callconv(.c) ?*C.QRect ```
    pub fn OnItemPixmapRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QCommonStyle_OnItemPixmapRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, painter: ?*C.QPainter, rect: ?*C.QRect, flags: i32, pal: ?*C.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn DrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i64) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QCommonStyle_DrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, painter: ?*C.QPainter, rect: ?*C.QRect, flags: i32, pal: ?*C.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn QBaseDrawItemText(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i64) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QCommonStyle_QBaseDrawItemText(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QPainter, ?*C.QRect, i32, ?*C.QPalette, bool, []const u8, qpalette_enums.ColorRole) callconv(.c) void ```
    pub fn OnDrawItemText(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque, bool, []const u8, i64) callconv(.c) void) void {
        C.QCommonStyle_OnDrawItemText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, painter: ?*C.QPainter, rect: ?*C.QRect, alignment: i32, pixmap: ?*C.QPixmap ```
    pub fn DrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        C.QCommonStyle_DrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, painter: ?*C.QPainter, rect: ?*C.QRect, alignment: i32, pixmap: ?*C.QPixmap ```
    pub fn QBaseDrawItemPixmap(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, pixmap: ?*anyopaque) void {
        C.QCommonStyle_QBaseDrawItemPixmap(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @ptrCast(pixmap));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QPainter, ?*C.QRect, i32, ?*C.QPixmap) callconv(.c) void ```
    pub fn OnDrawItemPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnDrawItemPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QStyle
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn StandardPalette(self: ?*anyopaque) ?*C.QPalette {
        return C.QCommonStyle_StandardPalette(@ptrCast(self));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn QBaseStandardPalette(self: ?*anyopaque) ?*C.QPalette {
        return C.QCommonStyle_QBaseStandardPalette(@ptrCast(self));
    }

    /// Inherited from QStyle
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn () callconv(.c) ?*C.QPalette ```
    pub fn OnStandardPalette(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPalette) void {
        C.QCommonStyle_OnStandardPalette(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCommonStyle_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCommonStyle_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCommonStyle_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCommonStyle_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCommonStyle_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCommonStyle_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCommonStyle_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCommonStyle_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCommonStyle_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCommonStyle_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCommonStyle_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCommonStyle_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCommonStyle_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCommonStyle_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCommonStyle_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCommonStyle_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCommonStyle_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QCommonStyle_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QCommonStyle_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QCommonStyle_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCommonStyle_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCommonStyle_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QCommonStyle_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCommonStyle_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCommonStyle_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QCommonStyle_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCommonStyle_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCommonStyle_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCommonStyle, slot: fn (?*C.QCommonStyle, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCommonStyle_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCommonStyle ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCommonStyle_Delete(@ptrCast(self));
    }
};
