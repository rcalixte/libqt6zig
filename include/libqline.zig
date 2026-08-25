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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLine `
    ///
    pub fn new(other: anytype) QLine {
        comptime _ = @TypeOf(other)._is_QLine;
        return .{ .ptr = qtc.QLine_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLine object and invalidate the source QLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLine `
    ///
    pub fn new2(other: anytype) QLine {
        comptime _ = @TypeOf(other)._is_QLine;
        return .{ .ptr = qtc.QLine_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLine object in C++ memory
    ///
    pub fn new3() QLine {
        return .{ .ptr = qtc.QLine_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pt1: QPoint `
    ///
    /// ` pt2: QPoint `
    ///
    pub fn new4(pt1: anytype, pt2: anytype) QLine {
        comptime _ = @TypeOf(pt1)._is_QPoint;
        comptime _ = @TypeOf(pt2)._is_QPoint;
        return .{ .ptr = qtc.QLine_new4(@ptrCast(pt1.ptr), @ptrCast(pt2.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _x1: i32 `
    ///
    /// ` _y1: i32 `
    ///
    /// ` _x2: i32 `
    ///
    /// ` _y2: i32 `
    ///
    pub fn new5(_x1: i32, _y1: i32, _x2: i32, _y2: i32) QLine {
        return .{ .ptr = qtc.QLine_new5(@bitCast(_x1), @bitCast(_y1), @bitCast(_x2), @bitCast(_y2)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLine `
    ///
    pub fn new6(param1: anytype) QLine {
        comptime _ = @TypeOf(param1)._is_QLine;
        return .{ .ptr = qtc.QLine_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLine `
    ///
    /// ` other: QLine `
    ///
    pub fn copyAssign(self: QLine, other: QLine) void {
        qtc.QLine_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLine `
    ///
    /// ` other: QLine `
    ///
    pub fn moveAssign(self: QLine, other: QLine) void {
        qtc.QLine_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn isNull(self: QLine) bool {
        return qtc.QLine_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `p1` instead
    ///
    pub const P1 = p1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#p1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn p1(self: QLine) QPoint {
        return .{ .ptr = qtc.QLine_P1(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `p2` instead
    ///
    pub const P2 = p2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#p2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn p2(self: QLine) QPoint {
        return .{ .ptr = qtc.QLine_P2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x1` instead
    ///
    pub const X1 = x1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#x1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn x1(self: QLine) i32 {
        return qtc.QLine_X1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y1` instead
    ///
    pub const Y1 = y1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#y1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn y1(self: QLine) i32 {
        return qtc.QLine_Y1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x2` instead
    ///
    pub const X2 = x2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#x2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn x2(self: QLine) i32 {
        return qtc.QLine_X2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y2` instead
    ///
    pub const Y2 = y2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#y2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn y2(self: QLine) i32 {
        return qtc.QLine_Y2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dx` instead
    ///
    pub const Dx = dx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn dx(self: QLine) i32 {
        return qtc.QLine_Dx(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dy` instead
    ///
    pub const Dy = dy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn dy(self: QLine) i32 {
        return qtc.QLine_Dy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p: QPoint `
    ///
    pub fn translate(self: QLine, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QLine_Translate(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` _dx: i32 `
    ///
    /// ` _dy: i32 `
    ///
    pub fn translate2(self: QLine, _dx: i32, _dy: i32) void {
        qtc.QLine_Translate2(@ptrCast(self.ptr), @bitCast(_dx), @bitCast(_dy));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` p: QPoint `
    ///
    pub fn translated(self: QLine, p: anytype) QLine {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QLine_Translated(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` _dx: i32 `
    ///
    /// ` _dy: i32 `
    ///
    pub fn translated2(self: QLine, _dx: i32, _dy: i32) QLine {
        return .{ .ptr = qtc.QLine_Translated2(@ptrCast(self.ptr), @bitCast(_dx), @bitCast(_dy)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn center(self: QLine) QPoint {
        return .{ .ptr = qtc.QLine_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setP1` instead
    ///
    pub const SetP1 = setP1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` _p1: QPoint `
    ///
    pub fn setP1(self: QLine, _p1: anytype) void {
        comptime _ = @TypeOf(_p1)._is_QPoint;
        qtc.QLine_SetP1(@ptrCast(self.ptr), @ptrCast(_p1.ptr));
    }

    /// ### DEPRECATED: Use `setP2` instead
    ///
    pub const SetP2 = setP2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` _p2: QPoint `
    ///
    pub fn setP2(self: QLine, _p2: anytype) void {
        comptime _ = @TypeOf(_p2)._is_QPoint;
        qtc.QLine_SetP2(@ptrCast(self.ptr), @ptrCast(_p2.ptr));
    }

    /// ### DEPRECATED: Use `setPoints` instead
    ///
    pub const SetPoints = setPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` _p1: QPoint `
    ///
    /// ` _p2: QPoint `
    ///
    pub fn setPoints(self: QLine, _p1: anytype, _p2: anytype) void {
        comptime _ = @TypeOf(_p1)._is_QPoint;
        comptime _ = @TypeOf(_p2)._is_QPoint;
        qtc.QLine_SetPoints(@ptrCast(self.ptr), @ptrCast(_p1.ptr), @ptrCast(_p2.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    /// ` _x1: i32 `
    ///
    /// ` _y1: i32 `
    ///
    /// ` _x2: i32 `
    ///
    /// ` _y2: i32 `
    ///
    pub fn setLine(self: QLine, _x1: i32, _y1: i32, _x2: i32, _y2: i32) void {
        qtc.QLine_SetLine(@ptrCast(self.ptr), @bitCast(_x1), @bitCast(_y1), @bitCast(_x2), @bitCast(_y2));
    }

    /// ### DEPRECATED: Use `toLineF` instead
    ///
    pub const ToLineF = toLineF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#toLineF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLine `
    ///
    pub fn toLineF(self: QLine) QLineF {
        return .{ .ptr = qtc.QLine_ToLineF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#dtor.QLine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLine `
    ///
    pub fn delete(self: QLine) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLineF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLineF `
    ///
    pub fn new(other: anytype) QLineF {
        comptime _ = @TypeOf(other)._is_QLineF;
        return .{ .ptr = qtc.QLineF_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLineF object and invalidate the source QLineF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLineF `
    ///
    pub fn new2(other: anytype) QLineF {
        comptime _ = @TypeOf(other)._is_QLineF;
        return .{ .ptr = qtc.QLineF_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLineF object in C++ memory
    ///
    pub fn new3() QLineF {
        return .{ .ptr = qtc.QLineF_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QLineF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pt1: QPointF `
    ///
    /// ` pt2: QPointF `
    ///
    pub fn new4(pt1: anytype, pt2: anytype) QLineF {
        comptime _ = @TypeOf(pt1)._is_QPointF;
        comptime _ = @TypeOf(pt2)._is_QPointF;
        return .{ .ptr = qtc.QLineF_new4(@ptrCast(pt1.ptr), @ptrCast(pt2.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QLineF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _x1: f64 `
    ///
    /// ` _y1: f64 `
    ///
    /// ` _x2: f64 `
    ///
    /// ` _y2: f64 `
    ///
    pub fn new5(_x1: f64, _y1: f64, _x2: f64, _y2: f64) QLineF {
        return .{ .ptr = qtc.QLineF_new5(@bitCast(_x1), @bitCast(_y1), @bitCast(_x2), @bitCast(_y2)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QLineF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` line: QLine `
    ///
    pub fn new6(line: anytype) QLineF {
        comptime _ = @TypeOf(line)._is_QLine;
        return .{ .ptr = qtc.QLineF_new6(@ptrCast(line.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QLineF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLineF `
    ///
    pub fn new7(param1: anytype) QLineF {
        comptime _ = @TypeOf(param1)._is_QLineF;
        return .{ .ptr = qtc.QLineF_new7(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLineF `
    ///
    /// ` other: QLineF `
    ///
    pub fn copyAssign(self: QLineF, other: QLineF) void {
        qtc.QLineF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLineF `
    ///
    /// ` other: QLineF `
    ///
    pub fn moveAssign(self: QLineF, other: QLineF) void {
        qtc.QLineF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromPolar` instead
    ///
    pub const FromPolar = fromPolar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` _length: f64 `
    ///
    /// ` _angle: f64 `
    ///
    pub fn fromPolar(_length: f64, _angle: f64) QLineF {
        return .{ .ptr = qtc.QLineF_FromPolar(@bitCast(_length), @bitCast(_angle)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn isNull(self: QLineF) bool {
        return qtc.QLineF_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `p1` instead
    ///
    pub const P1 = p1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn p1(self: QLineF) QPointF {
        return .{ .ptr = qtc.QLineF_P1(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `p2` instead
    ///
    pub const P2 = p2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn p2(self: QLineF) QPointF {
        return .{ .ptr = qtc.QLineF_P2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x1` instead
    ///
    pub const X1 = x1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn x1(self: QLineF) f64 {
        return qtc.QLineF_X1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y1` instead
    ///
    pub const Y1 = y1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn y1(self: QLineF) f64 {
        return qtc.QLineF_Y1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x2` instead
    ///
    pub const X2 = x2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn x2(self: QLineF) f64 {
        return qtc.QLineF_X2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y2` instead
    ///
    pub const Y2 = y2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn y2(self: QLineF) f64 {
        return qtc.QLineF_Y2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dx` instead
    ///
    pub const Dx = dx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn dx(self: QLineF) f64 {
        return qtc.QLineF_Dx(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dy` instead
    ///
    pub const Dy = dy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn dy(self: QLineF) f64 {
        return qtc.QLineF_Dy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn length(self: QLineF) f64 {
        return qtc.QLineF_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` len: f64 `
    ///
    pub fn setLength(self: QLineF, len: f64) void {
        qtc.QLineF_SetLength(@ptrCast(self.ptr), @bitCast(len));
    }

    /// ### DEPRECATED: Use `angle` instead
    ///
    pub const Angle = angle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn angle(self: QLineF) f64 {
        return qtc.QLineF_Angle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAngle` instead
    ///
    pub const SetAngle = setAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _angle: f64 `
    ///
    pub fn setAngle(self: QLineF, _angle: f64) void {
        qtc.QLineF_SetAngle(@ptrCast(self.ptr), @bitCast(_angle));
    }

    /// ### DEPRECATED: Use `angleTo` instead
    ///
    pub const AngleTo = angleTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` l: QLineF `
    ///
    pub fn angleTo(self: QLineF, l: anytype) f64 {
        comptime _ = @TypeOf(l)._is_QLineF;
        return qtc.QLineF_AngleTo(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `unitVector` instead
    ///
    pub const UnitVector = unitVector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#unitVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn unitVector(self: QLineF) QLineF {
        return .{ .ptr = qtc.QLineF_UnitVector(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalVector` instead
    ///
    pub const NormalVector = normalVector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#normalVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn normalVector(self: QLineF) QLineF {
        return .{ .ptr = qtc.QLineF_NormalVector(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

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
    pub fn intersects(self: QLineF, l: anytype) i32 {
        comptime _ = @TypeOf(l)._is_QLineF;
        return qtc.QLineF_Intersects(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `pointAt` instead
    ///
    pub const PointAt = pointAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#pointAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` t: f64 `
    ///
    pub fn pointAt(self: QLineF, t: f64) QPointF {
        return .{ .ptr = qtc.QLineF_PointAt(@ptrCast(self.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p: QPointF `
    ///
    pub fn translate(self: QLineF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QLineF_Translate(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _dx: f64 `
    ///
    /// ` _dy: f64 `
    ///
    pub fn translate2(self: QLineF, _dx: f64, _dy: f64) void {
        qtc.QLineF_Translate2(@ptrCast(self.ptr), @bitCast(_dx), @bitCast(_dy));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` p: QPointF `
    ///
    pub fn translated(self: QLineF, p: anytype) QLineF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QLineF_Translated(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _dx: f64 `
    ///
    /// ` _dy: f64 `
    ///
    pub fn translated2(self: QLineF, _dx: f64, _dy: f64) QLineF {
        return .{ .ptr = qtc.QLineF_Translated2(@ptrCast(self.ptr), @bitCast(_dx), @bitCast(_dy)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn center(self: QLineF) QPointF {
        return .{ .ptr = qtc.QLineF_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setP1` instead
    ///
    pub const SetP1 = setP1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _p1: QPointF `
    ///
    pub fn setP1(self: QLineF, _p1: anytype) void {
        comptime _ = @TypeOf(_p1)._is_QPointF;
        qtc.QLineF_SetP1(@ptrCast(self.ptr), @ptrCast(_p1.ptr));
    }

    /// ### DEPRECATED: Use `setP2` instead
    ///
    pub const SetP2 = setP2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _p2: QPointF `
    ///
    pub fn setP2(self: QLineF, _p2: anytype) void {
        comptime _ = @TypeOf(_p2)._is_QPointF;
        qtc.QLineF_SetP2(@ptrCast(self.ptr), @ptrCast(_p2.ptr));
    }

    /// ### DEPRECATED: Use `setPoints` instead
    ///
    pub const SetPoints = setPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _p1: QPointF `
    ///
    /// ` _p2: QPointF `
    ///
    pub fn setPoints(self: QLineF, _p1: anytype, _p2: anytype) void {
        comptime _ = @TypeOf(_p1)._is_QPointF;
        comptime _ = @TypeOf(_p2)._is_QPointF;
        qtc.QLineF_SetPoints(@ptrCast(self.ptr), @ptrCast(_p1.ptr), @ptrCast(_p2.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    /// ` _x1: f64 `
    ///
    /// ` _y1: f64 `
    ///
    /// ` _x2: f64 `
    ///
    /// ` _y2: f64 `
    ///
    pub fn setLine(self: QLineF, _x1: f64, _y1: f64, _x2: f64, _y2: f64) void {
        qtc.QLineF_SetLine(@ptrCast(self.ptr), @bitCast(_x1), @bitCast(_y1), @bitCast(_x2), @bitCast(_y2));
    }

    /// ### DEPRECATED: Use `toLine` instead
    ///
    pub const ToLine = toLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#toLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLineF `
    ///
    pub fn toLine(self: QLineF) QLine {
        return .{ .ptr = qtc.QLineF_ToLine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects2` instead
    ///
    pub const Intersects2 = intersects2;

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
    pub fn intersects2(self: QLineF, l: anytype, intersectionPoint: anytype) i32 {
        comptime _ = @TypeOf(l)._is_QLineF;
        comptime _ = @TypeOf(intersectionPoint)._is_QPointF;
        return qtc.QLineF_Intersects2(@ptrCast(self.ptr), @ptrCast(l.ptr), @ptrCast(intersectionPoint.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dtor.QLineF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLineF `
    ///
    pub fn delete(self: QLineF) void {
        qtc.QLineF_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qline.html#public-types)
pub const enums = struct {
    pub const IntersectionType = enum {
        pub const NoIntersection: i32 = 0;
        pub const BoundedIntersection: i32 = 1;
        pub const UnboundedIntersection: i32 = 2;
    };
};
