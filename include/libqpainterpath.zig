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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPainterPath object in C++ memory
    ///
    pub fn new() QPainterPath {
        return .{ .ptr = qtc.QPainterPath_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPainterPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` startPoint: QPointF `
    ///
    pub fn new2(startPoint: anytype) QPainterPath {
        comptime _ = @TypeOf(startPoint)._is_QPointF;
        return .{ .ptr = qtc.QPainterPath_new2(@ptrCast(startPoint.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPainterPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPainterPath `
    ///
    pub fn new3(other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorAssign(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn swap(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn clear(self: QPainterPath) void {
        qtc.QPainterPath_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reserve` instead
    ///
    pub const Reserve = reserve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` size: i32 `
    ///
    pub fn reserve(self: QPainterPath, size: i32) void {
        qtc.QPainterPath_Reserve(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `capacity` instead
    ///
    pub const Capacity = capacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn capacity(self: QPainterPath) i32 {
        return qtc.QPainterPath_Capacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeSubpath` instead
    ///
    pub const CloseSubpath = closeSubpath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn closeSubpath(self: QPainterPath) void {
        qtc.QPainterPath_CloseSubpath(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `moveTo` instead
    ///
    pub const MoveTo = moveTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveTo(self: QPainterPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QPainterPath_MoveTo(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveTo2` instead
    ///
    pub const MoveTo2 = moveTo2;

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
    pub fn moveTo2(self: QPainterPath, x: f64, y: f64) void {
        qtc.QPainterPath_MoveTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `lineTo` instead
    ///
    pub const LineTo = lineTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPointF `
    ///
    pub fn lineTo(self: QPainterPath, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QPainterPath_LineTo(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `lineTo2` instead
    ///
    pub const LineTo2 = lineTo2;

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
    pub fn lineTo2(self: QPainterPath, x: f64, y: f64) void {
        qtc.QPainterPath_LineTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `arcMoveTo` instead
    ///
    pub const ArcMoveTo = arcMoveTo;

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
    pub fn arcMoveTo(self: QPainterPath, rect: anytype, angle: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_ArcMoveTo(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `arcMoveTo2` instead
    ///
    pub const ArcMoveTo2 = arcMoveTo2;

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
    pub fn arcMoveTo2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, angle: f64) void {
        qtc.QPainterPath_ArcMoveTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `arcTo` instead
    ///
    pub const ArcTo = arcTo;

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
    pub fn arcTo(self: QPainterPath, rect: anytype, startAngle: f64, arcLength: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_ArcTo(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(startAngle), @bitCast(arcLength));
    }

    /// ### DEPRECATED: Use `arcTo2` instead
    ///
    pub const ArcTo2 = arcTo2;

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
    pub fn arcTo2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, startAngle: f64, arcLength: f64) void {
        qtc.QPainterPath_ArcTo2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(startAngle), @bitCast(arcLength));
    }

    /// ### DEPRECATED: Use `cubicTo` instead
    ///
    pub const CubicTo = cubicTo;

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
    pub fn cubicTo(self: QPainterPath, ctrlPt1: anytype, ctrlPt2: anytype, endPt: anytype) void {
        comptime _ = @TypeOf(ctrlPt1)._is_QPointF;
        comptime _ = @TypeOf(ctrlPt2)._is_QPointF;
        comptime _ = @TypeOf(endPt)._is_QPointF;
        qtc.QPainterPath_CubicTo(@ptrCast(self.ptr), @ptrCast(ctrlPt1.ptr), @ptrCast(ctrlPt2.ptr), @ptrCast(endPt.ptr));
    }

    /// ### DEPRECATED: Use `cubicTo2` instead
    ///
    pub const CubicTo2 = cubicTo2;

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
    pub fn cubicTo2(self: QPainterPath, ctrlPt1x: f64, ctrlPt1y: f64, ctrlPt2x: f64, ctrlPt2y: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_CubicTo2(@ptrCast(self.ptr), @bitCast(ctrlPt1x), @bitCast(ctrlPt1y), @bitCast(ctrlPt2x), @bitCast(ctrlPt2y), @bitCast(endPtx), @bitCast(endPty));
    }

    /// ### DEPRECATED: Use `quadTo` instead
    ///
    pub const QuadTo = quadTo;

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
    pub fn quadTo(self: QPainterPath, ctrlPt: anytype, endPt: anytype) void {
        comptime _ = @TypeOf(ctrlPt)._is_QPointF;
        comptime _ = @TypeOf(endPt)._is_QPointF;
        qtc.QPainterPath_QuadTo(@ptrCast(self.ptr), @ptrCast(ctrlPt.ptr), @ptrCast(endPt.ptr));
    }

    /// ### DEPRECATED: Use `quadTo2` instead
    ///
    pub const QuadTo2 = quadTo2;

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
    pub fn quadTo2(self: QPainterPath, ctrlPtx: f64, ctrlPty: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_QuadTo2(@ptrCast(self.ptr), @bitCast(ctrlPtx), @bitCast(ctrlPty), @bitCast(endPtx), @bitCast(endPty));
    }

    /// ### DEPRECATED: Use `currentPosition` instead
    ///
    pub const CurrentPosition = currentPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn currentPosition(self: QPainterPath) QPointF {
        return .{ .ptr = qtc.QPainterPath_CurrentPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addRect` instead
    ///
    pub const AddRect = addRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn addRect(self: QPainterPath, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `addRect2` instead
    ///
    pub const AddRect2 = addRect2;

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
    pub fn addRect2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `addEllipse` instead
    ///
    pub const AddEllipse = addEllipse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn addEllipse(self: QPainterPath, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddEllipse(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `addEllipse2` instead
    ///
    pub const AddEllipse2 = addEllipse2;

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
    pub fn addEllipse2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddEllipse2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `addEllipse3` instead
    ///
    pub const AddEllipse3 = addEllipse3;

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
    pub fn addEllipse3(self: QPainterPath, center: anytype, rx: f64, ry: f64) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QPainterPath_AddEllipse3(@ptrCast(self.ptr), @ptrCast(center.ptr), @bitCast(rx), @bitCast(ry));
    }

    /// ### DEPRECATED: Use `addText` instead
    ///
    pub const AddText = addText;

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
    pub fn addText(self: QPainterPath, point: anytype, f: anytype, text: []const u8) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        comptime _ = @TypeOf(f)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainterPath_AddText(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(f.ptr), text_str);
    }

    /// ### DEPRECATED: Use `addText2` instead
    ///
    pub const AddText2 = addText2;

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
    pub fn addText2(self: QPainterPath, x: f64, y: f64, f: anytype, text: []const u8) void {
        comptime _ = @TypeOf(f)._is_QFont;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainterPath_AddText2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(f.ptr), text_str);
    }

    /// ### DEPRECATED: Use `addPath` instead
    ///
    pub const AddPath = addPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn addPath(self: QPainterPath, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainterPath_AddPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `addRegion` instead
    ///
    pub const AddRegion = addRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` region: QRegion `
    ///
    pub fn addRegion(self: QPainterPath, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QPainterPath_AddRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `addRoundedRect` instead
    ///
    pub const AddRoundedRect = addRoundedRect;

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
    pub fn addRoundedRect(self: QPainterPath, rect: anytype, xRadius: f64, yRadius: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddRoundedRect(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `addRoundedRect2` instead
    ///
    pub const AddRoundedRect2 = addRoundedRect2;

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
    pub fn addRoundedRect2(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64) void {
        qtc.QPainterPath_AddRoundedRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius));
    }

    /// ### DEPRECATED: Use `connectPath` instead
    ///
    pub const ConnectPath = connectPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn connectPath(self: QPainterPath, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPainterPath_ConnectPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` pt: QPointF `
    ///
    pub fn contains(self: QPainterPath, pt: anytype) bool {
        comptime _ = @TypeOf(pt)._is_QPointF;
        return qtc.QPainterPath_Contains(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn contains2(self: QPainterPath, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QPainterPath_Contains2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` rect: QRectF `
    ///
    pub fn intersects(self: QPainterPath, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QPainterPath_Intersects(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QPainterPath, dx: f64, dy: f64) void {
        qtc.QPainterPath_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` offset: QPointF `
    ///
    pub fn translate2(self: QPainterPath, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPainterPath_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QPainterPath, dx: f64, dy: f64) QPainterPath {
        return .{ .ptr = qtc.QPainterPath_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` offset: QPointF `
    ///
    pub fn translated2(self: QPainterPath, offset: anytype) QPainterPath {
        comptime _ = @TypeOf(offset)._is_QPointF;
        return .{ .ptr = qtc.QPainterPath_Translated2(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn boundingRect(self: QPainterPath) QRectF {
        return .{ .ptr = qtc.QPainterPath_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `controlPointRect` instead
    ///
    pub const ControlPointRect = controlPointRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn controlPointRect(self: QPainterPath) QRectF {
        return .{ .ptr = qtc.QPainterPath_ControlPointRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fillRule` instead
    ///
    pub const FillRule = fillRule;

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
    pub fn fillRule(self: QPainterPath) i32 {
        return qtc.QPainterPath_FillRule(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFillRule` instead
    ///
    pub const SetFillRule = setFillRule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` _fillRule: qnamespace_enums.FillRule `
    ///
    pub fn setFillRule(self: QPainterPath, _fillRule: i32) void {
        qtc.QPainterPath_SetFillRule(@ptrCast(self.ptr), @bitCast(_fillRule));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn isEmpty(self: QPainterPath) bool {
        return qtc.QPainterPath_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toReversed` instead
    ///
    pub const ToReversed = toReversed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn toReversed(self: QPainterPath) QPainterPath {
        return .{ .ptr = qtc.QPainterPath_ToReversed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `elementCount` instead
    ///
    pub const ElementCount = elementCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn elementCount(self: QPainterPath) i32 {
        return qtc.QPainterPath_ElementCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elementAt` instead
    ///
    pub const ElementAt = elementAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` i: i32 `
    ///
    pub fn elementAt(self: QPainterPath, i: i32) QPainterPath__Element {
        return .{ .ptr = qtc.QPainterPath_ElementAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `setElementPositionAt` instead
    ///
    pub const SetElementPositionAt = setElementPositionAt;

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
    pub fn setElementPositionAt(self: QPainterPath, i: i32, x: f64, y: f64) void {
        qtc.QPainterPath_SetElementPositionAt(@ptrCast(self.ptr), @bitCast(i), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn length(self: QPainterPath) f64 {
        return qtc.QPainterPath_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `percentAtLength` instead
    ///
    pub const PercentAtLength = percentAtLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn percentAtLength(self: QPainterPath, t: f64) f64 {
        return qtc.QPainterPath_PercentAtLength(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `pointAtPercent` instead
    ///
    pub const PointAtPercent = pointAtPercent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn pointAtPercent(self: QPainterPath, t: f64) QPointF {
        return .{ .ptr = qtc.QPainterPath_PointAtPercent(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `angleAtPercent` instead
    ///
    pub const AngleAtPercent = angleAtPercent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn angleAtPercent(self: QPainterPath, t: f64) f64 {
        return qtc.QPainterPath_AngleAtPercent(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `slopeAtPercent` instead
    ///
    pub const SlopeAtPercent = slopeAtPercent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` t: f64 `
    ///
    pub fn slopeAtPercent(self: QPainterPath, t: f64) f64 {
        return qtc.QPainterPath_SlopeAtPercent(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `intersects2` instead
    ///
    pub const Intersects2 = intersects2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPainterPath `
    ///
    pub fn intersects2(self: QPainterPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPainterPath;
        return qtc.QPainterPath_Intersects2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `contains3` instead
    ///
    pub const Contains3 = contains3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` p: QPainterPath `
    ///
    pub fn contains3(self: QPainterPath, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPainterPath;
        return qtc.QPainterPath_Contains3(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` r: QPainterPath `
    ///
    pub fn united(self: QPainterPath, r: anytype) QPainterPath {
        comptime _ = @TypeOf(r)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_United(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected` instead
    ///
    pub const Intersected = intersected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` r: QPainterPath `
    ///
    pub fn intersected(self: QPainterPath, r: anytype) QPainterPath {
        comptime _ = @TypeOf(r)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_Intersected(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `subtracted` instead
    ///
    pub const Subtracted = subtracted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` r: QPainterPath `
    ///
    pub fn subtracted(self: QPainterPath, r: anytype) QPainterPath {
        comptime _ = @TypeOf(r)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_Subtracted(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `simplified` instead
    ///
    pub const Simplified = simplified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    pub fn simplified(self: QPainterPath) QPainterPath {
        return .{ .ptr = qtc.QPainterPath_Simplified(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorEqual(self: QPainterPath, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return qtc.QPainterPath_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorNotEqual(self: QPainterPath, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return qtc.QPainterPath_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd` instead
    ///
    pub const OperatorBitwiseAnd = operatorBitwiseAnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorBitwiseAnd(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorBitwiseOr(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorPlus(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorPlus(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorMinus(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorMinus(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorBitwiseAndAssign(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorBitwiseOrAssign(self: QPainterPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        qtc.QPainterPath_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorPlusAssign(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath `
    ///
    /// ` other: QPainterPath `
    ///
    pub fn operatorMinusAssign(self: QPainterPath, other: anytype) QPainterPath {
        comptime _ = @TypeOf(other)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPath_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `addRoundedRect4` instead
    ///
    pub const AddRoundedRect4 = addRoundedRect4;

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
    pub fn addRoundedRect4(self: QPainterPath, rect: anytype, xRadius: f64, yRadius: f64, mode: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QPainterPath_AddRoundedRect4(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `addRoundedRect7` instead
    ///
    pub const AddRoundedRect7 = addRoundedRect7;

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
    pub fn addRoundedRect7(self: QPainterPath, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64, mode: i32) void {
        qtc.QPainterPath_AddRoundedRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xRadius), @bitCast(yRadius), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#dtor.QPainterPath)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainterPath `
    ///
    pub fn delete(self: QPainterPath) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPainterPathStroker object in C++ memory
    ///
    pub fn new() QPainterPathStroker {
        return .{ .ptr = qtc.QPainterPathStroker_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPainterPathStroker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pen: QPen `
    ///
    pub fn new2(pen: anytype) QPainterPathStroker {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QPainterPathStroker_new2(@ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QPainterPathStroker, _width: f64) void {
        qtc.QPainterPathStroker_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn width(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapStyle` instead
    ///
    pub const SetCapStyle = setCapStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` style: qnamespace_enums.PenCapStyle `
    ///
    pub fn setCapStyle(self: QPainterPathStroker, style: i32) void {
        qtc.QPainterPathStroker_SetCapStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `capStyle` instead
    ///
    pub const CapStyle = capStyle;

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
    pub fn capStyle(self: QPainterPathStroker) i32 {
        return qtc.QPainterPathStroker_CapStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setJoinStyle` instead
    ///
    pub const SetJoinStyle = setJoinStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` style: qnamespace_enums.PenJoinStyle `
    ///
    pub fn setJoinStyle(self: QPainterPathStroker, style: i32) void {
        qtc.QPainterPathStroker_SetJoinStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `joinStyle` instead
    ///
    pub const JoinStyle = joinStyle;

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
    pub fn joinStyle(self: QPainterPathStroker) i32 {
        return qtc.QPainterPathStroker_JoinStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMiterLimit` instead
    ///
    pub const SetMiterLimit = setMiterLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` _length: f64 `
    ///
    pub fn setMiterLimit(self: QPainterPathStroker, _length: f64) void {
        qtc.QPainterPathStroker_SetMiterLimit(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `miterLimit` instead
    ///
    pub const MiterLimit = miterLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn miterLimit(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_MiterLimit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurveThreshold` instead
    ///
    pub const SetCurveThreshold = setCurveThreshold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` threshold: f64 `
    ///
    pub fn setCurveThreshold(self: QPainterPathStroker, threshold: f64) void {
        qtc.QPainterPathStroker_SetCurveThreshold(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### DEPRECATED: Use `curveThreshold` instead
    ///
    pub const CurveThreshold = curveThreshold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn curveThreshold(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_CurveThreshold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDashPattern` instead
    ///
    pub const SetDashPattern = setDashPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` _dashPattern: qnamespace_enums.PenStyle `
    ///
    pub fn setDashPattern(self: QPainterPathStroker, _dashPattern: i32) void {
        qtc.QPainterPathStroker_SetDashPattern(@ptrCast(self.ptr), @bitCast(_dashPattern));
    }

    /// ### DEPRECATED: Use `setDashPattern2` instead
    ///
    pub const SetDashPattern2 = setDashPattern2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` _dashPattern: []f64 `
    ///
    pub fn setDashPattern2(self: QPainterPathStroker, _dashPattern: []f64) void {
        const dashPattern_list = qtc.libqt_list{
            .len = _dashPattern.len,
            .data = _dashPattern.ptr,
        };
        qtc.QPainterPathStroker_SetDashPattern2(@ptrCast(self.ptr), dashPattern_list);
    }

    /// ### DEPRECATED: Use `dashPattern` instead
    ///
    pub const DashPattern = dashPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dashPattern(self: QPainterPathStroker, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QPainterPathStroker_DashPattern(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("QPainterPathStroker.dashPattern: Memory allocation failed");
        const _data_val: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDashOffset` instead
    ///
    pub const SetDashOffset = setDashOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` offset: f64 `
    ///
    pub fn setDashOffset(self: QPainterPathStroker, offset: f64) void {
        qtc.QPainterPathStroker_SetDashOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `dashOffset` instead
    ///
    pub const DashOffset = dashOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn dashOffset(self: QPainterPathStroker) f64 {
        return qtc.QPainterPathStroker_DashOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createStroke` instead
    ///
    pub const CreateStroke = createStroke;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPathStroker `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn createStroke(self: QPainterPathStroker, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QPainterPathStroker_CreateStroke(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dtor.QPainterPathStroker)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainterPathStroker `
    ///
    pub fn delete(self: QPainterPathStroker) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPainterPath::Element object in C++ memory
    ///
    pub fn new() QPainterPath__Element {
        return .{ .ptr = qtc.QPainterPath__Element_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPainterPath::Element object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPainterPath__Element `
    ///
    pub fn new2(param1: anytype) QPainterPath__Element {
        comptime _ = @TypeOf(param1)._is_QPainterPath__Element;
        return .{ .ptr = qtc.QPainterPath__Element_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn x(self: QPainterPath__Element) f64 {
        return qtc.QPainterPath__Element_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QPainterPath__Element, _x: f64) void {
        qtc.QPainterPath__Element_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn y(self: QPainterPath__Element) f64 {
        return qtc.QPainterPath__Element_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QPainterPath__Element, _y: f64) void {
        qtc.QPainterPath__Element_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPainterPath__Element) i32 {
        return qtc.QPainterPath__Element_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` _type: qpainterpath_enums.ElementType `
    ///
    pub fn setType(self: QPainterPath__Element, _type: i32) void {
        qtc.QPainterPath__Element_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `isMoveTo` instead
    ///
    pub const IsMoveTo = isMoveTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isMoveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn isMoveTo(self: QPainterPath__Element) bool {
        return qtc.QPainterPath__Element_IsMoveTo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLineTo` instead
    ///
    pub const IsLineTo = isLineTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isLineTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn isLineTo(self: QPainterPath__Element) bool {
        return qtc.QPainterPath__Element_IsLineTo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCurveTo` instead
    ///
    pub const IsCurveTo = isCurveTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isCurveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn isCurveTo(self: QPainterPath__Element) bool {
        return qtc.QPainterPath__Element_IsCurveTo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toQPointF` instead
    ///
    pub const ToQPointF = toQPointF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn toQPointF(self: QPainterPath__Element) QPointF {
        return .{ .ptr = qtc.QPainterPath__Element_ToQPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` e: QPainterPath__Element `
    ///
    pub fn operatorEqual(self: QPainterPath__Element, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QPainterPath__Element;
        return qtc.QPainterPath__Element_OperatorEqual(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPainterPath__Element `
    ///
    /// ` e: QPainterPath__Element `
    ///
    pub fn operatorNotEqual(self: QPainterPath__Element, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QPainterPath__Element;
        return qtc.QPainterPath__Element_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPainterPath__Element `
    ///
    pub fn delete(self: QPainterPath__Element) void {
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
