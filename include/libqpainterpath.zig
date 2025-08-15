const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpainterpath.html
pub const qpainterpath = struct {
    /// New constructs a new QPainterPath object.
    ///
    ///
    pub fn New() QtC.QPainterPath {
        return qtc.QPainterPath_new();
    }

    /// New2 constructs a new QPainterPath object.
    ///
    /// ``` startPoint: QtC.QPointF ```
    pub fn New2(startPoint: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_new2(@ptrCast(startPoint));
    }

    /// New3 constructs a new QPainterPath object.
    ///
    /// ``` other: QtC.QPainterPath ```
    pub fn New3(other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#swap)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#clear)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPainterPath_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
    ///
    /// ``` self: QtC.QPainterPath, size: i32 ```
    pub fn Reserve(self: ?*anyopaque, size: i32) void {
        qtc.QPainterPath_Reserve(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn Capacity(self: ?*anyopaque) i32 {
        return qtc.QPainterPath_Capacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn CloseSubpath(self: ?*anyopaque) void {
        qtc.QPainterPath_CloseSubpath(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
    ///
    /// ``` self: QtC.QPainterPath, p: QtC.QPointF ```
    pub fn MoveTo(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainterPath_MoveTo(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64 ```
    pub fn MoveTo2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QPainterPath_MoveTo2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
    ///
    /// ``` self: QtC.QPainterPath, p: QtC.QPointF ```
    pub fn LineTo(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPainterPath_LineTo(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64 ```
    pub fn LineTo2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QPainterPath_LineTo2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF, angle: f64 ```
    pub fn ArcMoveTo(self: ?*anyopaque, rect: ?*anyopaque, angle: f64) void {
        qtc.QPainterPath_ArcMoveTo(@ptrCast(self), @ptrCast(rect), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, w: f64, h: f64, angle: f64 ```
    pub fn ArcMoveTo2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, angle: f64) void {
        qtc.QPainterPath_ArcMoveTo2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF, startAngle: f64, arcLength: f64 ```
    pub fn ArcTo(self: ?*anyopaque, rect: ?*anyopaque, startAngle: f64, arcLength: f64) void {
        qtc.QPainterPath_ArcTo(@ptrCast(self), @ptrCast(rect), @floatCast(startAngle), @floatCast(arcLength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, w: f64, h: f64, startAngle: f64, arcLength: f64 ```
    pub fn ArcTo2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, startAngle: f64, arcLength: f64) void {
        qtc.QPainterPath_ArcTo2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @floatCast(startAngle), @floatCast(arcLength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
    ///
    /// ``` self: QtC.QPainterPath, ctrlPt1: QtC.QPointF, ctrlPt2: QtC.QPointF, endPt: QtC.QPointF ```
    pub fn CubicTo(self: ?*anyopaque, ctrlPt1: ?*anyopaque, ctrlPt2: ?*anyopaque, endPt: ?*anyopaque) void {
        qtc.QPainterPath_CubicTo(@ptrCast(self), @ptrCast(ctrlPt1), @ptrCast(ctrlPt2), @ptrCast(endPt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
    ///
    /// ``` self: QtC.QPainterPath, ctrlPt1x: f64, ctrlPt1y: f64, ctrlPt2x: f64, ctrlPt2y: f64, endPtx: f64, endPty: f64 ```
    pub fn CubicTo2(self: ?*anyopaque, ctrlPt1x: f64, ctrlPt1y: f64, ctrlPt2x: f64, ctrlPt2y: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_CubicTo2(@ptrCast(self), @floatCast(ctrlPt1x), @floatCast(ctrlPt1y), @floatCast(ctrlPt2x), @floatCast(ctrlPt2y), @floatCast(endPtx), @floatCast(endPty));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
    ///
    /// ``` self: QtC.QPainterPath, ctrlPt: QtC.QPointF, endPt: QtC.QPointF ```
    pub fn QuadTo(self: ?*anyopaque, ctrlPt: ?*anyopaque, endPt: ?*anyopaque) void {
        qtc.QPainterPath_QuadTo(@ptrCast(self), @ptrCast(ctrlPt), @ptrCast(endPt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
    ///
    /// ``` self: QtC.QPainterPath, ctrlPtx: f64, ctrlPty: f64, endPtx: f64, endPty: f64 ```
    pub fn QuadTo2(self: ?*anyopaque, ctrlPtx: f64, ctrlPty: f64, endPtx: f64, endPty: f64) void {
        qtc.QPainterPath_QuadTo2(@ptrCast(self), @floatCast(ctrlPtx), @floatCast(ctrlPty), @floatCast(endPtx), @floatCast(endPty));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn CurrentPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPainterPath_CurrentPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF ```
    pub fn AddRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainterPath_AddRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, w: f64, h: f64 ```
    pub fn AddRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddRect2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF ```
    pub fn AddEllipse(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPainterPath_AddEllipse(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, w: f64, h: f64 ```
    pub fn AddEllipse2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QPainterPath_AddEllipse2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
    ///
    /// ``` self: QtC.QPainterPath, center: QtC.QPointF, rx: f64, ry: f64 ```
    pub fn AddEllipse3(self: ?*anyopaque, center: ?*anyopaque, rx: f64, ry: f64) void {
        qtc.QPainterPath_AddEllipse3(@ptrCast(self), @ptrCast(center), @floatCast(rx), @floatCast(ry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addText)
    ///
    /// ``` self: QtC.QPainterPath, point: QtC.QPointF, f: QtC.QFont, text: []const u8 ```
    pub fn AddText(self: ?*anyopaque, point: ?*anyopaque, f: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainterPath_AddText(@ptrCast(self), @ptrCast(point), @ptrCast(f), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addText)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, f: QtC.QFont, text: []const u8 ```
    pub fn AddText2(self: ?*anyopaque, x: f64, y: f64, f: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPainterPath_AddText2(@ptrCast(self), @floatCast(x), @floatCast(y), @ptrCast(f), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
    ///
    /// ``` self: QtC.QPainterPath, path: QtC.QPainterPath ```
    pub fn AddPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainterPath_AddPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
    ///
    /// ``` self: QtC.QPainterPath, region: QtC.QRegion ```
    pub fn AddRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QPainterPath_AddRegion(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF, xRadius: f64, yRadius: f64 ```
    pub fn AddRoundedRect(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        qtc.QPainterPath_AddRoundedRect(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64 ```
    pub fn AddRoundedRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64) void {
        qtc.QPainterPath_AddRoundedRect2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
    ///
    /// ``` self: QtC.QPainterPath, path: QtC.QPainterPath ```
    pub fn ConnectPath(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QPainterPath_ConnectPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ``` self: QtC.QPainterPath, pt: QtC.QPointF ```
    pub fn Contains(self: ?*anyopaque, pt: ?*anyopaque) bool {
        return qtc.QPainterPath_Contains(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF ```
    pub fn Contains2(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QPainterPath_Contains2(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF ```
    pub fn Intersects(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QPainterPath_Intersects(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translate)
    ///
    /// ``` self: QtC.QPainterPath, dx: f64, dy: f64 ```
    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QPainterPath_Translate(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translate)
    ///
    /// ``` self: QtC.QPainterPath, offset: QtC.QPointF ```
    pub fn Translate2(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QPainterPath_Translate2(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translated)
    ///
    /// ``` self: QtC.QPainterPath, dx: f64, dy: f64 ```
    pub fn Translated(self: ?*anyopaque, dx: f64, dy: f64) QtC.QPainterPath {
        return qtc.QPainterPath_Translated(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translated)
    ///
    /// ``` self: QtC.QPainterPath, offset: QtC.QPointF ```
    pub fn Translated2(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Translated2(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPainterPath_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn ControlPointRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QPainterPath_ControlPointRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#fillRule)
    ///
    /// ``` self: QtC.QPainterPath ```
    ///
    /// Returns: ``` qnamespace_enums.FillRule ```
    pub fn FillRule(self: ?*anyopaque) i64 {
        return qtc.QPainterPath_FillRule(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
    ///
    /// ``` self: QtC.QPainterPath, fillRule: qnamespace_enums.FillRule ```
    pub fn SetFillRule(self: ?*anyopaque, fillRule: i64) void {
        qtc.QPainterPath_SetFillRule(@ptrCast(self), @intCast(fillRule));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPainterPath_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn ToReversed(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_ToReversed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn ElementCount(self: ?*anyopaque) i32 {
        return qtc.QPainterPath_ElementCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
    ///
    /// ``` self: QtC.QPainterPath, i: i32 ```
    pub fn ElementAt(self: ?*anyopaque, i: i32) QtC.QPainterPath__Element {
        return qtc.QPainterPath_ElementAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#setElementPositionAt)
    ///
    /// ``` self: QtC.QPainterPath, i: i32, x: f64, y: f64 ```
    pub fn SetElementPositionAt(self: ?*anyopaque, i: i32, x: f64, y: f64) void {
        qtc.QPainterPath_SetElementPositionAt(@ptrCast(self), @intCast(i), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#length)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn Length(self: ?*anyopaque) f64 {
        return qtc.QPainterPath_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
    ///
    /// ``` self: QtC.QPainterPath, t: f64 ```
    pub fn PercentAtLength(self: ?*anyopaque, t: f64) f64 {
        return qtc.QPainterPath_PercentAtLength(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
    ///
    /// ``` self: QtC.QPainterPath, t: f64 ```
    pub fn PointAtPercent(self: ?*anyopaque, t: f64) QtC.QPointF {
        return qtc.QPainterPath_PointAtPercent(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
    ///
    /// ``` self: QtC.QPainterPath, t: f64 ```
    pub fn AngleAtPercent(self: ?*anyopaque, t: f64) f64 {
        return qtc.QPainterPath_AngleAtPercent(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
    ///
    /// ``` self: QtC.QPainterPath, t: f64 ```
    pub fn SlopeAtPercent(self: ?*anyopaque, t: f64) f64 {
        return qtc.QPainterPath_SlopeAtPercent(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
    ///
    /// ``` self: QtC.QPainterPath, p: QtC.QPainterPath ```
    pub fn Intersects2(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPainterPath_Intersects2(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
    ///
    /// ``` self: QtC.QPainterPath, p: QtC.QPainterPath ```
    pub fn Contains3(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPainterPath_Contains3(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#united)
    ///
    /// ``` self: QtC.QPainterPath, r: QtC.QPainterPath ```
    pub fn United(self: ?*anyopaque, r: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_United(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
    ///
    /// ``` self: QtC.QPainterPath, r: QtC.QPainterPath ```
    pub fn Intersected(self: ?*anyopaque, r: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Intersected(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
    ///
    /// ``` self: QtC.QPainterPath, r: QtC.QPainterPath ```
    pub fn Subtracted(self: ?*anyopaque, r: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Subtracted(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn Simplified(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_Simplified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPainterPath_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-not-eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPainterPath_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-and)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorBitwiseOr(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorBitwiseOr(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorPlus(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorPlus(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorMinus(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorMinus(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-and-eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c-eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPainterPath_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorPlusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator--eq)
    ///
    /// ``` self: QtC.QPainterPath, other: QtC.QPainterPath ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPath_OperatorMinusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ``` self: QtC.QPainterPath, rect: QtC.QRectF, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn AddRoundedRect4(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i64) void {
        qtc.QPainterPath_AddRoundedRect4(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
    ///
    /// ``` self: QtC.QPainterPath, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn AddRoundedRect7(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xRadius: f64, yRadius: f64, mode: i64) void {
        qtc.QPainterPath_AddRoundedRect7(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#dtor.QPainterPath)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPainterPath ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainterPath_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainterpathstroker.html
pub const qpainterpathstroker = struct {
    /// New constructs a new QPainterPathStroker object.
    ///
    ///
    pub fn New() QtC.QPainterPathStroker {
        return qtc.QPainterPathStroker_new();
    }

    /// New2 constructs a new QPainterPathStroker object.
    ///
    /// ``` pen: QtC.QPen ```
    pub fn New2(pen: ?*anyopaque) QtC.QPainterPathStroker {
        return qtc.QPainterPathStroker_new2(@ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
    ///
    /// ``` self: QtC.QPainterPathStroker, width: f64 ```
    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.QPainterPathStroker_SetWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QPainterPathStroker_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
    ///
    /// ``` self: QtC.QPainterPathStroker, style: qnamespace_enums.PenCapStyle ```
    pub fn SetCapStyle(self: ?*anyopaque, style: i64) void {
        qtc.QPainterPathStroker_SetCapStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#capStyle)
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    ///
    /// Returns: ``` qnamespace_enums.PenCapStyle ```
    pub fn CapStyle(self: ?*anyopaque) i64 {
        return qtc.QPainterPathStroker_CapStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
    ///
    /// ``` self: QtC.QPainterPathStroker, style: qnamespace_enums.PenJoinStyle ```
    pub fn SetJoinStyle(self: ?*anyopaque, style: i64) void {
        qtc.QPainterPathStroker_SetJoinStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#joinStyle)
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    ///
    /// Returns: ``` qnamespace_enums.PenJoinStyle ```
    pub fn JoinStyle(self: ?*anyopaque) i64 {
        return qtc.QPainterPathStroker_JoinStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
    ///
    /// ``` self: QtC.QPainterPathStroker, length: f64 ```
    pub fn SetMiterLimit(self: ?*anyopaque, length: f64) void {
        qtc.QPainterPathStroker_SetMiterLimit(@ptrCast(self), @floatCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    pub fn MiterLimit(self: ?*anyopaque) f64 {
        return qtc.QPainterPathStroker_MiterLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
    ///
    /// ``` self: QtC.QPainterPathStroker, threshold: f64 ```
    pub fn SetCurveThreshold(self: ?*anyopaque, threshold: f64) void {
        qtc.QPainterPathStroker_SetCurveThreshold(@ptrCast(self), @floatCast(threshold));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    pub fn CurveThreshold(self: ?*anyopaque) f64 {
        return qtc.QPainterPathStroker_CurveThreshold(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
    ///
    /// ``` self: QtC.QPainterPathStroker, dashPattern: qnamespace_enums.PenStyle ```
    pub fn SetDashPattern(self: ?*anyopaque, dashPattern: i64) void {
        qtc.QPainterPathStroker_SetDashPattern(@ptrCast(self), @intCast(dashPattern));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
    ///
    /// ``` self: QtC.QPainterPathStroker, dashPattern: []f64 ```
    pub fn SetDashPattern2(self: ?*anyopaque, dashPattern: []f64) void {
        const dashPattern_list = qtc.libqt_list{
            .len = dashPattern.len,
            .data = dashPattern.ptr,
        };
        qtc.QPainterPathStroker_SetDashPattern2(@ptrCast(self), dashPattern_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
    ///
    /// ``` self: QtC.QPainterPathStroker, allocator: std.mem.Allocator ```
    pub fn DashPattern(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.QPainterPathStroker_DashPattern(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("qpainterpathstroker.DashPattern: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
    ///
    /// ``` self: QtC.QPainterPathStroker, offset: f64 ```
    pub fn SetDashOffset(self: ?*anyopaque, offset: f64) void {
        qtc.QPainterPathStroker_SetDashOffset(@ptrCast(self), @floatCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    pub fn DashOffset(self: ?*anyopaque) f64 {
        return qtc.QPainterPathStroker_DashOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
    ///
    /// ``` self: QtC.QPainterPathStroker, path: QtC.QPainterPath ```
    pub fn CreateStroke(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QPainterPathStroker_CreateStroke(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dtor.QPainterPathStroker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPainterPathStroker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainterPathStroker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainterpath-element.html
pub const qpainterpath__element = struct {
    /// New constructs a new QPainterPath::Element object.
    ///
    ///
    pub fn New() QtC.QPainterPath__Element {
        return qtc.QPainterPath__Element_new();
    }

    /// New2 constructs a new QPainterPath::Element object.
    ///
    /// ``` param1: QtC.QPainterPath__Element ```
    pub fn New2(param1: ?*anyopaque) QtC.QPainterPath__Element {
        return qtc.QPainterPath__Element_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath-element.html#isMoveTo)
    ///
    /// ``` self: QtC.QPainterPath__Element ```
    pub fn IsMoveTo(self: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_IsMoveTo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath-element.html#isLineTo)
    ///
    /// ``` self: QtC.QPainterPath__Element ```
    pub fn IsLineTo(self: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_IsLineTo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath-element.html#isCurveTo)
    ///
    /// ``` self: QtC.QPainterPath__Element ```
    pub fn IsCurveTo(self: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_IsCurveTo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath-element.html#operator)
    ///
    /// ``` self: QtC.QPainterPath__Element ```
    pub fn ToQPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPainterPath__Element_ToQPointF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QPainterPath__Element, e: QtC.QPainterPath__Element ```
    pub fn OperatorEqual(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_OperatorEqual(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-not-eq)
    ///
    /// ``` self: QtC.QPainterPath__Element, e: QtC.QPainterPath__Element ```
    pub fn OperatorNotEqual(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPainterPath__Element_OperatorNotEqual(@ptrCast(self), @ptrCast(e));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPainterPath__Element ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPainterPath__Element_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainterpath.html#types
pub const enums = struct {
    pub const ElementType = enum {
        pub const MoveToElement: i32 = 0;
        pub const LineToElement: i32 = 1;
        pub const CurveToElement: i32 = 2;
        pub const CurveToDataElement: i32 = 3;
    };
};
