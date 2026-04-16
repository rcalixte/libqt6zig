const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html)
pub const QPoint = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPoint,

    pub const _is_QPoint = {};

    /// New constructs a new QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPoint `
    ///
    pub fn New(other: anytype) QPoint {
        comptime _ = @TypeOf(other)._is_QPoint;
        return .{ .ptr = qtc.QPoint_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPoint object and invalidates the source QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPoint `
    ///
    pub fn New2(other: anytype) QPoint {
        comptime _ = @TypeOf(other)._is_QPoint;
        return .{ .ptr = qtc.QPoint_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPoint object.
    ///
    pub fn New3() QPoint {
        return .{ .ptr = qtc.QPoint_new3() };
    }

    /// New4 constructs a new QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: i32 `
    ///
    /// ` ypos: i32 `
    ///
    pub fn New4(xpos: i32, ypos: i32) QPoint {
        return .{ .ptr = qtc.QPoint_new4(@bitCast(xpos), @bitCast(ypos)) };
    }

    /// New5 constructs a new QPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPoint `
    ///
    pub fn New5(param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QPoint_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPoint `
    ///
    /// ` other: QPoint `
    ///
    pub fn CopyAssign(self: QPoint, other: QPoint) void {
        qtc.QPoint_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPoint `
    ///
    /// ` other: QPoint `
    ///
    pub fn MoveAssign(self: QPoint, other: QPoint) void {
        qtc.QPoint_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn IsNull(self: QPoint) bool {
        return qtc.QPoint_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn X(self: QPoint) i32 {
        return qtc.QPoint_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn Y(self: QPoint) i32 {
        return qtc.QPoint_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` x: i32 `
    ///
    pub fn SetX(self: QPoint, x: i32) void {
        qtc.QPoint_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` y: i32 `
    ///
    pub fn SetY(self: QPoint, y: i32) void {
        qtc.QPoint_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#manhattanLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn ManhattanLength(self: QPoint) i32 {
        return qtc.QPoint_ManhattanLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn Transposed(self: QPoint) QPoint {
        return .{ .ptr = qtc.QPoint_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#rx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn Rx(self: QPoint) ?*i32 {
        return @ptrCast(qtc.QPoint_Rx(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#ry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn Ry(self: QPoint) ?*i32 {
        return @ptrCast(qtc.QPoint_Ry(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` p: QPoint `
    ///
    pub fn OperatorPlusAssign(self: QPoint, p: anytype) QPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QPoint_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` p: QPoint `
    ///
    pub fn OperatorMinusAssign(self: QPoint, p: anytype) QPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QPoint_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: QPoint, factor: f32) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` factor: f64 `
    ///
    pub fn OperatorMultiplyAssign2(self: QPoint, factor: f64) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` factor: i32 `
    ///
    pub fn OperatorMultiplyAssign3(self: QPoint, factor: i32) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorMultiplyAssign3(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` divisor: f64 `
    ///
    pub fn OperatorDivideAssign(self: QPoint, divisor: f64) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn DotProduct(p1: anytype, p2: anytype) i32 {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        return qtc.QPoint_DotProduct(@ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn ToPointF(self: QPoint) QPointF {
        return .{ .ptr = qtc.QPoint_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#dtor.QPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPoint `
    ///
    pub fn Delete(self: QPoint) void {
        qtc.QPoint_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html)
pub const QPointF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPointF,

    pub const _is_QPointF = {};

    /// New constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPointF `
    ///
    pub fn New(other: anytype) QPointF {
        comptime _ = @TypeOf(other)._is_QPointF;
        return .{ .ptr = qtc.QPointF_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPointF object and invalidates the source QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPointF `
    ///
    pub fn New2(other: anytype) QPointF {
        comptime _ = @TypeOf(other)._is_QPointF;
        return .{ .ptr = qtc.QPointF_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPointF object.
    ///
    pub fn New3() QPointF {
        return .{ .ptr = qtc.QPointF_new3() };
    }

    /// New4 constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn New4(p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QPointF_new4(@ptrCast(p.ptr)) };
    }

    /// New5 constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f64 `
    ///
    /// ` ypos: f64 `
    ///
    pub fn New5(xpos: f64, ypos: f64) QPointF {
        return .{ .ptr = qtc.QPointF_new5(@bitCast(xpos), @bitCast(ypos)) };
    }

    /// New6 constructs a new QPointF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPointF `
    ///
    pub fn New6(param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QPointF_new6(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointF `
    ///
    /// ` other: QPointF `
    ///
    pub fn CopyAssign(self: QPointF, other: QPointF) void {
        qtc.QPointF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointF `
    ///
    /// ` other: QPointF `
    ///
    pub fn MoveAssign(self: QPointF, other: QPointF) void {
        qtc.QPointF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#manhattanLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn ManhattanLength(self: QPointF) f64 {
        return qtc.QPointF_ManhattanLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn IsNull(self: QPointF) bool {
        return qtc.QPointF_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn X(self: QPointF) f64 {
        return qtc.QPointF_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn Y(self: QPointF) f64 {
        return qtc.QPointF_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: QPointF, x: f64) void {
        qtc.QPointF_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: QPointF, y: f64) void {
        qtc.QPointF_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn Transposed(self: QPointF) QPointF {
        return .{ .ptr = qtc.QPointF_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#rx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn Rx(self: QPointF) ?*f64 {
        return @ptrCast(qtc.QPointF_Rx(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#ry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn Ry(self: QPointF) ?*f64 {
        return @ptrCast(qtc.QPointF_Ry(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` p: QPointF `
    ///
    pub fn OperatorPlusAssign(self: QPointF, p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QPointF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` p: QPointF `
    ///
    pub fn OperatorMinusAssign(self: QPointF, p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QPointF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: QPointF, c: f64) QPointF {
        return .{ .ptr = qtc.QPointF_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorDivideAssign(self: QPointF, c: f64) QPointF {
        return .{ .ptr = qtc.QPointF_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QPointF `
    ///
    /// ` p2: QPointF `
    ///
    pub fn DotProduct(p1: anytype, p2: anytype) f64 {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        return qtc.QPointF_DotProduct(@ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn ToPoint(self: QPointF) QPoint {
        return .{ .ptr = qtc.QPointF_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#dtor.QPointF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPointF `
    ///
    pub fn Delete(self: QPointF) void {
        qtc.QPointF_Delete(@ptrCast(self.ptr));
    }
};
