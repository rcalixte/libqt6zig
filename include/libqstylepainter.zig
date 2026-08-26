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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStylePainter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    pub fn new(w: anytype) QStylePainter {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QStylePainter_new(@ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStylePainter object in C++ memory
    ///
    pub fn new2() QStylePainter {
        return .{ .ptr = qtc.QStylePainter_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStylePainter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pd: QPaintDevice `
    ///
    /// ` w: QWidget `
    ///
    pub fn new3(pd: anytype, w: anytype) QStylePainter {
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        const pd_ = if (@hasDecl(@TypeOf(pd), "asQPaintDevice")) pd.asQPaintDevice() else pd;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QStylePainter_new3(@ptrCast(pd_.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn begin(self: QStylePainter, w: anytype) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QStylePainter_Begin(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `begin2` instead
    ///
    pub const Begin2 = begin2;

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
    pub fn begin2(self: QStylePainter, pd: anytype, w: anytype) bool {
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        const pd_ = if (@hasDecl(@TypeOf(pd), "asQPaintDevice")) pd.asQPaintDevice() else pd;
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QStylePainter_Begin2(@ptrCast(self.ptr), @ptrCast(pd_.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `drawPrimitive` instead
    ///
    pub const DrawPrimitive = drawPrimitive;

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
    pub fn drawPrimitive(self: QStylePainter, pe: i32, opt: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        qtc.QStylePainter_DrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr));
    }

    /// ### DEPRECATED: Use `drawControl` instead
    ///
    pub const DrawControl = drawControl;

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
    pub fn drawControl(self: QStylePainter, ce: i32, opt: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        qtc.QStylePainter_DrawControl(@ptrCast(self.ptr), @bitCast(ce), @ptrCast(opt.ptr));
    }

    /// ### DEPRECATED: Use `drawComplexControl` instead
    ///
    pub const DrawComplexControl = drawComplexControl;

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
    pub fn drawComplexControl(self: QStylePainter, cc: i32, opt: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        qtc.QStylePainter_DrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr));
    }

    /// ### DEPRECATED: Use `drawItemText` instead
    ///
    pub const DrawItemText = drawItemText;

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
    pub fn drawItemText(self: QStylePainter, r: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStylePainter_DrawItemText(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str);
    }

    /// ### DEPRECATED: Use `drawItemPixmap` instead
    ///
    pub const DrawItemPixmap = drawItemPixmap;

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
    pub fn drawItemPixmap(self: QStylePainter, r: anytype, flags: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QStylePainter_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn style(self: QStylePainter) QStyle {
        return .{ .ptr = qtc.QStylePainter_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `drawItemText6` instead
    ///
    pub const DrawItemText6 = drawItemText6;

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
    pub fn drawItemText6(self: QStylePainter, r: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QStylePainter_DrawItemText6(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn device(self: QStylePainter) QPaintDevice {
        return .{ .ptr = qtc.QPainter_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn end(self: QStylePainter) bool {
        return qtc.QPainter_End(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn isActive(self: QStylePainter) bool {
        return qtc.QPainter_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompositionMode` instead
    ///
    pub const SetCompositionMode = setCompositionMode;

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
    pub fn setCompositionMode(self: QStylePainter, mode: i32) void {
        qtc.QPainter_SetCompositionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `compositionMode` instead
    ///
    pub const CompositionMode = compositionMode;

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
    pub fn compositionMode(self: QStylePainter) i32 {
        return qtc.QPainter_CompositionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn font(self: QStylePainter) QFont {
        return .{ .ptr = qtc.QPainter_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

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
    pub fn setFont(self: QStylePainter, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QPainter_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn fontMetrics(self: QStylePainter) QFontMetrics {
        return .{ .ptr = qtc.QPainter_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontInfo` instead
    ///
    pub const FontInfo = fontInfo;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn fontInfo(self: QStylePainter) QFontInfo {
        return .{ .ptr = qtc.QPainter_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

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
    pub fn setPen(self: QStylePainter, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_SetPen(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setPen2` instead
    ///
    pub const SetPen2 = setPen2;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen2(self: QStylePainter, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QPainter_SetPen2(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `setPen3` instead
    ///
    pub const SetPen3 = setPen3;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _style: qnamespace_enums.PenStyle `
    ///
    pub fn setPen3(self: QStylePainter, _style: i32) void {
        qtc.QPainter_SetPen3(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn pen(self: QStylePainter) QPen {
        return .{ .ptr = qtc.QPainter_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QStylePainter, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPainter_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `setBrush2` instead
    ///
    pub const SetBrush2 = setBrush2;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _style: qnamespace_enums.BrushStyle `
    ///
    pub fn setBrush2(self: QStylePainter, _style: i32) void {
        qtc.QPainter_SetBrush2(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn brush(self: QStylePainter) QBrush {
        return .{ .ptr = qtc.QPainter_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundMode` instead
    ///
    pub const SetBackgroundMode = setBackgroundMode;

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
    pub fn setBackgroundMode(self: QStylePainter, mode: i32) void {
        qtc.QPainter_SetBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `backgroundMode` instead
    ///
    pub const BackgroundMode = backgroundMode;

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
    pub fn backgroundMode(self: QStylePainter) i32 {
        return qtc.QPainter_BackgroundMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `brushOrigin` instead
    ///
    pub const BrushOrigin = brushOrigin;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn brushOrigin(self: QStylePainter) QPoint {
        return .{ .ptr = qtc.QPainter_BrushOrigin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrushOrigin` instead
    ///
    pub const SetBrushOrigin = setBrushOrigin;

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
    pub fn setBrushOrigin(self: QStylePainter, x: i32, y: i32) void {
        qtc.QPainter_SetBrushOrigin(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setBrushOrigin2` instead
    ///
    pub const SetBrushOrigin2 = setBrushOrigin2;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _brushOrigin: QPoint `
    ///
    pub fn setBrushOrigin2(self: QStylePainter, _brushOrigin: anytype) void {
        comptime _ = @TypeOf(_brushOrigin)._is_QPoint;
        qtc.QPainter_SetBrushOrigin2(@ptrCast(self.ptr), @ptrCast(_brushOrigin.ptr));
    }

    /// ### DEPRECATED: Use `setBrushOrigin3` instead
    ///
    pub const SetBrushOrigin3 = setBrushOrigin3;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _brushOrigin: QPointF `
    ///
    pub fn setBrushOrigin3(self: QStylePainter, _brushOrigin: anytype) void {
        comptime _ = @TypeOf(_brushOrigin)._is_QPointF;
        qtc.QPainter_SetBrushOrigin3(@ptrCast(self.ptr), @ptrCast(_brushOrigin.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

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
    pub fn setBackground(self: QStylePainter, bg: anytype) void {
        comptime _ = @TypeOf(bg)._is_QBrush;
        qtc.QPainter_SetBackground(@ptrCast(self.ptr), @ptrCast(bg.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn background(self: QStylePainter) QBrush {
        return .{ .ptr = qtc.QPainter_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn opacity(self: QStylePainter) f64 {
        return qtc.QPainter_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QStylePainter, _opacity: f64) void {
        qtc.QPainter_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `clipRegion` instead
    ///
    pub const ClipRegion = clipRegion;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn clipRegion(self: QStylePainter) QRegion {
        return .{ .ptr = qtc.QPainter_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn clipPath(self: QStylePainter) QPainterPath {
        return .{ .ptr = qtc.QPainter_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setClipRect` instead
    ///
    pub const SetClipRect = setClipRect;

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
    pub fn setClipRect(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect2` instead
    ///
    pub const SetClipRect2 = setClipRect2;

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
    pub fn setClipRect2(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect3` instead
    ///
    pub const SetClipRect3 = setClipRect3;

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
    pub fn setClipRect3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetClipRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setClipRegion` instead
    ///
    pub const SetClipRegion = setClipRegion;

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
    pub fn setClipRegion(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setClipPath` instead
    ///
    pub const SetClipPath = setClipPath;

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
    pub fn setClipPath(self: QStylePainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `setClipping` instead
    ///
    pub const SetClipping = setClipping;

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
    pub fn setClipping(self: QStylePainter, enable: bool) void {
        qtc.QPainter_SetClipping(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasClipping` instead
    ///
    pub const HasClipping = hasClipping;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn hasClipping(self: QStylePainter) bool {
        return qtc.QPainter_HasClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clipBoundingRect` instead
    ///
    pub const ClipBoundingRect = clipBoundingRect;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn clipBoundingRect(self: QStylePainter) QRectF {
        return .{ .ptr = qtc.QPainter_ClipBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn save(self: QStylePainter) void {
        qtc.QPainter_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `restore` instead
    ///
    pub const Restore = restore;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn restore(self: QStylePainter) void {
        qtc.QPainter_Restore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _transform: QTransform `
    ///
    pub fn setTransform(self: QStylePainter, _transform: anytype) void {
        comptime _ = @TypeOf(_transform)._is_QTransform;
        qtc.QPainter_SetTransform(@ptrCast(self.ptr), @ptrCast(_transform.ptr));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn transform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_Transform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceTransform` instead
    ///
    pub const DeviceTransform = deviceTransform;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn deviceTransform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_DeviceTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resetTransform` instead
    ///
    pub const ResetTransform = resetTransform;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn resetTransform(self: QStylePainter) void {
        qtc.QPainter_ResetTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWorldTransform` instead
    ///
    pub const SetWorldTransform = setWorldTransform;

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
    pub fn setWorldTransform(self: QStylePainter, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `worldTransform` instead
    ///
    pub const WorldTransform = worldTransform;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn worldTransform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_WorldTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `combinedTransform` instead
    ///
    pub const CombinedTransform = combinedTransform;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn combinedTransform(self: QStylePainter) QTransform {
        return .{ .ptr = qtc.QPainter_CombinedTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWorldMatrixEnabled` instead
    ///
    pub const SetWorldMatrixEnabled = setWorldMatrixEnabled;

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
    pub fn setWorldMatrixEnabled(self: QStylePainter, enabled: bool) void {
        qtc.QPainter_SetWorldMatrixEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `worldMatrixEnabled` instead
    ///
    pub const WorldMatrixEnabled = worldMatrixEnabled;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn worldMatrixEnabled(self: QStylePainter) bool {
        return qtc.QPainter_WorldMatrixEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

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
    pub fn scale(self: QStylePainter, sx: f64, sy: f64) void {
        qtc.QPainter_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `shear` instead
    ///
    pub const Shear = shear;

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
    pub fn shear(self: QStylePainter, sh: f64, sv: f64) void {
        qtc.QPainter_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv));
    }

    /// ### DEPRECATED: Use `rotate` instead
    ///
    pub const Rotate = rotate;

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
    pub fn rotate(self: QStylePainter, a: f64) void {
        qtc.QPainter_Rotate(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QStylePainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_Translate(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

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
    pub fn translate2(self: QStylePainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QPainter_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translate3` instead
    ///
    pub const Translate3 = translate3;

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
    pub fn translate3(self: QStylePainter, dx: f64, dy: f64) void {
        qtc.QPainter_Translate3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn window(self: QStylePainter) QRect {
        return .{ .ptr = qtc.QPainter_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _window: QRect `
    ///
    pub fn setWindow(self: QStylePainter, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QRect;
        qtc.QPainter_SetWindow(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `setWindow2` instead
    ///
    pub const SetWindow2 = setWindow2;

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
    pub fn setWindow2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetWindow2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn viewport(self: QStylePainter) QRect {
        return .{ .ptr = qtc.QPainter_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _viewport: QRect `
    ///
    pub fn setViewport(self: QStylePainter, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QRect;
        qtc.QPainter_SetViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `setViewport2` instead
    ///
    pub const SetViewport2 = setViewport2;

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
    pub fn setViewport2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_SetViewport2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setViewTransformEnabled` instead
    ///
    pub const SetViewTransformEnabled = setViewTransformEnabled;

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
    pub fn setViewTransformEnabled(self: QStylePainter, enable: bool) void {
        qtc.QPainter_SetViewTransformEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `viewTransformEnabled` instead
    ///
    pub const ViewTransformEnabled = viewTransformEnabled;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn viewTransformEnabled(self: QStylePainter) bool {
        return qtc.QPainter_ViewTransformEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `strokePath` instead
    ///
    pub const StrokePath = strokePath;

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
    /// ` _pen: QPen `
    ///
    pub fn strokePath(self: QStylePainter, path: anytype, _pen: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QPainter_StrokePath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `fillPath` instead
    ///
    pub const FillPath = fillPath;

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
    /// ` _brush: QBrush `
    ///
    pub fn fillPath(self: QStylePainter, path: anytype, _brush: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QPainter_FillPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `drawPath` instead
    ///
    pub const DrawPath = drawPath;

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
    pub fn drawPath(self: QStylePainter, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_DrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `drawPoint` instead
    ///
    pub const DrawPoint = drawPoint;

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
    pub fn drawPoint(self: QStylePainter, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPointF;
        qtc.QPainter_DrawPoint(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `drawPoint2` instead
    ///
    pub const DrawPoint2 = drawPoint2;

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
    pub fn drawPoint2(self: QStylePainter, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QPainter_DrawPoint2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `drawPoint3` instead
    ///
    pub const DrawPoint3 = drawPoint3;

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
    pub fn drawPoint3(self: QStylePainter, x: i32, y: i32) void {
        qtc.QPainter_DrawPoint3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `drawPoints` instead
    ///
    pub const DrawPoints = drawPoints;

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
    pub fn drawPoints(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPoints3` instead
    ///
    pub const DrawPoints3 = drawPoints3;

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
    pub fn drawPoints3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPoints3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawLine` instead
    ///
    pub const DrawLine = drawLine;

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
    pub fn drawLine(self: QStylePainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLineF;
        qtc.QPainter_DrawLine(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// ### DEPRECATED: Use `drawLine2` instead
    ///
    pub const DrawLine2 = drawLine2;

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
    pub fn drawLine2(self: QStylePainter, line: anytype) void {
        comptime _ = @TypeOf(line)._is_QLine;
        qtc.QPainter_DrawLine2(@ptrCast(self.ptr), @ptrCast(line.ptr));
    }

    /// ### DEPRECATED: Use `drawLine3` instead
    ///
    pub const DrawLine3 = drawLine3;

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
    pub fn drawLine3(self: QStylePainter, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QPainter_DrawLine3(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `drawLine4` instead
    ///
    pub const DrawLine4 = drawLine4;

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
    pub fn drawLine4(self: QStylePainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        qtc.QPainter_DrawLine4(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### DEPRECATED: Use `drawLine5` instead
    ///
    pub const DrawLine5 = drawLine5;

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
    pub fn drawLine5(self: QStylePainter, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        qtc.QPainter_DrawLine5(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### DEPRECATED: Use `drawLines` instead
    ///
    pub const DrawLines = drawLines;

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
    pub fn drawLines(self: QStylePainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPainter_DrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines2` instead
    ///
    pub const DrawLines2 = drawLines2;

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
    pub fn drawLines2(self: QStylePainter, lines: []QLineF) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines2(@ptrCast(self.ptr), lines_list);
    }

    /// ### DEPRECATED: Use `drawLines3` instead
    ///
    pub const DrawLines3 = drawLines3;

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
    pub fn drawLines3(self: QStylePainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPointF;
        qtc.QPainter_DrawLines3(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines4` instead
    ///
    pub const DrawLines4 = drawLines4;

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
    pub fn drawLines4(self: QStylePainter, pointPairs: []QPointF) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines4(@ptrCast(self.ptr), pointPairs_list);
    }

    /// ### DEPRECATED: Use `drawLines5` instead
    ///
    pub const DrawLines5 = drawLines5;

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
    pub fn drawLines5(self: QStylePainter, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPainter_DrawLines5(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines6` instead
    ///
    pub const DrawLines6 = drawLines6;

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
    pub fn drawLines6(self: QStylePainter, lines: []QLine) void {
        const lines_list = qtc.libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        qtc.QPainter_DrawLines6(@ptrCast(self.ptr), lines_list);
    }

    /// ### DEPRECATED: Use `drawLines7` instead
    ///
    pub const DrawLines7 = drawLines7;

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
    pub fn drawLines7(self: QStylePainter, pointPairs: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(pointPairs)._is_QPoint;
        qtc.QPainter_DrawLines7(@ptrCast(self.ptr), @ptrCast(pointPairs.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines8` instead
    ///
    pub const DrawLines8 = drawLines8;

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
    pub fn drawLines8(self: QStylePainter, pointPairs: []QPoint) void {
        const pointPairs_list = qtc.libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        qtc.QPainter_DrawLines8(@ptrCast(self.ptr), pointPairs_list);
    }

    /// ### DEPRECATED: Use `drawRect` instead
    ///
    pub const DrawRect = drawRect;

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
    pub fn drawRect(self: QStylePainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `drawRect2` instead
    ///
    pub const DrawRect2 = drawRect2;

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
    pub fn drawRect2(self: QStylePainter, x1: i32, y1: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawRect2(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `drawRect3` instead
    ///
    pub const DrawRect3 = drawRect3;

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
    pub fn drawRect3(self: QStylePainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `drawRects` instead
    ///
    pub const DrawRects = drawRects;

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
    pub fn drawRects(self: QStylePainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPainter_DrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `drawRects2` instead
    ///
    pub const DrawRects2 = drawRects2;

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
    pub fn drawRects2(self: QStylePainter, rectangles: []QRectF) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects2(@ptrCast(self.ptr), rectangles_list);
    }

    /// ### DEPRECATED: Use `drawRects3` instead
    ///
    pub const DrawRects3 = drawRects3;

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
    pub fn drawRects3(self: QStylePainter, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPainter_DrawRects3(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `drawRects4` instead
    ///
    pub const DrawRects4 = drawRects4;

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
    pub fn drawRects4(self: QStylePainter, rectangles: []QRect) void {
        const rectangles_list = qtc.libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        qtc.QPainter_DrawRects4(@ptrCast(self.ptr), rectangles_list);
    }

    /// ### DEPRECATED: Use `drawEllipse` instead
    ///
    pub const DrawEllipse = drawEllipse;

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
    pub fn drawEllipse(self: QStylePainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_DrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `drawEllipse2` instead
    ///
    pub const DrawEllipse2 = drawEllipse2;

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
    pub fn drawEllipse2(self: QStylePainter, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_DrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `drawEllipse3` instead
    ///
    pub const DrawEllipse3 = drawEllipse3;

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
    pub fn drawEllipse3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_DrawEllipse3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `drawEllipse4` instead
    ///
    pub const DrawEllipse4 = drawEllipse4;

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
    pub fn drawEllipse4(self: QStylePainter, center: anytype, rx: f64, ry: f64) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QPainter_DrawEllipse4(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### DEPRECATED: Use `drawEllipse5` instead
    ///
    pub const DrawEllipse5 = drawEllipse5;

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
    pub fn drawEllipse5(self: QStylePainter, center: anytype, rx: i32, ry: i32) void {
        comptime _ = @TypeOf(center)._is_QPoint;
        qtc.QPainter_DrawEllipse5(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### DEPRECATED: Use `drawPolyline` instead
    ///
    pub const DrawPolyline = drawPolyline;

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
    pub fn drawPolyline(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolyline(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolyline3` instead
    ///
    pub const DrawPolyline3 = drawPolyline3;

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
    pub fn drawPolyline3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolyline3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolygon` instead
    ///
    pub const DrawPolygon = drawPolygon;

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
    pub fn drawPolygon(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolygon3` instead
    ///
    pub const DrawPolygon3 = drawPolygon3;

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
    pub fn drawPolygon3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawConvexPolygon` instead
    ///
    pub const DrawConvexPolygon = drawConvexPolygon;

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
    pub fn drawConvexPolygon(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawConvexPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawConvexPolygon3` instead
    ///
    pub const DrawConvexPolygon3 = drawConvexPolygon3;

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
    pub fn drawConvexPolygon3(self: QStylePainter, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawConvexPolygon3(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawArc` instead
    ///
    pub const DrawArc = drawArc;

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
    pub fn drawArc(self: QStylePainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawArc(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawArc2` instead
    ///
    pub const DrawArc2 = drawArc2;

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
    pub fn drawArc2(self: QStylePainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawArc2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawArc3` instead
    ///
    pub const DrawArc3 = drawArc3;

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
    pub fn drawArc3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawArc3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawPie` instead
    ///
    pub const DrawPie = drawPie;

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
    pub fn drawPie(self: QStylePainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawPie(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawPie2` instead
    ///
    pub const DrawPie2 = drawPie2;

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
    pub fn drawPie2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawPie2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawPie3` instead
    ///
    pub const DrawPie3 = drawPie3;

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
    pub fn drawPie3(self: QStylePainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawPie3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawChord` instead
    ///
    pub const DrawChord = drawChord;

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
    pub fn drawChord(self: QStylePainter, rect: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawChord(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawChord2` instead
    ///
    pub const DrawChord2 = drawChord2;

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
    pub fn drawChord2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        qtc.QPainter_DrawChord2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawChord3` instead
    ///
    pub const DrawChord3 = drawChord3;

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
    pub fn drawChord3(self: QStylePainter, param1: anytype, a: i32, alen: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_DrawChord3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(a), @bitCast(alen));
    }

    /// ### DEPRECATED: Use `drawRoundedRect` instead
    ///
    pub const DrawRoundedRect = drawRoundedRect;

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
    pub fn drawRoundedRect(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `drawRoundedRect2` instead
    ///
    pub const DrawRoundedRect2 = drawRoundedRect2;

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
    pub fn drawRoundedRect2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        qtc.QPainter_DrawRoundedRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `drawRoundedRect3` instead
    ///
    pub const DrawRoundedRect3 = drawRoundedRect3;

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
    pub fn drawRoundedRect3(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap` instead
    ///
    pub const DrawTiledPixmap = drawTiledPixmap;

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
    pub fn drawTiledPixmap(self: QStylePainter, rect: anytype, pm: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap2` instead
    ///
    pub const DrawTiledPixmap2 = drawTiledPixmap2;

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
    pub fn drawTiledPixmap2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap3` instead
    ///
    pub const DrawTiledPixmap3 = drawTiledPixmap3;

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
    pub fn drawTiledPixmap3(self: QStylePainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `drawPicture` instead
    ///
    pub const DrawPicture = drawPicture;

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
    pub fn drawPicture(self: QStylePainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// ### DEPRECATED: Use `drawPicture2` instead
    ///
    pub const DrawPicture2 = drawPicture2;

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
    pub fn drawPicture2(self: QStylePainter, x: i32, y: i32, picture: anytype) void {
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(picture.ptr));
    }

    /// ### DEPRECATED: Use `drawPicture3` instead
    ///
    pub const DrawPicture3 = drawPicture3;

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
    pub fn drawPicture3(self: QStylePainter, p: anytype, picture: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(picture)._is_QPicture;
        qtc.QPainter_DrawPicture3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(picture.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap` instead
    ///
    pub const DrawPixmap = drawPixmap;

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
    pub fn drawPixmap(self: QStylePainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawPixmap(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap2` instead
    ///
    pub const DrawPixmap2 = drawPixmap2;

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
    pub fn drawPixmap2(self: QStylePainter, targetRect: anytype, pixmap: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawPixmap2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap3` instead
    ///
    pub const DrawPixmap3 = drawPixmap3;

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
    pub fn drawPixmap3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### DEPRECATED: Use `drawPixmap4` instead
    ///
    pub const DrawPixmap4 = drawPixmap4;

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
    pub fn drawPixmap4(self: QStylePainter, x: i32, y: i32, pm: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### DEPRECATED: Use `drawPixmap5` instead
    ///
    pub const DrawPixmap5 = drawPixmap5;

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
    pub fn drawPixmap5(self: QStylePainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawPixmap5(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap6` instead
    ///
    pub const DrawPixmap6 = drawPixmap6;

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
    pub fn drawPixmap6(self: QStylePainter, p: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawPixmap6(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap7` instead
    ///
    pub const DrawPixmap7 = drawPixmap7;

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
    pub fn drawPixmap7(self: QStylePainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap8` instead
    ///
    pub const DrawPixmap8 = drawPixmap8;

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
    pub fn drawPixmap8(self: QStylePainter, p: anytype, pm: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap9` instead
    ///
    pub const DrawPixmap9 = drawPixmap9;

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
    pub fn drawPixmap9(self: QStylePainter, x: i32, y: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap10` instead
    ///
    pub const DrawPixmap10 = drawPixmap10;

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
    pub fn drawPixmap10(self: QStylePainter, r: anytype, pm: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap10(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmap11` instead
    ///
    pub const DrawPixmap11 = drawPixmap11;

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
    pub fn drawPixmap11(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QPainter_DrawPixmap11(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmapFragments` instead
    ///
    pub const DrawPixmapFragments = drawPixmapFragments;

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
    pub fn drawPixmapFragments(self: QStylePainter, fragments: anytype, fragmentCount: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `drawImage` instead
    ///
    pub const DrawImage = drawImage;

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
    pub fn drawImage(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawImage2` instead
    ///
    pub const DrawImage2 = drawImage2;

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
    pub fn drawImage2(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage2(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `drawImage3` instead
    ///
    pub const DrawImage3 = drawImage3;

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
    pub fn drawImage3(self: QStylePainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawImage4` instead
    ///
    pub const DrawImage4 = drawImage4;

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
    pub fn drawImage4(self: QStylePainter, p: anytype, image: anytype, sr: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage4(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawImage5` instead
    ///
    pub const DrawImage5 = drawImage5;

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
    pub fn drawImage5(self: QStylePainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage5(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage6` instead
    ///
    pub const DrawImage6 = drawImage6;

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
    pub fn drawImage6(self: QStylePainter, r: anytype, image: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage6(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage7` instead
    ///
    pub const DrawImage7 = drawImage7;

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
    pub fn drawImage7(self: QStylePainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage7(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage8` instead
    ///
    pub const DrawImage8 = drawImage8;

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
    pub fn drawImage8(self: QStylePainter, p: anytype, image: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage8(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `drawImage9` instead
    ///
    pub const DrawImage9 = drawImage9;

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
    pub fn drawImage9(self: QStylePainter, x: i32, y: i32, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

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
    pub fn setLayoutDirection(self: QStylePainter, direction: i32) void {
        qtc.QPainter_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: QStylePainter) i32 {
        return qtc.QPainter_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `drawGlyphRun` instead
    ///
    pub const DrawGlyphRun = drawGlyphRun;

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
    pub fn drawGlyphRun(self: QStylePainter, position: anytype, glyphRun: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(glyphRun)._is_QGlyphRun;
        qtc.QPainter_DrawGlyphRun(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(glyphRun.ptr));
    }

    /// ### DEPRECATED: Use `drawStaticText` instead
    ///
    pub const DrawStaticText = drawStaticText;

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
    pub fn drawStaticText(self: QStylePainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPointF;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// ### DEPRECATED: Use `drawStaticText2` instead
    ///
    pub const DrawStaticText2 = drawStaticText2;

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
    pub fn drawStaticText2(self: QStylePainter, topLeftPosition: anytype, staticText: anytype) void {
        comptime _ = @TypeOf(topLeftPosition)._is_QPoint;
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText2(@ptrCast(self.ptr), @ptrCast(topLeftPosition.ptr), @ptrCast(staticText.ptr));
    }

    /// ### DEPRECATED: Use `drawStaticText3` instead
    ///
    pub const DrawStaticText3 = drawStaticText3;

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
    pub fn drawStaticText3(self: QStylePainter, left: i32, top: i32, staticText: anytype) void {
        comptime _ = @TypeOf(staticText)._is_QStaticText;
        qtc.QPainter_DrawStaticText3(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @ptrCast(staticText.ptr));
    }

    /// ### DEPRECATED: Use `drawText` instead
    ///
    pub const DrawText = drawText;

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
    pub fn drawText(self: QStylePainter, p: anytype, s: []const u8) void {
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
    pub fn drawText2(self: QStylePainter, p: anytype, s: []const u8) void {
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
    pub fn drawText3(self: QStylePainter, x: i32, y: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QPainter_DrawText3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), s_str);
    }

    /// ### DEPRECATED: Use `drawText4` instead
    ///
    pub const DrawText4 = drawText4;

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
    pub fn drawText4(self: QStylePainter, p: anytype, str: []const u8, tf: i32, justificationPadding: i32) void {
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
    pub fn drawText5(self: QStylePainter, r: anytype, flags: i32, text: []const u8) void {
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
    pub fn drawText6(self: QStylePainter, r: anytype, flags: i32, text: []const u8) void {
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
    pub fn drawText7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainter_DrawText7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str);
    }

    /// ### DEPRECATED: Use `drawText8` instead
    ///
    pub const DrawText8 = drawText8;

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
    pub fn drawText8(self: QStylePainter, r: anytype, text: []const u8) void {
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
    pub fn boundingRect(self: QStylePainter, rect: anytype, flags: i32, text: []const u8) QRectF {
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
    pub fn boundingRect2(self: QStylePainter, rect: anytype, flags: i32, text: []const u8) QRect {
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
    pub fn boundingRect3(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPainter_BoundingRect3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str) };
    }

    /// ### DEPRECATED: Use `boundingRect4` instead
    ///
    pub const BoundingRect4 = boundingRect4;

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
    pub fn boundingRect4(self: QStylePainter, rect: anytype, text: []const u8) QRectF {
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
    pub fn drawTextItem(self: QStylePainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// ### DEPRECATED: Use `drawTextItem2` instead
    ///
    pub const DrawTextItem2 = drawTextItem2;

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
    pub fn drawTextItem2(self: QStylePainter, x: i32, y: i32, ti: anytype) void {
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(ti.ptr));
    }

    /// ### DEPRECATED: Use `drawTextItem3` instead
    ///
    pub const DrawTextItem3 = drawTextItem3;

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
    pub fn drawTextItem3(self: QStylePainter, p: anytype, ti: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(ti)._is_QTextItem;
        qtc.QPainter_DrawTextItem3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(ti.ptr));
    }

    /// ### DEPRECATED: Use `fillRect` instead
    ///
    pub const FillRect = fillRect;

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
    pub fn fillRect(self: QStylePainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `fillRect2` instead
    ///
    pub const FillRect2 = fillRect2;

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
    pub fn fillRect2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype) void {
        comptime _ = @TypeOf(param5)._is_QBrush;
        qtc.QPainter_FillRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr));
    }

    /// ### DEPRECATED: Use `fillRect3` instead
    ///
    pub const FillRect3 = fillRect3;

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
    pub fn fillRect3(self: QStylePainter, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QBrush;
        qtc.QPainter_FillRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `fillRect4` instead
    ///
    pub const FillRect4 = fillRect4;

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
    pub fn fillRect4(self: QStylePainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect4(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fillRect5` instead
    ///
    pub const FillRect5 = fillRect5;

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
    pub fn fillRect5(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fillRect6` instead
    ///
    pub const FillRect6 = fillRect6;

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
    pub fn fillRect6(self: QStylePainter, param1: anytype, color: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QPainter_FillRect6(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fillRect7` instead
    ///
    pub const FillRect7 = fillRect7;

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
    pub fn fillRect7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, c: i32) void {
        qtc.QPainter_FillRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(c));
    }

    /// ### DEPRECATED: Use `fillRect8` instead
    ///
    pub const FillRect8 = fillRect8;

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
    pub fn fillRect8(self: QStylePainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect8(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `fillRect9` instead
    ///
    pub const FillRect9 = fillRect9;

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
    pub fn fillRect9(self: QStylePainter, r: anytype, c: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect9(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `fillRect10` instead
    ///
    pub const FillRect10 = fillRect10;

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
    /// ` _style: qnamespace_enums.BrushStyle `
    ///
    pub fn fillRect10(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, _style: i32) void {
        qtc.QPainter_FillRect10(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `fillRect11` instead
    ///
    pub const FillRect11 = fillRect11;

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
    /// ` _style: qnamespace_enums.BrushStyle `
    ///
    pub fn fillRect11(self: QStylePainter, r: anytype, _style: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect11(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `fillRect12` instead
    ///
    pub const FillRect12 = fillRect12;

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
    /// ` _style: qnamespace_enums.BrushStyle `
    ///
    pub fn fillRect12(self: QStylePainter, r: anytype, _style: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect12(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `fillRect13` instead
    ///
    pub const FillRect13 = fillRect13;

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
    pub fn fillRect13(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, preset: i32) void {
        qtc.QPainter_FillRect13(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `fillRect14` instead
    ///
    pub const FillRect14 = fillRect14;

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
    pub fn fillRect14(self: QStylePainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPainter_FillRect14(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `fillRect15` instead
    ///
    pub const FillRect15 = fillRect15;

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
    pub fn fillRect15(self: QStylePainter, r: anytype, preset: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPainter_FillRect15(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `eraseRect` instead
    ///
    pub const EraseRect = eraseRect;

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
    pub fn eraseRect(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_EraseRect(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `eraseRect2` instead
    ///
    pub const EraseRect2 = eraseRect2;

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
    pub fn eraseRect2(self: QStylePainter, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QPainter_EraseRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `eraseRect3` instead
    ///
    pub const EraseRect3 = eraseRect3;

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
    pub fn eraseRect3(self: QStylePainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_EraseRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setRenderHint` instead
    ///
    pub const SetRenderHint = setRenderHint;

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
    pub fn setRenderHint(self: QStylePainter, hint: i32) void {
        qtc.QPainter_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setRenderHints` instead
    ///
    pub const SetRenderHints = setRenderHints;

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
    pub fn setRenderHints(self: QStylePainter, hints: i32) void {
        qtc.QPainter_SetRenderHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `renderHints` instead
    ///
    pub const RenderHints = renderHints;

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
    pub fn renderHints(self: QStylePainter) i32 {
        return qtc.QPainter_RenderHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `testRenderHint` instead
    ///
    pub const TestRenderHint = testRenderHint;

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
    pub fn testRenderHint(self: QStylePainter, hint: i32) bool {
        return qtc.QPainter_TestRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn paintEngine(self: QStylePainter) QPaintEngine {
        return .{ .ptr = qtc.QPainter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `beginNativePainting` instead
    ///
    pub const BeginNativePainting = beginNativePainting;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn beginNativePainting(self: QStylePainter) void {
        qtc.QPainter_BeginNativePainting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endNativePainting` instead
    ///
    pub const EndNativePainting = endNativePainting;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    pub fn endNativePainting(self: QStylePainter) void {
        qtc.QPainter_EndNativePainting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect22` instead
    ///
    pub const SetClipRect22 = setClipRect22;

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
    pub fn setClipRect22(self: QStylePainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QPainter_SetClipRect22(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipRect23` instead
    ///
    pub const SetClipRect23 = setClipRect23;

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
    pub fn setClipRect23(self: QStylePainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QPainter_SetClipRect23(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipRect5` instead
    ///
    pub const SetClipRect5 = setClipRect5;

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
    pub fn setClipRect5(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, op: i32) void {
        qtc.QPainter_SetClipRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipRegion2` instead
    ///
    pub const SetClipRegion2 = setClipRegion2;

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
    pub fn setClipRegion2(self: QStylePainter, param1: anytype, op: i32) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QPainter_SetClipRegion2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setClipPath2` instead
    ///
    pub const SetClipPath2 = setClipPath2;

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
    pub fn setClipPath2(self: QStylePainter, path: anytype, op: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainter_SetClipPath2(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `setTransform2` instead
    ///
    pub const SetTransform2 = setTransform2;

    /// Inherited from QPainter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStylePainter `
    ///
    /// ` _transform: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn setTransform2(self: QStylePainter, _transform: anytype, combine: bool) void {
        comptime _ = @TypeOf(_transform)._is_QTransform;
        qtc.QPainter_SetTransform2(@ptrCast(self.ptr), @ptrCast(_transform.ptr), combine);
    }

    /// ### DEPRECATED: Use `setWorldTransform2` instead
    ///
    pub const SetWorldTransform2 = setWorldTransform2;

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
    pub fn setWorldTransform2(self: QStylePainter, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QPainter_SetWorldTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### DEPRECATED: Use `drawPolygon32` instead
    ///
    pub const DrawPolygon32 = drawPolygon32;

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
    pub fn drawPolygon32(self: QStylePainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPainter_DrawPolygon32(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// ### DEPRECATED: Use `drawPolygon33` instead
    ///
    pub const DrawPolygon33 = drawPolygon33;

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
    pub fn drawPolygon33(self: QStylePainter, points: anytype, pointCount: i32, fillRule: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPainter_DrawPolygon33(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(fillRule));
    }

    /// ### DEPRECATED: Use `drawRoundedRect4` instead
    ///
    pub const DrawRoundedRect4 = drawRoundedRect4;

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
    pub fn drawRoundedRect4(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainter_DrawRoundedRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawRoundedRect7` instead
    ///
    pub const DrawRoundedRect7 = drawRoundedRect7;

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
    pub fn drawRoundedRect7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainter_DrawRoundedRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawRoundedRect42` instead
    ///
    pub const DrawRoundedRect42 = drawRoundedRect42;

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
    pub fn drawRoundedRect42(self: QStylePainter, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPainter_DrawRoundedRect42(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap32` instead
    ///
    pub const DrawTiledPixmap32 = drawTiledPixmap32;

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
    pub fn drawTiledPixmap32(self: QStylePainter, rect: anytype, pm: anytype, offset: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainter_DrawTiledPixmap32(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pm.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap6` instead
    ///
    pub const DrawTiledPixmap6 = drawTiledPixmap6;

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
    pub fn drawTiledPixmap6(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap7` instead
    ///
    pub const DrawTiledPixmap7 = drawTiledPixmap7;

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
    pub fn drawTiledPixmap7(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, param5: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(param5)._is_QPixmap;
        qtc.QPainter_DrawTiledPixmap7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param5.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap33` instead
    ///
    pub const DrawTiledPixmap33 = drawTiledPixmap33;

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
    pub fn drawTiledPixmap33(self: QStylePainter, param1: anytype, param2: anytype, param3: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        comptime _ = @TypeOf(param2)._is_QPixmap;
        comptime _ = @TypeOf(param3)._is_QPoint;
        qtc.QPainter_DrawTiledPixmap33(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `drawPixmapFragments4` instead
    ///
    pub const DrawPixmapFragments4 = drawPixmapFragments4;

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
    pub fn drawPixmapFragments4(self: QStylePainter, fragments: anytype, fragmentCount: i32, pixmap: anytype, hints: i32) void {
        comptime _ = @TypeOf(fragments)._is_QPainter__PixmapFragment;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QPainter_DrawPixmapFragments4(@ptrCast(self.ptr), @ptrCast(fragments.ptr), @bitCast(fragmentCount), @ptrCast(pixmap.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `drawImage42` instead
    ///
    pub const DrawImage42 = drawImage42;

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
    pub fn drawImage42(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRectF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QPainter_DrawImage42(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage43` instead
    ///
    pub const DrawImage43 = drawImage43;

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
    pub fn drawImage43(self: QStylePainter, targetRect: anytype, image: anytype, sourceRect: anytype, flags: i32) void {
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QPainter_DrawImage43(@ptrCast(self.ptr), @ptrCast(targetRect.ptr), @ptrCast(image.ptr), @ptrCast(sourceRect.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage44` instead
    ///
    pub const DrawImage44 = drawImage44;

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
    pub fn drawImage44(self: QStylePainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPainter_DrawImage44(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage45` instead
    ///
    pub const DrawImage45 = drawImage45;

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
    pub fn drawImage45(self: QStylePainter, p: anytype, image: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRect;
        qtc.QPainter_DrawImage45(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(image.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawImage46` instead
    ///
    pub const DrawImage46 = drawImage46;

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
    pub fn drawImage46(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage46(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx));
    }

    /// ### DEPRECATED: Use `drawImage52` instead
    ///
    pub const DrawImage52 = drawImage52;

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
    pub fn drawImage52(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage52(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `drawImage62` instead
    ///
    pub const DrawImage62 = drawImage62;

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
    pub fn drawImage62(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage62(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw));
    }

    /// ### DEPRECATED: Use `drawImage72` instead
    ///
    pub const DrawImage72 = drawImage72;

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
    pub fn drawImage72(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage72(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh));
    }

    /// ### DEPRECATED: Use `drawImage82` instead
    ///
    pub const DrawImage82 = drawImage82;

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
    pub fn drawImage82(self: QStylePainter, x: i32, y: i32, image: anytype, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QPainter_DrawImage82(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(image.ptr), @bitCast(sx), @bitCast(sy), @bitCast(sw), @bitCast(sh), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `drawText42` instead
    ///
    pub const DrawText42 = drawText42;

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
    pub fn drawText42(self: QStylePainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
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
    pub fn drawText43(self: QStylePainter, r: anytype, flags: i32, text: []const u8, br: anytype) void {
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
    pub fn drawText72(self: QStylePainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: anytype) void {
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
    pub fn drawText32(self: QStylePainter, r: anytype, text: []const u8, o: anytype) void {
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
    pub fn boundingRect32(self: QStylePainter, rect: anytype, text: []const u8, o: anytype) QRectF {
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
    pub fn setRenderHint2(self: QStylePainter, hint: i32, on: bool) void {
        qtc.QPainter_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), on);
    }

    /// ### DEPRECATED: Use `setRenderHints2` instead
    ///
    pub const SetRenderHints2 = setRenderHints2;

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
    pub fn setRenderHints2(self: QStylePainter, hints: i32, on: bool) void {
        qtc.QPainter_SetRenderHints2(@ptrCast(self.ptr), @bitCast(hints), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstylepainter.html#dtor.QStylePainter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStylePainter `
    ///
    pub fn delete(self: QStylePainter) void {
        qtc.QStylePainter_Delete(@ptrCast(self.ptr));
    }
};
