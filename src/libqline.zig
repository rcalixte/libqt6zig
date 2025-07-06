const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qline_enums = enums;

/// https://doc.qt.io/qt-6/qline.html
pub const qline = struct {
    /// New constructs a new QLine object.
    ///
    /// ``` other: QtC.QLine ```
    pub fn New(other: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new(@ptrCast(other));
    }

    /// New2 constructs a new QLine object and invalidates the source QLine object.
    ///
    /// ``` other: QtC.QLine ```
    pub fn New2(other: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new2(@ptrCast(other));
    }

    /// New3 constructs a new QLine object.
    ///
    ///
    pub fn New3() QtC.QLine {
        return qtc.QLine_new3();
    }

    /// New4 constructs a new QLine object.
    ///
    /// ``` pt1: QtC.QPoint, pt2: QtC.QPoint ```
    pub fn New4(pt1: ?*anyopaque, pt2: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new4(@ptrCast(pt1), @ptrCast(pt2));
    }

    /// New5 constructs a new QLine object.
    ///
    /// ``` x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn New5(x1: i32, y1: i32, x2: i32, y2: i32) QtC.QLine {
        return qtc.QLine_new5(@intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// New6 constructs a new QLine object.
    ///
    /// ``` param1: QtC.QLine ```
    pub fn New6(param1: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QLine, other: QtC.QLine ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLine_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QLine, other: QtC.QLine ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLine_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#isNull)
    ///
    /// ``` self: QtC.QLine ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QLine_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#p1)
    ///
    /// ``` self: QtC.QLine ```
    pub fn P1(self: ?*anyopaque) QtC.QPoint {
        return qtc.QLine_P1(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#p2)
    ///
    /// ``` self: QtC.QLine ```
    pub fn P2(self: ?*anyopaque) QtC.QPoint {
        return qtc.QLine_P2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#x1)
    ///
    /// ``` self: QtC.QLine ```
    pub fn X1(self: ?*anyopaque) i32 {
        return qtc.QLine_X1(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#y1)
    ///
    /// ``` self: QtC.QLine ```
    pub fn Y1(self: ?*anyopaque) i32 {
        return qtc.QLine_Y1(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#x2)
    ///
    /// ``` self: QtC.QLine ```
    pub fn X2(self: ?*anyopaque) i32 {
        return qtc.QLine_X2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#y2)
    ///
    /// ``` self: QtC.QLine ```
    pub fn Y2(self: ?*anyopaque) i32 {
        return qtc.QLine_Y2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dx)
    ///
    /// ``` self: QtC.QLine ```
    pub fn Dx(self: ?*anyopaque) i32 {
        return qtc.QLine_Dx(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dy)
    ///
    /// ``` self: QtC.QLine ```
    pub fn Dy(self: ?*anyopaque) i32 {
        return qtc.QLine_Dy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ``` self: QtC.QLine, p: QtC.QPoint ```
    pub fn Translate(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QLine_Translate(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ``` self: QtC.QLine, dx: i32, dy: i32 ```
    pub fn Translate2(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QLine_Translate2(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ``` self: QtC.QLine, p: QtC.QPoint ```
    pub fn Translated(self: ?*anyopaque, p: ?*anyopaque) QtC.QLine {
        return qtc.QLine_Translated(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ``` self: QtC.QLine, dx: i32, dy: i32 ```
    pub fn Translated2(self: ?*anyopaque, dx: i32, dy: i32) QtC.QLine {
        return qtc.QLine_Translated2(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#center)
    ///
    /// ``` self: QtC.QLine ```
    pub fn Center(self: ?*anyopaque) QtC.QPoint {
        return qtc.QLine_Center(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setP1)
    ///
    /// ``` self: QtC.QLine, p1: QtC.QPoint ```
    pub fn SetP1(self: ?*anyopaque, p1: ?*anyopaque) void {
        qtc.QLine_SetP1(@ptrCast(self), @ptrCast(p1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setP2)
    ///
    /// ``` self: QtC.QLine, p2: QtC.QPoint ```
    pub fn SetP2(self: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLine_SetP2(@ptrCast(self), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setPoints)
    ///
    /// ``` self: QtC.QLine, p1: QtC.QPoint, p2: QtC.QPoint ```
    pub fn SetPoints(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLine_SetPoints(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setLine)
    ///
    /// ``` self: QtC.QLine, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn SetLine(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QLine_SetLine(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#toLineF)
    ///
    /// ``` self: QtC.QLine ```
    pub fn ToLineF(self: ?*anyopaque) QtC.QLineF {
        return qtc.QLine_ToLineF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dtor.QLine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlinef.html
pub const qlinef = struct {
    /// New constructs a new QLineF object.
    ///
    /// ``` other: QtC.QLineF ```
    pub fn New(other: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new(@ptrCast(other));
    }

    /// New2 constructs a new QLineF object and invalidates the source QLineF object.
    ///
    /// ``` other: QtC.QLineF ```
    pub fn New2(other: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QLineF object.
    ///
    ///
    pub fn New3() QtC.QLineF {
        return qtc.QLineF_new3();
    }

    /// New4 constructs a new QLineF object.
    ///
    /// ``` pt1: QtC.QPointF, pt2: QtC.QPointF ```
    pub fn New4(pt1: ?*anyopaque, pt2: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new4(@ptrCast(pt1), @ptrCast(pt2));
    }

    /// New5 constructs a new QLineF object.
    ///
    /// ``` x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn New5(x1: f64, y1: f64, x2: f64, y2: f64) QtC.QLineF {
        return qtc.QLineF_new5(@floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// New6 constructs a new QLineF object.
    ///
    /// ``` line: QtC.QLine ```
    pub fn New6(line: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new6(@ptrCast(line));
    }

    /// New7 constructs a new QLineF object.
    ///
    /// ``` param1: QtC.QLineF ```
    pub fn New7(param1: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QLineF, other: QtC.QLineF ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLineF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QLineF, other: QtC.QLineF ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLineF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
    ///
    /// ``` length: f64, angle: f64 ```
    pub fn FromPolar(length: f64, angle: f64) QtC.QLineF {
        return qtc.QLineF_FromPolar(@floatCast(length), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#isNull)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QLineF_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#p1)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn P1(self: ?*anyopaque) QtC.QPointF {
        return qtc.QLineF_P1(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#p2)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn P2(self: ?*anyopaque) QtC.QPointF {
        return qtc.QLineF_P2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#x1)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn X1(self: ?*anyopaque) f64 {
        return qtc.QLineF_X1(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#y1)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Y1(self: ?*anyopaque) f64 {
        return qtc.QLineF_Y1(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#x2)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn X2(self: ?*anyopaque) f64 {
        return qtc.QLineF_X2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#y2)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Y2(self: ?*anyopaque) f64 {
        return qtc.QLineF_Y2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dx)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Dx(self: ?*anyopaque) f64 {
        return qtc.QLineF_Dx(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dy)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Dy(self: ?*anyopaque) f64 {
        return qtc.QLineF_Dy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#length)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Length(self: ?*anyopaque) f64 {
        return qtc.QLineF_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setLength)
    ///
    /// ``` self: QtC.QLineF, lenVal: f64 ```
    pub fn SetLength(self: ?*anyopaque, lenVal: f64) void {
        qtc.QLineF_SetLength(@ptrCast(self), @floatCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#angle)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Angle(self: ?*anyopaque) f64 {
        return qtc.QLineF_Angle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setAngle)
    ///
    /// ``` self: QtC.QLineF, angle: f64 ```
    pub fn SetAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QLineF_SetAngle(@ptrCast(self), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#angleTo)
    ///
    /// ``` self: QtC.QLineF, l: QtC.QLineF ```
    pub fn AngleTo(self: ?*anyopaque, l: ?*anyopaque) f64 {
        return qtc.QLineF_AngleTo(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#unitVector)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn UnitVector(self: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_UnitVector(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#normalVector)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn NormalVector(self: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_NormalVector(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#intersects)
    ///
    /// ``` self: QtC.QLineF, l: QtC.QLineF ```
    pub fn Intersects(self: ?*anyopaque, l: ?*anyopaque) i64 {
        return qtc.QLineF_Intersects(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#pointAt)
    ///
    /// ``` self: QtC.QLineF, t: f64 ```
    pub fn PointAt(self: ?*anyopaque, t: f64) QtC.QPointF {
        return qtc.QLineF_PointAt(@ptrCast(self), @floatCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ``` self: QtC.QLineF, p: QtC.QPointF ```
    pub fn Translate(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QLineF_Translate(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ``` self: QtC.QLineF, dx: f64, dy: f64 ```
    pub fn Translate2(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QLineF_Translate2(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ``` self: QtC.QLineF, p: QtC.QPointF ```
    pub fn Translated(self: ?*anyopaque, p: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_Translated(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ``` self: QtC.QLineF, dx: f64, dy: f64 ```
    pub fn Translated2(self: ?*anyopaque, dx: f64, dy: f64) QtC.QLineF {
        return qtc.QLineF_Translated2(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#center)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn Center(self: ?*anyopaque) QtC.QPointF {
        return qtc.QLineF_Center(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setP1)
    ///
    /// ``` self: QtC.QLineF, p1: QtC.QPointF ```
    pub fn SetP1(self: ?*anyopaque, p1: ?*anyopaque) void {
        qtc.QLineF_SetP1(@ptrCast(self), @ptrCast(p1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setP2)
    ///
    /// ``` self: QtC.QLineF, p2: QtC.QPointF ```
    pub fn SetP2(self: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLineF_SetP2(@ptrCast(self), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setPoints)
    ///
    /// ``` self: QtC.QLineF, p1: QtC.QPointF, p2: QtC.QPointF ```
    pub fn SetPoints(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLineF_SetPoints(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setLine)
    ///
    /// ``` self: QtC.QLineF, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn SetLine(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QLineF_SetLine(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#toLine)
    ///
    /// ``` self: QtC.QLineF ```
    pub fn ToLine(self: ?*anyopaque) QtC.QLine {
        return qtc.QLineF_ToLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#intersects)
    ///
    /// ``` self: QtC.QLineF, l: QtC.QLineF, intersectionPoint: QtC.QPointF ```
    pub fn Intersects2(self: ?*anyopaque, l: ?*anyopaque, intersectionPoint: ?*anyopaque) i64 {
        return qtc.QLineF_Intersects2(@ptrCast(self), @ptrCast(l), @ptrCast(intersectionPoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dtor.QLineF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLineF ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLineF_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qline.html#types
pub const enums = struct {
    pub const IntersectionType = enum {
        pub const NoIntersection: i32 = 0;
        pub const BoundedIntersection: i32 = 1;
        pub const UnboundedIntersection: i32 = 2;
    };
};
