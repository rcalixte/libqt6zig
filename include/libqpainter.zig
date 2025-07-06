const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbrush_enums = @import("libqbrush.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpainter_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpainter.html
pub const qpainter = struct {
    /// New constructs a new QPainter object.
    ///
    ///
    pub fn New() QtC.QPainter {
        return qtc.QPainter_new();
    }

    /// New2 constructs a new QPainter object.
    ///
    /// ``` param1: QtC.QPaintDevice ```
    pub fn New2(param1: ?*anyopaque) QtC.QPainter {
        return qtc.QPainter_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Device(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPainter_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#begin)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QPaintDevice ```
    pub fn Begin(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QPainter_Begin(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn End(self: ?*anyopaque) bool {
        return qtc.QPainter_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QPainter_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
    ///
    /// ``` self: QtC.QPainter, mode: qpainter_enums.CompositionMode ```
    pub fn SetCompositionMode(self: ?*anyopaque, mode: i64) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn CompositionMode(self: ?*anyopaque) i64 {
        return qtc.QPainter_CompositionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QPainter_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setFont)
    ///
    /// ``` self: QtC.QPainter, f: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QPainter_SetFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QPainter_FontMetrics(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QPainter_FontInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: QtC.QPainter, color: QtC.QColor ```
    pub fn SetPen(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_SetPen(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: QtC.QPainter, pen: QtC.QPen ```
    pub fn SetPenWithPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPainter_SetPenWithPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: QtC.QPainter, style: qnamespace_enums.PenStyle ```
    pub fn SetPenWithStyle(self: ?*anyopaque, style: i64) void {
        qtc.QPainter_SetPenWithStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QPainter_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ``` self: QtC.QPainter, brush: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPainter_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ``` self: QtC.QPainter, style: qnamespace_enums.BrushStyle ```
    pub fn SetBrushWithStyle(self: ?*anyopaque, style: i64) void {
        qtc.QPainter_SetBrushWithStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPainter_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
    ///
    /// ``` self: QtC.QPainter, mode: qnamespace_enums.BGMode ```
    pub fn SetBackgroundMode(self: ?*anyopaque, mode: i64) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn BackgroundMode(self: ?*anyopaque) i64 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn BrushOrigin(self: ?*anyopaque) QtC.QPoint {
        return qtc.QPainter_BrushOrigin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32 ```
    pub fn SetBrushOrigin(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: QtC.QPainter, brushOrigin: QtC.QPoint ```
    pub fn SetBrushOriginWithBrushOrigin(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        qtc.QPainter_SetBrushOriginWithBrushOrigin(@ptrCast(self), @ptrCast(brushOrigin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: QtC.QPainter, brushOrigin: QtC.QPointF ```
    pub fn SetBrushOrigin2(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self), @ptrCast(brushOrigin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackground)
    ///
    /// ``` self: QtC.QPainter, bg: QtC.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, bg: ?*anyopaque) void {
        qtc.QPainter_SetBackground(@ptrCast(self), @ptrCast(bg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Background(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPainter_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ``` self: QtC.QPainter, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn ClipRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QPainter_ClipRegion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainter_ClipPath(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRectF ```
    pub fn SetClipRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect ```
    pub fn SetClipRectWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRectWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetClipRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRegion ```
    pub fn SetClipRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_SetClipRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ``` self: QtC.QPainter, path: QtC.QPainterPath ```
    pub fn SetClipPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainter_SetClipPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipping)
    ///
    /// ``` self: QtC.QPainter, enable: bool ```
    pub fn SetClipping(self: ?*anyopaque, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn HasClipping(self: ?*anyopaque) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn ClipBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPainter_ClipBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Save(self: ?*anyopaque) void {
        qtc.QPainter_Save(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Restore(self: ?*anyopaque) void {
        qtc.QPainter_Restore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ``` self: QtC.QPainter, transform: QtC.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QPainter_SetTransform(@ptrCast(self), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_Transform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn DeviceTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_DeviceTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QPainter_ResetTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ``` self: QtC.QPainter, matrix: QtC.QTransform ```
    pub fn SetWorldTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QPainter_SetWorldTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn WorldTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_WorldTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn CombinedTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPainter_CombinedTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
    ///
    /// ``` self: QtC.QPainter, enabled: bool ```
    pub fn SetWorldMatrixEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn WorldMatrixEnabled(self: ?*anyopaque) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#scale)
    ///
    /// ``` self: QtC.QPainter, sx: f64, sy: f64 ```
    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self), @floatCast(sx), @floatCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#shear)
    ///
    /// ``` self: QtC.QPainter, sh: f64, sv: f64 ```
    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self), @floatCast(sh), @floatCast(sv));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#rotate)
    ///
    /// ``` self: QtC.QPainter, a: f64 ```
    pub fn Rotate(self: ?*anyopaque, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: QtC.QPainter, offset: QtC.QPointF ```
    pub fn Translate(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_Translate(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: QtC.QPainter, offset: QtC.QPoint ```
    pub fn TranslateWithOffset(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_TranslateWithOffset(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: QtC.QPainter, dx: f64, dy: f64 ```
    pub fn Translate2(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QPainter_Translate2(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Window(self: ?*anyopaque) QtC.QRect {
        return qtc.QPainter_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ``` self: QtC.QPainter, window: QtC.QRect ```
    pub fn SetWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QPainter_SetWindow(@ptrCast(self), @ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetWindow2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn Viewport(self: ?*anyopaque) QtC.QRect {
        return qtc.QPainter_Viewport(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ``` self: QtC.QPainter, viewport: QtC.QRect ```
    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QPainter_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetViewport2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
    ///
    /// ``` self: QtC.QPainter, enable: bool ```
    pub fn SetViewTransformEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn ViewTransformEnabled(self: ?*anyopaque) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#strokePath)
    ///
    /// ``` self: QtC.QPainter, path: QtC.QPainterPath, pen: QtC.QPen ```
    pub fn StrokePath(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPainter_StrokePath(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillPath)
    ///
    /// ``` self: QtC.QPainter, path: QtC.QPainterPath, brush: QtC.QBrush ```
    pub fn FillPath(self: ?*anyopaque, path: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPainter_FillPath(@ptrCast(self), @ptrCast(path), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPath)
    ///
    /// ``` self: QtC.QPainter, path: QtC.QPainterPath ```
    pub fn DrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainter_DrawPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: QtC.QPainter, pt: QtC.QPointF ```
    pub fn DrawPoint(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QPainter_DrawPoint(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint ```
    pub fn DrawPointWithQPoint(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainter_DrawPointWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32 ```
    pub fn DrawPoint2(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPoints(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPoints2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPoints2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QPainter, line: QtC.QLineF ```
    pub fn DrawLine(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QPainter_DrawLine(@ptrCast(self), @ptrCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QPainter, line: QtC.QLine ```
    pub fn DrawLineWithLine(self: ?*anyopaque, line: ?*anyopaque) void {
        qtc.QPainter_DrawLineWithLine(@ptrCast(self), @ptrCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QPainter, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn DrawLine2(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine2(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QPainter, p1: QtC.QPoint, p2: QtC.QPoint ```
    pub fn DrawLine3(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QPainter_DrawLine3(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: QtC.QPainter, p1: QtC.QPointF, p2: QtC.QPointF ```
    pub fn DrawLine4(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QPainter_DrawLine4(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, lines: QtC.QLineF, lineCount: i32 ```
    pub fn DrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, lines: []QtC.QLineF ```
    pub fn DrawLinesWithLines(self: ?*anyopaque, lines: []QtC.QLineF) void {
        const lines_list = qtc.struct_libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLinesWithLines(@ptrCast(self), lines_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, pointPairs: QtC.QPointF, lineCount: i32 ```
    pub fn DrawLines2(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines2(@ptrCast(self), @ptrCast(pointPairs), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, pointPairs: []QtC.QPointF ```
    pub fn DrawLinesWithPointPairs(self: ?*anyopaque, pointPairs: []QtC.QPointF) void {
        const pointPairs_list = qtc.struct_libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLinesWithPointPairs(@ptrCast(self), pointPairs_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, lines: QtC.QLine, lineCount: i32 ```
    pub fn DrawLines3(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines3(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, lines: []QtC.QLine ```
    pub fn DrawLines4(self: ?*anyopaque, lines: []QtC.QLine) void {
        const lines_list = qtc.struct_libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines4(@ptrCast(self), lines_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, pointPairs: QtC.QPoint, lineCount: i32 ```
    pub fn DrawLines5(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        qtc.QPainter_DrawLines5(@ptrCast(self), @ptrCast(pointPairs), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: QtC.QPainter, pointPairs: []QtC.QPoint ```
    pub fn DrawLines6(self: ?*anyopaque, pointPairs: []QtC.QPoint) void {
        const pointPairs_list = qtc.struct_libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines6(@ptrCast(self), pointPairs_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF ```
    pub fn DrawRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainter_DrawRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: QtC.QPainter, x1: i32, y1: i32, w: i32, h: i32 ```
    pub fn DrawRect2(self: ?*anyopaque, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRect ```
    pub fn DrawRectWithRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainter_DrawRectWithRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QPainter, rects: QtC.QRectF, rectCount: i32 ```
    pub fn DrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPainter_DrawRects(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QPainter, rectangles: []QtC.QRectF ```
    pub fn DrawRectsWithRectangles(self: ?*anyopaque, rectangles: []QtC.QRectF) void {
        const rectangles_list = qtc.struct_libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRectsWithRectangles(@ptrCast(self), rectangles_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QPainter, rects: QtC.QRect, rectCount: i32 ```
    pub fn DrawRects2(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPainter_DrawRects2(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: QtC.QPainter, rectangles: []QtC.QRect ```
    pub fn DrawRects3(self: ?*anyopaque, rectangles: []QtC.QRect) void {
        const rectangles_list = qtc.struct_libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects3(@ptrCast(self), rectangles_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF ```
    pub fn DrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPainter_DrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect ```
    pub fn DrawEllipseWithQRect(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPainter_DrawEllipseWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn DrawEllipse2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QPainter, center: QtC.QPointF, rx: f64, ry: f64 ```
    pub fn DrawEllipse3(self: ?*anyopaque, center: ?*anyopaque, rx: f64, ry: f64) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self), @ptrCast(center), @floatCast(rx), @floatCast(ry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: QtC.QPainter, center: QtC.QPoint, rx: i32, ry: i32 ```
    pub fn DrawEllipse4(self: ?*anyopaque, center: ?*anyopaque, rx: i32, ry: i32) void {
        qtc.QPainter_DrawEllipse4(@ptrCast(self), @ptrCast(center), @intCast(rx), @intCast(ry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPolyline(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolyline(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPolyline2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolyline2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawPolygon2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawConvexPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawConvexPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPainter_DrawConvexPolygon2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, a: i32, alen: i32 ```
    pub fn DrawArc(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, a: i32, alen: i32 ```
    pub fn DrawArc2(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc2(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawArc3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, a: i32, alen: i32 ```
    pub fn DrawPie(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawPie2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, a: i32, alen: i32 ```
    pub fn DrawPie3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie3(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, a: i32, alen: i32 ```
    pub fn DrawChord(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawChord2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, a: i32, alen: i32 ```
    pub fn DrawChord3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord3(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRect, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect3(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, pm: QtC.QPixmap ```
    pub fn DrawTiledPixmap(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self), @ptrCast(rect), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QPixmap ```
    pub fn DrawTiledPixmap2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, param2: QtC.QPixmap ```
    pub fn DrawTiledPixmap3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, picture: QtC.QPicture ```
    pub fn DrawPicture(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, picture: QtC.QPicture ```
    pub fn DrawPicture2(self: ?*anyopaque, x: i32, y: i32, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture2(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(picture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, picture: QtC.QPicture ```
    pub fn DrawPicture3(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        qtc.QPainter_DrawPicture3(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, targetRect: QtC.QRectF, pixmap: QtC.QPixmap, sourceRect: QtC.QRectF ```
    pub fn DrawPixmap(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, targetRect: QtC.QRect, pixmap: QtC.QPixmap, sourceRect: QtC.QRect ```
    pub fn DrawPixmap2(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, pm: QtC.QPixmap, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawPixmap3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawPixmap3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(pm), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, pm: QtC.QPixmap, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawPixmap4(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawPixmap4(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(pm), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, pm: QtC.QPixmap, sr: QtC.QRectF ```
    pub fn DrawPixmap5(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap5(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, pm: QtC.QPixmap, sr: QtC.QRect ```
    pub fn DrawPixmap6(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap6(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, pm: QtC.QPixmap ```
    pub fn DrawPixmap7(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap7(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, pm: QtC.QPixmap ```
    pub fn DrawPixmap8(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap8(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, pm: QtC.QPixmap ```
    pub fn DrawPixmap9(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, pm: QtC.QPixmap ```
    pub fn DrawPixmap10(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap10(@ptrCast(self), @ptrCast(r), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, pm: QtC.QPixmap ```
    pub fn DrawPixmap11(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque) void {
        qtc.QPainter_DrawPixmap11(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ``` self: QtC.QPainter, fragments: QtC.QPainter__PixmapFragment, fragmentCount: i32, pixmap: QtC.QPixmap ```
    pub fn DrawPixmapFragments(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque) void {
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self), @ptrCast(fragments), @intCast(fragmentCount), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, targetRect: QtC.QRectF, image: QtC.QImage, sourceRect: QtC.QRectF ```
    pub fn DrawImage(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawImage(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, targetRect: QtC.QRect, image: QtC.QImage, sourceRect: QtC.QRect ```
    pub fn DrawImage2(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QPainter_DrawImage2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, image: QtC.QImage, sr: QtC.QRectF ```
    pub fn DrawImage3(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawImage3(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, image: QtC.QImage, sr: QtC.QRect ```
    pub fn DrawImage4(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPainter_DrawImage4(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, image: QtC.QImage ```
    pub fn DrawImage5(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage5(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, image: QtC.QImage ```
    pub fn DrawImage6(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage6(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, image: QtC.QImage ```
    pub fn DrawImage7(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage7(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, image: QtC.QImage ```
    pub fn DrawImage8(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage8(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, image: QtC.QImage ```
    pub fn DrawImage9(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque) void {
        qtc.QPainter_DrawImage9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QPainter, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
    ///
    /// ``` self: QtC.QPainter, position: QtC.QPointF, glyphRun: QtC.QGlyphRun ```
    pub fn DrawGlyphRun(self: ?*anyopaque, position: ?*anyopaque, glyphRun: ?*anyopaque) void {
        qtc.QPainter_DrawGlyphRun(@ptrCast(self), @ptrCast(position), @ptrCast(glyphRun));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: QtC.QPainter, topLeftPosition: QtC.QPointF, staticText: QtC.QStaticText ```
    pub fn DrawStaticText(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: QtC.QPainter, topLeftPosition: QtC.QPoint, staticText: QtC.QStaticText ```
    pub fn DrawStaticText2(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText2(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: QtC.QPainter, left: i32, top: i32, staticText: QtC.QStaticText ```
    pub fn DrawStaticText3(self: ?*anyopaque, left: i32, top: i32, staticText: ?*anyopaque) void {
        qtc.QPainter_DrawStaticText3(@ptrCast(self), @intCast(left), @intCast(top), @ptrCast(staticText));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, s: []const u8 ```
    pub fn DrawText(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText(@ptrCast(self), @ptrCast(p), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, s: []const u8 ```
    pub fn DrawText2(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText2(@ptrCast(self), @ptrCast(p), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, s: []const u8 ```
    pub fn DrawText3(self: ?*anyopaque, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText3(@ptrCast(self), @intCast(x), @intCast(y), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, str: []const u8, tf: i32, justificationPadding: i32 ```
    pub fn DrawText4(self: ?*anyopaque, p: ?*anyopaque, str: []const u8, tf: i32, justificationPadding: i32) void {
        const str_str = qtc.struct_libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QPainter_DrawText4(@ptrCast(self), @ptrCast(p), str_str, @intCast(tf), @intCast(justificationPadding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, flags: i32, text: []const u8 ```
    pub fn DrawText5(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText5(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, flags: i32, text: []const u8 ```
    pub fn DrawText6(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText6(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8 ```
    pub fn DrawText7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, text: []const u8 ```
    pub fn DrawText8(self: ?*anyopaque, r: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText8(@ptrCast(self), @ptrCast(r), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, flags: i32, text: []const u8 ```
    pub fn BoundingRect(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) QtC.QRectF {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect(@ptrCast(self), @ptrCast(rect), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRect, flags: i32, text: []const u8 ```
    pub fn BoundingRect2(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect2(@ptrCast(self), @ptrCast(rect), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8 ```
    pub fn BoundingRect3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, text: []const u8 ```
    pub fn BoundingRect4(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8) QtC.QRectF {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect4(@ptrCast(self), @ptrCast(rect), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, ti: QtC.QTextItem ```
    pub fn DrawTextItem(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, ti: QtC.QTextItem ```
    pub fn DrawTextItem2(self: ?*anyopaque, x: i32, y: i32, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem2(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(ti));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, ti: QtC.QTextItem ```
    pub fn DrawTextItem3(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        qtc.QPainter_DrawTextItem3(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRectF, param2: QtC.QBrush ```
    pub fn FillRect(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_FillRect(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QBrush ```
    pub fn FillRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        qtc.QPainter_FillRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, param2: QtC.QBrush ```
    pub fn FillRect3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPainter_FillRect3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRectF, color: QtC.QColor ```
    pub fn FillRect4(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_FillRect4(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, color: QtC.QColor ```
    pub fn FillRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, color: ?*anyopaque) void {
        qtc.QPainter_FillRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, color: QtC.QColor ```
    pub fn FillRect6(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPainter_FillRect6(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, c: i64) void {
        qtc.QPainter_FillRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect8(self: ?*anyopaque, r: ?*anyopaque, c: i64) void {
        qtc.QPainter_FillRect8(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect9(self: ?*anyopaque, r: ?*anyopaque, c: i64) void {
        qtc.QPainter_FillRect9(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect10(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, style: i64) void {
        qtc.QPainter_FillRect10(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect11(self: ?*anyopaque, r: ?*anyopaque, style: i64) void {
        qtc.QPainter_FillRect11(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect12(self: ?*anyopaque, r: ?*anyopaque, style: i64) void {
        qtc.QPainter_FillRect12(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, preset: qbrush_enums.Preset ```
    pub fn FillRect13(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, preset: i64) void {
        qtc.QPainter_FillRect13(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(preset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, preset: qbrush_enums.Preset ```
    pub fn FillRect14(self: ?*anyopaque, r: ?*anyopaque, preset: i64) void {
        qtc.QPainter_FillRect14(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, preset: qbrush_enums.Preset ```
    pub fn FillRect15(self: ?*anyopaque, r: ?*anyopaque, preset: i64) void {
        qtc.QPainter_FillRect15(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRectF ```
    pub fn EraseRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_EraseRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn EraseRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect ```
    pub fn EraseRectWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPainter_EraseRectWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ``` self: QtC.QPainter, hint: qpainter_enums.RenderHint ```
    pub fn SetRenderHint(self: ?*anyopaque, hint: i64) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ``` self: QtC.QPainter, hints: i32 ```
    pub fn SetRenderHints(self: ?*anyopaque, hints: i64) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self), @intCast(hints));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#renderHints)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn RenderHints(self: ?*anyopaque) i64 {
        return qtc.QPainter_RenderHints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
    ///
    /// ``` self: QtC.QPainter, hint: qpainter_enums.RenderHint ```
    pub fn TestRenderHint(self: ?*anyopaque, hint: i64) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPainter_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn BeginNativePainting(self: ?*anyopaque) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ``` self: QtC.QPainter ```
    pub fn EndNativePainting(self: ?*anyopaque) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRectF, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect22(self: ?*anyopaque, param1: ?*anyopaque, op: i64) void {
        qtc.QPainter_SetClipRect22(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect23(self: ?*anyopaque, param1: ?*anyopaque, op: i64) void {
        qtc.QPainter_SetClipRect23(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, op: i64) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRegion, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRegion2(self: ?*anyopaque, param1: ?*anyopaque, op: i64) void {
        qtc.QPainter_SetClipRegion2(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ``` self: QtC.QPainter, path: QtC.QPainterPath, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipPath2(self: ?*anyopaque, path: ?*anyopaque, op: i64) void {
        qtc.QPainter_SetClipPath2(@ptrCast(self), @ptrCast(path), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ``` self: QtC.QPainter, transform: QtC.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, transform: ?*anyopaque, combine: bool) void {
        qtc.QPainter_SetTransform2(@ptrCast(self), @ptrCast(transform), combine);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ``` self: QtC.QPainter, matrix: QtC.QTransform, combine: bool ```
    pub fn SetWorldTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QPainter_SetWorldTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPointF, pointCount: i32, fillRule: qnamespace_enums.FillRule ```
    pub fn DrawPolygon32(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i64) void {
        qtc.QPainter_DrawPolygon32(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(fillRule));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: QtC.QPainter, points: QtC.QPoint, pointCount: i32, fillRule: qnamespace_enums.FillRule ```
    pub fn DrawPolygon33(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i64) void {
        qtc.QPainter_DrawPolygon33(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(fillRule));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect4(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i64) void {
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i64) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRect, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect42(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i64) void {
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, pm: QtC.QPixmap, offset: QtC.QPointF ```
    pub fn DrawTiledPixmap32(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self), @ptrCast(rect), @ptrCast(pm), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QPixmap, sx: i32 ```
    pub fn DrawTiledPixmap6(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32) void {
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5), @intCast(sx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, param5: QtC.QPixmap, sx: i32, sy: i32 ```
    pub fn DrawTiledPixmap7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32, sy: i32) void {
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5), @intCast(sx), @intCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPainter, param1: QtC.QRect, param2: QtC.QPixmap, param3: QtC.QPoint ```
    pub fn DrawTiledPixmap33(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque) void {
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self), @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ``` self: QtC.QPainter, fragments: QtC.QPainter__PixmapFragment, fragmentCount: i32, pixmap: QtC.QPixmap, hints: i32 ```
    pub fn DrawPixmapFragments4(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque, hints: i64) void {
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self), @ptrCast(fragments), @intCast(fragmentCount), @ptrCast(pixmap), @intCast(hints));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, targetRect: QtC.QRectF, image: QtC.QImage, sourceRect: QtC.QRectF, flags: i32 ```
    pub fn DrawImage42(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i64) void {
        qtc.QPainter_DrawImage42(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, targetRect: QtC.QRect, image: QtC.QImage, sourceRect: QtC.QRect, flags: i32 ```
    pub fn DrawImage43(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i64) void {
        qtc.QPainter_DrawImage43(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPointF, image: QtC.QImage, sr: QtC.QRectF, flags: i32 ```
    pub fn DrawImage44(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i64) void {
        qtc.QPainter_DrawImage44(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, p: QtC.QPoint, image: QtC.QImage, sr: QtC.QRect, flags: i32 ```
    pub fn DrawImage45(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i64) void {
        qtc.QPainter_DrawImage45(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, image: QtC.QImage, sx: i32 ```
    pub fn DrawImage46(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32) void {
        qtc.QPainter_DrawImage46(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32 ```
    pub fn DrawImage52(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32) void {
        qtc.QPainter_DrawImage52(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32, sw: i32 ```
    pub fn DrawImage62(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32) void {
        qtc.QPainter_DrawImage62(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawImage72(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        qtc.QPainter_DrawImage72(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, image: QtC.QImage, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32 ```
    pub fn DrawImage82(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32, flags: i64) void {
        qtc.QPainter_DrawImage82(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, flags: i32, text: []const u8, br: QtC.QRectF ```
    pub fn DrawText42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText42(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @ptrCast(br));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRect, flags: i32, text: []const u8, br: QtC.QRect ```
    pub fn DrawText43(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText43(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @ptrCast(br));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: QtC.QRect ```
    pub fn DrawText72(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText72(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str, @ptrCast(br));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: QtC.QPainter, r: QtC.QRectF, text: []const u8, o: QtC.QTextOption ```
    pub fn DrawText32(self: ?*anyopaque, r: ?*anyopaque, text: []const u8, o: ?*anyopaque) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText32(@ptrCast(self), @ptrCast(r), text_str, @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: QtC.QPainter, rect: QtC.QRectF, text: []const u8, o: QtC.QTextOption ```
    pub fn BoundingRect32(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8, o: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QPainter_BoundingRect32(@ptrCast(self), @ptrCast(rect), text_str, @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ``` self: QtC.QPainter, hint: qpainter_enums.RenderHint, on: bool ```
    pub fn SetRenderHint2(self: ?*anyopaque, hint: i64, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self), @intCast(hint), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ``` self: QtC.QPainter, hints: i32, on: bool ```
    pub fn SetRenderHints2(self: ?*anyopaque, hints: i64, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self), @intCast(hints), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#dtor.QPainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPainter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainter-pixmapfragment.html
pub const qpainter__pixmapfragment = struct {
    /// New constructs a new QPainter::PixmapFragment object.
    ///
    ///
    pub fn New() QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_new();
    }

    /// New2 constructs a new QPainter::PixmapFragment object.
    ///
    /// ``` param1: QtC.QPainter__PixmapFragment ```
    pub fn New2(param1: ?*anyopaque) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: QtC.QPointF, sourceRect: QtC.QRectF ```
    pub fn Create(pos: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create(@ptrCast(pos), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: QtC.QPointF, sourceRect: QtC.QRectF, scaleX: f64 ```
    pub fn Create3(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create3(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: QtC.QPointF, sourceRect: QtC.QRectF, scaleX: f64, scaleY: f64 ```
    pub fn Create4(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create4(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX), @floatCast(scaleY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: QtC.QPointF, sourceRect: QtC.QRectF, scaleX: f64, scaleY: f64, rotation: f64 ```
    pub fn Create5(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64, rotation: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create5(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX), @floatCast(scaleY), @floatCast(rotation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: QtC.QPointF, sourceRect: QtC.QRectF, scaleX: f64, scaleY: f64, rotation: f64, opacity: f64 ```
    pub fn Create6(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64, rotation: f64, opacity: f64) QtC.QPainter__PixmapFragment {
        return qtc.QPainter__PixmapFragment_Create6(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX), @floatCast(scaleY), @floatCast(rotation), @floatCast(opacity));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPainter__PixmapFragment ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainter__PixmapFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainter.html#types
pub const enums = struct {
    pub const RenderHint = enum {
        pub const Antialiasing: i32 = 1;
        pub const TextAntialiasing: i32 = 2;
        pub const SmoothPixmapTransform: i32 = 4;
        pub const VerticalSubpixelPositioning: i32 = 8;
        pub const LosslessImageRendering: i32 = 64;
        pub const NonCosmeticBrushPatterns: i32 = 128;
    };

    pub const PixmapFragmentHint = enum {
        pub const OpaqueHint: i32 = 1;
    };

    pub const CompositionMode = enum {
        pub const CompositionMode_SourceOver: i32 = 0;
        pub const CompositionMode_DestinationOver: i32 = 1;
        pub const CompositionMode_Clear: i32 = 2;
        pub const CompositionMode_Source: i32 = 3;
        pub const CompositionMode_Destination: i32 = 4;
        pub const CompositionMode_SourceIn: i32 = 5;
        pub const CompositionMode_DestinationIn: i32 = 6;
        pub const CompositionMode_SourceOut: i32 = 7;
        pub const CompositionMode_DestinationOut: i32 = 8;
        pub const CompositionMode_SourceAtop: i32 = 9;
        pub const CompositionMode_DestinationAtop: i32 = 10;
        pub const CompositionMode_Xor: i32 = 11;
        pub const CompositionMode_Plus: i32 = 12;
        pub const CompositionMode_Multiply: i32 = 13;
        pub const CompositionMode_Screen: i32 = 14;
        pub const CompositionMode_Overlay: i32 = 15;
        pub const CompositionMode_Darken: i32 = 16;
        pub const CompositionMode_Lighten: i32 = 17;
        pub const CompositionMode_ColorDodge: i32 = 18;
        pub const CompositionMode_ColorBurn: i32 = 19;
        pub const CompositionMode_HardLight: i32 = 20;
        pub const CompositionMode_SoftLight: i32 = 21;
        pub const CompositionMode_Difference: i32 = 22;
        pub const CompositionMode_Exclusion: i32 = 23;
        pub const RasterOp_SourceOrDestination: i32 = 24;
        pub const RasterOp_SourceAndDestination: i32 = 25;
        pub const RasterOp_SourceXorDestination: i32 = 26;
        pub const RasterOp_NotSourceAndNotDestination: i32 = 27;
        pub const RasterOp_NotSourceOrNotDestination: i32 = 28;
        pub const RasterOp_NotSourceXorDestination: i32 = 29;
        pub const RasterOp_NotSource: i32 = 30;
        pub const RasterOp_NotSourceAndDestination: i32 = 31;
        pub const RasterOp_SourceAndNotDestination: i32 = 32;
        pub const RasterOp_NotSourceOrDestination: i32 = 33;
        pub const RasterOp_SourceOrNotDestination: i32 = 34;
        pub const RasterOp_ClearDestination: i32 = 35;
        pub const RasterOp_SetDestination: i32 = 36;
        pub const RasterOp_NotDestination: i32 = 37;
    };
};
