const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintengine_enums = enums;
const qpainter_enums = @import("libqpainter.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextitem.html
pub const qtextitem = struct {
    /// New constructs a new QTextItem object.
    ///
    /// ``` other: QtC.QTextItem ```
    pub fn New(other: ?*anyopaque) QtC.QTextItem {
        return qtc.QTextItem_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextItem object and invalidates the source QTextItem object.
    ///
    /// ``` other: QtC.QTextItem ```
    pub fn New2(other: ?*anyopaque) QtC.QTextItem {
        return qtc.QTextItem_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextItem object.
    ///
    ///
    pub fn New3() QtC.QTextItem {
        return qtc.QTextItem_new3();
    }

    /// New4 constructs a new QTextItem object.
    ///
    /// ``` param1: QtC.QTextItem ```
    pub fn New4(param1: ?*anyopaque) QtC.QTextItem {
        return qtc.QTextItem_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTextItem, other: QtC.QTextItem ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextItem_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTextItem, other: QtC.QTextItem ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextItem_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#descent)
    ///
    /// ``` self: QtC.QTextItem ```
    pub fn Descent(self: ?*anyopaque) f64 {
        return qtc.QTextItem_Descent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#ascent)
    ///
    /// ``` self: QtC.QTextItem ```
    pub fn Ascent(self: ?*anyopaque) f64 {
        return qtc.QTextItem_Ascent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#width)
    ///
    /// ``` self: QtC.QTextItem ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QTextItem_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#renderFlags)
    ///
    /// ``` self: QtC.QTextItem ```
    ///
    /// Returns: ``` flag of qpaintengine_enums.RenderFlag ```
    pub fn RenderFlags(self: ?*anyopaque) i64 {
        return qtc.QTextItem_RenderFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#text)
    ///
    /// ``` self: QtC.QTextItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#font)
    ///
    /// ``` self: QtC.QTextItem ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextItem_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#dtor.QTextItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintengine.html
pub const qpaintengine = struct {
    /// New constructs a new QPaintEngine object.
    ///
    ///
    pub fn New() QtC.QPaintEngine {
        return qtc.QPaintEngine_new();
    }

    /// New2 constructs a new QPaintEngine object.
    ///
    /// ``` features: flag of qpaintengine_enums.PaintEngineFeature ```
    pub fn New2(features: i64) QtC.QPaintEngine {
        return qtc.QPaintEngine_new2(@intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#isActive)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QPaintEngine_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setActive)
    ///
    /// ``` self: QtC.QPaintEngine, newState: bool ```
    pub fn SetActive(self: ?*anyopaque, newState: bool) void {
        qtc.QPaintEngine_SetActive(@ptrCast(self), newState);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// ``` self: QtC.QPaintEngine, pdev: QtC.QPaintDevice ```
    pub fn Begin(self: ?*anyopaque, pdev: ?*anyopaque) bool {
        return qtc.QPaintEngine_Begin(@ptrCast(self), @ptrCast(pdev));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, pdev: QtC.QPaintDevice) callconv(.c) bool ```
    pub fn OnBegin(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPaintEngine_OnBegin(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, pdev: QtC.QPaintDevice ```
    pub fn QBaseBegin(self: ?*anyopaque, pdev: ?*anyopaque) bool {
        return qtc.QPaintEngine_QBaseBegin(@ptrCast(self), @ptrCast(pdev));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn End(self: ?*anyopaque) bool {
        return qtc.QPaintEngine_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn () callconv(.c) bool ```
    pub fn OnEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPaintEngine_OnEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn QBaseEnd(self: ?*anyopaque) bool {
        return qtc.QPaintEngine_QBaseEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// ``` self: QtC.QPaintEngine, state: QtC.QPaintEngineState ```
    pub fn UpdateState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QPaintEngine_UpdateState(@ptrCast(self), @ptrCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, state: QtC.QPaintEngineState) callconv(.c) void ```
    pub fn OnUpdateState(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnUpdateState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, state: QtC.QPaintEngineState ```
    pub fn QBaseUpdateState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseUpdateState(@ptrCast(self), @ptrCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// ``` self: QtC.QPaintEngine, rects: QtC.QRect, rectCount: i32 ```
    pub fn DrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_DrawRects(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, rects: QtC.QRect, rectCount: i32) callconv(.c) void ```
    pub fn OnDrawRects(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, rects: QtC.QRect, rectCount: i32 ```
    pub fn QBaseDrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_QBaseDrawRects(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// ``` self: QtC.QPaintEngine, rects: QtC.QRectF, rectCount: i32 ```
    pub fn DrawRects2(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_DrawRects2(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, rects: QtC.QRectF, rectCount: i32) callconv(.c) void ```
    pub fn OnDrawRects2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, rects: QtC.QRectF, rectCount: i32 ```
    pub fn QBaseDrawRects2(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        qtc.QPaintEngine_QBaseDrawRects2(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// ``` self: QtC.QPaintEngine, lines: QtC.QLine, lineCount: i32 ```
    pub fn DrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_DrawLines(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, lines: QtC.QLine, lineCount: i32) callconv(.c) void ```
    pub fn OnDrawLines(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, lines: QtC.QLine, lineCount: i32 ```
    pub fn QBaseDrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_QBaseDrawLines(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// ``` self: QtC.QPaintEngine, lines: QtC.QLineF, lineCount: i32 ```
    pub fn DrawLines2(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_DrawLines2(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, lines: QtC.QLineF, lineCount: i32) callconv(.c) void ```
    pub fn OnDrawLines2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, lines: QtC.QLineF, lineCount: i32 ```
    pub fn QBaseDrawLines2(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        qtc.QPaintEngine_QBaseDrawLines2(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF ```
    pub fn DrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_DrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, r: QtC.QRectF) callconv(.c) void ```
    pub fn OnDrawEllipse(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF ```
    pub fn QBaseDrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRect ```
    pub fn DrawEllipse2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_DrawEllipse2(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, r: QtC.QRect) callconv(.c) void ```
    pub fn OnDrawEllipse2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRect ```
    pub fn QBaseDrawEllipse2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawEllipse2(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// ``` self: QtC.QPaintEngine, path: QtC.QPainterPath ```
    pub fn DrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPaintEngine_DrawPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, path: QtC.QPainterPath) callconv(.c) void ```
    pub fn OnDrawPath(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPath(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, path: QtC.QPainterPath ```
    pub fn QBaseDrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPointF, pointCount: i32 ```
    pub fn DrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_DrawPoints(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, points: QtC.QPointF, pointCount: i32) callconv(.c) void ```
    pub fn OnDrawPoints(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPointF, pointCount: i32 ```
    pub fn QBaseDrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_QBaseDrawPoints(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPoint, pointCount: i32 ```
    pub fn DrawPoints2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_DrawPoints2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, points: QtC.QPoint, pointCount: i32) callconv(.c) void ```
    pub fn OnDrawPoints2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPoint, pointCount: i32 ```
    pub fn QBaseDrawPoints2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        qtc.QPaintEngine_QBaseDrawPoints2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPointF, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode ```
    pub fn DrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i64) void {
        qtc.QPaintEngine_DrawPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, points: QtC.QPointF, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode) callconv(.c) void ```
    pub fn OnDrawPolygon(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPointF, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode ```
    pub fn QBaseDrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i64) void {
        qtc.QPaintEngine_QBaseDrawPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPoint, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode ```
    pub fn DrawPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i64) void {
        qtc.QPaintEngine_DrawPolygon2(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, points: QtC.QPoint, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode) callconv(.c) void ```
    pub fn OnDrawPolygon2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, points: QtC.QPoint, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode ```
    pub fn QBaseDrawPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, mode: i64) void {
        qtc.QPaintEngine_QBaseDrawPolygon2(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF, pm: QtC.QPixmap, sr: QtC.QRectF ```
    pub fn DrawPixmap(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPaintEngine_DrawPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, r: QtC.QRectF, pm: QtC.QPixmap, sr: QtC.QRectF) callconv(.c) void ```
    pub fn OnDrawPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF, pm: QtC.QPixmap, sr: QtC.QRectF ```
    pub fn QBaseDrawPixmap(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
    ///
    /// ``` self: QtC.QPaintEngine, p: QtC.QPointF, textItem: QtC.QTextItem ```
    pub fn DrawTextItem(self: ?*anyopaque, p: ?*anyopaque, textItem: ?*anyopaque) void {
        qtc.QPaintEngine_DrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(textItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, p: QtC.QPointF, textItem: QtC.QTextItem) callconv(.c) void ```
    pub fn OnDrawTextItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTextItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, p: QtC.QPointF, textItem: QtC.QTextItem ```
    pub fn QBaseDrawTextItem(self: ?*anyopaque, p: ?*anyopaque, textItem: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(textItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF, pixmap: QtC.QPixmap, s: QtC.QPointF ```
    pub fn DrawTiledPixmap(self: ?*anyopaque, r: ?*anyopaque, pixmap: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QPaintEngine_DrawTiledPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pixmap), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, r: QtC.QRectF, pixmap: QtC.QPixmap, s: QtC.QPointF) callconv(.c) void ```
    pub fn OnDrawTiledPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTiledPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF, pixmap: QtC.QPixmap, s: QtC.QPointF ```
    pub fn QBaseDrawTiledPixmap(self: ?*anyopaque, r: ?*anyopaque, pixmap: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QPaintEngine_QBaseDrawTiledPixmap(@ptrCast(self), @ptrCast(r), @ptrCast(pixmap), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF, pm: QtC.QImage, sr: QtC.QRectF, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn DrawImage(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque, flags: i64) void {
        qtc.QPaintEngine_DrawImage(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, r: QtC.QRectF, pm: QtC.QImage, sr: QtC.QRectF, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) void ```
    pub fn OnDrawImage(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawImage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, r: QtC.QRectF, pm: QtC.QImage, sr: QtC.QRectF, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn QBaseDrawImage(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque, flags: i64) void {
        qtc.QPaintEngine_QBaseDrawImage(@ptrCast(self), @ptrCast(r), @ptrCast(pm), @ptrCast(sr), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setPaintDevice)
    ///
    /// ``` self: QtC.QPaintEngine, device: QtC.QPaintDevice ```
    pub fn SetPaintDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QPaintEngine_SetPaintDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#paintDevice)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn PaintDevice(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPaintEngine_PaintDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setSystemClip)
    ///
    /// ``` self: QtC.QPaintEngine, baseClip: QtC.QRegion ```
    pub fn SetSystemClip(self: ?*anyopaque, baseClip: ?*anyopaque) void {
        qtc.QPaintEngine_SetSystemClip(@ptrCast(self), @ptrCast(baseClip));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#systemClip)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn SystemClip(self: ?*anyopaque) QtC.QRegion {
        return qtc.QPaintEngine_SystemClip(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setSystemRect)
    ///
    /// ``` self: QtC.QPaintEngine, rect: QtC.QRect ```
    pub fn SetSystemRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPaintEngine_SetSystemRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#systemRect)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn SystemRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPaintEngine_SystemRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn CoordinateOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QPaintEngine_CoordinateOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn () callconv(.c) QtC.QPoint ```
    pub fn OnCoordinateOffset(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPoint) void {
        qtc.QPaintEngine_OnCoordinateOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn QBaseCoordinateOffset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QPaintEngine_QBaseCoordinateOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
    ///
    /// ``` self: QtC.QPaintEngine ```
    ///
    /// Returns: ``` qpaintengine_enums.Type ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QPaintEngine_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QPaintEngine_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine ```
    ///
    /// Returns: ``` qpaintengine_enums.Type ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return qtc.QPaintEngine_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#fix_neg_rect)
    ///
    /// ``` self: QtC.QPaintEngine, x: *i32, y: *i32, w: *i32, h: *i32 ```
    pub fn FixNegRect(self: ?*anyopaque, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QPaintEngine_FixNegRect(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#testDirty)
    ///
    /// ``` self: QtC.QPaintEngine, df: flag of qpaintengine_enums.DirtyFlag ```
    pub fn TestDirty(self: ?*anyopaque, df: i64) bool {
        return qtc.QPaintEngine_TestDirty(@ptrCast(self), @intCast(df));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setDirty)
    ///
    /// ``` self: QtC.QPaintEngine, df: flag of qpaintengine_enums.DirtyFlag ```
    pub fn SetDirty(self: ?*anyopaque, df: i64) void {
        qtc.QPaintEngine_SetDirty(@ptrCast(self), @intCast(df));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#clearDirty)
    ///
    /// ``` self: QtC.QPaintEngine, df: flag of qpaintengine_enums.DirtyFlag ```
    pub fn ClearDirty(self: ?*anyopaque, df: i64) void {
        qtc.QPaintEngine_ClearDirty(@ptrCast(self), @intCast(df));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#hasFeature)
    ///
    /// ``` self: QtC.QPaintEngine, feature: flag of qpaintengine_enums.PaintEngineFeature ```
    pub fn HasFeature(self: ?*anyopaque, feature: i64) bool {
        return qtc.QPaintEngine_HasFeature(@ptrCast(self), @intCast(feature));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#painter)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn Painter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPaintEngine_Painter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#syncState)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn SyncState(self: ?*anyopaque) void {
        qtc.QPaintEngine_SyncState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#isExtended)
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn IsExtended(self: ?*anyopaque) bool {
        return qtc.QPaintEngine_IsExtended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// ``` self: QtC.QPaintEngine, size: QtC.QSize ```
    pub fn CreatePixmap(self: ?*anyopaque, size: QtC.QSize) QtC.QPixmap {
        return qtc.QPaintEngine_CreatePixmap(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, size: QtC.QSize) callconv(.c) QtC.QPixmap ```
    pub fn OnCreatePixmap(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QSize) callconv(.c) QtC.QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, size: QtC.QSize ```
    pub fn QBaseCreatePixmap(self: ?*anyopaque, size: QtC.QSize) QtC.QPixmap {
        return qtc.QPaintEngine_QBaseCreatePixmap(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
    ///
    /// ``` self: QtC.QPaintEngine, image: QtC.QImage, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn CreatePixmapFromImage(self: ?*anyopaque, image: QtC.QImage, flags: i64) QtC.QPixmap {
        return qtc.QPaintEngine_CreatePixmapFromImage(@ptrCast(self), @ptrCast(image), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPaintEngine, slot: fn (self: QtC.QPaintEngine, image: QtC.QImage, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) QtC.QPixmap ```
    pub fn OnCreatePixmapFromImage(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QImage, i64) callconv(.c) QtC.QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmapFromImage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPaintEngine, image: QtC.QImage, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn QBaseCreatePixmapFromImage(self: ?*anyopaque, image: QtC.QImage, flags: i64) QtC.QPixmap {
        return qtc.QPaintEngine_QBaseCreatePixmapFromImage(@ptrCast(self), @ptrCast(image), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#dtor.QPaintEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPaintEngine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEngine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintenginestate.html
pub const qpaintenginestate = struct {
    /// New constructs a new QPaintEngineState object.
    ///
    /// ``` other: QtC.QPaintEngineState ```
    pub fn New(other: ?*anyopaque) QtC.QPaintEngineState {
        return qtc.QPaintEngineState_new(@ptrCast(other));
    }

    /// New2 constructs a new QPaintEngineState object and invalidates the source QPaintEngineState object.
    ///
    /// ``` other: QtC.QPaintEngineState ```
    pub fn New2(other: ?*anyopaque) QtC.QPaintEngineState {
        return qtc.QPaintEngineState_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPaintEngineState, other: QtC.QPaintEngineState ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPaintEngineState_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPaintEngineState, other: QtC.QPaintEngineState ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPaintEngineState_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#state)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    ///
    /// Returns: ``` flag of qpaintengine_enums.DirtyFlag ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QPaintEngineState_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#pen)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QPaintEngineState_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brush)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPaintEngineState_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brushOrigin)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn BrushOrigin(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPaintEngineState_BrushOrigin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundBrush)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QPaintEngineState_BackgroundBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundMode)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    ///
    /// Returns: ``` qnamespace_enums.BGMode ```
    pub fn BackgroundMode(self: ?*anyopaque) i64 {
        return qtc.QPaintEngineState_BackgroundMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#font)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QPaintEngineState_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#transform)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QPaintEngineState_Transform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipOperation)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    ///
    /// Returns: ``` qnamespace_enums.ClipOperation ```
    pub fn ClipOperation(self: ?*anyopaque) i64 {
        return qtc.QPaintEngineState_ClipOperation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipRegion)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn ClipRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QPaintEngineState_ClipRegion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipPath)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPaintEngineState_ClipPath(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#isClipEnabled)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn IsClipEnabled(self: ?*anyopaque) bool {
        return qtc.QPaintEngineState_IsClipEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#renderHints)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    ///
    /// Returns: ``` flag of qpainter_enums.RenderHint ```
    pub fn RenderHints(self: ?*anyopaque) i64 {
        return qtc.QPaintEngineState_RenderHints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#compositionMode)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    ///
    /// Returns: ``` qpainter_enums.CompositionMode ```
    pub fn CompositionMode(self: ?*anyopaque) i64 {
        return qtc.QPaintEngineState_CompositionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#opacity)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QPaintEngineState_Opacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#painter)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn Painter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPaintEngineState_Painter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brushNeedsResolving)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn BrushNeedsResolving(self: ?*anyopaque) bool {
        return qtc.QPaintEngineState_BrushNeedsResolving(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#penNeedsResolving)
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn PenNeedsResolving(self: ?*anyopaque) bool {
        return qtc.QPaintEngineState_PenNeedsResolving(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#dtor.QPaintEngineState)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPaintEngineState ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEngineState_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintengine.html#types
pub const enums = struct {
    pub const RenderFlag = enum {
        pub const RightToLeft: i32 = 1;
        pub const Overline: i32 = 16;
        pub const Underline: i32 = 32;
        pub const StrikeOut: i32 = 64;
        pub const Dummy: i64 = 4294967295;
    };

    pub const PaintEngineFeature = enum {
        pub const PrimitiveTransform: i32 = 1;
        pub const PatternTransform: i32 = 2;
        pub const PixmapTransform: i32 = 4;
        pub const PatternBrush: i32 = 8;
        pub const LinearGradientFill: i32 = 16;
        pub const RadialGradientFill: i32 = 32;
        pub const ConicalGradientFill: i32 = 64;
        pub const AlphaBlend: i32 = 128;
        pub const PorterDuff: i32 = 256;
        pub const PainterPaths: i32 = 512;
        pub const Antialiasing: i32 = 1024;
        pub const BrushStroke: i32 = 2048;
        pub const ConstantOpacity: i32 = 4096;
        pub const MaskedBrush: i32 = 8192;
        pub const PerspectiveTransform: i32 = 16384;
        pub const BlendModes: i32 = 32768;
        pub const ObjectBoundingModeGradients: i32 = 65536;
        pub const RasterOpModes: i32 = 131072;
        pub const PaintOutsidePaintEvent: i32 = 536870912;
        pub const AllFeatures: i64 = 4294967295;
    };

    pub const DirtyFlag = enum {
        pub const DirtyPen: i32 = 1;
        pub const DirtyBrush: i32 = 2;
        pub const DirtyBrushOrigin: i32 = 4;
        pub const DirtyFont: i32 = 8;
        pub const DirtyBackground: i32 = 16;
        pub const DirtyBackgroundMode: i32 = 32;
        pub const DirtyTransform: i32 = 64;
        pub const DirtyClipRegion: i32 = 128;
        pub const DirtyClipPath: i32 = 256;
        pub const DirtyHints: i32 = 512;
        pub const DirtyCompositionMode: i32 = 1024;
        pub const DirtyClipEnabled: i32 = 2048;
        pub const DirtyOpacity: i32 = 4096;
        pub const AllDirty: i32 = 65535;
    };

    pub const PolygonDrawMode = enum {
        pub const OddEvenMode: i32 = 0;
        pub const WindingMode: i32 = 1;
        pub const ConvexMode: i32 = 2;
        pub const PolylineMode: i32 = 3;
    };

    pub const Type = enum {
        pub const X11: i32 = 0;
        pub const Windows: i32 = 1;
        pub const QuickDraw: i32 = 2;
        pub const CoreGraphics: i32 = 3;
        pub const MacPrinter: i32 = 4;
        pub const QWindowSystem: i32 = 5;
        pub const OpenGL: i32 = 6;
        pub const Picture: i32 = 7;
        pub const SVG: i32 = 8;
        pub const Raster: i32 = 9;
        pub const Direct3D: i32 = 10;
        pub const Pdf: i32 = 11;
        pub const OpenVG: i32 = 12;
        pub const OpenGL2: i32 = 13;
        pub const PaintBuffer: i32 = 14;
        pub const Blitter: i32 = 15;
        pub const Direct2D: i32 = 16;
        pub const User: i32 = 50;
        pub const MaxUser: i32 = 100;
    };
};
