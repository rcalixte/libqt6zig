const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

// Also inherits unprojectable QList<QPoint>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)
pub const QPolygon = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPolygon,

    pub const _is_QPolygon = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPolygon object in C++ memory
    ///
    pub fn new() QPolygon {
        return .{ .ptr = qtc.QPolygon_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: []QPoint `
    ///
    pub fn new2(v: []QPoint) QPolygon {
        const v_list = qtc.libqt_list{
            .len = v.len,
            .data = @ptrCast(v.ptr),
        };
        return .{ .ptr = qtc.QPolygon_new2(v_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRect `
    ///
    pub fn new3(r: anytype) QPolygon {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QPolygon_new3(@ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` nPoints: i32 `
    ///
    /// ` points: *const i32 `
    ///
    pub fn new4(nPoints: i32, points: *const i32) QPolygon {
        return .{ .ptr = qtc.QPolygon_new4(@bitCast(nPoints), @ptrCast(points)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPolygon `
    ///
    pub fn new5(param1: anytype) QPolygon {
        comptime _ = @TypeOf(param1)._is_QPolygon;
        return .{ .ptr = qtc.QPolygon_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPolygon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRect `
    ///
    /// ` closed: bool `
    ///
    pub fn new6(r: anytype, closed: bool) QPolygon {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QPolygon_new6(@ptrCast(r.ptr), closed) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` other: QPolygon `
    ///
    pub fn swap(self: QPolygon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPolygon;
        qtc.QPolygon_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#operator-QVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    pub fn toQVariant(self: QPolygon) QVariant {
        return .{ .ptr = qtc.QPolygon_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn translate(self: QPolygon, dx: i32, dy: i32) void {
        qtc.QPolygon_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` offset: QPoint `
    ///
    pub fn translate2(self: QPolygon, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QPolygon_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn translated(self: QPolygon, dx: i32, dy: i32) QPolygon {
        return .{ .ptr = qtc.QPolygon_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` offset: QPoint `
    ///
    pub fn translated2(self: QPolygon, offset: anytype) QPolygon {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPolygon_Translated2(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    pub fn boundingRect(self: QPolygon) QRect {
        return .{ .ptr = qtc.QPolygon_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` i: i32 `
    ///
    /// ` x: *i32 `
    ///
    /// ` y: *i32 `
    ///
    pub fn point(self: QPolygon, i: i32, x: *i32, y: *i32) void {
        qtc.QPolygon_Point(@ptrCast(self.ptr), @bitCast(i), @ptrCast(x), @ptrCast(y));
    }

    /// ### DEPRECATED: Use `point2` instead
    ///
    pub const Point2 = point2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#point)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` i: i32 `
    ///
    pub fn point2(self: QPolygon, i: i32) QPoint {
        return .{ .ptr = qtc.QPolygon_Point2(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `setPoint` instead
    ///
    pub const SetPoint = setPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#setPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` index: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn setPoint(self: QPolygon, index: i32, x: i32, y: i32) void {
        qtc.QPolygon_SetPoint(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setPoint2` instead
    ///
    pub const SetPoint2 = setPoint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#setPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` index: i32 `
    ///
    /// ` p: QPoint `
    ///
    pub fn setPoint2(self: QPolygon, index: i32, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QPolygon_SetPoint2(@ptrCast(self.ptr), @bitCast(index), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setPoints` instead
    ///
    pub const SetPoints = setPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` nPoints: i32 `
    ///
    /// ` points: *const i32 `
    ///
    pub fn setPoints(self: QPolygon, nPoints: i32, points: *const i32) void {
        qtc.QPolygon_SetPoints(@ptrCast(self.ptr), @bitCast(nPoints), @ptrCast(points));
    }

    /// ### DEPRECATED: Use `putPoints` instead
    ///
    pub const PutPoints = putPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#putPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` index: i32 `
    ///
    /// ` nPoints: i32 `
    ///
    /// ` points: *const i32 `
    ///
    pub fn putPoints(self: QPolygon, index: i32, nPoints: i32, points: *const i32) void {
        qtc.QPolygon_PutPoints(@ptrCast(self.ptr), @bitCast(index), @bitCast(nPoints), @ptrCast(points));
    }

    /// ### DEPRECATED: Use `putPoints2` instead
    ///
    pub const PutPoints2 = putPoints2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#putPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` index: i32 `
    ///
    /// ` nPoints: i32 `
    ///
    /// ` from: QPolygon `
    ///
    pub fn putPoints2(self: QPolygon, index: i32, nPoints: i32, from: anytype) void {
        comptime _ = @TypeOf(from)._is_QPolygon;
        qtc.QPolygon_PutPoints2(@ptrCast(self.ptr), @bitCast(index), @bitCast(nPoints), @ptrCast(from.ptr));
    }

    /// ### DEPRECATED: Use `containsPoint` instead
    ///
    pub const ContainsPoint = containsPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#containsPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` pt: QPoint `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn containsPoint(self: QPolygon, pt: anytype, fillRule: i32) bool {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QPolygon_ContainsPoint(@ptrCast(self.ptr), @ptrCast(pt.ptr), @bitCast(fillRule));
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` r: QPolygon `
    ///
    pub fn united(self: QPolygon, r: anytype) QPolygon {
        comptime _ = @TypeOf(r)._is_QPolygon;
        return .{ .ptr = qtc.QPolygon_United(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected` instead
    ///
    pub const Intersected = intersected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` r: QPolygon `
    ///
    pub fn intersected(self: QPolygon, r: anytype) QPolygon {
        comptime _ = @TypeOf(r)._is_QPolygon;
        return .{ .ptr = qtc.QPolygon_Intersected(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `subtracted` instead
    ///
    pub const Subtracted = subtracted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#subtracted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` r: QPolygon `
    ///
    pub fn subtracted(self: QPolygon, r: anytype) QPolygon {
        comptime _ = @TypeOf(r)._is_QPolygon;
        return .{ .ptr = qtc.QPolygon_Subtracted(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` r: QPolygon `
    ///
    pub fn intersects(self: QPolygon, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QPolygon;
        return qtc.QPolygon_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `toPolygonF` instead
    ///
    pub const ToPolygonF = toPolygonF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#toPolygonF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    pub fn toPolygonF(self: QPolygon) QPolygonF {
        return .{ .ptr = qtc.QPolygon_ToPolygonF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `putPoints4` instead
    ///
    pub const PutPoints4 = putPoints4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#putPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygon `
    ///
    /// ` index: i32 `
    ///
    /// ` nPoints: i32 `
    ///
    /// ` from: QPolygon `
    ///
    /// ` fromIndex: i32 `
    ///
    pub fn putPoints4(self: QPolygon, index: i32, nPoints: i32, from: anytype, fromIndex: i32) void {
        comptime _ = @TypeOf(from)._is_QPolygon;
        qtc.QPolygon_PutPoints4(@ptrCast(self.ptr), @bitCast(index), @bitCast(nPoints), @ptrCast(from.ptr), @bitCast(fromIndex));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#dtor.QPolygon)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPolygon `
    ///
    pub fn delete(self: QPolygon) void {
        qtc.QPolygon_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<QPointF>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)
pub const QPolygonF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPolygonF,

    pub const _is_QPolygonF = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPolygonF object in C++ memory
    ///
    pub fn new() QPolygonF {
        return .{ .ptr = qtc.QPolygonF_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPolygonF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: []QPointF `
    ///
    pub fn new2(v: []QPointF) QPolygonF {
        const v_list = qtc.libqt_list{
            .len = v.len,
            .data = @ptrCast(v.ptr),
        };
        return .{ .ptr = qtc.QPolygonF_new2(v_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPolygonF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: QRectF `
    ///
    pub fn new3(r: anytype) QPolygonF {
        comptime _ = @TypeOf(r)._is_QRectF;
        return .{ .ptr = qtc.QPolygonF_new3(@ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPolygonF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QPolygon `
    ///
    pub fn new4(a: anytype) QPolygonF {
        comptime _ = @TypeOf(a)._is_QPolygon;
        return .{ .ptr = qtc.QPolygonF_new4(@ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPolygonF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPolygonF `
    ///
    pub fn new5(param1: anytype) QPolygonF {
        comptime _ = @TypeOf(param1)._is_QPolygonF;
        return .{ .ptr = qtc.QPolygonF_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` other: QPolygonF `
    ///
    pub fn swap(self: QPolygonF, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPolygonF;
        qtc.QPolygonF_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#operator-QVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    pub fn toQVariant(self: QPolygonF) QVariant {
        return .{ .ptr = qtc.QPolygonF_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn translate(self: QPolygonF, dx: f64, dy: f64) void {
        qtc.QPolygonF_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` offset: QPointF `
    ///
    pub fn translate2(self: QPolygonF, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QPolygonF_Translate2(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn translated(self: QPolygonF, dx: f64, dy: f64) QPolygonF {
        return .{ .ptr = qtc.QPolygonF_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` offset: QPointF `
    ///
    pub fn translated2(self: QPolygonF, offset: anytype) QPolygonF {
        comptime _ = @TypeOf(offset)._is_QPointF;
        return .{ .ptr = qtc.QPolygonF_Translated2(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `toPolygon` instead
    ///
    pub const ToPolygon = toPolygon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#toPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    pub fn toPolygon(self: QPolygonF) QPolygon {
        return .{ .ptr = qtc.QPolygonF_ToPolygon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isClosed` instead
    ///
    pub const IsClosed = isClosed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#isClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    pub fn isClosed(self: QPolygonF) bool {
        return qtc.QPolygonF_IsClosed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    pub fn boundingRect(self: QPolygonF) QRectF {
        return .{ .ptr = qtc.QPolygonF_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `containsPoint` instead
    ///
    pub const ContainsPoint = containsPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#containsPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` pt: QPointF `
    ///
    /// ` fillRule: qnamespace_enums.FillRule `
    ///
    pub fn containsPoint(self: QPolygonF, pt: anytype, fillRule: i32) bool {
        comptime _ = @TypeOf(pt)._is_QPointF;
        return qtc.QPolygonF_ContainsPoint(@ptrCast(self.ptr), @ptrCast(pt.ptr), @bitCast(fillRule));
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` r: QPolygonF `
    ///
    pub fn united(self: QPolygonF, r: anytype) QPolygonF {
        comptime _ = @TypeOf(r)._is_QPolygonF;
        return .{ .ptr = qtc.QPolygonF_United(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected` instead
    ///
    pub const Intersected = intersected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` r: QPolygonF `
    ///
    pub fn intersected(self: QPolygonF, r: anytype) QPolygonF {
        comptime _ = @TypeOf(r)._is_QPolygonF;
        return .{ .ptr = qtc.QPolygonF_Intersected(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `subtracted` instead
    ///
    pub const Subtracted = subtracted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#subtracted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` r: QPolygonF `
    ///
    pub fn subtracted(self: QPolygonF, r: anytype) QPolygonF {
        comptime _ = @TypeOf(r)._is_QPolygonF;
        return .{ .ptr = qtc.QPolygonF_Subtracted(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPolygonF `
    ///
    /// ` r: QPolygonF `
    ///
    pub fn intersects(self: QPolygonF, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QPolygonF;
        return qtc.QPolygonF_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#dtor.QPolygonF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPolygonF `
    ///
    pub fn delete(self: QPolygonF) void {
        qtc.QPolygonF_Delete(@ptrCast(self.ptr));
    }
};
