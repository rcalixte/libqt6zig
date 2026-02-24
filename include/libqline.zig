const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qline_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html)
pub const qline = struct {
    /// New constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLine `
    ///
    pub fn New(other: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new(@ptrCast(other));
    }

    /// New2 constructs a new QLine object and invalidates the source QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLine `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new2(@ptrCast(other));
    }

    /// New3 constructs a new QLine object.
    ///
    pub fn New3() QtC.QLine {
        return qtc.QLine_new3();
    }

    /// New4 constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt1: QtC.QPoint `
    ///
    /// ` pt2: QtC.QPoint `
    ///
    pub fn New4(pt1: ?*anyopaque, pt2: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new4(@ptrCast(pt1), @ptrCast(pt2));
    }

    /// New5 constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn New5(x1: i32, y1: i32, x2: i32, y2: i32) QtC.QLine {
        return qtc.QLine_new5(@bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// New6 constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QLine `
    ///
    pub fn New6(param1: ?*anyopaque) QtC.QLine {
        return qtc.QLine_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` other: QtC.QLine `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLine_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` other: QtC.QLine `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLine_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QLine_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#p1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn P1(self: ?*anyopaque) QtC.QPoint {
        return qtc.QLine_P1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#p2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn P2(self: ?*anyopaque) QtC.QPoint {
        return qtc.QLine_P2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#x1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn X1(self: ?*anyopaque) i32 {
        return qtc.QLine_X1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#y1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn Y1(self: ?*anyopaque) i32 {
        return qtc.QLine_Y1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#x2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn X2(self: ?*anyopaque) i32 {
        return qtc.QLine_X2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#y2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn Y2(self: ?*anyopaque) i32 {
        return qtc.QLine_Y2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn Dx(self: ?*anyopaque) i32 {
        return qtc.QLine_Dx(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn Dy(self: ?*anyopaque) i32 {
        return qtc.QLine_Dy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn Translate(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QLine_Translate(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translate2(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QLine_Translate2(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn Translated(self: ?*anyopaque, p: ?*anyopaque) QtC.QLine {
        return qtc.QLine_Translated(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translated2(self: ?*anyopaque, dx: i32, dy: i32) QtC.QLine {
        return qtc.QLine_Translated2(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QPoint {
        return qtc.QLine_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` p1: QtC.QPoint `
    ///
    pub fn SetP1(self: ?*anyopaque, p1: ?*anyopaque) void {
        qtc.QLine_SetP1(@ptrCast(self), @ptrCast(p1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` p2: QtC.QPoint `
    ///
    pub fn SetP2(self: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLine_SetP2(@ptrCast(self), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` p1: QtC.QPoint `
    ///
    /// ` p2: QtC.QPoint `
    ///
    pub fn SetPoints(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLine_SetPoints(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn SetLine(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QLine_SetLine(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#toLineF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn ToLineF(self: ?*anyopaque) QtC.QLineF {
        return qtc.QLine_ToLineF(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dtor.QLine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLine `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLine_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)
pub const qlinef = struct {
    /// New constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLineF `
    ///
    pub fn New(other: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new(@ptrCast(other));
    }

    /// New2 constructs a new QLineF object and invalidates the source QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLineF `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QLineF object.
    ///
    pub fn New3() QtC.QLineF {
        return qtc.QLineF_new3();
    }

    /// New4 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt1: QtC.QPointF `
    ///
    /// ` pt2: QtC.QPointF `
    ///
    pub fn New4(pt1: ?*anyopaque, pt2: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new4(@ptrCast(pt1), @ptrCast(pt2));
    }

    /// New5 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn New5(x1: f64, y1: f64, x2: f64, y2: f64) QtC.QLineF {
        return qtc.QLineF_new5(@bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// New6 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QtC.QLine `
    ///
    pub fn New6(line: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new6(@ptrCast(line));
    }

    /// New7 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QLineF `
    ///
    pub fn New7(param1: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` other: QtC.QLineF `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLineF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` other: QtC.QLineF `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLineF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` length: f64 `
    ///
    /// ` angle: f64 `
    ///
    pub fn FromPolar(length: f64, angle: f64) QtC.QLineF {
        return qtc.QLineF_FromPolar(@bitCast(length), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QLineF_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn P1(self: ?*anyopaque) QtC.QPointF {
        return qtc.QLineF_P1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn P2(self: ?*anyopaque) QtC.QPointF {
        return qtc.QLineF_P2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn X1(self: ?*anyopaque) f64 {
        return qtc.QLineF_X1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Y1(self: ?*anyopaque) f64 {
        return qtc.QLineF_Y1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn X2(self: ?*anyopaque) f64 {
        return qtc.QLineF_X2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Y2(self: ?*anyopaque) f64 {
        return qtc.QLineF_Y2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Dx(self: ?*anyopaque) f64 {
        return qtc.QLineF_Dx(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Dy(self: ?*anyopaque) f64 {
        return qtc.QLineF_Dy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Length(self: ?*anyopaque) f64 {
        return qtc.QLineF_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` lenVal: f64 `
    ///
    pub fn SetLength(self: ?*anyopaque, lenVal: f64) void {
        qtc.QLineF_SetLength(@ptrCast(self), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Angle(self: ?*anyopaque) f64 {
        return qtc.QLineF_Angle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QLineF_SetAngle(@ptrCast(self), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` l: QtC.QLineF `
    ///
    pub fn AngleTo(self: ?*anyopaque, l: ?*anyopaque) f64 {
        return qtc.QLineF_AngleTo(@ptrCast(self), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#unitVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn UnitVector(self: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_UnitVector(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#normalVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn NormalVector(self: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_NormalVector(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` l: QtC.QLineF `
    ///
    /// ## Returns:
    ///
    /// ` qline_enums.IntersectionType `
    ///
    pub fn Intersects(self: ?*anyopaque, l: ?*anyopaque) i32 {
        return qtc.QLineF_Intersects(@ptrCast(self), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#pointAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` t: f64 `
    ///
    pub fn PointAt(self: ?*anyopaque, t: f64) QtC.QPointF {
        return qtc.QLineF_PointAt(@ptrCast(self), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn Translate(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QLineF_Translate(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate2(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QLineF_Translate2(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn Translated(self: ?*anyopaque, p: ?*anyopaque) QtC.QLineF {
        return qtc.QLineF_Translated(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translated2(self: ?*anyopaque, dx: f64, dy: f64) QtC.QLineF {
        return qtc.QLineF_Translated2(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QPointF {
        return qtc.QLineF_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` p1: QtC.QPointF `
    ///
    pub fn SetP1(self: ?*anyopaque, p1: ?*anyopaque) void {
        qtc.QLineF_SetP1(@ptrCast(self), @ptrCast(p1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` p2: QtC.QPointF `
    ///
    pub fn SetP2(self: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLineF_SetP2(@ptrCast(self), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` p1: QtC.QPointF `
    ///
    /// ` p2: QtC.QPointF `
    ///
    pub fn SetPoints(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        qtc.QLineF_SetPoints(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn SetLine(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QLineF_SetLine(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#toLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn ToLine(self: ?*anyopaque) QtC.QLine {
        return qtc.QLineF_ToLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineF `
    ///
    /// ` l: QtC.QLineF `
    ///
    /// ` intersectionPoint: QtC.QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qline_enums.IntersectionType `
    ///
    pub fn Intersects2(self: ?*anyopaque, l: ?*anyopaque, intersectionPoint: ?*anyopaque) i32 {
        return qtc.QLineF_Intersects2(@ptrCast(self), @ptrCast(l), @ptrCast(intersectionPoint));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dtor.QLineF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLineF `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLineF_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#public-types)
pub const enums = struct {
    pub const IntersectionType = enum(i32) {
        pub const NoIntersection: i32 = 0;
        pub const BoundedIntersection: i32 = 1;
        pub const UnboundedIntersection: i32 = 2;
    };
};
