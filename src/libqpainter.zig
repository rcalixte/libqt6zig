const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGlyphRun = @import("libqt6").QGlyphRun;
const QImage = @import("libqt6").QImage;
const QLine = @import("libqt6").QLine;
const QLineF = @import("libqt6").QLineF;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainterPath = @import("libqt6").QPainterPath;
const QPen = @import("libqt6").QPen;
const QPicture = @import("libqt6").QPicture;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QStaticText = @import("libqt6").QStaticText;
const QTextItem = @import("libqt6").QTextItem;
const QTextOption = @import("libqt6").QTextOption;
const QTransform = @import("libqt6").QTransform;
const qbrush_enums = @import("libqbrush.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpainter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html)
pub const QPainter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPainter,

    pub const _is_QPainter = {};

    /// New constructs a new QPainter object.
    ///
    pub fn New() QPainter {
        return .{ .ptr = qtc.QPainter_new() };
    }

    /// New2 constructs a new QPainter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPaintDevice `
    ///
    pub fn New2(param1: anytype) QPainter {
        comptime _ = @TypeOf(param1)._is_QPaintDevice;
        return .{ .ptr = qtc.QPainter_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Device(self: QPainter) QPaintDevice {
        return .{ .ptr = qtc.QPainter_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QPaintDevice `
    ///
    pub fn Begin(self: QPainter, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QPaintDevice;
        return qtc.QPainter_Begin(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn End(self: QPainter) bool {
        return qtc.QPainter_End(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn IsActive(self: QPainter) bool {
        return qtc.QPainter_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` mode: qpainter_enums.CompositionMode `
    ///
    pub fn SetCompositionMode(self: QPainter, mode: i32) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ## Returns:
    ///
    /// ` qpainter_enums.CompositionMode `
    ///
    pub fn CompositionMode(self: QPainter) i32 {
        return qtc.QPainter_CompositionMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Font(self: QPainter) QFont {
        return .{ .ptr = qtc.QPainter_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` f: QFont `
    ///
    pub fn SetFont(self: QPainter, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QPainter_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn FontMetrics(self: QPainter) QFontMetrics {
        return .{ .ptr = qtc.QPainter_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn FontInfo(self: QPainter) QFontInfo {
        return .{ .ptr = qtc.QPainter_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPen(self: QPainter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_SetPen(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen2(self: QPainter, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPainter_SetPen2(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` style: qnamespace_enums.PenStyle `
    ///
    pub fn SetPen3(self: QPainter, style: i32) void {
        qtc.QPainter_SetPen3(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Pen(self: QPainter) QPen {
        return .{ .ptr = qtc.QPainter_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QPainter, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPainter_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn SetBrush2(self: QPainter, style: i32) void {
        qtc.QPainter_SetBrush2(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Brush(self: QPainter) QBrush {
        return .{ .ptr = qtc.QPainter_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` mode: qnamespace_enums.BGMode `
    ///
    pub fn SetBackgroundMode(self: QPainter, mode: i32) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.BGMode `
    ///
    pub fn BackgroundMode(self: QPainter) i32 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn BrushOrigin(self: QPainter) QPoint {
        return .{ .ptr = qtc.QPainter_BrushOrigin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SetBrushOrigin(self: QPainter, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` brushOrigin: QPoint `
    ///
    pub fn SetBrushOrigin2(self: QPainter, brushOrigin: anytype) void {
        comptime _ = @TypeOf(brushOrigin)._is_QPoint;
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self.ptr), @ptrCast(brushOrigin.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` brushOrigin: QPointF `
    ///
    pub fn SetBrushOrigin3(self: QPainter, brushOrigin: anytype) void {
        comptime _ = @TypeOf(brushOrigin)._is_QPointF;
        qtc.QPainter_SetBrushOrigin3(@ptrCast(self.ptr), @ptrCast(brushOrigin.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` bg: QBrush `
    ///
    pub fn SetBackground(self: QPainter, bg: anytype) void {
        comptime _ = @TypeOf(bg)._is_QBrush;
        qtc.QPainter_SetBackground(@ptrCast(self.ptr), @ptrCast(bg.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Background(self: QPainter) QBrush {
        return .{ .ptr = qtc.QPainter_Background(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Opacity(self: QPainter) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QPainter, opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn ClipRegion(self: QPainter) QRegion {
        return .{ .ptr = qtc.QPainter_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn ClipPath(self: QPainter) QPainterPath {
        return .{ .ptr = qtc.QPainter_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    pub fn SetClipRect(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    pub fn SetClipRect2(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetClipRect3(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRegion `
    ///
    pub fn SetClipRegion(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn SetClipPath(self: QPainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetClipping(self: QPainter, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn HasClipping(self: QPainter) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn ClipBoundingRect(self: QPainter) QRectF {
        return .{ .ptr = qtc.QPainter_ClipBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Save(self: QPainter) void {
        qtc.QPainter_Save(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Restore(self: QPainter) void {
        qtc.QPainter_Restore(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` transform: QTransform `
    ///
    pub fn SetTransform(self: QPainter, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QPainter_SetTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Transform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_Transform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn DeviceTransform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_DeviceTransform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn ResetTransform(self: QPainter) void {
        qtc.QPainter_ResetTransform(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetWorldTransform(self: QPainter, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn WorldTransform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_WorldTransform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn CombinedTransform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_CombinedTransform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetWorldMatrixEnabled(self: QPainter, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn WorldMatrixEnabled(self: QPainter) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn Scale(self: QPainter, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#shear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn Shear(self: QPainter, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` a: f64 `
    ///
    pub fn Rotate(self: QPainter, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` offset: QPointF `
    ///
    pub fn Translate(self: QPainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_Translate(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Translate2(self: QPainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QPainter_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate3(self: QPainter, dx: f64, dy: f64) void {
        qtc.QPainter_Translate3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Window(self: QPainter) QRect {
        return .{ .ptr = qtc.QPainter_Window(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` window: QRect `
    ///
    pub fn SetWindow(self: QPainter, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QRect;
        qtc.QPainter_SetWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetWindow2(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn Viewport(self: QPainter) QRect {
        return .{ .ptr = qtc.QPainter_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` viewport: QRect `
    ///
    pub fn SetViewport(self: QPainter, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QRect;
        qtc.QPainter_SetViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetViewport2(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetViewTransformEnabled(self: QPainter, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn ViewTransformEnabled(self: QPainter) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#strokePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` pen: QPen `
    ///
    pub fn StrokePath(self: QPainter, path: anytype, pen: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPainter_StrokePath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` brush: QBrush `
    ///
    pub fn FillPath(self: QPainter, path: anytype, brush: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPainter_FillPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn DrawPath(self: QPainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_DrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pt: QPointF `
    ///
    pub fn DrawPoint(self: QPainter, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPointF;
        qtc.QPainter_DrawPoint(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    pub fn DrawPoint2(self: QPainter, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QPainter_DrawPoint2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn DrawPoint3(self: QPainter, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPoints(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPoints3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPoints3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` line: QLineF `
    ///
    pub fn DrawLine(self: QPainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLineF;
        qtc.QPainter_DrawLine(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` line: QLine `
    ///
    pub fn DrawLine2(self: QPainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLine;
        qtc.QPainter_DrawLine2(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn DrawLine3(self: QPainter, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine3(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn DrawLine4(self: QPainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        qtc.QPainter_DrawLine4(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p1: QPointF `
    ///
    /// ` p2: QPointF `
    ///
    pub fn DrawLine5(self: QPainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        qtc.QPainter_DrawLine5(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` lines: QLineF `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines(self: QPainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPainter_DrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` lines: []QLineF `
    ///
    pub fn DrawLines2(self: QPainter, lines: []QLineF) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines2(@ptrCast(self.ptr), lines_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pointPairs: QPointF `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines3(self: QPainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPointF;
        qtc.QPainter_DrawLines3(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pointPairs: []QPointF `
    ///
    pub fn DrawLines4(self: QPainter, pointPairs: []QPointF) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines4(@ptrCast(self.ptr), pointPairs_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` lines: QLine `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines5(self: QPainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPainter_DrawLines5(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` lines: []QLine `
    ///
    pub fn DrawLines6(self: QPainter, lines: []QLine) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines6(@ptrCast(self.ptr), lines_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pointPairs: QPoint `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines7(self: QPainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPoint;
        qtc.QPainter_DrawLines7(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pointPairs: []QPoint `
    ///
    pub fn DrawLines8(self: QPainter, pointPairs: []QPoint) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines8(@ptrCast(self.ptr), pointPairs_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawRect(self: QPainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn DrawRect2(self: QPainter, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRect `
    ///
    pub fn DrawRect3(self: QPainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rects: QRectF `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn DrawRects(self: QPainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPainter_DrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rectangles: []QRectF `
    ///
    pub fn DrawRects2(self: QPainter, rectangles: []QRectF) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects2(@ptrCast(self.ptr), rectangles_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rects: QRect `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn DrawRects3(self: QPainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPainter_DrawRects3(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rectangles: []QRect `
    ///
    pub fn DrawRects4(self: QPainter, rectangles: []QRect) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects4(@ptrCast(self.ptr), rectangles_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    pub fn DrawEllipse(self: QPainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_DrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    pub fn DrawEllipse2(self: QPainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_DrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn DrawEllipse3(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` center: QPointF `
    ///
    /// ` rx: f64 `
    ///
    /// ` ry: f64 `
    ///
    pub fn DrawEllipse4(self: QPainter, center: anytype, rx: f64, ry: f64) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QPainter_DrawEllipse4(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` center: QPoint `
    ///
    /// ` rx: i32 `
    ///
    /// ` ry: i32 `
    ///
    pub fn DrawEllipse5(self: QPainter, center: anytype, rx: i32, ry: i32) void {
        comptime _ = @TypeOf(center)._is_QPoint;
        qtc.QPainter_DrawEllipse5(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolyline(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolyline(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolyline3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolyline3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolygon(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolygon3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawConvexPolygon(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawConvexPolygon3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawConvexPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawArc(self: QPainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawArc(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawArc2(self: QPainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawArc2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawArc3(self: QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawPie(self: QPainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawPie(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawPie2(self: QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawPie3(self: QPainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawPie3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawChord(self: QPainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawChord(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawChord2(self: QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawChord3(self: QPainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawChord3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn DrawRoundedRect(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn DrawRoundedRect2(self: QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn DrawRoundedRect3(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawTiledPixmap(self: QPainter, rect: anytype, pm: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` param5: QPixmap `
    ///
    pub fn DrawTiledPixmap2(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` param2: QPixmap `
    ///
    pub fn DrawTiledPixmap3(self: QPainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` picture: QPicture `
    ///
    pub fn DrawPicture(self: QPainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` picture: QPicture `
    ///
    pub fn DrawPicture2(self: QPainter, x: i32, y: i32, picture: anytype) void {
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(picture.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` picture: QPicture `
    ///
    pub fn DrawPicture3(self: QPainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` targetRect: QRectF `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn DrawPixmap(self: QPainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawPixmap(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` sourceRect: QRect `
    ///
    pub fn DrawPixmap2(self: QPainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawPixmap2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    /// ` sw: i32 `
    ///
    /// ` sh: i32 `
    ///
    pub fn DrawPixmap3(self: QPainter, x: i32, y: i32, w: i32, h: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    /// ` sw: i32 `
    ///
    /// ` sh: i32 `
    ///
    pub fn DrawPixmap4(self: QPainter, x: i32, y: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sr: QRectF `
    ///
    pub fn DrawPixmap5(self: QPainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawPixmap5(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sr: QRect `
    ///
    pub fn DrawPixmap6(self: QPainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawPixmap6(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap7(self: QPainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap8(self: QPainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap9(self: QPainter, x: i32, y: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap10(self: QPainter, r: anytype, pm: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap10(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap11(self: QPainter, x: i32, y: i32, w: i32, h: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap11(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` fragments: QPainter__PixmapFragment `
    ///
    /// ` fragmentCount: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn DrawPixmapFragments(self: QPainter, fragments: anytype, fragmentCount: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` targetRect: QRectF `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn DrawImage(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRect `
    ///
    pub fn DrawImage2(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRectF `
    ///
    pub fn DrawImage3(self: QPainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRect `
    ///
    pub fn DrawImage4(self: QPainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage4(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage5(self: QPainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage5(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage6(self: QPainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage6(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage7(self: QPainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage8(self: QPainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage9(self: QPainter, x: i32, y: i32, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QPainter, direction: i32) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QPainter) i32 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` position: QPointF `
    ///
    /// ` glyphRun: QGlyphRun `
    ///
    pub fn DrawGlyphRun(self: QPainter, position: anytype, glyphRun: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(glyphRun)._is_QGlyphRun;
        qtc.QPainter_DrawGlyphRun(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(glyphRun.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` topLeftPosition: QPointF `
    ///
    /// ` staticText: QStaticText `
    ///
    pub fn DrawStaticText(self: QPainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPointF;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` topLeftPosition: QPoint `
    ///
    /// ` staticText: QStaticText `
    ///
    pub fn DrawStaticText2(self: QPainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPoint;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText2(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` staticText: QStaticText `
    ///
    pub fn DrawStaticText3(self: QPainter, left: i32, top: i32, staticText: anytype) void {
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText3(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @ptrCast(staticText.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` s: []const u8 `
    ///
    pub fn DrawText(self: QPainter, p: anytype, s: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText(@ptrCast(self.ptr), @ptrCast(p.ptr), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` s: []const u8 `
    ///
    pub fn DrawText2(self: QPainter, p: anytype, s: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText2(@ptrCast(self.ptr), @ptrCast(p.ptr), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` s: []const u8 `
    ///
    pub fn DrawText3(self: QPainter, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tf: i32 `
    ///
    /// ` justificationPadding: i32 `
    ///
    pub fn DrawText4(self: QPainter, p: anytype, str: []const u8, tf: i32, justificationPadding: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QPainter_DrawText4(@ptrCast(self.ptr), @ptrCast(p.ptr), str_str, @bitCast(tf), @bitCast(justificationPadding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText5(self: QPainter, r: anytype, flags: i32, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText5(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText6(self: QPainter, r: anytype, flags: i32, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText6(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText7(self: QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText8(self: QPainter, r: anytype, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText8(@ptrCast(self.ptr), @ptrCast(r.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect(self: QPainter, rect: anytype, flags: i32, text: []const u8) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect2(self: QPainter, rect: anytype, flags: i32, text: []const u8) QRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect3(self: QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect4(self: QPainter, rect: anytype, text: []const u8) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` ti: QTextItem `
    ///
    pub fn DrawTextItem(self: QPainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` ti: QTextItem `
    ///
    pub fn DrawTextItem2(self: QPainter, x: i32, y: i32, ti: anytype) void {
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(ti.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` ti: QTextItem `
    ///
    pub fn DrawTextItem3(self: QPainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    /// ` param2: QBrush `
    ///
    pub fn FillRect(self: QPainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` param5: QBrush `
    ///
    pub fn FillRect2(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QBrush;
        qtc.QPainter_FillRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` param2: QBrush `
    ///
    pub fn FillRect3(self: QPainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    /// ` color: QColor `
    ///
    pub fn FillRect4(self: QPainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect4(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` color: QColor `
    ///
    pub fn FillRect5(self: QPainter, x: i32, y: i32, w: i32, h: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` color: QColor `
    ///
    pub fn FillRect6(self: QPainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect6(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` c: qnamespace_enums.GlobalColor `
    ///
    pub fn FillRect7(self: QPainter, x: i32, y: i32, w: i32, h: i32, c: i32) void {
        qtc.QPainter_FillRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` c: qnamespace_enums.GlobalColor `
    ///
    pub fn FillRect8(self: QPainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect8(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` c: qnamespace_enums.GlobalColor `
    ///
    pub fn FillRect9(self: QPainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect9(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn FillRect10(self: QPainter, x: i32, y: i32, w: i32, h: i32, style: i32) void {
        qtc.QPainter_FillRect10(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn FillRect11(self: QPainter, r: anytype, style: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect11(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn FillRect12(self: QPainter, r: anytype, style: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect12(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` preset: qbrush_enums.Preset `
    ///
    pub fn FillRect13(self: QPainter, x: i32, y: i32, w: i32, h: i32, preset: i32) void {
        qtc.QPainter_FillRect13(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(preset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` preset: qbrush_enums.Preset `
    ///
    pub fn FillRect14(self: QPainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect14(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` preset: qbrush_enums.Preset `
    ///
    pub fn FillRect15(self: QPainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect15(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    pub fn EraseRect(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_EraseRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn EraseRect2(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    pub fn EraseRect3(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_EraseRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHint(self: QPainter, hint: i32) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHints(self: QPainter, hints: i32) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#renderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpainter_enums.RenderHint `
    ///
    pub fn RenderHints(self: QPainter) i32 {
        return qtc.QPainter_RenderHints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn TestRenderHint(self: QPainter, hint: i32) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn PaintEngine(self: QPainter) QPaintEngine {
        return .{ .ptr = qtc.QPainter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn BeginNativePainting(self: QPainter) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn EndNativePainting(self: QPainter) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRect22(self: QPainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect22(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRect23(self: QPainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect23(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRect5(self: QPainter, x: i32, y: i32, w: i32, h: i32, op: i32) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRegion `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRegion2(self: QPainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipPath2(self: QPainter, path: anytype, op: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath2(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` transform: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QPainter, transform: anytype, combine: bool) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QPainter_SetTransform2(@ptrCast(self.ptr), @ptrCast(transform.ptr), combine);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetWorldTransform2(self: QPainter, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn DrawPolygon32(self: QPainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon32(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn DrawPolygon33(self: QPainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon33(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn DrawRoundedRect4(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn DrawRoundedRect7(self: QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn DrawRoundedRect42(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` offset: QPointF `
    ///
    pub fn DrawTiledPixmap32(self: QPainter, rect: anytype, pm: anytype, offset: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` param5: QPixmap `
    ///
    /// ` sx: i32 `
    ///
    pub fn DrawTiledPixmap6(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` param5: QPixmap `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    pub fn DrawTiledPixmap7(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` param2: QPixmap `
    ///
    /// ` param3: QPoint `
    ///
    pub fn DrawTiledPixmap33(self: QPainter, param1: anytype, param2: anytype, param3: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        comptime _ = @TypeOf(param3)._is_QPoint;
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` fragments: QPainter__PixmapFragment `
    ///
    /// ` fragmentCount: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` hints: flag of qpainter_enums.PixmapFragmentHint `
    ///
    pub fn DrawPixmapFragments4(self: QPainter, fragments: anytype, fragmentCount: i32, pixmap: anytype, hints: i32) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr), @bitCast(hints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` targetRect: QRectF `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage42(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage42(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage43(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage43(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRectF `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage44(self: QPainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage44(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRect `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage45(self: QPainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage45(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    /// ` sx: i32 `
    ///
    pub fn DrawImage46(self: QPainter, x: i32, y: i32, image: anytype, sx: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage46(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    pub fn DrawImage52(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage52(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    /// ` sw: i32 `
    ///
    pub fn DrawImage62(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage62(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    /// ` sw: i32 `
    ///
    /// ` sh: i32 `
    ///
    pub fn DrawImage72(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    /// ` sx: i32 `
    ///
    /// ` sy: i32 `
    ///
    /// ` sw: i32 `
    ///
    /// ` sh: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage82(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage82(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` br: QRectF `
    ///
    pub fn DrawText42(self: QPainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRectF;
        qtc.QPainter_DrawText42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` br: QRect `
    ///
    pub fn DrawText43(self: QPainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRect;
        qtc.QPainter_DrawText43(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` br: QRect `
    ///
    pub fn DrawText72(self: QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRect;
        qtc.QPainter_DrawText72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` o: QTextOption `
    ///
    pub fn DrawText32(self: QPainter, r: anytype, text: []const u8, o: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(o)._is_QTextOption;
        qtc.QPainter_DrawText32(@ptrCast(self.ptr), @ptrCast(r.ptr), text_str, @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` o: QTextOption `
    ///
    pub fn BoundingRect32(self: QPainter, rect: anytype, text: []const u8, o: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(o)._is_QTextOption;
        return .{ .ptr = qtc.QPainter_BoundingRect32(@ptrCast(self.ptr), @ptrCast(rect.ptr), text_str, @ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    /// ` on: bool `
    ///
    pub fn SetRenderHint2(self: QPainter, hint: i32, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    /// ` on: bool `
    ///
    pub fn SetRenderHints2(self: QPainter, hints: i32, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self.ptr), @bitCast(hints), on);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#dtor.QPainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainter `
    ///
    pub fn Delete(self: QPainter) void {
        qtc.QPainter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html)
pub const QPainter__PixmapFragment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPainter__PixmapFragment,

    pub const _is_QPainter__PixmapFragment = {};

    /// New constructs a new QPainter::PixmapFragment object.
    ///
    pub fn New() QPainter__PixmapFragment {
        return .{ .ptr = qtc.QPainter__PixmapFragment_new() };
    }

    /// New2 constructs a new QPainter::PixmapFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPainter__PixmapFragment `
    ///
    pub fn New2(param1: anytype) QPainter__PixmapFragment {
        comptime _ = @TypeOf(param1)._is_QPainter__PixmapFragment;
        return .{ .ptr = qtc.QPainter__PixmapFragment_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn X(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: QPainter__PixmapFragment, x: f64) void {
        qtc.QPainter__PixmapFragment_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn Y(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: QPainter__PixmapFragment, y: f64) void {
        qtc.QPainter__PixmapFragment_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceLeft-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn SourceLeft(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_SourceLeft(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceLeft-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` sourceLeft: f64 `
    ///
    pub fn SetSourceLeft(self: QPainter__PixmapFragment, sourceLeft: f64) void {
        qtc.QPainter__PixmapFragment_SetSourceLeft(@ptrCast(self.ptr), @bitCast(sourceLeft));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn SourceTop(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_SourceTop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` sourceTop: f64 `
    ///
    pub fn SetSourceTop(self: QPainter__PixmapFragment, sourceTop: f64) void {
        qtc.QPainter__PixmapFragment_SetSourceTop(@ptrCast(self.ptr), @bitCast(sourceTop));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn Width(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: QPainter__PixmapFragment, width: f64) void {
        qtc.QPainter__PixmapFragment_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn Height(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` height: f64 `
    ///
    pub fn SetHeight(self: QPainter__PixmapFragment, height: f64) void {
        qtc.QPainter__PixmapFragment_SetHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleX-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn ScaleX(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_ScaleX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleX-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` scaleX: f64 `
    ///
    pub fn SetScaleX(self: QPainter__PixmapFragment, scaleX: f64) void {
        qtc.QPainter__PixmapFragment_SetScaleX(@ptrCast(self.ptr), @bitCast(scaleX));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleY-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn ScaleY(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_ScaleY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleY-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` scaleY: f64 `
    ///
    pub fn SetScaleY(self: QPainter__PixmapFragment, scaleY: f64) void {
        qtc.QPainter__PixmapFragment_SetScaleY(@ptrCast(self.ptr), @bitCast(scaleY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#rotation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn Rotation(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#rotation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` rotation: f64 `
    ///
    pub fn SetRotation(self: QPainter__PixmapFragment, rotation: f64) void {
        qtc.QPainter__PixmapFragment_SetRotation(@ptrCast(self.ptr), @bitCast(rotation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#opacity-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn Opacity(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Opacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#opacity-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QPainter__PixmapFragment, opacity: f64) void {
        qtc.QPainter__PixmapFragment_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn Create(pos: anytype, sourceRect: anytype) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` scaleX: f64 `
    ///
    pub fn Create3(pos: anytype, sourceRect: anytype, scaleX: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create3(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(scaleX)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` scaleX: f64 `
    ///
    /// ` scaleY: f64 `
    ///
    pub fn Create4(pos: anytype, sourceRect: anytype, scaleX: f64, scaleY: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create4(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(scaleX), @bitCast(scaleY)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` scaleX: f64 `
    ///
    /// ` scaleY: f64 `
    ///
    /// ` rotation: f64 `
    ///
    pub fn Create5(pos: anytype, sourceRect: anytype, scaleX: f64, scaleY: f64, rotation: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create5(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(scaleX), @bitCast(scaleY), @bitCast(rotation)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` scaleX: f64 `
    ///
    /// ` scaleY: f64 `
    ///
    /// ` rotation: f64 `
    ///
    /// ` opacity: f64 `
    ///
    pub fn Create6(pos: anytype, sourceRect: anytype, scaleX: f64, scaleY: f64, rotation: f64, opacity: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create6(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(scaleX), @bitCast(scaleY), @bitCast(rotation), @bitCast(opacity)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn Delete(self: QPainter__PixmapFragment) void {
        qtc.QPainter__PixmapFragment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#public-types)
pub const enums = struct {
    pub const RenderHint = enum(i32) {
        pub const Antialiasing: i32 = 1;
        pub const TextAntialiasing: i32 = 2;
        pub const SmoothPixmapTransform: i32 = 4;
        pub const VerticalSubpixelPositioning: i32 = 8;
        pub const LosslessImageRendering: i32 = 64;
        pub const NonCosmeticBrushPatterns: i32 = 128;
    };

    pub const PixmapFragmentHint = enum(i32) {
        pub const OpaqueHint: i32 = 1;
    };

    pub const CompositionMode = enum(i32) {
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
