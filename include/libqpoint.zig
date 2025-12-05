const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html)
pub const qpoint = struct {
    /// New constructs a new QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPoint `
    ///
    pub fn New(other: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_new(@ptrCast(other));
    }

    /// New2 constructs a new QPoint object and invalidates the source QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPoint `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPoint object.
    ///
    pub fn New3() QtC.QPoint {
        return qtc.QPoint_new3();
    }

    /// New4 constructs a new QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: i32 `
    ///
    /// ` ypos: i32 `
    ///
    pub fn New4(xpos: i32, ypos: i32) QtC.QPoint {
        return qtc.QPoint_new4(@intCast(xpos), @intCast(ypos));
    }

    /// New5 constructs a new QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPoint `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` other: QtC.QPoint `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPoint_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` other: QtC.QPoint `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPoint_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPoint_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QPoint_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QPoint_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` x: i32 `
    ///
    pub fn SetX(self: ?*anyopaque, x: i32) void {
        qtc.QPoint_SetX(@ptrCast(self), @intCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` y: i32 `
    ///
    pub fn SetY(self: ?*anyopaque, y: i32) void {
        qtc.QPoint_SetY(@ptrCast(self), @intCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#manhattanLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn ManhattanLength(self: ?*anyopaque) i32 {
        return qtc.QPoint_ManhattanLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#rx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn Rx(self: ?*anyopaque) ?*i32 {
        return @ptrCast(qtc.QPoint_Rx(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#ry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn Ry(self: ?*anyopaque) ?*i32 {
        return @ptrCast(qtc.QPoint_Ry(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_OperatorPlusAssign(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QPoint_OperatorMinusAssign(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QPoint {
        return qtc.QPoint_OperatorMultiplyAssign(@ptrCast(self), @floatCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` factor: f64 `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, factor: f64) QtC.QPoint {
        return qtc.QPoint_OperatorMultiplyAssign2(@ptrCast(self), @floatCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` factor: i32 `
    ///
    pub fn OperatorMultiplyAssign3(self: ?*anyopaque, factor: i32) QtC.QPoint {
        return qtc.QPoint_OperatorMultiplyAssign3(@ptrCast(self), @intCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    /// ` divisor: f64 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f64) QtC.QPoint {
        return qtc.QPoint_OperatorDivideAssign(@ptrCast(self), @floatCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QtC.QPoint `
    ///
    /// ` p2: QtC.QPoint `
    ///
    pub fn DotProduct(p1: ?*anyopaque, p2: ?*anyopaque) i32 {
        return qtc.QPoint_DotProduct(@ptrCast(p1), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPoint_ToPointF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#dtor.QPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPoint `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPoint_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html)
pub const qpointf = struct {
    /// New constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPointF `
    ///
    pub fn New(other: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new(@ptrCast(other));
    }

    /// New2 constructs a new QPointF object and invalidates the source QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPointF `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPointF object.
    ///
    pub fn New3() QtC.QPointF {
        return qtc.QPointF_new3();
    }

    /// New4 constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn New4(p: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new4(@ptrCast(p));
    }

    /// New5 constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f64 `
    ///
    /// ` ypos: f64 `
    ///
    pub fn New5(xpos: f64, ypos: f64) QtC.QPointF {
        return qtc.QPointF_new5(@floatCast(xpos), @floatCast(ypos));
    }

    /// New6 constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPointF `
    ///
    pub fn New6(param1: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` other: QtC.QPointF `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` other: QtC.QPointF `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#manhattanLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn ManhattanLength(self: ?*anyopaque) f64 {
        return qtc.QPointF_ManhattanLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPointF_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QPointF_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QPointF_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QPointF_SetX(@ptrCast(self), @floatCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QPointF_SetY(@ptrCast(self), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#rx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn Rx(self: ?*anyopaque) ?*f64 {
        return @ptrCast(qtc.QPointF_Rx(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#ry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn Ry(self: ?*anyopaque) ?*f64 {
        return @ptrCast(qtc.QPointF_Ry(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_OperatorPlusAssign(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QPointF_OperatorMinusAssign(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QPointF {
        return qtc.QPointF_OperatorMultiplyAssign(@ptrCast(self), @floatCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QPointF {
        return qtc.QPointF_OperatorDivideAssign(@ptrCast(self), @floatCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QtC.QPointF `
    ///
    /// ` p2: QtC.QPointF `
    ///
    pub fn DotProduct(p1: ?*anyopaque, p2: ?*anyopaque) f64 {
        return qtc.QPointF_DotProduct(@ptrCast(p1), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QPointF_ToPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#dtor.QPointF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPointF `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointF_Delete(@ptrCast(self));
    }
};
