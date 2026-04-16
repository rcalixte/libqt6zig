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
const QPainter__PixmapFragment = @import("libqt6").QPainter__PixmapFragment;
const QPalette = @import("libqt6").QPalette;
const QPen = @import("libqt6").QPen;
const QPicture = @import("libqt6").QPicture;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QStaticText = @import("libqt6").QStaticText;
const QStyle = @import("libqt6").QStyle;
const QStyleOption = @import("libqt6").QStyleOption;
const QStyleOptionComplex = @import("libqt6").QStyleOptionComplex;
const QTextItem = @import("libqt6").QTextItem;
const QTextOption = @import("libqt6").QTextOption;
const QTransform = @import("libqt6").QTransform;
const QWidget = @import("libqt6").QWidget;
const qbrush_enums = @import("libqbrush.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpainter_enums = @import("libqpainter.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html)
pub const QStylePainter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStylePainter,

    pub const _is_QStylePainter = {};
    pub const _is_QPainter = {};

    /// New constructs a new QStylePainter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    pub fn New(w: anytype) QStylePainter {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QStylePainter_new(@ptrCast(w.ptr)) };
    }

    /// New2 constructs a new QStylePainter object.
    ///
    pub fn New2() QStylePainter {
        return .{ .ptr = qtc.QStylePainter_new2() };
    }

    /// New3 constructs a new QStylePainter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pd: QPaintDevice `
    ///
    /// ` w: QWidget `
    ///
    pub fn New3(pd: anytype, w: anytype) QStylePainter {
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QStylePainter_new3(@ptrCast(pd.ptr), @ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn Begin(self: QStylePainter, w: anytype) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QStylePainter_Begin(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pd: QPaintDevice `
    ///
    /// ` w: QWidget `
    ///
    pub fn Begin2(self: QStylePainter, pd: anytype, w: anytype) bool {
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QStylePainter_Begin2(@ptrCast(self.ptr), @ptrCast(pd.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#drawPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pe: qstyle_enums.PrimitiveElement `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn DrawPrimitive(self: QStylePainter, pe: i32, opt: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        qtc.QStylePainter_DrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#drawControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` ce: qstyle_enums.ControlElement `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn DrawControl(self: QStylePainter, ce: i32, opt: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        qtc.QStylePainter_DrawControl(@ptrCast(self.ptr), @bitCast(ce), @ptrCast(opt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#drawComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    pub fn DrawComplexControl(self: QStylePainter, cc: i32, opt: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        qtc.QStylePainter_DrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawItemText(self: QStylePainter, r: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStylePainter_DrawItemText(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#drawItemPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn DrawItemPixmap(self: QStylePainter, r: anytype, flags: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QStylePainter_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Style(self: QStylePainter) QStyle {
        return .{ .ptr = qtc.QStylePainter_Style(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn DrawItemText6(self: QStylePainter, r: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStylePainter_DrawItemText6(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Device(self: QStylePainter) QPaintDevice {
        return .{ .ptr = qtc.QPainter_Device(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn End(self: QStylePainter) bool {
        return qtc.QPainter_End(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn IsActive(self: QStylePainter) bool {
        return qtc.QPainter_IsActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` mode: qpainter_enums.CompositionMode `
    ///
    pub fn SetCompositionMode(self: QStylePainter, mode: i32) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ## Returns:
    ///
    /// ` qpainter_enums.CompositionMode `
    ///
    pub fn CompositionMode(self: QStylePainter) i32 {
        return qtc.QPainter_CompositionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Font(self: QStylePainter) QFont {
        return .{ .ptr = qtc.QPainter_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` f: QFont `
    ///
    pub fn SetFont(self: QStylePainter, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QPainter_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn FontMetrics(self: QStylePainter) QFontMetrics {
        return .{ .ptr = qtc.QPainter_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn FontInfo(self: QStylePainter) QFontInfo {
        return .{ .ptr = qtc.QPainter_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPen(self: QStylePainter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_SetPen(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen2(self: QStylePainter, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPainter_SetPen2(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` style: qnamespace_enums.PenStyle `
    ///
    pub fn SetPen3(self: QStylePainter, style: i32) void {
        qtc.QPainter_SetPen3(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Pen(self: QStylePainter) QPen {
        return .{ .ptr = qtc.QPainter_Pen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QStylePainter, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPainter_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn SetBrush2(self: QStylePainter, style: i32) void {
        qtc.QPainter_SetBrush2(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Brush(self: QStylePainter) QBrush {
        return .{ .ptr = qtc.QPainter_Brush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` mode: qnamespace_enums.BGMode `
    ///
    pub fn SetBackgroundMode(self: QStylePainter, mode: i32) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.BGMode `
    ///
    pub fn BackgroundMode(self: QStylePainter) i32 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn BrushOrigin(self: QStylePainter) QPoint {
        return .{ .ptr = qtc.QPainter_BrushOrigin(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SetBrushOrigin(self: QStylePainter, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` brushOrigin: QPoint `
    ///
    pub fn SetBrushOrigin2(self: QStylePainter, brushOrigin: anytype) void {
        comptime _ = @TypeOf(brushOrigin)._is_QPoint;
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self.ptr), @ptrCast(brushOrigin.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` brushOrigin: QPointF `
    ///
    pub fn SetBrushOrigin3(self: QStylePainter, brushOrigin: anytype) void {
        comptime _ = @TypeOf(brushOrigin)._is_QPointF;
        qtc.QPainter_SetBrushOrigin3(@ptrCast(self.ptr), @ptrCast(brushOrigin.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` bg: QBrush `
    ///
    pub fn SetBackground(self: QStylePainter, bg: anytype) void {
        comptime _ = @TypeOf(bg)._is_QBrush;
        qtc.QPainter_SetBackground(@ptrCast(self.ptr), @ptrCast(bg.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Background(self: QStylePainter) QBrush {
        return .{ .ptr = qtc.QPainter_Background(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Opacity(self: QStylePainter) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QStylePainter, opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn ClipRegion(self: QStylePainter) QRegion {
        return .{ .ptr = qtc.QPainter_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn ClipPath(self: QStylePainter) QPainterPath {
        return .{ .ptr = qtc.QPainter_ClipPath(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRectF `
    ///
    pub fn SetClipRect(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    pub fn SetClipRect2(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetClipRect3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRegion `
    ///
    pub fn SetClipRegion(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn SetClipPath(self: QStylePainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetClipping(self: QStylePainter, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn HasClipping(self: QStylePainter) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn ClipBoundingRect(self: QStylePainter) QRectF {
        return .{ .ptr = qtc.QPainter_ClipBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Save(self: QStylePainter) void {
        qtc.QPainter_Save(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Restore(self: QStylePainter) void {
        qtc.QPainter_Restore(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` transform: QTransform `
    ///
    pub fn SetTransform(self: QStylePainter, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QPainter_SetTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Transform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_Transform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn DeviceTransform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_DeviceTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn ResetTransform(self: QStylePainter) void {
        qtc.QPainter_ResetTransform(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetWorldTransform(self: QStylePainter, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn WorldTransform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_WorldTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn CombinedTransform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_CombinedTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetWorldMatrixEnabled(self: QStylePainter, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn WorldMatrixEnabled(self: QStylePainter) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn Scale(self: QStylePainter, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#shear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn Shear(self: QStylePainter, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` a: f64 `
    ///
    pub fn Rotate(self: QStylePainter, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self.ptr), @bitCast(a));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` offset: QPointF `
    ///
    pub fn Translate(self: QStylePainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_Translate(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Translate2(self: QStylePainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QPainter_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate3(self: QStylePainter, dx: f64, dy: f64) void {
        qtc.QPainter_Translate3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Window(self: QStylePainter) QRect {
        return .{ .ptr = qtc.QPainter_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` window: QRect `
    ///
    pub fn SetWindow(self: QStylePainter, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QRect;
        qtc.QPainter_SetWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetWindow2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Viewport(self: QStylePainter) QRect {
        return .{ .ptr = qtc.QPainter_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` viewport: QRect `
    ///
    pub fn SetViewport(self: QStylePainter, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QRect;
        qtc.QPainter_SetViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetViewport2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetViewTransformEnabled(self: QStylePainter, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn ViewTransformEnabled(self: QStylePainter) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#strokePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` pen: QPen `
    ///
    pub fn StrokePath(self: QStylePainter, path: anytype, pen: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QPainter_StrokePath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` brush: QBrush `
    ///
    pub fn FillPath(self: QStylePainter, path: anytype, brush: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QPainter_FillPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn DrawPath(self: QStylePainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_DrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pt: QPointF `
    ///
    pub fn DrawPoint(self: QStylePainter, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPointF;
        qtc.QPainter_DrawPoint(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    pub fn DrawPoint2(self: QStylePainter, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QPainter_DrawPoint2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn DrawPoint3(self: QStylePainter, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPoints(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPoints3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPoints3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` line: QLineF `
    ///
    pub fn DrawLine(self: QStylePainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLineF;
        qtc.QPainter_DrawLine(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` line: QLine `
    ///
    pub fn DrawLine2(self: QStylePainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLine;
        qtc.QPainter_DrawLine2(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn DrawLine3(self: QStylePainter, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine3(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn DrawLine4(self: QStylePainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        qtc.QPainter_DrawLine4(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p1: QPointF `
    ///
    /// ` p2: QPointF `
    ///
    pub fn DrawLine5(self: QStylePainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        qtc.QPainter_DrawLine5(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` lines: QLineF `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines(self: QStylePainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPainter_DrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` lines: []QLineF `
    ///
    pub fn DrawLines2(self: QStylePainter, lines: []QLineF) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines2(@ptrCast(self.ptr), lines_list);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pointPairs: QPointF `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines3(self: QStylePainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPointF;
        qtc.QPainter_DrawLines3(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pointPairs: []QPointF `
    ///
    pub fn DrawLines4(self: QStylePainter, pointPairs: []QPointF) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines4(@ptrCast(self.ptr), pointPairs_list);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` lines: QLine `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines5(self: QStylePainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPainter_DrawLines5(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` lines: []QLine `
    ///
    pub fn DrawLines6(self: QStylePainter, lines: []QLine) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines6(@ptrCast(self.ptr), lines_list);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pointPairs: QPoint `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines7(self: QStylePainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPoint;
        qtc.QPainter_DrawLines7(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` pointPairs: []QPoint `
    ///
    pub fn DrawLines8(self: QStylePainter, pointPairs: []QPoint) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines8(@ptrCast(self.ptr), pointPairs_list);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawRect(self: QStylePainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn DrawRect2(self: QStylePainter, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRect `
    ///
    pub fn DrawRect3(self: QStylePainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rects: QRectF `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn DrawRects(self: QStylePainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPainter_DrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rectangles: []QRectF `
    ///
    pub fn DrawRects2(self: QStylePainter, rectangles: []QRectF) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects2(@ptrCast(self.ptr), rectangles_list);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rects: QRect `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn DrawRects3(self: QStylePainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPainter_DrawRects3(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rectangles: []QRect `
    ///
    pub fn DrawRects4(self: QStylePainter, rectangles: []QRect) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects4(@ptrCast(self.ptr), rectangles_list);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    pub fn DrawEllipse(self: QStylePainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_DrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    pub fn DrawEllipse2(self: QStylePainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_DrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn DrawEllipse3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` center: QPointF `
    ///
    /// ` rx: f64 `
    ///
    /// ` ry: f64 `
    ///
    pub fn DrawEllipse4(self: QStylePainter, center: anytype, rx: f64, ry: f64) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QPainter_DrawEllipse4(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` center: QPoint `
    ///
    /// ` rx: i32 `
    ///
    /// ` ry: i32 `
    ///
    pub fn DrawEllipse5(self: QStylePainter, center: anytype, rx: i32, ry: i32) void {
        comptime _ = @TypeOf(center)._is_QPoint;
        qtc.QPainter_DrawEllipse5(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolyline(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolyline(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolyline3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolyline3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolygon(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPolygon3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawConvexPolygon(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawConvexPolygon3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawConvexPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawArc(self: QStylePainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawArc(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawArc2(self: QStylePainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawArc2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawArc3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawPie(self: QStylePainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawPie(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawPie2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawPie3(self: QStylePainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawPie3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawChord(self: QStylePainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawChord(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawChord2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` a: i32 `
    ///
    /// ` alen: i32 `
    ///
    pub fn DrawChord3(self: QStylePainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawChord3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn DrawRoundedRect(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawRoundedRect2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn DrawRoundedRect3(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawTiledPixmap(self: QStylePainter, rect: anytype, pm: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawTiledPixmap2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` param2: QPixmap `
    ///
    pub fn DrawTiledPixmap3(self: QStylePainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` picture: QPicture `
    ///
    pub fn DrawPicture(self: QStylePainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` picture: QPicture `
    ///
    pub fn DrawPicture2(self: QStylePainter, x: i32, y: i32, picture: anytype) void {
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(picture.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` picture: QPicture `
    ///
    pub fn DrawPicture3(self: QStylePainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` targetRect: QRectF `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn DrawPixmap(self: QStylePainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawPixmap(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` sourceRect: QRect `
    ///
    pub fn DrawPixmap2(self: QStylePainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawPixmap2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawPixmap3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawPixmap4(self: QStylePainter, x: i32, y: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sr: QRectF `
    ///
    pub fn DrawPixmap5(self: QStylePainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawPixmap5(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sr: QRect `
    ///
    pub fn DrawPixmap6(self: QStylePainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawPixmap6(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap7(self: QStylePainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap8(self: QStylePainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap9(self: QStylePainter, x: i32, y: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn DrawPixmap10(self: QStylePainter, r: anytype, pm: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap10(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawPixmap11(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap11(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` fragments: QPainter__PixmapFragment `
    ///
    /// ` fragmentCount: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn DrawPixmapFragments(self: QStylePainter, fragments: anytype, fragmentCount: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` targetRect: QRectF `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn DrawImage(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRect `
    ///
    pub fn DrawImage2(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRectF `
    ///
    pub fn DrawImage3(self: QStylePainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRect `
    ///
    pub fn DrawImage4(self: QStylePainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage4(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage5(self: QStylePainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage5(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage6(self: QStylePainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage6(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage7(self: QStylePainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage8(self: QStylePainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    pub fn DrawImage9(self: QStylePainter, x: i32, y: i32, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QStylePainter, direction: i32) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QStylePainter) i32 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` position: QPointF `
    ///
    /// ` glyphRun: QGlyphRun `
    ///
    pub fn DrawGlyphRun(self: QStylePainter, position: anytype, glyphRun: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(glyphRun)._is_QGlyphRun;
        qtc.QPainter_DrawGlyphRun(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(glyphRun.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` topLeftPosition: QPointF `
    ///
    /// ` staticText: QStaticText `
    ///
    pub fn DrawStaticText(self: QStylePainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPointF;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` topLeftPosition: QPoint `
    ///
    /// ` staticText: QStaticText `
    ///
    pub fn DrawStaticText2(self: QStylePainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPoint;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText2(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` staticText: QStaticText `
    ///
    pub fn DrawStaticText3(self: QStylePainter, left: i32, top: i32, staticText: anytype) void {
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText3(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @ptrCast(staticText.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` s: []const u8 `
    ///
    pub fn DrawText(self: QStylePainter, p: anytype, s: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText(@ptrCast(self.ptr), @ptrCast(p.ptr), s_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` s: []const u8 `
    ///
    pub fn DrawText2(self: QStylePainter, p: anytype, s: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText2(@ptrCast(self.ptr), @ptrCast(p.ptr), s_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` s: []const u8 `
    ///
    pub fn DrawText3(self: QStylePainter, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), s_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tf: i32 `
    ///
    /// ` justificationPadding: i32 `
    ///
    pub fn DrawText4(self: QStylePainter, p: anytype, str: []const u8, tf: i32, justificationPadding: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QPainter_DrawText4(@ptrCast(self.ptr), @ptrCast(p.ptr), str_str, @bitCast(tf), @bitCast(justificationPadding));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText5(self: QStylePainter, r: anytype, flags: i32, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText5(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText6(self: QStylePainter, r: anytype, flags: i32, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText6(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawText7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DrawText8(self: QStylePainter, r: anytype, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText8(@ptrCast(self.ptr), @ptrCast(r.ptr), text_str);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect(self: QStylePainter, rect: anytype, flags: i32, text: []const u8) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags), text_str) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect2(self: QStylePainter, rect: anytype, flags: i32, text: []const u8) QRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(flags), text_str) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn BoundingRect3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect4(self: QStylePainter, rect: anytype, text: []const u8) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), text_str) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` ti: QTextItem `
    ///
    pub fn DrawTextItem(self: QStylePainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` ti: QTextItem `
    ///
    pub fn DrawTextItem2(self: QStylePainter, x: i32, y: i32, ti: anytype) void {
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(ti.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` ti: QTextItem `
    ///
    pub fn DrawTextItem3(self: QStylePainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRectF `
    ///
    /// ` param2: QBrush `
    ///
    pub fn FillRect(self: QStylePainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn FillRect2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QBrush;
        qtc.QPainter_FillRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` param2: QBrush `
    ///
    pub fn FillRect3(self: QStylePainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRectF `
    ///
    /// ` color: QColor `
    ///
    pub fn FillRect4(self: QStylePainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect4(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn FillRect5(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(color.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` color: QColor `
    ///
    pub fn FillRect6(self: QStylePainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect6(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn FillRect7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, c: i32) void {
        qtc.QPainter_FillRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(c));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` c: qnamespace_enums.GlobalColor `
    ///
    pub fn FillRect8(self: QStylePainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect8(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` c: qnamespace_enums.GlobalColor `
    ///
    pub fn FillRect9(self: QStylePainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect9(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn FillRect10(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, style: i32) void {
        qtc.QPainter_FillRect10(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(style));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn FillRect11(self: QStylePainter, r: anytype, style: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect11(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(style));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn FillRect12(self: QStylePainter, r: anytype, style: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect12(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(style));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn FillRect13(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, preset: i32) void {
        qtc.QPainter_FillRect13(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(preset));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` preset: qbrush_enums.Preset `
    ///
    pub fn FillRect14(self: QStylePainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect14(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` preset: qbrush_enums.Preset `
    ///
    pub fn FillRect15(self: QStylePainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect15(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRectF `
    ///
    pub fn EraseRect(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_EraseRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn EraseRect2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    pub fn EraseRect3(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_EraseRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHint(self: QStylePainter, hint: i32) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    pub fn SetRenderHints(self: QStylePainter, hints: i32) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#renderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpainter_enums.RenderHint `
    ///
    pub fn RenderHints(self: QStylePainter) i32 {
        return qtc.QPainter_RenderHints(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    pub fn TestRenderHint(self: QStylePainter, hint: i32) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn PaintEngine(self: QStylePainter) QPaintEngine {
        return .{ .ptr = qtc.QPainter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn BeginNativePainting(self: QStylePainter) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn EndNativePainting(self: QStylePainter) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRectF `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRect22(self: QStylePainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect22(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRect23(self: QStylePainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect23(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn SetClipRect5(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, op: i32) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(op));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRegion `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipRegion2(self: QStylePainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` op: qnamespace_enums.ClipOperation `
    ///
    pub fn SetClipPath2(self: QStylePainter, path: anytype, op: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath2(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(op));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` transform: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QStylePainter, transform: anytype, combine: bool) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QPainter_SetTransform2(@ptrCast(self.ptr), @ptrCast(transform.ptr), combine);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetWorldTransform2(self: QStylePainter, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn DrawPolygon32(self: QStylePainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon32(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn DrawPolygon33(self: QStylePainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon33(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn DrawRoundedRect4(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawRoundedRect7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn DrawRoundedRect42(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` offset: QPointF `
    ///
    pub fn DrawTiledPixmap32(self: QStylePainter, rect: anytype, pm: anytype, offset: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr), @ptrCast(offset.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawTiledPixmap6(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawTiledPixmap7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` param1: QRect `
    ///
    /// ` param2: QPixmap `
    ///
    /// ` param3: QPoint `
    ///
    pub fn DrawTiledPixmap33(self: QStylePainter, param1: anytype, param2: anytype, param3: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        comptime _ = @TypeOf(param3)._is_QPoint;
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` fragments: QPainter__PixmapFragment `
    ///
    /// ` fragmentCount: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` hints: flag of qpainter_enums.PixmapFragmentHint `
    ///
    pub fn DrawPixmapFragments4(self: QStylePainter, fragments: anytype, fragmentCount: i32, pixmap: anytype, hints: i32) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr), @bitCast(hints));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` targetRect: QRectF `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRectF `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage42(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage42(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` image: QImage `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage43(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage43(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPointF `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRectF `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage44(self: QStylePainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage44(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` p: QPoint `
    ///
    /// ` image: QImage `
    ///
    /// ` sr: QRect `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage45(self: QStylePainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage45(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` image: QImage `
    ///
    /// ` sx: i32 `
    ///
    pub fn DrawImage46(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage46(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawImage52(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage52(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawImage62(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage62(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawImage72(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawImage82(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage82(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh), @bitCast(flags));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` br: QRectF `
    ///
    pub fn DrawText42(self: QStylePainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRectF;
        qtc.QPainter_DrawText42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` br: QRect `
    ///
    pub fn DrawText43(self: QStylePainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRect;
        qtc.QPainter_DrawText43(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
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
    pub fn DrawText72(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(br)._is_QRect;
        qtc.QPainter_DrawText72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @ptrCast(br.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` r: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` o: QTextOption `
    ///
    pub fn DrawText32(self: QStylePainter, r: anytype, text: []const u8, o: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(o)._is_QTextOption;
        qtc.QPainter_DrawText32(@ptrCast(self.ptr), @ptrCast(r.ptr), text_str, @ptrCast(o.ptr));
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` o: QTextOption `
    ///
    pub fn BoundingRect32(self: QStylePainter, rect: anytype, text: []const u8, o: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(o)._is_QTextOption;
        return .{ .ptr = qtc.QPainter_BoundingRect32(@ptrCast(self.ptr), @ptrCast(rect.ptr), text_str, @ptrCast(o.ptr)) };
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` hint: qpainter_enums.RenderHint `
    ///
    /// ` on: bool `
    ///
    pub fn SetRenderHint2(self: QStylePainter, hint: i32, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), on);
    }

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` hints: flag of qpainter_enums.RenderHint `
    ///
    /// ` on: bool `
    ///
    pub fn SetRenderHints2(self: QStylePainter, hints: i32, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self.ptr), @bitCast(hints), on);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#dtor.QStylePainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStylePainter `
    ///
    pub fn Delete(self: QStylePainter) void {
        qtc.QStylePainter_Delete(@ptrCast(self.ptr));
    }
};
