const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFont = @import("libqt6").QFont;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpainterpath_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html)
pub const QPainterPath = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPainterPath,

    pub const _is_QPainterPath = {};

    /// New constructs a new QPainterPath object.
    ///
    pub fn New() QPainterPath {
        return .{ .ptr = qtc.QPainterPath_new() };
    }

    /// New2 constructs a new QPainterPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startPoint: QPointF `
    ///
    pub fn New2(startPoint: anytype) QPainterPath {
        comptime _ = @TypeOf(startPoint)._is_QPointF;
        return .{ .ptr = qtc.QPainterPath_new2(@ptrCast(startPoint.ptr)) };
    }

    /// New3 constructs a new QPainterPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPainterPath `
    ///
    pub fn New3(other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorAssign(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn Swap(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn Clear(self: QPainterPath) void {
        qtc.QPainterPath_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` size: i32 `
    ///
    pub fn Reserve(self: QPainterPath, size: i32) void {
        qtc.QPainterPath_Reserve(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn Capacity(self: QPainterPath) i32 {
        return qtc.QPainterPath_Capacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn CloseSubpath(self: QPainterPath) void {
        qtc.QPainterPath_CloseSubpath(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveTo(self: QPainterPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QPainterPath_MoveTo(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MoveTo2(self: QPainterPath, x: f64, y: f64) void {
        qtc.QPainterPath_MoveTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPointF `
    ///
    pub fn LineTo(self: QPainterPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QPainterPath_LineTo(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn LineTo2(self: QPainterPath, x: f64, y: f64) void {
        qtc.QPainterPath_LineTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    /// ` angle: f64 `
    ///
    pub fn ArcMoveTo(self: QPainterPath, rect: anytype, angle: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_ArcMoveTo(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` angle: f64 `
    ///
    pub fn ArcMoveTo2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, angle: f64) void {
        qtc.QPainterPath_ArcMoveTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    /// ` startAngle: f64 `
    ///
    /// ` arcLength: f64 `
    ///
    pub fn ArcTo(self: QPainterPath, rect: anytype, startAngle: f64, arcLength: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_ArcTo(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(startAngle), @bitCast(arcLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` startAngle: f64 `
    ///
    /// ` arcLength: f64 `
    ///
    pub fn ArcTo2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, startAngle: f64, arcLength: f64) void {
        qtc.QPainterPath_ArcTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(startAngle), @bitCast(arcLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` ctrlPt1: QPointF `
    ///
    /// ` ctrlPt2: QPointF `
    ///
    /// ` endPt: QPointF `
    ///
    pub fn CubicTo(self: QPainterPath, ctrlPt1: anytype, ctrlPt2: anytype, endPt: anytype) void {
        comptime _ = @TypeOf(ctrlPt1)._is_QPointF;
        comptime _ = @TypeOf(ctrlPt2)._is_QPointF;
        comptime _ = @TypeOf(endPt)._is_QPointF;
        qtc.QPainterPath_CubicTo(@ptrCast(self.ptr), @ptrCast(ctrlPt1.ptr), @ptrCast(ctrlPt2.ptr), @ptrCast(endPt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` ctrlPt1x: f64 `
    ///
    /// ` ctrlPt1y: f64 `
    ///
    /// ` ctrlPt2x: f64 `
    ///
    /// ` ctrlPt2y: f64 `
    ///
    /// ` endPtx: f64 `
    ///
    /// ` endPty: f64 `
    ///
    pub fn CubicTo2(self: QPainterPath, ctrlPt1x: f64, ctrlPt1y: f64, ctrlPt2x: f64, ctrlPt2y: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_CubicTo2(@ptrCast(self.ptr), @bitCast(ctrlPt1x), @bitCast(ctrlPt1y), @bitCast(ctrlPt2x), @bitCast(ctrlPt2y), @bitCast(endPtx), @bitCast(endPty));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` ctrlPt: QPointF `
    ///
    /// ` endPt: QPointF `
    ///
    pub fn QuadTo(self: QPainterPath, ctrlPt: anytype, endPt: anytype) void {
        comptime _ = @TypeOf(ctrlPt)._is_QPointF;
        comptime _ = @TypeOf(endPt)._is_QPointF;
        qtc.QPainterPath_QuadTo(@ptrCast(self.ptr), @ptrCast(ctrlPt.ptr), @ptrCast(endPt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` ctrlPtx: f64 `
    ///
    /// ` ctrlPty: f64 `
    ///
    /// ` endPtx: f64 `
    ///
    /// ` endPty: f64 `
    ///
    pub fn QuadTo2(self: QPainterPath, ctrlPtx: f64, ctrlPty: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_QuadTo2(@ptrCast(self.ptr), @bitCast(ctrlPtx), @bitCast(ctrlPty), @bitCast(endPtx), @bitCast(endPty));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn CurrentPosition(self: QPainterPath) QPointF {
        return .{ .ptr = qtc.QPainterPath_CurrentPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn AddRect(self: QPainterPath, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn AddRect2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn AddEllipse(self: QPainterPath, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddEllipse(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn AddEllipse2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddEllipse2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` center: QPointF `
    ///
    /// ` rx: f64 `
    ///
    /// ` ry: f64 `
    ///
    pub fn AddEllipse3(self: QPainterPath, center: anytype, rx: f64, ry: f64) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QPainterPath_AddEllipse3(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` point: QPointF `
    ///
    /// ` f: QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddText(self: QPainterPath, point: anytype, f: anytype, text: []const u8) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        comptime _ = @TypeOf(f)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainterPath_AddText(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(f.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` f: QFont `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddText2(self: QPainterPath, x: f64, y: f64, f: anytype, text: []const u8) void {
        comptime _ = @TypeOf(f)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainterPath_AddText2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(f.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn AddPath(self: QPainterPath, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainterPath_AddPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` region: QRegion `
    ///
    pub fn AddRegion(self: QPainterPath, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QPainterPath_AddRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn AddRoundedRect(self: QPainterPath, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddRoundedRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    pub fn AddRoundedRect2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64) void {
        qtc.QPainterPath_AddRoundedRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn ConnectPath(self: QPainterPath, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainterPath_ConnectPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` pt: QPointF `
    ///
    pub fn Contains(self: QPainterPath, pt: anytype) bool {
        comptime _ = @TypeOf(pt)._is_QPointF;
        return qtc.QPainterPath_Contains(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Contains2(self: QPainterPath, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QPainterPath_Contains2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Intersects(self: QPainterPath, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QPainterPath_Intersects(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: QPainterPath, dx: f64, dy: f64) void {
        qtc.QPainterPath_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` offset: QPointF `
    ///
    pub fn Translate2(self: QPainterPath, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainterPath_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translated(self: QPainterPath, dx: f64, dy: f64) QPainterPath {
        return .{ .ptr = qtc.QPainterPath_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` offset: QPointF `
    ///
    pub fn Translated2(self: QPainterPath, offset: anytype) QPainterPath {
        comptime _ = @TypeOf(offset)._is_QPointF;
        return .{ .ptr = qtc.QPainterPath_Translated2(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn BoundingRect(self: QPainterPath) QRectF {
        return .{ .ptr = qtc.QPainterPath_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn ControlPointRect(self: QPainterPath) QRectF {
        return .{ .ptr = qtc.QPainterPath_ControlPointRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#fillRule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FillRule `
    ///
    pub fn FillRule(self: QPainterPath) i32 {
        return qtc.QPainterPath_FillRule(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn SetFillRule(self: QPainterPath, fillRule: i32) void {
        qtc.QPainterPath_SetFillRule(@ptrCast(self.ptr), @bitCast(fillRule));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn IsEmpty(self: QPainterPath) bool {
        return qtc.QPainterPath_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn ToReversed(self: QPainterPath) QPainterPath {
        return .{ .ptr = qtc.QPainterPath_ToReversed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn ElementCount(self: QPainterPath) i32 {
        return qtc.QPainterPath_ElementCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` i: i32 `
    ///
    pub fn ElementAt(self: QPainterPath, i: i32) QPainterPath__Element {
        return .{ .ptr = qtc.QPainterPath_ElementAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setElementPositionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` i: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetElementPositionAt(self: QPainterPath, i: i32, x: f64, y: f64) void {
        qtc.QPainterPath_SetElementPositionAt(@ptrCast(self.ptr), @bitCast(i), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn Length(self: QPainterPath) f64 {
        return qtc.QPainterPath_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn PercentAtLength(self: QPainterPath, t: f64) f64 {
        return qtc.QPainterPath_PercentAtLength(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn PointAtPercent(self: QPainterPath, t: f64) QPointF {
        return .{ .ptr = qtc.QPainterPath_PointAtPercent(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn AngleAtPercent(self: QPainterPath, t: f64) f64 {
        return qtc.QPainterPath_AngleAtPercent(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn SlopeAtPercent(self: QPainterPath, t: f64) f64 {
        return qtc.QPainterPath_SlopeAtPercent(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPainterPath `
    ///
    pub fn Intersects2(self: QPainterPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPainterPath;
        return qtc.QPainterPath_Intersects2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPainterPath `
    ///
    pub fn Contains3(self: QPainterPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPainterPath;
        return qtc.QPainterPath_Contains3(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` r: QPainterPath `
    ///
    pub fn United(self: QPainterPath, r: anytype) QPainterPath {
        comptime _ = @TypeOf(r)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_United(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` r: QPainterPath `
    ///
    pub fn Intersected(self: QPainterPath, r: anytype) QPainterPath {
        comptime _ = @TypeOf(r)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_Intersected(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` r: QPainterPath `
    ///
    pub fn Subtracted(self: QPainterPath, r: anytype) QPainterPath {
        comptime _ = @TypeOf(r)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_Subtracted(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn Simplified(self: QPainterPath) QPainterPath {
        return .{ .ptr = qtc.QPainterPath_Simplified(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorEqual(self: QPainterPath, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return qtc.QPainterPath_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorNotEqual(self: QPainterPath, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return qtc.QPainterPath_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorBitwiseAnd(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorBitwiseOr(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorPlus(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorPlus(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorMinus(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorMinus(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorBitwiseAndAssign(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorBitwiseOrAssign(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorPlusAssign(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn OperatorMinusAssign(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn AddRoundedRect4(self: QPainterPath, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddRoundedRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xRadius: f64 `
    ///
    /// ` yRadius: f64 `
    ///
    /// ` mode: qnamespace_enums.SizeMode `
    ///
    pub fn AddRoundedRect7(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainterPath_AddRoundedRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#dtor.QPainterPath)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainterPath `
    ///
    pub fn Delete(self: QPainterPath) void {
        qtc.QPainterPath_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html)
pub const QPainterPathStroker = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPainterPathStroker,

    pub const _is_QPainterPathStroker = {};

    /// New constructs a new QPainterPathStroker object.
    ///
    pub fn New() QPainterPathStroker {
        return .{ .ptr = qtc.QPainterPathStroker_new() };
    }

    /// New2 constructs a new QPainterPathStroker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pen: QPen `
    ///
    pub fn New2(pen: anytype) QPainterPathStroker {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QPainterPathStroker_new2(@ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: QPainterPathStroker, width: f64) void {
        qtc.QPainterPathStroker_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn Width(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` style: qnamespace_enums.PenCapStyle `
    ///
    pub fn SetCapStyle(self: QPainterPathStroker, style: i32) void {
        qtc.QPainterPathStroker_SetCapStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#capStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenCapStyle `
    ///
    pub fn CapStyle(self: QPainterPathStroker) i32 {
        return qtc.QPainterPathStroker_CapStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` style: qnamespace_enums.PenJoinStyle `
    ///
    pub fn SetJoinStyle(self: QPainterPathStroker, style: i32) void {
        qtc.QPainterPathStroker_SetJoinStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#joinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PenJoinStyle `
    ///
    pub fn JoinStyle(self: QPainterPathStroker) i32 {
        return qtc.QPainterPathStroker_JoinStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` length: f64 `
    ///
    pub fn SetMiterLimit(self: QPainterPathStroker, length: f64) void {
        qtc.QPainterPathStroker_SetMiterLimit(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn MiterLimit(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_MiterLimit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` threshold: f64 `
    ///
    pub fn SetCurveThreshold(self: QPainterPathStroker, threshold: f64) void {
        qtc.QPainterPathStroker_SetCurveThreshold(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn CurveThreshold(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_CurveThreshold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` dashPattern: qnamespace_enums.PenStyle `
    ///
    pub fn SetDashPattern(self: QPainterPathStroker, dashPattern: i32) void {
        qtc.QPainterPathStroker_SetDashPattern(@ptrCast(self.ptr), @bitCast(dashPattern));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` dashPattern: []f64 `
    ///
    pub fn SetDashPattern2(self: QPainterPathStroker, dashPattern: []f64) void {
        const dashPattern_list = qtc.libqt_list{
            .len = dashPattern.len,
            .data = dashPattern.ptr,
        };
        qtc.QPainterPathStroker_SetDashPattern2(@ptrCast(self.ptr), dashPattern_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DashPattern(self: QPainterPathStroker, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QPainterPathStroker_DashPattern(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("qpainterpathstroker.DashPattern: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` offset: f64 `
    ///
    pub fn SetDashOffset(self: QPainterPathStroker, offset: f64) void {
        qtc.QPainterPathStroker_SetDashOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn DashOffset(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_DashOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn CreateStroke(self: QPainterPathStroker, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPathStroker_CreateStroke(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dtor.QPainterPathStroker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn Delete(self: QPainterPathStroker) void {
        qtc.QPainterPathStroker_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html)
pub const QPainterPath__Element = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPainterPath__Element,

    pub const _is_QPainterPath__Element = {};

    /// New constructs a new QPainterPath::Element object.
    ///
    pub fn New() QPainterPath__Element {
        return .{ .ptr = qtc.QPainterPath__Element_new() };
    }

    /// New2 constructs a new QPainterPath::Element object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPainterPath__Element `
    ///
    pub fn New2(param1: anytype) QPainterPath__Element {
        comptime _ = @TypeOf(param1)._is_QPainterPath__Element;
        return .{ .ptr = qtc.QPainterPath__Element_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn X(self: QPainterPath__Element) f64 {
        return qtc.QPainterPath__Element_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: QPainterPath__Element, x: f64) void {
        qtc.QPainterPath__Element_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn Y(self: QPainterPath__Element) f64 {
        return qtc.QPainterPath__Element_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: QPainterPath__Element, y: f64) void {
        qtc.QPainterPath__Element_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ## Returns:
    ///
    /// ` qpainterpath_enums.ElementType `
    ///
    pub fn Type(self: QPainterPath__Element) i32 {
        return qtc.QPainterPath__Element_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` type: qpainterpath_enums.ElementType `
    ///
    pub fn SetType(self: QPainterPath__Element, _type: i32) void {
        qtc.QPainterPath__Element_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isMoveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn IsMoveTo(self: QPainterPath__Element) bool {
        return qtc.QPainterPath__Element_IsMoveTo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isLineTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn IsLineTo(self: QPainterPath__Element) bool {
        return qtc.QPainterPath__Element_IsLineTo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isCurveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn IsCurveTo(self: QPainterPath__Element) bool {
        return qtc.QPainterPath__Element_IsCurveTo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn ToQPointF(self: QPainterPath__Element) QPointF {
        return .{ .ptr = qtc.QPainterPath__Element_ToQPointF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` e: QPainterPath__Element `
    ///
    pub fn OperatorEqual(self: QPainterPath__Element, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QPainterPath__Element;
        return qtc.QPainterPath__Element_OperatorEqual(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` e: QPainterPath__Element `
    ///
    pub fn OperatorNotEqual(self: QPainterPath__Element, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QPainterPath__Element;
        return qtc.QPainterPath__Element_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn Delete(self: QPainterPath__Element) void {
        qtc.QPainterPath__Element_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#public-types)
pub const enums = struct {
    pub const ElementType = enum(i32) {
        pub const MoveToElement: i32 = 0;
        pub const LineToElement: i32 = 1;
        pub const CurveToElement: i32 = 2;
        pub const CurveToDataElement: i32 = 3;
    };
};
