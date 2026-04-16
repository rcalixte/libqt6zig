const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const qline_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html)
pub const QLine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLine,

    pub const _is_QLine = {};

    /// New constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLine `
    ///
    pub fn New(other: anytype) QLine {
        comptime _ = @TypeOf(other)._is_QLine;
        return .{ .ptr = qtc.QLine_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QLine object and invalidates the source QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLine `
    ///
    pub fn New2(other: anytype) QLine {
        comptime _ = @TypeOf(other)._is_QLine;
        return .{ .ptr = qtc.QLine_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QLine object.
    ///
    pub fn New3() QLine {
        return .{ .ptr = qtc.QLine_new3() };
    }

    /// New4 constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt1: QPoint `
    ///
    /// ` pt2: QPoint `
    ///
    pub fn New4(pt1: anytype, pt2: anytype) QLine {
        comptime _ = @TypeOf(pt1)._is_QPoint;
        comptime _ = @TypeOf(pt2)._is_QPoint;
        return .{ .ptr = qtc.QLine_new4(@ptrCast(pt1.ptr), @ptrCast(pt2.ptr)) };
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
    pub fn New5(x1: i32, y1: i32, x2: i32, y2: i32) QLine {
        return .{ .ptr = qtc.QLine_new5(@bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// New6 constructs a new QLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLine `
    ///
    pub fn New6(param1: anytype) QLine {
        comptime _ = @TypeOf(param1)._is_QLine;
        return .{ .ptr = qtc.QLine_new6(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLine `
    ///
    /// ` other: QLine `
    ///
    pub fn CopyAssign(self: QLine, other: QLine) void {
        qtc.QLine_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLine `
    ///
    /// ` other: QLine `
    ///
    pub fn MoveAssign(self: QLine, other: QLine) void {
        qtc.QLine_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn IsNull(self: QLine) bool {
        return qtc.QLine_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#p1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn P1(self: QLine) QPoint {
        return .{ .ptr = qtc.QLine_P1(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#p2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn P2(self: QLine) QPoint {
        return .{ .ptr = qtc.QLine_P2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#x1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn X1(self: QLine) i32 {
        return qtc.QLine_X1(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#y1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn Y1(self: QLine) i32 {
        return qtc.QLine_Y1(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#x2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn X2(self: QLine) i32 {
        return qtc.QLine_X2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#y2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn Y2(self: QLine) i32 {
        return qtc.QLine_Y2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn Dx(self: QLine) i32 {
        return qtc.QLine_Dx(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn Dy(self: QLine) i32 {
        return qtc.QLine_Dy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p: QPoint `
    ///
    pub fn Translate(self: QLine, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QLine_Translate(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translate2(self: QLine, dx: i32, dy: i32) void {
        qtc.QLine_Translate2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p: QPoint `
    ///
    pub fn Translated(self: QLine, p: anytype) QLine {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QLine_Translated(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translated2(self: QLine, dx: i32, dy: i32) QLine {
        return .{ .ptr = qtc.QLine_Translated2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn Center(self: QLine) QPoint {
        return .{ .ptr = qtc.QLine_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p1: QPoint `
    ///
    pub fn SetP1(self: QLine, p1: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPoint;
        qtc.QLine_SetP1(@ptrCast(self.ptr), @ptrCast(p1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p2: QPoint `
    ///
    pub fn SetP2(self: QLine, p2: anytype) void {
        comptime _ = @TypeOf(p2)._is_QPoint;
        qtc.QLine_SetP2(@ptrCast(self.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn SetPoints(self: QLine, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        qtc.QLine_SetPoints(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn SetLine(self: QLine, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QLine_SetLine(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#toLineF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn ToLineF(self: QLine) QLineF {
        return .{ .ptr = qtc.QLine_ToLineF(@ptrCast(self.ptr)) };
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
    /// ` self: QLine `
    ///
    pub fn Delete(self: QLine) void {
        qtc.QLine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)
pub const QLineF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLineF,

    pub const _is_QLineF = {};

    /// New constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLineF `
    ///
    pub fn New(other: anytype) QLineF {
        comptime _ = @TypeOf(other)._is_QLineF;
        return .{ .ptr = qtc.QLineF_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QLineF object and invalidates the source QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLineF `
    ///
    pub fn New2(other: anytype) QLineF {
        comptime _ = @TypeOf(other)._is_QLineF;
        return .{ .ptr = qtc.QLineF_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QLineF object.
    ///
    pub fn New3() QLineF {
        return .{ .ptr = qtc.QLineF_new3() };
    }

    /// New4 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt1: QPointF `
    ///
    /// ` pt2: QPointF `
    ///
    pub fn New4(pt1: anytype, pt2: anytype) QLineF {
        comptime _ = @TypeOf(pt1)._is_QPointF;
        comptime _ = @TypeOf(pt2)._is_QPointF;
        return .{ .ptr = qtc.QLineF_new4(@ptrCast(pt1.ptr), @ptrCast(pt2.ptr)) };
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
    pub fn New5(x1: f64, y1: f64, x2: f64, y2: f64) QLineF {
        return .{ .ptr = qtc.QLineF_new5(@bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// New6 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QLine `
    ///
    pub fn New6(line: anytype) QLineF {
        comptime _ = @TypeOf(line)._is_QLine;
        return .{ .ptr = qtc.QLineF_new6(@ptrCast(line.ptr)) };
    }

    /// New7 constructs a new QLineF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLineF `
    ///
    pub fn New7(param1: anytype) QLineF {
        comptime _ = @TypeOf(param1)._is_QLineF;
        return .{ .ptr = qtc.QLineF_new7(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLineF `
    ///
    /// ` other: QLineF `
    ///
    pub fn CopyAssign(self: QLineF, other: QLineF) void {
        qtc.QLineF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLineF `
    ///
    /// ` other: QLineF `
    ///
    pub fn MoveAssign(self: QLineF, other: QLineF) void {
        qtc.QLineF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` length: f64 `
    ///
    /// ` angle: f64 `
    ///
    pub fn FromPolar(length: f64, angle: f64) QLineF {
        return .{ .ptr = qtc.QLineF_FromPolar(@bitCast(length), @bitCast(angle)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn IsNull(self: QLineF) bool {
        return qtc.QLineF_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn P1(self: QLineF) QPointF {
        return .{ .ptr = qtc.QLineF_P1(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn P2(self: QLineF) QPointF {
        return .{ .ptr = qtc.QLineF_P2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn X1(self: QLineF) f64 {
        return qtc.QLineF_X1(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Y1(self: QLineF) f64 {
        return qtc.QLineF_Y1(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn X2(self: QLineF) f64 {
        return qtc.QLineF_X2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Y2(self: QLineF) f64 {
        return qtc.QLineF_Y2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Dx(self: QLineF) f64 {
        return qtc.QLineF_Dx(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Dy(self: QLineF) f64 {
        return qtc.QLineF_Dy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Length(self: QLineF) f64 {
        return qtc.QLineF_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` lenVal: f64 `
    ///
    pub fn SetLength(self: QLineF, lenVal: f64) void {
        qtc.QLineF_SetLength(@ptrCast(self.ptr), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Angle(self: QLineF) f64 {
        return qtc.QLineF_Angle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetAngle(self: QLineF, angle: f64) void {
        qtc.QLineF_SetAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` l: QLineF `
    ///
    pub fn AngleTo(self: QLineF, l: anytype) f64 {
        comptime _ = @TypeOf(l)._is_QLineF;
        return qtc.QLineF_AngleTo(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#unitVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn UnitVector(self: QLineF) QLineF {
        return .{ .ptr = qtc.QLineF_UnitVector(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#normalVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn NormalVector(self: QLineF) QLineF {
        return .{ .ptr = qtc.QLineF_NormalVector(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` l: QLineF `
    ///
    /// ## Returns:
    ///
    /// ` qline_enums.IntersectionType `
    ///
    pub fn Intersects(self: QLineF, l: anytype) i32 {
        comptime _ = @TypeOf(l)._is_QLineF;
        return qtc.QLineF_Intersects(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#pointAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` t: f64 `
    ///
    pub fn PointAt(self: QLineF, t: f64) QPointF {
        return .{ .ptr = qtc.QLineF_PointAt(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p: QPointF `
    ///
    pub fn Translate(self: QLineF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QLineF_Translate(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate2(self: QLineF, dx: f64, dy: f64) void {
        qtc.QLineF_Translate2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p: QPointF `
    ///
    pub fn Translated(self: QLineF, p: anytype) QLineF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QLineF_Translated(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translated2(self: QLineF, dx: f64, dy: f64) QLineF {
        return .{ .ptr = qtc.QLineF_Translated2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn Center(self: QLineF) QPointF {
        return .{ .ptr = qtc.QLineF_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p1: QPointF `
    ///
    pub fn SetP1(self: QLineF, p1: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPointF;
        qtc.QLineF_SetP1(@ptrCast(self.ptr), @ptrCast(p1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p2: QPointF `
    ///
    pub fn SetP2(self: QLineF, p2: anytype) void {
        comptime _ = @TypeOf(p2)._is_QPointF;
        qtc.QLineF_SetP2(@ptrCast(self.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p1: QPointF `
    ///
    /// ` p2: QPointF `
    ///
    pub fn SetPoints(self: QLineF, p1: anytype, p2: anytype) void {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        qtc.QLineF_SetPoints(@ptrCast(self.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn SetLine(self: QLineF, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QLineF_SetLine(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#toLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn ToLine(self: QLineF) QLine {
        return .{ .ptr = qtc.QLineF_ToLine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` l: QLineF `
    ///
    /// ` intersectionPoint: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qline_enums.IntersectionType `
    ///
    pub fn Intersects2(self: QLineF, l: anytype, intersectionPoint: anytype) i32 {
        comptime _ = @TypeOf(l)._is_QLineF;
        comptime _ = @TypeOf(intersectionPoint)._is_QPointF;
        return qtc.QLineF_Intersects2(@ptrCast(self.ptr), @ptrCast(l.ptr), @ptrCast(intersectionPoint.ptr));
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
    /// ` self: QLineF `
    ///
    pub fn Delete(self: QLineF) void {
        qtc.QLineF_Delete(@ptrCast(self.ptr));
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
