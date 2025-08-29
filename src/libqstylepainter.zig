const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbrush_enums = @import("libqbrush.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpainter_enums = @import("libqpainter.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qstylepainter.html
pub const qstylepainter = struct {
    /// New constructs a new QStylePainter object.
    ///
    /// ``` w: QtC.QWidget ```
    pub fn New(w: ?*anyopaque) QtC.QStylePainter {
        return qtc.QStylePainter_new(@ptrCast(w));
    }

    /// New2 constructs a new QStylePainter object.
    ///
    ///
    pub fn New2() QtC.QStylePainter {
        return qtc.QStylePainter_new2();
    }

    /// New3 constructs a new QStylePainter object.
    ///
    /// ``` pd: QtC.QPaintDevice, w: QtC.QWidget ```
    pub fn New3(pd: ?*anyopaque, w: ?*anyopaque) QtC.QStylePainter {
        return qtc.QStylePainter_new3(@ptrCast(pd), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#begin)
    ///
    /// ``` self: QtC.QStylePainter, w: QtC.QWidget ```
    pub fn Begin(self: ?*anyopaque, w: ?*anyopaque) bool {
        return qtc.QStylePainter_Begin(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#begin)
    ///
    /// ``` self: QtC.QStylePainter, pd: QtC.QPaintDevice, w: QtC.QWidget ```
    pub fn Begin2(self: ?*anyopaque, pd: ?*anyopaque, w: ?*anyopaque) bool {
        return qtc.QStylePainter_Begin2(@ptrCast(self), @ptrCast(pd), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawPrimitive)
    ///
    /// ``` self: QtC.QStylePainter, pe: qstyle_enums.PrimitiveElement, opt: QtC.QStyleOption ```
    pub fn DrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque) void {
        qtc.QStylePainter_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawControl)
    ///
    /// ``` self: QtC.QStylePainter, ce: qstyle_enums.ControlElement, opt: QtC.QStyleOption ```
    pub fn DrawControl(self: ?*anyopaque, ce: i64, opt: ?*anyopaque) void {
        qtc.QStylePainter_DrawControl(@ptrCast(self), @intCast(ce), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawComplexControl)
    ///
    /// ``` self: QtC.QStylePainter, cc: qstyle_enums.ComplexControl, opt: QtC.QStyleOptionComplex ```
    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque) void {
        qtc.QStylePainter_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8 ```
    pub fn DrawItemText(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStylePainter_DrawItemText(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pal), enabled, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemPixmap)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, flags: i32, pixmap: QtC.QPixmap ```
    pub fn DrawItemPixmap(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) void {
        qtc.QStylePainter_DrawItemPixmap(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#style)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QStylePainter_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, flags: i32, pal: QtC.QPalette, enabled: bool, text: []const u8, textRole: qpalette_enums.ColorRole ```
    pub fn DrawItemText6(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStylePainter_DrawItemText6(@ptrCast(self), @ptrCast(r), @intCast(flags), @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Device(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPainter_Device(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn End(self: ?*anyopaque) bool {
        return qtc.QPainter_End(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QPainter_IsActive(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
    ///
    /// ``` self: QtC.QStylePainter, mode: qpainter_enums.CompositionMode ```
    pub fn SetCompositionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
    ///
    /// ``` self: QtC.QStylePainter ```
    ///
    /// Returns: ``` qpainter_enums.CompositionMode ```
    pub fn CompositionMode(self: ?*anyopaque) i32 {
        return qtc.QPainter_CompositionMode(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QPainter_Font(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setFont)
    ///
    /// ``` self: QtC.QStylePainter, f: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QPainter_SetFont(@ptrCast(self), @ptrCast(f));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QPainter_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QPainter_FontInfo(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: QtC.QStylePainter, color: QtC.QColor ```
    pub fn SetPen(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_SetPen(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: QtC.QStylePainter, pen: QtC.QPen ```
    pub fn SetPen2(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPainter_SetPen2(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: QtC.QStylePainter, style: qnamespace_enums.PenStyle ```
    pub fn SetPen3(self: ?*anyopaque, style: i32) void {
        qtc.QPainter_SetPen3(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QPainter_Pen(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ``` self: QtC.QStylePainter, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPainter_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ``` self: QtC.QStylePainter, style: qnamespace_enums.BrushStyle ```
    pub fn SetBrush2(self: ?*anyopaque, style: i32) void {
        qtc.QPainter_SetBrush2(@ptrCast(self), @intCast(style));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPainter_Brush(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
    ///
    /// ``` self: QtC.QStylePainter, mode: qnamespace_enums.BGMode ```
    pub fn SetBackgroundMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
    ///
    /// ``` self: QtC.QStylePainter ```
    ///
    /// Returns: ``` qnamespace_enums.BGMode ```
    pub fn BackgroundMode(self: ?*anyopaque) i32 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn BrushOrigin(self: ?*anyopaque) QtC.QPoint {
        return qtc.QPainter_BrushOrigin(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32 ```
    pub fn SetBrushOrigin(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: QtC.QStylePainter, brushOrigin: QtC.QPoint ```
    pub fn SetBrushOrigin2(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self), @ptrCast(brushOrigin));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: QtC.QStylePainter, brushOrigin: QtC.QPointF ```
    pub fn SetBrushOrigin3(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        qtc.QPainter_SetBrushOrigin3(@ptrCast(self), @ptrCast(brushOrigin));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackground)
    ///
    /// ``` self: QtC.QStylePainter, bg: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, bg: ?*anyopaque) void {
        qtc.QPainter_SetBackground(@ptrCast(self), @ptrCast(bg));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPainter_Background(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ``` self: QtC.QStylePainter, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn ClipRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QPainter_ClipRegion(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainter_ClipPath(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRectF ```
    pub fn SetClipRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect ```
    pub fn SetClipRect2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRect2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetClipRect3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRegion ```
    pub fn SetClipRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ``` self: QtC.QStylePainter, path: QtC.QPainterPath ```
    pub fn SetClipPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainter_SetClipPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipping)
    ///
    /// ``` self: QtC.QStylePainter, enable: bool ```
    pub fn SetClipping(self: ?*anyopaque, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self), enable);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn HasClipping(self: ?*anyopaque) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn ClipBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPainter_ClipBoundingRect(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Save(self: ?*anyopaque) void {
        qtc.QPainter_Save(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Restore(self: ?*anyopaque) void {
        qtc.QPainter_Restore(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ``` self: QtC.QStylePainter, transform: QtC.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QPainter_SetTransform(@ptrCast(self), @ptrCast(transform));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_Transform(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn DeviceTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_DeviceTransform(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QPainter_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ``` self: QtC.QStylePainter, matrix: QtC.QTransform ```
    pub fn SetWorldTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QPainter_SetWorldTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn WorldTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_WorldTransform(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn CombinedTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_CombinedTransform(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
    ///
    /// ``` self: QtC.QStylePainter, enabled: bool ```
    pub fn SetWorldMatrixEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn WorldMatrixEnabled(self: ?*anyopaque) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#scale)
    ///
    /// ``` self: QtC.QStylePainter, sx: f64, sy: f64 ```
    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self), @floatCast(sx), @floatCast(sy));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#shear)
    ///
    /// ``` self: QtC.QStylePainter, sh: f64, sv: f64 ```
    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self), @floatCast(sh), @floatCast(sv));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#rotate)
    ///
    /// ``` self: QtC.QStylePainter, a: f64 ```
    pub fn Rotate(self: ?*anyopaque, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self), @floatCast(a));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: QtC.QStylePainter, offset: QtC.QPointF ```
    pub fn Translate(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_Translate(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: QtC.QStylePainter, offset: QtC.QPoint ```
    pub fn Translate2(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_Translate2(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: QtC.QStylePainter, dx: f64, dy: f64 ```
    pub fn Translate3(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QPainter_Translate3(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Window(self: ?*anyopaque) QtC.QRect {
        return qtc.QPainter_Window(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ``` self: QtC.QStylePainter, window: QtC.QRect ```
    pub fn SetWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QPainter_SetWindow(@ptrCast(self), @ptrCast(window));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetWindow2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn Viewport(self: ?*anyopaque) QtC.QRect {
        return qtc.QPainter_Viewport(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ``` self: QtC.QStylePainter, viewport: QtC.QRect ```
    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QPainter_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetViewport2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
    ///
    /// ``` self: QtC.QStylePainter, enable: bool ```
    pub fn SetViewTransformEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn ViewTransformEnabled(self: ?*anyopaque) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#strokePath)
    ///
    /// ``` self: QtC.QStylePainter, path: QtC.QPainterPath, pen: QtC.QPen ```
    pub fn StrokePath(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPainter_StrokePath(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillPath)
    ///
    /// ``` self: QtC.QStylePainter, path: QtC.QPainterPath, brush: QtC.QBrush ```
    pub fn FillPath(self: ?*anyopaque, path: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPainter_FillPath(@ptrCast(self), @ptrCast(path), @ptrCast(brush));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPath)
    ///
    /// ``` self: QtC.QStylePainter, path: QtC.QPainterPath ```
    pub fn DrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainter_DrawPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: QtC.QStylePainter, pt: QtC.QPointF ```
    pub fn DrawPoint(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QPainter_DrawPoint(@ptrCast(self), @ptrCast(pt));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint ```
    pub fn DrawPoint2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainter_DrawPoint2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32 ```
    pub fn DrawPoint3(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint3(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPoints(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPoints3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPoints3(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QStylePainter, line: QtC.QLineF ```
    pub fn DrawLine(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QPainter_DrawLine(@ptrCast(self), @ptrCast(line));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QStylePainter, line: QtC.QLine ```
    pub fn DrawLine2(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QPainter_DrawLine2(@ptrCast(self), @ptrCast(line));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QStylePainter, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn DrawLine3(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine3(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QStylePainter, p1: QtC.QPoint, p2: QtC.QPoint ```
    pub fn DrawLine4(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QPainter_DrawLine4(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QStylePainter, p1: QtC.QPointF, p2: QtC.QPointF ```
    pub fn DrawLine5(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QPainter_DrawLine5(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, lines: QtC.QLineF, lineCount: i32 ```
    pub fn DrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, lines: []QtC.QLineF ```
    pub fn DrawLines2(self: ?*anyopaque, lines: []QtC.QLineF) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines2(@ptrCast(self), lines_list);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, pointPairs: QtC.QPointF, lineCount: i32 ```
    pub fn DrawLines3(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines3(@ptrCast(self), @ptrCast(pointPairs), @intCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, pointPairs: []QtC.QPointF ```
    pub fn DrawLines4(self: ?*anyopaque, pointPairs: []QtC.QPointF) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines4(@ptrCast(self), pointPairs_list);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, lines: QtC.QLine, lineCount: i32 ```
    pub fn DrawLines5(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines5(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, lines: []QtC.QLine ```
    pub fn DrawLines6(self: ?*anyopaque, lines: []QtC.QLine) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines6(@ptrCast(self), lines_list);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, pointPairs: QtC.QPoint, lineCount: i32 ```
    pub fn DrawLines7(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines7(@ptrCast(self), @ptrCast(pointPairs), @intCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QStylePainter, pointPairs: []QtC.QPoint ```
    pub fn DrawLines8(self: ?*anyopaque, pointPairs: []QtC.QPoint) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines8(@ptrCast(self), pointPairs_list);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF ```
    pub fn DrawRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainter_DrawRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: QtC.QStylePainter, x1: i32, y1: i32, w: i32, h: i32 ```
    pub fn DrawRect2(self: ?*anyopaque, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(w), @intCast(h));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRect ```
    pub fn DrawRect3(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainter_DrawRect3(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QStylePainter, rects: QtC.QRectF, rectCount: i32 ```
    pub fn DrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPainter_DrawRects(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QStylePainter, rectangles: []QtC.QRectF ```
    pub fn DrawRects2(self: ?*anyopaque, rectangles: []QtC.QRectF) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects2(@ptrCast(self), rectangles_list);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QStylePainter, rects: QtC.QRect, rectCount: i32 ```
    pub fn DrawRects3(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPainter_DrawRects3(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QStylePainter, rectangles: []QtC.QRect ```
    pub fn DrawRects4(self: ?*anyopaque, rectangles: []QtC.QRect) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects4(@ptrCast(self), rectangles_list);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF ```
    pub fn DrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPainter_DrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect ```
    pub fn DrawEllipse2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPainter_DrawEllipse2(@ptrCast(self), @ptrCast(r));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn DrawEllipse3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QStylePainter, center: QtC.QPointF, rx: f64, ry: f64 ```
    pub fn DrawEllipse4(self: ?*anyopaque, center: ?*anyopaque, rx: f64, ry: f64) void {
        qtc.QPainter_DrawEllipse4(@ptrCast(self), @ptrCast(center), @floatCast(rx), @floatCast(ry));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QStylePainter, center: QtC.QPoint, rx: i32, ry: i32 ```
    pub fn DrawEllipse5(self: ?*anyopaque, center: ?*anyopaque, rx: i32, ry: i32) void {
        qtc.QPainter_DrawEllipse5(@ptrCast(self), @ptrCast(center), @intCast(rx), @intCast(ry));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPolyline(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolyline(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPolyline3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolyline3(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPolygon3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolygon3(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawConvexPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawConvexPolygon3(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawConvexPolygon3(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, a: i32, alen: i32 ```
    pub fn DrawArc(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, a: i32, alen: i32 ```
    pub fn DrawArc2(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc2(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawArc3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, a: i32, alen: i32 ```
    pub fn DrawPie(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawPie2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, a: i32, alen: i32 ```
    pub fn DrawPie3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie3(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, a: i32, alen: i32 ```
    pub fn DrawChord(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawChord2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, a: i32, alen: i32 ```
    pub fn DrawChord3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord3(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRect, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect3(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, pm: QtC.QPixmap ```
    pub fn DrawTiledPixmap(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self), @ptrCast(rect), @ptrCast(pm));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QPixmap ```
    pub fn DrawTiledPixmap2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, param2: QtC.QPixmap ```
    pub fn DrawTiledPixmap3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, picture: QtC.QPicture ```
    pub fn DrawPicture(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, picture: QtC.QPicture ```
    pub fn DrawPicture2(self: ?*anyopaque, x: i32, y: i32, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture2(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(picture));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, picture: QtC.QPicture ```
    pub fn DrawPicture3(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture3(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, targetRect: QtC.QRectF, pixmap: QtC.QPixmap, sourceRect: QtC.QRectF ```
    pub fn DrawPixmap(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, targetRect: QtC.QRect, pixmap: QtC.QPixmap, sourceRect: QtC.QRect ```
    pub fn DrawPixmap2(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, pm: QtC.QPixmap, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawPixmap3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawPixmap3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(pm), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, pm: QtC.QPixmap, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawPixmap4(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawPixmap4(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(pm), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, pm: QtC.QPixmap, sr: QtC.QRectF ```
    pub fn DrawPixmap5(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap5(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, pm: QtC.QPixmap, sr: QtC.QRect ```
    pub fn DrawPixmap6(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap6(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, pm: QtC.QPixmap ```
    pub fn DrawPixmap7(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap7(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, pm: QtC.QPixmap ```
    pub fn DrawPixmap8(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap8(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, pm: QtC.QPixmap ```
    pub fn DrawPixmap9(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(pm));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, pm: QtC.QPixmap ```
    pub fn DrawPixmap10(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap10(@ptrCast(self), @ptrCast(r), @ptrCast(pm));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, pm: QtC.QPixmap ```
    pub fn DrawPixmap11(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap11(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(pm));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ``` self: QtC.QStylePainter, fragments: QtC.QPainter__PixmapFragment, fragmentCount: i32, pixmap: QtC.QPixmap ```
    pub fn DrawPixmapFragments(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque) void {
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self), @ptrCast(fragments), @intCast(fragmentCount), @ptrCast(pixmap));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, targetRect: QtC.QRectF, image: QtC.QImage, sourceRect: QtC.QRectF ```
    pub fn DrawImage(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawImage(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, targetRect: QtC.QRect, image: QtC.QImage, sourceRect: QtC.QRect ```
    pub fn DrawImage2(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawImage2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, image: QtC.QImage, sr: QtC.QRectF ```
    pub fn DrawImage3(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawImage3(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, image: QtC.QImage, sr: QtC.QRect ```
    pub fn DrawImage4(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawImage4(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, image: QtC.QImage ```
    pub fn DrawImage5(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage5(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, image: QtC.QImage ```
    pub fn DrawImage6(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage6(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, image: QtC.QImage ```
    pub fn DrawImage7(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage7(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, image: QtC.QImage ```
    pub fn DrawImage8(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage8(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, image: QtC.QImage ```
    pub fn DrawImage9(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QStylePainter, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
    ///
    /// ``` self: QtC.QStylePainter ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
    ///
    /// ``` self: QtC.QStylePainter, position: QtC.QPointF, glyphRun: QtC.QGlyphRun ```
    pub fn DrawGlyphRun(self: ?*anyopaque, position: ?*anyopaque, glyphRun: ?*anyopaque) void {
        qtc.QPainter_DrawGlyphRun(@ptrCast(self), @ptrCast(position), @ptrCast(glyphRun));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: QtC.QStylePainter, topLeftPosition: QtC.QPointF, staticText: QtC.QStaticText ```
    pub fn DrawStaticText(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: QtC.QStylePainter, topLeftPosition: QtC.QPoint, staticText: QtC.QStaticText ```
    pub fn DrawStaticText2(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText2(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: QtC.QStylePainter, left: i32, top: i32, staticText: QtC.QStaticText ```
    pub fn DrawStaticText3(self: ?*anyopaque, left: i32, top: i32, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText3(@ptrCast(self), @intCast(left), @intCast(top), @ptrCast(staticText));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, s: []const u8 ```
    pub fn DrawText(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText(@ptrCast(self), @ptrCast(p), s_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, s: []const u8 ```
    pub fn DrawText2(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText2(@ptrCast(self), @ptrCast(p), s_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, s: []const u8 ```
    pub fn DrawText3(self: ?*anyopaque, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText3(@ptrCast(self), @intCast(x), @intCast(y), s_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, str: []const u8, tf: i32, justificationPadding: i32 ```
    pub fn DrawText4(self: ?*anyopaque, p: ?*anyopaque, str: []const u8, tf: i32, justificationPadding: i32) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QPainter_DrawText4(@ptrCast(self), @ptrCast(p), str_str, @intCast(tf), @intCast(justificationPadding));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, flags: i32, text: []const u8 ```
    pub fn DrawText5(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText5(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, flags: i32, text: []const u8 ```
    pub fn DrawText6(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText6(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8 ```
    pub fn DrawText7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, text: []const u8 ```
    pub fn DrawText8(self: ?*anyopaque, r: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText8(@ptrCast(self), @ptrCast(r), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, flags: i32, text: []const u8 ```
    pub fn BoundingRect(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect(@ptrCast(self), @ptrCast(rect), @intCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRect, flags: i32, text: []const u8 ```
    pub fn BoundingRect2(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect2(@ptrCast(self), @ptrCast(rect), @intCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8 ```
    pub fn BoundingRect3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, text: []const u8 ```
    pub fn BoundingRect4(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8) QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect4(@ptrCast(self), @ptrCast(rect), text_str);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, ti: QtC.QTextItem ```
    pub fn DrawTextItem(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, ti: QtC.QTextItem ```
    pub fn DrawTextItem2(self: ?*anyopaque, x: i32, y: i32, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem2(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(ti));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, ti: QtC.QTextItem ```
    pub fn DrawTextItem3(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem3(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRectF, param2: QtC.QBrush ```
    pub fn FillRect(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_FillRect(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QBrush ```
    pub fn FillRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        qtc.QPainter_FillRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, param2: QtC.QBrush ```
    pub fn FillRect3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_FillRect3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRectF, color: QtC.QColor ```
    pub fn FillRect4(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_FillRect4(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, color: QtC.QColor ```
    pub fn FillRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, color: ?*anyopaque) void {
        qtc.QPainter_FillRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(color));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, color: QtC.QColor ```
    pub fn FillRect6(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_FillRect6(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, c: i32) void {
        qtc.QPainter_FillRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(c));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect8(self: ?*anyopaque, r: ?*anyopaque, c: i32) void {
        qtc.QPainter_FillRect8(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect9(self: ?*anyopaque, r: ?*anyopaque, c: i32) void {
        qtc.QPainter_FillRect9(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect10(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, style: i32) void {
        qtc.QPainter_FillRect10(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(style));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect11(self: ?*anyopaque, r: ?*anyopaque, style: i32) void {
        qtc.QPainter_FillRect11(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect12(self: ?*anyopaque, r: ?*anyopaque, style: i32) void {
        qtc.QPainter_FillRect12(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, preset: qbrush_enums.Preset ```
    pub fn FillRect13(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, preset: i32) void {
        qtc.QPainter_FillRect13(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(preset));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, preset: qbrush_enums.Preset ```
    pub fn FillRect14(self: ?*anyopaque, r: ?*anyopaque, preset: i32) void {
        qtc.QPainter_FillRect14(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, preset: qbrush_enums.Preset ```
    pub fn FillRect15(self: ?*anyopaque, r: ?*anyopaque, preset: i32) void {
        qtc.QPainter_FillRect15(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRectF ```
    pub fn EraseRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_EraseRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn EraseRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect ```
    pub fn EraseRect3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_EraseRect3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ``` self: QtC.QStylePainter, hint: qpainter_enums.RenderHint ```
    pub fn SetRenderHint(self: ?*anyopaque, hint: i32) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self), @intCast(hint));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ``` self: QtC.QStylePainter, hints: flag of qpainter_enums.RenderHint ```
    pub fn SetRenderHints(self: ?*anyopaque, hints: i32) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#renderHints)
    ///
    /// ``` self: QtC.QStylePainter ```
    ///
    /// Returns: ``` flag of qpainter_enums.RenderHint ```
    pub fn RenderHints(self: ?*anyopaque) i32 {
        return qtc.QPainter_RenderHints(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
    ///
    /// ``` self: QtC.QStylePainter, hint: qpainter_enums.RenderHint ```
    pub fn TestRenderHint(self: ?*anyopaque, hint: i32) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self), @intCast(hint));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPainter_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn BeginNativePainting(self: ?*anyopaque) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn EndNativePainting(self: ?*anyopaque) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRectF, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect22(self: ?*anyopaque, param1: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipRect22(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect23(self: ?*anyopaque, param1: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipRect23(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, op: i32) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(op));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRegion, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRegion2(self: ?*anyopaque, param1: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipRegion2(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ``` self: QtC.QStylePainter, path: QtC.QPainterPath, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipPath2(self: ?*anyopaque, path: ?*anyopaque, op: i32) void {
        qtc.QPainter_SetClipPath2(@ptrCast(self), @ptrCast(path), @intCast(op));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ``` self: QtC.QStylePainter, transform: QtC.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, transform: ?*anyopaque, combine: bool) void {
        qtc.QPainter_SetTransform2(@ptrCast(self), @ptrCast(transform), combine);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ``` self: QtC.QStylePainter, matrix: QtC.QTransform, combine: bool ```
    pub fn SetWorldTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QPainter_SetWorldTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPointF, pointCount: i32, fillRule: qnamespace_enums.FillRule ```
    pub fn DrawPolygon32(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i32) void {
        qtc.QPainter_DrawPolygon32(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(fillRule));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QStylePainter, points: QtC.QPoint, pointCount: i32, fillRule: qnamespace_enums.FillRule ```
    pub fn DrawPolygon33(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i32) void {
        qtc.QPainter_DrawPolygon33(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(fillRule));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect4(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRect, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect42(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, pm: QtC.QPixmap, offset: QtC.QPointF ```
    pub fn DrawTiledPixmap32(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self), @ptrCast(rect), @ptrCast(pm), @ptrCast(offset));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QPixmap, sx: i32 ```
    pub fn DrawTiledPixmap6(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32) void {
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5), @intCast(sx));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QPixmap, sx: i32, sy: i32 ```
    pub fn DrawTiledPixmap7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32, sy: i32) void {
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5), @intCast(sx), @intCast(sy));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QStylePainter, param1: QtC.QRect, param2: QtC.QPixmap, param3: QtC.QPoint ```
    pub fn DrawTiledPixmap33(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self), @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ``` self: QtC.QStylePainter, fragments: QtC.QPainter__PixmapFragment, fragmentCount: i32, pixmap: QtC.QPixmap, hints: flag of qpainter_enums.PixmapFragmentHint ```
    pub fn DrawPixmapFragments4(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque, hints: i32) void {
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self), @ptrCast(fragments), @intCast(fragmentCount), @ptrCast(pixmap), @intCast(hints));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, targetRect: QtC.QRectF, image: QtC.QImage, sourceRect: QtC.QRectF, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn DrawImage42(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage42(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, targetRect: QtC.QRect, image: QtC.QImage, sourceRect: QtC.QRect, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn DrawImage43(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage43(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPointF, image: QtC.QImage, sr: QtC.QRectF, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn DrawImage44(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage44(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, p: QtC.QPoint, image: QtC.QImage, sr: QtC.QRect, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn DrawImage45(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i32) void {
        qtc.QPainter_DrawImage45(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, image: QtC.QImage, sx: i32 ```
    pub fn DrawImage46(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32) void {
        qtc.QPainter_DrawImage46(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32 ```
    pub fn DrawImage52(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32) void {
        qtc.QPainter_DrawImage52(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32, sw: i32 ```
    pub fn DrawImage62(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32) void {
        qtc.QPainter_DrawImage62(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawImage72(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawImage72(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32, sw: i32, sh: i32, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn DrawImage82(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32) void {
        qtc.QPainter_DrawImage82(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh), @intCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, flags: i32, text: []const u8, br: QtC.QRectF ```
    pub fn DrawText42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText42(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @ptrCast(br));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRect, flags: i32, text: []const u8, br: QtC.QRect ```
    pub fn DrawText43(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText43(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @ptrCast(br));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: QtC.QRect ```
    pub fn DrawText72(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText72(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str, @ptrCast(br));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QStylePainter, r: QtC.QRectF, text: []const u8, o: QtC.QTextOption ```
    pub fn DrawText32(self: ?*anyopaque, r: ?*anyopaque, text: []const u8, o: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText32(@ptrCast(self), @ptrCast(r), text_str, @ptrCast(o));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QStylePainter, rect: QtC.QRectF, text: []const u8, o: QtC.QTextOption ```
    pub fn BoundingRect32(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8, o: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect32(@ptrCast(self), @ptrCast(rect), text_str, @ptrCast(o));
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ``` self: QtC.QStylePainter, hint: qpainter_enums.RenderHint, on: bool ```
    pub fn SetRenderHint2(self: ?*anyopaque, hint: i32, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self), @intCast(hint), on);
    }

    /// Inherited from QPainter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ``` self: QtC.QStylePainter, hints: flag of qpainter_enums.RenderHint, on: bool ```
    pub fn SetRenderHints2(self: ?*anyopaque, hints: i32, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self), @intCast(hints), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#dtor.QStylePainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStylePainter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStylePainter_Delete(@ptrCast(self));
    }
};
