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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPoint `
    ///
    pub fn new(other: anytype) QPoint {
        comptime _ = @TypeOf(other)._is_QPoint;
        return .{ .ptr = qtc.QPoint_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPoint object and invalidate the source QPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPoint `
    ///
    pub fn new2(other: anytype) QPoint {
        comptime _ = @TypeOf(other)._is_QPoint;
        return .{ .ptr = qtc.QPoint_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPoint object in C++ memory
    ///
    pub fn new3() QPoint {
        return .{ .ptr = qtc.QPoint_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: i32 `
    ///
    /// ` ypos: i32 `
    ///
    pub fn new4(xpos: i32, ypos: i32) QPoint {
        return .{ .ptr = qtc.QPoint_new4(@bitCast(xpos), @bitCast(ypos)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPoint `
    ///
    pub fn new5(param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QPoint_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPoint `
    ///
    /// ` other: QPoint `
    ///
    pub fn copyAssign(self: QPoint, other: QPoint) void {
        qtc.QPoint_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPoint `
    ///
    /// ` other: QPoint `
    ///
    pub fn moveAssign(self: QPoint, other: QPoint) void {
        qtc.QPoint_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn isNull(self: QPoint) bool {
        return qtc.QPoint_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn x(self: QPoint) i32 {
        return qtc.QPoint_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn y(self: QPoint) i32 {
        return qtc.QPoint_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` _x: i32 `
    ///
    pub fn setX(self: QPoint, _x: i32) void {
        qtc.QPoint_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` _y: i32 `
    ///
    pub fn setY(self: QPoint, _y: i32) void {
        qtc.QPoint_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `manhattanLength` instead
    ///
    pub const ManhattanLength = manhattanLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#manhattanLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn manhattanLength(self: QPoint) i32 {
        return qtc.QPoint_ManhattanLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn transposed(self: QPoint) QPoint {
        return .{ .ptr = qtc.QPoint_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rx` instead
    ///
    pub const Rx = rx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#rx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn rx(self: QPoint) ?*i32 {
        return @ptrCast(qtc.QPoint_Rx(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `ry` instead
    ///
    pub const Ry = ry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#ry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn ry(self: QPoint) ?*i32 {
        return @ptrCast(qtc.QPoint_Ry(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` p: QPoint `
    ///
    pub fn operatorPlusAssign(self: QPoint, p: anytype) QPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QPoint_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` p: QPoint `
    ///
    pub fn operatorMinusAssign(self: QPoint, p: anytype) QPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QPoint_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` factor: f32 `
    ///
    pub fn operatorMultiplyAssign(self: QPoint, factor: f32) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` factor: f64 `
    ///
    pub fn operatorMultiplyAssign2(self: QPoint, factor: f64) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign3` instead
    ///
    pub const OperatorMultiplyAssign3 = operatorMultiplyAssign3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` factor: i32 `
    ///
    pub fn operatorMultiplyAssign3(self: QPoint, factor: i32) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorMultiplyAssign3(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    /// ` divisor: f64 `
    ///
    pub fn operatorDivideAssign(self: QPoint, divisor: f64) QPoint {
        return .{ .ptr = qtc.QPoint_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `dotProduct` instead
    ///
    pub const DotProduct = dotProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn dotProduct(p1: anytype, p2: anytype) i32 {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        return qtc.QPoint_DotProduct(@ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### DEPRECATED: Use `toPointF` instead
    ///
    pub const ToPointF = toPointF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPoint `
    ///
    pub fn toPointF(self: QPoint) QPointF {
        return .{ .ptr = qtc.QPoint_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpoint.html#dtor.QPoint)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPoint `
    ///
    pub fn delete(self: QPoint) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPointF `
    ///
    pub fn new(other: anytype) QPointF {
        comptime _ = @TypeOf(other)._is_QPointF;
        return .{ .ptr = qtc.QPointF_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPointF object and invalidate the source QPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPointF `
    ///
    pub fn new2(other: anytype) QPointF {
        comptime _ = @TypeOf(other)._is_QPointF;
        return .{ .ptr = qtc.QPointF_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPointF object in C++ memory
    ///
    pub fn new3() QPointF {
        return .{ .ptr = qtc.QPointF_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn new4(p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QPointF_new4(@ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f64 `
    ///
    /// ` ypos: f64 `
    ///
    pub fn new5(xpos: f64, ypos: f64) QPointF {
        return .{ .ptr = qtc.QPointF_new5(@bitCast(xpos), @bitCast(ypos)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPointF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPointF `
    ///
    pub fn new6(param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QPointF_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointF `
    ///
    /// ` other: QPointF `
    ///
    pub fn copyAssign(self: QPointF, other: QPointF) void {
        qtc.QPointF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointF `
    ///
    /// ` other: QPointF `
    ///
    pub fn moveAssign(self: QPointF, other: QPointF) void {
        qtc.QPointF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `manhattanLength` instead
    ///
    pub const ManhattanLength = manhattanLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#manhattanLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn manhattanLength(self: QPointF) f64 {
        return qtc.QPointF_ManhattanLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn isNull(self: QPointF) bool {
        return qtc.QPointF_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn x(self: QPointF) f64 {
        return qtc.QPointF_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn y(self: QPointF) f64 {
        return qtc.QPointF_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QPointF, _x: f64) void {
        qtc.QPointF_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QPointF, _y: f64) void {
        qtc.QPointF_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn transposed(self: QPointF) QPointF {
        return .{ .ptr = qtc.QPointF_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rx` instead
    ///
    pub const Rx = rx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#rx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn rx(self: QPointF) ?*f64 {
        return @ptrCast(qtc.QPointF_Rx(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `ry` instead
    ///
    pub const Ry = ry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#ry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn ry(self: QPointF) ?*f64 {
        return @ptrCast(qtc.QPointF_Ry(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` p: QPointF `
    ///
    pub fn operatorPlusAssign(self: QPointF, p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QPointF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` p: QPointF `
    ///
    pub fn operatorMinusAssign(self: QPointF, p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QPointF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` c: f64 `
    ///
    pub fn operatorMultiplyAssign(self: QPointF, c: f64) QPointF {
        return .{ .ptr = qtc.QPointF_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    /// ` c: f64 `
    ///
    pub fn operatorDivideAssign(self: QPointF, c: f64) QPointF {
        return .{ .ptr = qtc.QPointF_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `dotProduct` instead
    ///
    pub const DotProduct = dotProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QPointF `
    ///
    /// ` p2: QPointF `
    ///
    pub fn dotProduct(p1: anytype, p2: anytype) f64 {
        comptime _ = @TypeOf(p1)._is_QPointF;
        comptime _ = @TypeOf(p2)._is_QPointF;
        return qtc.QPointF_DotProduct(@ptrCast(p1.ptr), @ptrCast(p2.ptr));
    }

    /// ### DEPRECATED: Use `toPoint` instead
    ///
    pub const ToPoint = toPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointF `
    ///
    pub fn toPoint(self: QPointF) QPoint {
        return .{ .ptr = qtc.QPointF_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointf.html#dtor.QPointF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPointF `
    ///
    pub fn delete(self: QPointF) void {
        qtc.QPointF_Delete(@ptrCast(self.ptr));
    }
};
