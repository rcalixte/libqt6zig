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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPainter object in C++ memory
    ///
    pub fn new() QPainter {
        return .{ .ptr = qtc.QPainter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPainter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPaintDevice `
    ///
    pub fn new2(param1: anytype) QPainter {
        comptime _ = @TypeOf(param1)._is_QPaintDevice;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQPaintDevice")) param1.asQPaintDevice() else param1;

        return .{ .ptr = qtc.QPainter_new2(@ptrCast(param1_.ptr)) };
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn device(self: QPainter) QPaintDevice {
        return .{ .ptr = qtc.QPainter_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QPaintDevice `
    ///
    pub fn begin(self: QPainter, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QPaintDevice;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQPaintDevice")) param1.asQPaintDevice() else param1;
        return qtc.QPainter_Begin(@ptrCast(self.ptr), @ptrCast(param1_.ptr));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn end(self: QPainter) bool {
        return qtc.QPainter_End(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn isActive(self: QPainter) bool {
        return qtc.QPainter_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompositionMode` instead
    ///
    pub const SetCompositionMode = setCompositionMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` mode: qpainter_enums.CompositionMode `
    ///
    pub fn setCompositionMode(self: QPainter, mode: i32) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `compositionMode` instead
    ///
    pub const CompositionMode = compositionMode;

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
    pub fn compositionMode(self: QPainter) i32 {
        return qtc.QPainter_CompositionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn font(self: QPainter) QFont {
        return .{ .ptr = qtc.QPainter_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` f: QFont `
    ///
    pub fn setFont(self: QPainter, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QPainter_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn fontMetrics(self: QPainter) QFontMetrics {
        return .{ .ptr = qtc.QPainter_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontInfo` instead
    ///
    pub const FontInfo = fontInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn fontInfo(self: QPainter) QFontInfo {
        return .{ .ptr = qtc.QPainter_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` color: QColor `
    ///
    pub fn setPen(self: QPainter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_SetPen(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setPen2` instead
    ///
    pub const SetPen2 = setPen2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen2(self: QPainter, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QPainter_SetPen2(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `setPen3` instead
    ///
    pub const SetPen3 = setPen3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` style: qnamespace_enums.PenStyle `
    ///
    pub fn setPen3(self: QPainter, style: i32) void {
        qtc.QPainter_SetPen3(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn pen(self: QPainter) QPen {
        return .{ .ptr = qtc.QPainter_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QPainter, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPainter_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `setBrush2` instead
    ///
    pub const SetBrush2 = setBrush2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn setBrush2(self: QPainter, style: i32) void {
        qtc.QPainter_SetBrush2(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn brush(self: QPainter) QBrush {
        return .{ .ptr = qtc.QPainter_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundMode` instead
    ///
    pub const SetBackgroundMode = setBackgroundMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` mode: qnamespace_enums.BGMode `
    ///
    pub fn setBackgroundMode(self: QPainter, mode: i32) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `backgroundMode` instead
    ///
    pub const BackgroundMode = backgroundMode;

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
    pub fn backgroundMode(self: QPainter) i32 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `brushOrigin` instead
    ///
    pub const BrushOrigin = brushOrigin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn brushOrigin(self: QPainter) QPoint {
        return .{ .ptr = qtc.QPainter_BrushOrigin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrushOrigin` instead
    ///
    pub const SetBrushOrigin = setBrushOrigin;

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
    pub fn setBrushOrigin(self: QPainter, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setBrushOrigin2` instead
    ///
    pub const SetBrushOrigin2 = setBrushOrigin2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _brushOrigin: QPoint `
    ///
    pub fn setBrushOrigin2(self: QPainter, _brushOrigin: anytype) void {
        comptime _ = @TypeOf(_brushOrigin)._is_QPoint;
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self.ptr), @ptrCast(_brushOrigin.ptr));
    }

    /// ### DEPRECATED: Use `setBrushOrigin3` instead
    ///
    pub const SetBrushOrigin3 = setBrushOrigin3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _brushOrigin: QPointF `
    ///
    pub fn setBrushOrigin3(self: QPainter, _brushOrigin: anytype) void {
        comptime _ = @TypeOf(_brushOrigin)._is_QPointF;
        qtc.QPainter_SetBrushOrigin3(@ptrCast(self.ptr), @ptrCast(_brushOrigin.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` bg: QBrush `
    ///
    pub fn setBackground(self: QPainter, bg: anytype) void {
        comptime _ = @TypeOf(bg)._is_QBrush;
        qtc.QPainter_SetBackground(@ptrCast(self.ptr), @ptrCast(bg.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn background(self: QPainter) QBrush {
        return .{ .ptr = qtc.QPainter_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn opacity(self: QPainter) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QPainter, _opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `clipRegion` instead
    ///
    pub const ClipRegion = clipRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn clipRegion(self: QPainter) QRegion {
        return .{ .ptr = qtc.QPainter_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn clipPath(self: QPainter) QPainterPath {
        return .{ .ptr = qtc.QPainter_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setClipRect` instead
    ///
    pub const SetClipRect = setClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    pub fn setClipRect(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect2` instead
    ///
    pub const SetClipRect2 = setClipRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    pub fn setClipRect2(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect3` instead
    ///
    pub const SetClipRect3 = setClipRect3;

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
    pub fn setClipRect3(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setClipRegion` instead
    ///
    pub const SetClipRegion = setClipRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRegion `
    ///
    pub fn setClipRegion(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setClipPath` instead
    ///
    pub const SetClipPath = setClipPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn setClipPath(self: QPainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `setClipping` instead
    ///
    pub const SetClipping = setClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` enable: bool `
    ///
    pub fn setClipping(self: QPainter, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasClipping` instead
    ///
    pub const HasClipping = hasClipping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn hasClipping(self: QPainter) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clipBoundingRect` instead
    ///
    pub const ClipBoundingRect = clipBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn clipBoundingRect(self: QPainter) QRectF {
        return .{ .ptr = qtc.QPainter_ClipBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn save(self: QPainter) void {
        qtc.QPainter_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `restore` instead
    ///
    pub const Restore = restore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn restore(self: QPainter) void {
        qtc.QPainter_Restore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _transform: QTransform `
    ///
    pub fn setTransform(self: QPainter, _transform: anytype) void {
        comptime _ = @TypeOf(_transform)._is_QTransform;
        qtc.QPainter_SetTransform(@ptrCast(self.ptr), @ptrCast(_transform.ptr));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn transform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_Transform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceTransform` instead
    ///
    pub const DeviceTransform = deviceTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn deviceTransform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_DeviceTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resetTransform` instead
    ///
    pub const ResetTransform = resetTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn resetTransform(self: QPainter) void {
        qtc.QPainter_ResetTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWorldTransform` instead
    ///
    pub const SetWorldTransform = setWorldTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn setWorldTransform(self: QPainter, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `worldTransform` instead
    ///
    pub const WorldTransform = worldTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn worldTransform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_WorldTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `combinedTransform` instead
    ///
    pub const CombinedTransform = combinedTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn combinedTransform(self: QPainter) QTransform {
        return .{ .ptr = qtc.QPainter_CombinedTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWorldMatrixEnabled` instead
    ///
    pub const SetWorldMatrixEnabled = setWorldMatrixEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn setWorldMatrixEnabled(self: QPainter, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `worldMatrixEnabled` instead
    ///
    pub const WorldMatrixEnabled = worldMatrixEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn worldMatrixEnabled(self: QPainter) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

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
    pub fn scale(self: QPainter, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `shear` instead
    ///
    pub const Shear = shear;

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
    pub fn shear(self: QPainter, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv));
    }

    /// ### DEPRECATED: Use `rotate` instead
    ///
    pub const Rotate = rotate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` a: f64 `
    ///
    pub fn rotate(self: QPainter, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` offset: QPointF `
    ///
    pub fn translate(self: QPainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_Translate(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn translate2(self: QPainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QPainter_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translate3` instead
    ///
    pub const Translate3 = translate3;

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
    pub fn translate3(self: QPainter, dx: f64, dy: f64) void {
        qtc.QPainter_Translate3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn window(self: QPainter) QRect {
        return .{ .ptr = qtc.QPainter_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _window: QRect `
    ///
    pub fn setWindow(self: QPainter, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QRect;
        qtc.QPainter_SetWindow(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `setWindow2` instead
    ///
    pub const SetWindow2 = setWindow2;

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
    pub fn setWindow2(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn viewport(self: QPainter) QRect {
        return .{ .ptr = qtc.QPainter_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _viewport: QRect `
    ///
    pub fn setViewport(self: QPainter, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QRect;
        qtc.QPainter_SetViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `setViewport2` instead
    ///
    pub const SetViewport2 = setViewport2;

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
    pub fn setViewport2(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setViewTransformEnabled` instead
    ///
    pub const SetViewTransformEnabled = setViewTransformEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` enable: bool `
    ///
    pub fn setViewTransformEnabled(self: QPainter, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `viewTransformEnabled` instead
    ///
    pub const ViewTransformEnabled = viewTransformEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn viewTransformEnabled(self: QPainter) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `strokePath` instead
    ///
    pub const StrokePath = strokePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#strokePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` _pen: QPen `
    ///
    pub fn strokePath(self: QPainter, path: anytype, _pen: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QPainter_StrokePath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `fillPath` instead
    ///
    pub const FillPath = fillPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn fillPath(self: QPainter, path: anytype, _brush: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPainter_FillPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `drawPath` instead
    ///
    pub const DrawPath = drawPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn drawPath(self: QPainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_DrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `drawPoint` instead
    ///
    pub const DrawPoint = drawPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pt: QPointF `
    ///
    pub fn drawPoint(self: QPainter, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPointF;
        qtc.QPainter_DrawPoint(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `drawPoint2` instead
    ///
    pub const DrawPoint2 = drawPoint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` p: QPoint `
    ///
    pub fn drawPoint2(self: QPainter, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QPainter_DrawPoint2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `drawPoint3` instead
    ///
    pub const DrawPoint3 = drawPoint3;

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
    pub fn drawPoint3(self: QPainter, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `drawPoints` instead
    ///
    pub const DrawPoints = drawPoints;

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
    pub fn drawPoints(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPoints3` instead
    ///
    pub const DrawPoints3 = drawPoints3;

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
    pub fn drawPoints3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPoints3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawLine` instead
    ///
    pub const DrawLine = drawLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` line: QLineF `
    ///
    pub fn drawLine(self: QPainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLineF;
        qtc.QPainter_DrawLine(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// ### DEPRECATED: Use `drawLine2` instead
    ///
    pub const DrawLine2 = drawLine2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` line: QLine `
    ///
    pub fn drawLine2(self: QPainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLine;
        qtc.QPainter_DrawLine2(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// ### DEPRECATED: Use `drawLine3` instead
    ///
    pub const DrawLine3 = drawLine3;

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
    pub fn drawLine3(self: QPainter, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine3(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `drawLine4` instead
    ///
    pub const DrawLine4 = drawLine4;

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
    pub fn drawLine4(self: QPainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        qtc.QPainter_DrawLine4(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### DEPRECATED: Use `drawLine5` instead
    ///
    pub const DrawLine5 = drawLine5;

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
    pub fn drawLine5(self: QPainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        qtc.QPainter_DrawLine5(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### DEPRECATED: Use `drawLines` instead
    ///
    pub const DrawLines = drawLines;

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
    pub fn drawLines(self: QPainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPainter_DrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines2` instead
    ///
    pub const DrawLines2 = drawLines2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` lines: []QLineF `
    ///
    pub fn drawLines2(self: QPainter, lines: []QLineF) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines2(@ptrCast(self.ptr), lines_list);
    }

    /// ### DEPRECATED: Use `drawLines3` instead
    ///
    pub const DrawLines3 = drawLines3;

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
    pub fn drawLines3(self: QPainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPointF;
        qtc.QPainter_DrawLines3(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines4` instead
    ///
    pub const DrawLines4 = drawLines4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pointPairs: []QPointF `
    ///
    pub fn drawLines4(self: QPainter, pointPairs: []QPointF) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines4(@ptrCast(self.ptr), pointPairs_list);
    }

    /// ### DEPRECATED: Use `drawLines5` instead
    ///
    pub const DrawLines5 = drawLines5;

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
    pub fn drawLines5(self: QPainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPainter_DrawLines5(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines6` instead
    ///
    pub const DrawLines6 = drawLines6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` lines: []QLine `
    ///
    pub fn drawLines6(self: QPainter, lines: []QLine) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines6(@ptrCast(self.ptr), lines_list);
    }

    /// ### DEPRECATED: Use `drawLines7` instead
    ///
    pub const DrawLines7 = drawLines7;

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
    pub fn drawLines7(self: QPainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPoint;
        qtc.QPainter_DrawLines7(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines8` instead
    ///
    pub const DrawLines8 = drawLines8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` pointPairs: []QPoint `
    ///
    pub fn drawLines8(self: QPainter, pointPairs: []QPoint) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines8(@ptrCast(self.ptr), pointPairs_list);
    }

    /// ### DEPRECATED: Use `drawRect` instead
    ///
    pub const DrawRect = drawRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn drawRect(self: QPainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `drawRect2` instead
    ///
    pub const DrawRect2 = drawRect2;

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
    pub fn drawRect2(self: QPainter, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `drawRect3` instead
    ///
    pub const DrawRect3 = drawRect3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rect: QRect `
    ///
    pub fn drawRect3(self: QPainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `drawRects` instead
    ///
    pub const DrawRects = drawRects;

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
    pub fn drawRects(self: QPainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPainter_DrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `drawRects2` instead
    ///
    pub const DrawRects2 = drawRects2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rectangles: []QRectF `
    ///
    pub fn drawRects2(self: QPainter, rectangles: []QRectF) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects2(@ptrCast(self.ptr), rectangles_list);
    }

    /// ### DEPRECATED: Use `drawRects3` instead
    ///
    pub const DrawRects3 = drawRects3;

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
    pub fn drawRects3(self: QPainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPainter_DrawRects3(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `drawRects4` instead
    ///
    pub const DrawRects4 = drawRects4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` rectangles: []QRect `
    ///
    pub fn drawRects4(self: QPainter, rectangles: []QRect) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects4(@ptrCast(self.ptr), rectangles_list);
    }

    /// ### DEPRECATED: Use `drawEllipse` instead
    ///
    pub const DrawEllipse = drawEllipse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRectF `
    ///
    pub fn drawEllipse(self: QPainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_DrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `drawEllipse2` instead
    ///
    pub const DrawEllipse2 = drawEllipse2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` r: QRect `
    ///
    pub fn drawEllipse2(self: QPainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_DrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `drawEllipse3` instead
    ///
    pub const DrawEllipse3 = drawEllipse3;

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
    pub fn drawEllipse3(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `drawEllipse4` instead
    ///
    pub const DrawEllipse4 = drawEllipse4;

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
    pub fn drawEllipse4(self: QPainter, center: anytype, rx: f64, ry: f64) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QPainter_DrawEllipse4(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### DEPRECATED: Use `drawEllipse5` instead
    ///
    pub const DrawEllipse5 = drawEllipse5;

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
    pub fn drawEllipse5(self: QPainter, center: anytype, rx: i32, ry: i32) void {
        comptime _ = @TypeOf(center)._is_QPoint;
        qtc.QPainter_DrawEllipse5(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### DEPRECATED: Use `drawPolyline` instead
    ///
    pub const DrawPolyline = drawPolyline;

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
    pub fn drawPolyline(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolyline(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolyline3` instead
    ///
    pub const DrawPolyline3 = drawPolyline3;

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
    pub fn drawPolyline3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolyline3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolygon` instead
    ///
    pub const DrawPolygon = drawPolygon;

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
    pub fn drawPolygon(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolygon3` instead
    ///
    pub const DrawPolygon3 = drawPolygon3;

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
    pub fn drawPolygon3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawConvexPolygon` instead
    ///
    pub const DrawConvexPolygon = drawConvexPolygon;

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
    pub fn drawConvexPolygon(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawConvexPolygon3` instead
    ///
    pub const DrawConvexPolygon3 = drawConvexPolygon3;

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
    pub fn drawConvexPolygon3(self: QPainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawConvexPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawArc` instead
    ///
    pub const DrawArc = drawArc;

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
    pub fn drawArc(self: QPainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawArc(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawArc2` instead
    ///
    pub const DrawArc2 = drawArc2;

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
    pub fn drawArc2(self: QPainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawArc2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawArc3` instead
    ///
    pub const DrawArc3 = drawArc3;

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
    pub fn drawArc3(self: QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawPie` instead
    ///
    pub const DrawPie = drawPie;

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
    pub fn drawPie(self: QPainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawPie(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawPie2` instead
    ///
    pub const DrawPie2 = drawPie2;

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
    pub fn drawPie2(self: QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawPie3` instead
    ///
    pub const DrawPie3 = drawPie3;

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
    pub fn drawPie3(self: QPainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawPie3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawChord` instead
    ///
    pub const DrawChord = drawChord;

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
    pub fn drawChord(self: QPainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawChord(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawChord2` instead
    ///
    pub const DrawChord2 = drawChord2;

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
    pub fn drawChord2(self: QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawChord3` instead
    ///
    pub const DrawChord3 = drawChord3;

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
    pub fn drawChord3(self: QPainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawChord3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawRoundedRect` instead
    ///
    pub const DrawRoundedRect = drawRoundedRect;

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
    pub fn drawRoundedRect(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `drawRoundedRect2` instead
    ///
    pub const DrawRoundedRect2 = drawRoundedRect2;

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
    pub fn drawRoundedRect2(self: QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `drawRoundedRect3` instead
    ///
    pub const DrawRoundedRect3 = drawRoundedRect3;

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
    pub fn drawRoundedRect3(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap` instead
    ///
    pub const DrawTiledPixmap = drawTiledPixmap;

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
    pub fn drawTiledPixmap(self: QPainter, rect: anytype, pm: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap2` instead
    ///
    pub const DrawTiledPixmap2 = drawTiledPixmap2;

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
    pub fn drawTiledPixmap2(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap3` instead
    ///
    pub const DrawTiledPixmap3 = drawTiledPixmap3;

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
    pub fn drawTiledPixmap3(self: QPainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `drawPicture` instead
    ///
    pub const DrawPicture = drawPicture;

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
    pub fn drawPicture(self: QPainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// ### DEPRECATED: Use `drawPicture2` instead
    ///
    pub const DrawPicture2 = drawPicture2;

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
    pub fn drawPicture2(self: QPainter, x: i32, y: i32, picture: anytype) void {
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(picture.ptr));
    }

    /// ### DEPRECATED: Use `drawPicture3` instead
    ///
    pub const DrawPicture3 = drawPicture3;

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
    pub fn drawPicture3(self: QPainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap` instead
    ///
    pub const DrawPixmap = drawPixmap;

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
    pub fn drawPixmap(self: QPainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawPixmap(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap2` instead
    ///
    pub const DrawPixmap2 = drawPixmap2;

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
    pub fn drawPixmap2(self: QPainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawPixmap2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap3` instead
    ///
    pub const DrawPixmap3 = drawPixmap3;

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
    pub fn drawPixmap3(self: QPainter, x: i32, y: i32, w: i32, h: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### DEPRECATED: Use `drawPixmap4` instead
    ///
    pub const DrawPixmap4 = drawPixmap4;

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
    pub fn drawPixmap4(self: QPainter, x: i32, y: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### DEPRECATED: Use `drawPixmap5` instead
    ///
    pub const DrawPixmap5 = drawPixmap5;

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
    pub fn drawPixmap5(self: QPainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawPixmap5(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap6` instead
    ///
    pub const DrawPixmap6 = drawPixmap6;

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
    pub fn drawPixmap6(self: QPainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawPixmap6(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap7` instead
    ///
    pub const DrawPixmap7 = drawPixmap7;

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
    pub fn drawPixmap7(self: QPainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap8` instead
    ///
    pub const DrawPixmap8 = drawPixmap8;

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
    pub fn drawPixmap8(self: QPainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap9` instead
    ///
    pub const DrawPixmap9 = drawPixmap9;

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
    pub fn drawPixmap9(self: QPainter, x: i32, y: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap10` instead
    ///
    pub const DrawPixmap10 = drawPixmap10;

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
    pub fn drawPixmap10(self: QPainter, r: anytype, pm: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap10(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap11` instead
    ///
    pub const DrawPixmap11 = drawPixmap11;

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
    pub fn drawPixmap11(self: QPainter, x: i32, y: i32, w: i32, h: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap11(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmapFragments` instead
    ///
    pub const DrawPixmapFragments = drawPixmapFragments;

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
    pub fn drawPixmapFragments(self: QPainter, fragments: anytype, fragmentCount: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `drawImage` instead
    ///
    pub const DrawImage = drawImage;

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
    pub fn drawImage(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawImage2` instead
    ///
    pub const DrawImage2 = drawImage2;

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
    pub fn drawImage2(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawImage3` instead
    ///
    pub const DrawImage3 = drawImage3;

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
    pub fn drawImage3(self: QPainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawImage4` instead
    ///
    pub const DrawImage4 = drawImage4;

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
    pub fn drawImage4(self: QPainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage4(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawImage5` instead
    ///
    pub const DrawImage5 = drawImage5;

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
    pub fn drawImage5(self: QPainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage5(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage6` instead
    ///
    pub const DrawImage6 = drawImage6;

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
    pub fn drawImage6(self: QPainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage6(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage7` instead
    ///
    pub const DrawImage7 = drawImage7;

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
    pub fn drawImage7(self: QPainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage8` instead
    ///
    pub const DrawImage8 = drawImage8;

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
    pub fn drawImage8(self: QPainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage9` instead
    ///
    pub const DrawImage9 = drawImage9;

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
    pub fn drawImage9(self: QPainter, x: i32, y: i32, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QPainter, direction: i32) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: QPainter) i32 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `drawGlyphRun` instead
    ///
    pub const DrawGlyphRun = drawGlyphRun;

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
    pub fn drawGlyphRun(self: QPainter, position: anytype, glyphRun: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(glyphRun)._is_QGlyphRun;
        qtc.QPainter_DrawGlyphRun(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(glyphRun.ptr));
    }

    /// ### DEPRECATED: Use `drawStaticText` instead
    ///
    pub const DrawStaticText = drawStaticText;

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
    pub fn drawStaticText(self: QPainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPointF;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// ### DEPRECATED: Use `drawStaticText2` instead
    ///
    pub const DrawStaticText2 = drawStaticText2;

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
    pub fn drawStaticText2(self: QPainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPoint;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText2(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// ### DEPRECATED: Use `drawStaticText3` instead
    ///
    pub const DrawStaticText3 = drawStaticText3;

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
    pub fn drawStaticText3(self: QPainter, left: i32, top: i32, staticText: anytype) void {
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText3(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @ptrCast(staticText.ptr));
    }

    /// ### DEPRECATED: Use `drawText` instead
    ///
    pub const DrawText = drawText;

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
    pub fn drawText(self: QPainter, p: anytype, s: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText(@ptrCast(self.ptr), @ptrCast(p.ptr), s_str);
    }

    /// ### DEPRECATED: Use `drawText2` instead
    ///
    pub const DrawText2 = drawText2;

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
    pub fn drawText2(self: QPainter, p: anytype, s: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText2(@ptrCast(self.ptr), @ptrCast(p.ptr), s_str);
    }

    /// ### DEPRECATED: Use `drawText3` instead
    ///
    pub const DrawText3 = drawText3;

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
    pub fn drawText3(self: QPainter, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), s_str);
    }

    /// ### DEPRECATED: Use `drawText4` instead
    ///
    pub const DrawText4 = drawText4;

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
    pub fn drawText4(self: QPainter, p: anytype, str: []const u8, tf: i32, justificationPadding: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QPainter_DrawText4(@ptrCast(self.ptr), @ptrCast(p.ptr), str_str, @bitCast(tf), @bitCast(justificationPadding));
    }

    /// ### DEPRECATED: Use `drawText5` instead
    ///
    pub const DrawText5 = drawText5;

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
    pub fn drawText5(self: QPainter, r: anytype, flags: i32, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText5(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str);
    }

    /// ### DEPRECATED: Use `drawText6` instead
    ///
    pub const DrawText6 = drawText6;

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
    pub fn drawText6(self: QPainter, r: anytype, flags: i32, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText6(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str);
    }

    /// ### DEPRECATED: Use `drawText7` instead
    ///
    pub const DrawText7 = drawText7;

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
    pub fn drawText7(self: QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str);
    }

    /// ### DEPRECATED: Use `drawText8` instead
    ///
    pub const DrawText8 = drawText8;

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
    pub fn drawText8(self: QPainter, r: anytype, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText8(@ptrCast(self.ptr), @ptrCast(r.ptr), text_str);
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

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
    pub fn boundingRect(self: QPainter, rect: anytype, flags: i32, text: []const u8) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags), text_str) };
    }

    /// ### DEPRECATED: Use `boundingRect2` instead
    ///
    pub const BoundingRect2 = boundingRect2;

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
    pub fn boundingRect2(self: QPainter, rect: anytype, flags: i32, text: []const u8) QRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags), text_str) };
    }

    /// ### DEPRECATED: Use `boundingRect3` instead
    ///
    pub const BoundingRect3 = boundingRect3;

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
    pub fn boundingRect3(self: QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str) };
    }

    /// ### DEPRECATED: Use `boundingRect4` instead
    ///
    pub const BoundingRect4 = boundingRect4;

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
    pub fn boundingRect4(self: QPainter, rect: anytype, text: []const u8) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `drawTextItem` instead
    ///
    pub const DrawTextItem = drawTextItem;

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
    pub fn drawTextItem(self: QPainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// ### DEPRECATED: Use `drawTextItem2` instead
    ///
    pub const DrawTextItem2 = drawTextItem2;

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
    pub fn drawTextItem2(self: QPainter, x: i32, y: i32, ti: anytype) void {
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(ti.ptr));
    }

    /// ### DEPRECATED: Use `drawTextItem3` instead
    ///
    pub const DrawTextItem3 = drawTextItem3;

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
    pub fn drawTextItem3(self: QPainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// ### DEPRECATED: Use `fillRect` instead
    ///
    pub const FillRect = fillRect;

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
    pub fn fillRect(self: QPainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `fillRect2` instead
    ///
    pub const FillRect2 = fillRect2;

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
    pub fn fillRect2(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QBrush;
        qtc.QPainter_FillRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// ### DEPRECATED: Use `fillRect3` instead
    ///
    pub const FillRect3 = fillRect3;

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
    pub fn fillRect3(self: QPainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `fillRect4` instead
    ///
    pub const FillRect4 = fillRect4;

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
    pub fn fillRect4(self: QPainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect4(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fillRect5` instead
    ///
    pub const FillRect5 = fillRect5;

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
    pub fn fillRect5(self: QPainter, x: i32, y: i32, w: i32, h: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fillRect6` instead
    ///
    pub const FillRect6 = fillRect6;

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
    pub fn fillRect6(self: QPainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect6(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fillRect7` instead
    ///
    pub const FillRect7 = fillRect7;

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
    pub fn fillRect7(self: QPainter, x: i32, y: i32, w: i32, h: i32, c: i32) void {
        qtc.QPainter_FillRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(c));
    }

    /// ### DEPRECATED: Use `fillRect8` instead
    ///
    pub const FillRect8 = fillRect8;

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
    pub fn fillRect8(self: QPainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect8(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `fillRect9` instead
    ///
    pub const FillRect9 = fillRect9;

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
    pub fn fillRect9(self: QPainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect9(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `fillRect10` instead
    ///
    pub const FillRect10 = fillRect10;

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
    pub fn fillRect10(self: QPainter, x: i32, y: i32, w: i32, h: i32, style: i32) void {
        qtc.QPainter_FillRect10(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(style));
    }

    /// ### DEPRECATED: Use `fillRect11` instead
    ///
    pub const FillRect11 = fillRect11;

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
    pub fn fillRect11(self: QPainter, r: anytype, style: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect11(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `fillRect12` instead
    ///
    pub const FillRect12 = fillRect12;

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
    pub fn fillRect12(self: QPainter, r: anytype, style: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect12(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `fillRect13` instead
    ///
    pub const FillRect13 = fillRect13;

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
    pub fn fillRect13(self: QPainter, x: i32, y: i32, w: i32, h: i32, preset: i32) void {
        qtc.QPainter_FillRect13(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `fillRect14` instead
    ///
    pub const FillRect14 = fillRect14;

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
    pub fn fillRect14(self: QPainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect14(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `fillRect15` instead
    ///
    pub const FillRect15 = fillRect15;

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
    pub fn fillRect15(self: QPainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect15(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `eraseRect` instead
    ///
    pub const EraseRect = eraseRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRectF `
    ///
    pub fn eraseRect(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_EraseRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `eraseRect2` instead
    ///
    pub const EraseRect2 = eraseRect2;

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
    pub fn eraseRect2(self: QPainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `eraseRect3` instead
    ///
    pub const EraseRect3 = eraseRect3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` param1: QRect `
    ///
    pub fn eraseRect3(self: QPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_EraseRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setRenderHint` instead
    ///
    pub const SetRenderHint = setRenderHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn setRenderHint(self: QPainter, hint: i32) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setRenderHints` instead
    ///
    pub const SetRenderHints = setRenderHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    pub fn setRenderHints(self: QPainter, hints: i32) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `renderHints` instead
    ///
    pub const RenderHints = renderHints;

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
    pub fn renderHints(self: QPainter) i32 {
        return qtc.QPainter_RenderHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `testRenderHint` instead
    ///
    pub const TestRenderHint = testRenderHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn testRenderHint(self: QPainter, hint: i32) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn paintEngine(self: QPainter) QPaintEngine {
        return .{ .ptr = qtc.QPainter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `beginNativePainting` instead
    ///
    pub const BeginNativePainting = beginNativePainting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn beginNativePainting(self: QPainter) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endNativePainting` instead
    ///
    pub const EndNativePainting = endNativePainting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    pub fn endNativePainting(self: QPainter) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect22` instead
    ///
    pub const SetClipRect22 = setClipRect22;

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
    pub fn setClipRect22(self: QPainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect22(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipRect23` instead
    ///
    pub const SetClipRect23 = setClipRect23;

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
    pub fn setClipRect23(self: QPainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect23(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipRect5` instead
    ///
    pub const SetClipRect5 = setClipRect5;

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
    pub fn setClipRect5(self: QPainter, x: i32, y: i32, w: i32, h: i32, op: i32) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipRegion2` instead
    ///
    pub const SetClipRegion2 = setClipRegion2;

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
    pub fn setClipRegion2(self: QPainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipPath2` instead
    ///
    pub const SetClipPath2 = setClipPath2;

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
    pub fn setClipPath2(self: QPainter, path: anytype, op: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath2(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setTransform2` instead
    ///
    pub const SetTransform2 = setTransform2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter `
    ///
    /// ` _transform: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn setTransform2(self: QPainter, _transform: anytype, combine: bool) void {
        comptime _ = @TypeOf(_transform)._is_QTransform;
        qtc.QPainter_SetTransform2(@ptrCast(self.ptr), @ptrCast(_transform.ptr), combine);
    }

    /// ### DEPRECATED: Use `setWorldTransform2` instead
    ///
    pub const SetWorldTransform2 = setWorldTransform2;

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
    pub fn setWorldTransform2(self: QPainter, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### DEPRECATED: Use `drawPolygon32` instead
    ///
    pub const DrawPolygon32 = drawPolygon32;

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
    pub fn drawPolygon32(self: QPainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon32(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// ### DEPRECATED: Use `drawPolygon33` instead
    ///
    pub const DrawPolygon33 = drawPolygon33;

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
    pub fn drawPolygon33(self: QPainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon33(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// ### DEPRECATED: Use `drawRoundedRect4` instead
    ///
    pub const DrawRoundedRect4 = drawRoundedRect4;

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
    pub fn drawRoundedRect4(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawRoundedRect7` instead
    ///
    pub const DrawRoundedRect7 = drawRoundedRect7;

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
    pub fn drawRoundedRect7(self: QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawRoundedRect42` instead
    ///
    pub const DrawRoundedRect42 = drawRoundedRect42;

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
    pub fn drawRoundedRect42(self: QPainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap32` instead
    ///
    pub const DrawTiledPixmap32 = drawTiledPixmap32;

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
    pub fn drawTiledPixmap32(self: QPainter, rect: anytype, pm: anytype, offset: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap6` instead
    ///
    pub const DrawTiledPixmap6 = drawTiledPixmap6;

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
    pub fn drawTiledPixmap6(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap7` instead
    ///
    pub const DrawTiledPixmap7 = drawTiledPixmap7;

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
    pub fn drawTiledPixmap7(self: QPainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap33` instead
    ///
    pub const DrawTiledPixmap33 = drawTiledPixmap33;

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
    pub fn drawTiledPixmap33(self: QPainter, param1: anytype, param2: anytype, param3: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        comptime _ = @TypeOf(param3)._is_QPoint;
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmapFragments4` instead
    ///
    pub const DrawPixmapFragments4 = drawPixmapFragments4;

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
    pub fn drawPixmapFragments4(self: QPainter, fragments: anytype, fragmentCount: i32, pixmap: anytype, hints: i32) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `drawImage42` instead
    ///
    pub const DrawImage42 = drawImage42;

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
    pub fn drawImage42(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage42(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage43` instead
    ///
    pub const DrawImage43 = drawImage43;

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
    pub fn drawImage43(self: QPainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage43(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage44` instead
    ///
    pub const DrawImage44 = drawImage44;

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
    pub fn drawImage44(self: QPainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage44(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage45` instead
    ///
    pub const DrawImage45 = drawImage45;

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
    pub fn drawImage45(self: QPainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage45(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage46` instead
    ///
    pub const DrawImage46 = drawImage46;

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
    pub fn drawImage46(self: QPainter, x: i32, y: i32, image: anytype, sx: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage46(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx));
    }

    /// ### DEPRECATED: Use `drawImage52` instead
    ///
    pub const DrawImage52 = drawImage52;

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
    pub fn drawImage52(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage52(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `drawImage62` instead
    ///
    pub const DrawImage62 = drawImage62;

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
    pub fn drawImage62(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage62(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw));
    }

    /// ### DEPRECATED: Use `drawImage72` instead
    ///
    pub const DrawImage72 = drawImage72;

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
    pub fn drawImage72(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### DEPRECATED: Use `drawImage82` instead
    ///
    pub const DrawImage82 = drawImage82;

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
    pub fn drawImage82(self: QPainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage82(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawText42` instead
    ///
    pub const DrawText42 = drawText42;

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
    pub fn drawText42(self: QPainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRectF;
        qtc.QPainter_DrawText42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// ### DEPRECATED: Use `drawText43` instead
    ///
    pub const DrawText43 = drawText43;

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
    pub fn drawText43(self: QPainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRect;
        qtc.QPainter_DrawText43(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// ### DEPRECATED: Use `drawText72` instead
    ///
    pub const DrawText72 = drawText72;

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
    pub fn drawText72(self: QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRect;
        qtc.QPainter_DrawText72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// ### DEPRECATED: Use `drawText32` instead
    ///
    pub const DrawText32 = drawText32;

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
    pub fn drawText32(self: QPainter, r: anytype, text: []const u8, o: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(o)._is_QTextOption;
        qtc.QPainter_DrawText32(@ptrCast(self.ptr), @ptrCast(r.ptr), text_str, @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect32` instead
    ///
    pub const BoundingRect32 = boundingRect32;

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
    pub fn boundingRect32(self: QPainter, rect: anytype, text: []const u8, o: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(o)._is_QTextOption;
        return .{ .ptr = qtc.QPainter_BoundingRect32(@ptrCast(self.ptr), @ptrCast(rect.ptr), text_str, @ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `setRenderHint2` instead
    ///
    pub const SetRenderHint2 = setRenderHint2;

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
    pub fn setRenderHint2(self: QPainter, hint: i32, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), on);
    }

    /// ### DEPRECATED: Use `setRenderHints2` instead
    ///
    pub const SetRenderHints2 = setRenderHints2;

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
    pub fn setRenderHints2(self: QPainter, hints: i32, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self.ptr), @bitCast(hints), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#dtor.QPainter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainter `
    ///
    pub fn delete(self: QPainter) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPainter::PixmapFragment object in C++ memory
    ///
    pub fn new() QPainter__PixmapFragment {
        return .{ .ptr = qtc.QPainter__PixmapFragment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPainter::PixmapFragment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPainter__PixmapFragment `
    ///
    pub fn new2(param1: anytype) QPainter__PixmapFragment {
        comptime _ = @TypeOf(param1)._is_QPainter__PixmapFragment;
        return .{ .ptr = qtc.QPainter__PixmapFragment_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn x(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QPainter__PixmapFragment, _x: f64) void {
        qtc.QPainter__PixmapFragment_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn y(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QPainter__PixmapFragment, _y: f64) void {
        qtc.QPainter__PixmapFragment_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `sourceLeft` instead
    ///
    pub const SourceLeft = sourceLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceLeft-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn sourceLeft(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_SourceLeft(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSourceLeft` instead
    ///
    pub const SetSourceLeft = setSourceLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceLeft-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _sourceLeft: f64 `
    ///
    pub fn setSourceLeft(self: QPainter__PixmapFragment, _sourceLeft: f64) void {
        qtc.QPainter__PixmapFragment_SetSourceLeft(@ptrCast(self.ptr), @bitCast(_sourceLeft));
    }

    /// ### DEPRECATED: Use `sourceTop` instead
    ///
    pub const SourceTop = sourceTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn sourceTop(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_SourceTop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSourceTop` instead
    ///
    pub const SetSourceTop = setSourceTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceTop-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _sourceTop: f64 `
    ///
    pub fn setSourceTop(self: QPainter__PixmapFragment, _sourceTop: f64) void {
        qtc.QPainter__PixmapFragment_SetSourceTop(@ptrCast(self.ptr), @bitCast(_sourceTop));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn width(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#width-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QPainter__PixmapFragment, _width: f64) void {
        qtc.QPainter__PixmapFragment_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn height(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#height-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QPainter__PixmapFragment, _height: f64) void {
        qtc.QPainter__PixmapFragment_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `scaleX` instead
    ///
    pub const ScaleX = scaleX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleX-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn scaleX(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_ScaleX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScaleX` instead
    ///
    pub const SetScaleX = setScaleX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleX-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _scaleX: f64 `
    ///
    pub fn setScaleX(self: QPainter__PixmapFragment, _scaleX: f64) void {
        qtc.QPainter__PixmapFragment_SetScaleX(@ptrCast(self.ptr), @bitCast(_scaleX));
    }

    /// ### DEPRECATED: Use `scaleY` instead
    ///
    pub const ScaleY = scaleY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleY-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn scaleY(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_ScaleY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScaleY` instead
    ///
    pub const SetScaleY = setScaleY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleY-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _scaleY: f64 `
    ///
    pub fn setScaleY(self: QPainter__PixmapFragment, _scaleY: f64) void {
        qtc.QPainter__PixmapFragment_SetScaleY(@ptrCast(self.ptr), @bitCast(_scaleY));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#rotation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn rotation(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#rotation-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _rotation: f64 `
    ///
    pub fn setRotation(self: QPainter__PixmapFragment, _rotation: f64) void {
        qtc.QPainter__PixmapFragment_SetRotation(@ptrCast(self.ptr), @bitCast(_rotation));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#opacity-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn opacity(self: QPainter__PixmapFragment) f64 {
        return qtc.QPainter__PixmapFragment_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#opacity-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QPainter__PixmapFragment, _opacity: f64) void {
        qtc.QPainter__PixmapFragment_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn create(pos: anytype, sourceRect: anytype) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `create3` instead
    ///
    pub const Create3 = create3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` _scaleX: f64 `
    ///
    pub fn create3(pos: anytype, sourceRect: anytype, _scaleX: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create3(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(_scaleX)) };
    }

    /// ### DEPRECATED: Use `create4` instead
    ///
    pub const Create4 = create4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` _scaleX: f64 `
    ///
    /// ` _scaleY: f64 `
    ///
    pub fn create4(pos: anytype, sourceRect: anytype, _scaleX: f64, _scaleY: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create4(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(_scaleX), @bitCast(_scaleY)) };
    }

    /// ### DEPRECATED: Use `create5` instead
    ///
    pub const Create5 = create5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` _scaleX: f64 `
    ///
    /// ` _scaleY: f64 `
    ///
    /// ` _rotation: f64 `
    ///
    pub fn create5(pos: anytype, sourceRect: anytype, _scaleX: f64, _scaleY: f64, _rotation: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create5(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(_scaleX), @bitCast(_scaleY), @bitCast(_rotation)) };
    }

    /// ### DEPRECATED: Use `create6` instead
    ///
    pub const Create6 = create6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPointF `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` _scaleX: f64 `
    ///
    /// ` _scaleY: f64 `
    ///
    /// ` _rotation: f64 `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn create6(pos: anytype, sourceRect: anytype, _scaleX: f64, _scaleY: f64, _rotation: f64, _opacity: f64) QPainter__PixmapFragment {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QPainter__PixmapFragment_Create6(@ptrCast(pos.ptr), @ptrCast(sourceRect.ptr), @bitCast(_scaleX), @bitCast(_scaleY), @bitCast(_rotation), @bitCast(_opacity)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainter__PixmapFragment `
    ///
    pub fn delete(self: QPainter__PixmapFragment) void {
        qtc.QPainter__PixmapFragment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#public-types)
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
