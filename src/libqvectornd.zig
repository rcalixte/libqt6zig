const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)
pub const QVector2D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVector2D,

    pub const _is_QVector2D = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector2D `
    ///
    pub fn new(other: anytype) QVector2D {
        comptime _ = @TypeOf(other)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVector2D object and invalidate the source QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector2D `
    ///
    pub fn new2(other: anytype) QVector2D {
        comptime _ = @TypeOf(other)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVector2D object in C++ memory
    ///
    pub fn new3() QVector2D {
        return .{ .ptr = qtc.QVector2D_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new4(param1: i32) QVector2D {
        return .{ .ptr = qtc.QVector2D_new4(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    pub fn new5(xpos: f32, ypos: f32) QVector2D {
        return .{ .ptr = qtc.QVector2D_new5(@bitCast(xpos), @bitCast(ypos)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn new6(point: anytype) QVector2D {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QVector2D_new6(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPointF `
    ///
    pub fn new7(point: anytype) QVector2D {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QVector2D_new7(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector3D `
    ///
    pub fn new8(vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector2D_new8(@ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector4D `
    ///
    pub fn new9(vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector2D_new9(@ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QVector2D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVector2D `
    ///
    pub fn new10(param1: anytype) QVector2D {
        comptime _ = @TypeOf(param1)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_new10(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector2D `
    ///
    /// ` other: QVector2D `
    ///
    pub fn copyAssign(self: QVector2D, other: QVector2D) void {
        qtc.QVector2D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector2D `
    ///
    /// ` other: QVector2D `
    ///
    pub fn moveAssign(self: QVector2D, other: QVector2D) void {
        qtc.QVector2D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn isNull(self: QVector2D) bool {
        return qtc.QVector2D_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn x(self: QVector2D) f32 {
        return qtc.QVector2D_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn y(self: QVector2D) f32 {
        return qtc.QVector2D_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QVector2D, _x: f32) void {
        qtc.QVector2D_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QVector2D, _y: f32) void {
        qtc.QVector2D_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorSubscript(self: QVector2D, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector2D_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)));
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorSubscript2(self: QVector2D, i: i32) f32 {
        return qtc.QVector2D_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn length(self: QVector2D) f32 {
        return qtc.QVector2D_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lengthSquared` instead
    ///
    pub const LengthSquared = lengthSquared;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn lengthSquared(self: QVector2D) f32 {
        return qtc.QVector2D_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn normalized(self: QVector2D) QVector2D {
        return .{ .ptr = qtc.QVector2D_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn normalize(self: QVector2D) void {
        qtc.QVector2D_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `distanceToPoint` instead
    ///
    pub const DistanceToPoint = distanceToPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` point: QVector2D `
    ///
    pub fn distanceToPoint(self: QVector2D, point: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector2D;
        return qtc.QVector2D_DistanceToPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `distanceToLine` instead
    ///
    pub const DistanceToLine = distanceToLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` point: QVector2D `
    ///
    /// ` direction: QVector2D `
    ///
    pub fn distanceToLine(self: QVector2D, point: anytype, direction: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector2D;
        comptime _ = @TypeOf(direction)._is_QVector2D;
        return qtc.QVector2D_DistanceToLine(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(direction.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn operatorPlusAssign(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn operatorMinusAssign(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` factor: f32 `
    ///
    pub fn operatorMultiplyAssign(self: QVector2D, factor: f32) QVector2D {
        return .{ .ptr = qtc.QVector2D_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn operatorMultiplyAssign2(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn operatorDivideAssign(self: QVector2D, divisor: f32) QVector2D {
        return .{ .ptr = qtc.QVector2D_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign2` instead
    ///
    pub const OperatorDivideAssign2 = operatorDivideAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn operatorDivideAssign2(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorDivideAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `dotProduct` instead
    ///
    pub const DotProduct = dotProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector2D `
    ///
    /// ` v2: QVector2D `
    ///
    pub fn dotProduct(v1: anytype, v2: anytype) f32 {
        comptime _ = @TypeOf(v1)._is_QVector2D;
        comptime _ = @TypeOf(v2)._is_QVector2D;
        return qtc.QVector2D_DotProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### DEPRECATED: Use `toVector3D` instead
    ///
    pub const ToVector3D = toVector3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn toVector3D(self: QVector2D) QVector3D {
        return .{ .ptr = qtc.QVector2D_ToVector3D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVector4D` instead
    ///
    pub const ToVector4D = toVector4D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn toVector4D(self: QVector2D) QVector4D {
        return .{ .ptr = qtc.QVector2D_ToVector4D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPoint` instead
    ///
    pub const ToPoint = toPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn toPoint(self: QVector2D) QPoint {
        return .{ .ptr = qtc.QVector2D_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPointF` instead
    ///
    pub const ToPointF = toPointF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn toPointF(self: QVector2D) QPointF {
        return .{ .ptr = qtc.QVector2D_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn toQVariant(self: QVector2D) QVariant {
        return .{ .ptr = qtc.QVector2D_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dtor.QVector2D)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVector2D `
    ///
    pub fn delete(self: QVector2D) void {
        qtc.QVector2D_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)
pub const QVector3D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVector3D,

    pub const _is_QVector3D = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector3D `
    ///
    pub fn new(other: anytype) QVector3D {
        comptime _ = @TypeOf(other)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVector3D object and invalidate the source QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector3D `
    ///
    pub fn new2(other: anytype) QVector3D {
        comptime _ = @TypeOf(other)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVector3D object in C++ memory
    ///
    pub fn new3() QVector3D {
        return .{ .ptr = qtc.QVector3D_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new4(param1: i32) QVector3D {
        return .{ .ptr = qtc.QVector3D_new4(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    /// ` zpos: f32 `
    ///
    pub fn new5(xpos: f32, ypos: f32, zpos: f32) QVector3D {
        return .{ .ptr = qtc.QVector3D_new5(@bitCast(xpos), @bitCast(ypos), @bitCast(zpos)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn new6(point: anytype) QVector3D {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QVector3D_new6(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPointF `
    ///
    pub fn new7(point: anytype) QVector3D {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QVector3D_new7(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    pub fn new8(vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector3D_new8(@ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    /// ` zpos: f32 `
    ///
    pub fn new9(vector: anytype, zpos: f32) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector3D_new9(@ptrCast(vector.ptr), @bitCast(zpos)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector4D `
    ///
    pub fn new10(vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector3D_new10(@ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QVector3D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVector3D `
    ///
    pub fn new11(param1: anytype) QVector3D {
        comptime _ = @TypeOf(param1)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_new11(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector3D `
    ///
    /// ` other: QVector3D `
    ///
    pub fn copyAssign(self: QVector3D, other: QVector3D) void {
        qtc.QVector3D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector3D `
    ///
    /// ` other: QVector3D `
    ///
    pub fn moveAssign(self: QVector3D, other: QVector3D) void {
        qtc.QVector3D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn isNull(self: QVector3D) bool {
        return qtc.QVector3D_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn x(self: QVector3D) f32 {
        return qtc.QVector3D_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn y(self: QVector3D) f32 {
        return qtc.QVector3D_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn z(self: QVector3D) f32 {
        return qtc.QVector3D_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QVector3D, _x: f32) void {
        qtc.QVector3D_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QVector3D, _y: f32) void {
        qtc.QVector3D_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` _z: f32 `
    ///
    pub fn setZ(self: QVector3D, _z: f32) void {
        qtc.QVector3D_SetZ(@ptrCast(self.ptr), @bitCast(_z));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorSubscript(self: QVector3D, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector3D_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)));
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorSubscript2(self: QVector3D, i: i32) f32 {
        return qtc.QVector3D_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn length(self: QVector3D) f32 {
        return qtc.QVector3D_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lengthSquared` instead
    ///
    pub const LengthSquared = lengthSquared;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn lengthSquared(self: QVector3D) f32 {
        return qtc.QVector3D_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn normalized(self: QVector3D) QVector3D {
        return .{ .ptr = qtc.QVector3D_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn normalize(self: QVector3D) void {
        qtc.QVector3D_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn operatorPlusAssign(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn operatorMinusAssign(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` factor: f32 `
    ///
    pub fn operatorMultiplyAssign(self: QVector3D, factor: f32) QVector3D {
        return .{ .ptr = qtc.QVector3D_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn operatorMultiplyAssign2(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn operatorDivideAssign(self: QVector3D, divisor: f32) QVector3D {
        return .{ .ptr = qtc.QVector3D_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign2` instead
    ///
    pub const OperatorDivideAssign2 = operatorDivideAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn operatorDivideAssign2(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorDivideAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `dotProduct` instead
    ///
    pub const DotProduct = dotProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    pub fn dotProduct(v1: anytype, v2: anytype) f32 {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        return qtc.QVector3D_DotProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### DEPRECATED: Use `crossProduct` instead
    ///
    pub const CrossProduct = crossProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#crossProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    pub fn crossProduct(v1: anytype, v2: anytype) QVector3D {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_CrossProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr)) };
    }

    /// ### DEPRECATED: Use `normal` instead
    ///
    pub const Normal = normal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    pub fn normal(v1: anytype, v2: anytype) QVector3D {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_Normal(@ptrCast(v1.ptr), @ptrCast(v2.ptr)) };
    }

    /// ### DEPRECATED: Use `normal2` instead
    ///
    pub const Normal2 = normal2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    /// ` v3: QVector3D `
    ///
    pub fn normal2(v1: anytype, v2: anytype, v3: anytype) QVector3D {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        comptime _ = @TypeOf(v3)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_Normal2(@ptrCast(v1.ptr), @ptrCast(v2.ptr), @ptrCast(v3.ptr)) };
    }

    /// ### DEPRECATED: Use `project` instead
    ///
    pub const Project = project;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#project)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` modelView: QMatrix4x4 `
    ///
    /// ` projection: QMatrix4x4 `
    ///
    /// ` viewport: QRect `
    ///
    pub fn project(self: QVector3D, modelView: anytype, projection: anytype, viewport: anytype) QVector3D {
        comptime _ = @TypeOf(modelView)._is_QMatrix4x4;
        comptime _ = @TypeOf(projection)._is_QMatrix4x4;
        comptime _ = @TypeOf(viewport)._is_QRect;
        return .{ .ptr = qtc.QVector3D_Project(@ptrCast(self.ptr), @ptrCast(modelView.ptr), @ptrCast(projection.ptr), @ptrCast(viewport.ptr)) };
    }

    /// ### DEPRECATED: Use `unproject` instead
    ///
    pub const Unproject = unproject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#unproject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` modelView: QMatrix4x4 `
    ///
    /// ` projection: QMatrix4x4 `
    ///
    /// ` viewport: QRect `
    ///
    pub fn unproject(self: QVector3D, modelView: anytype, projection: anytype, viewport: anytype) QVector3D {
        comptime _ = @TypeOf(modelView)._is_QMatrix4x4;
        comptime _ = @TypeOf(projection)._is_QMatrix4x4;
        comptime _ = @TypeOf(viewport)._is_QRect;
        return .{ .ptr = qtc.QVector3D_Unproject(@ptrCast(self.ptr), @ptrCast(modelView.ptr), @ptrCast(projection.ptr), @ptrCast(viewport.ptr)) };
    }

    /// ### DEPRECATED: Use `distanceToPoint` instead
    ///
    pub const DistanceToPoint = distanceToPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` point: QVector3D `
    ///
    pub fn distanceToPoint(self: QVector3D, point: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector3D;
        return qtc.QVector3D_DistanceToPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `distanceToPlane` instead
    ///
    pub const DistanceToPlane = distanceToPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` plane: QVector3D `
    ///
    /// ` _normal: QVector3D `
    ///
    pub fn distanceToPlane(self: QVector3D, plane: anytype, _normal: anytype) f32 {
        comptime _ = @TypeOf(plane)._is_QVector3D;
        comptime _ = @TypeOf(_normal)._is_QVector3D;
        return qtc.QVector3D_DistanceToPlane(@ptrCast(self.ptr), @ptrCast(plane.ptr), @ptrCast(_normal.ptr));
    }

    /// ### DEPRECATED: Use `distanceToPlane2` instead
    ///
    pub const DistanceToPlane2 = distanceToPlane2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` plane1: QVector3D `
    ///
    /// ` plane2: QVector3D `
    ///
    /// ` plane3: QVector3D `
    ///
    pub fn distanceToPlane2(self: QVector3D, plane1: anytype, plane2: anytype, plane3: anytype) f32 {
        comptime _ = @TypeOf(plane1)._is_QVector3D;
        comptime _ = @TypeOf(plane2)._is_QVector3D;
        comptime _ = @TypeOf(plane3)._is_QVector3D;
        return qtc.QVector3D_DistanceToPlane2(@ptrCast(self.ptr), @ptrCast(plane1.ptr), @ptrCast(plane2.ptr), @ptrCast(plane3.ptr));
    }

    /// ### DEPRECATED: Use `distanceToLine` instead
    ///
    pub const DistanceToLine = distanceToLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` point: QVector3D `
    ///
    /// ` direction: QVector3D `
    ///
    pub fn distanceToLine(self: QVector3D, point: anytype, direction: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector3D;
        comptime _ = @TypeOf(direction)._is_QVector3D;
        return qtc.QVector3D_DistanceToLine(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(direction.ptr));
    }

    /// ### DEPRECATED: Use `toVector2D` instead
    ///
    pub const ToVector2D = toVector2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn toVector2D(self: QVector3D) QVector2D {
        return .{ .ptr = qtc.QVector3D_ToVector2D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVector4D` instead
    ///
    pub const ToVector4D = toVector4D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn toVector4D(self: QVector3D) QVector4D {
        return .{ .ptr = qtc.QVector3D_ToVector4D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPoint` instead
    ///
    pub const ToPoint = toPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn toPoint(self: QVector3D) QPoint {
        return .{ .ptr = qtc.QVector3D_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPointF` instead
    ///
    pub const ToPointF = toPointF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn toPointF(self: QVector3D) QPointF {
        return .{ .ptr = qtc.QVector3D_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn toQVariant(self: QVector3D) QVariant {
        return .{ .ptr = qtc.QVector3D_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dtor.QVector3D)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVector3D `
    ///
    pub fn delete(self: QVector3D) void {
        qtc.QVector3D_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)
pub const QVector4D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVector4D,

    pub const _is_QVector4D = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector4D `
    ///
    pub fn new(other: anytype) QVector4D {
        comptime _ = @TypeOf(other)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVector4D object and invalidate the source QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector4D `
    ///
    pub fn new2(other: anytype) QVector4D {
        comptime _ = @TypeOf(other)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVector4D object in C++ memory
    ///
    pub fn new3() QVector4D {
        return .{ .ptr = qtc.QVector4D_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new4(param1: i32) QVector4D {
        return .{ .ptr = qtc.QVector4D_new4(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    /// ` zpos: f32 `
    ///
    /// ` wpos: f32 `
    ///
    pub fn new5(xpos: f32, ypos: f32, zpos: f32, wpos: f32) QVector4D {
        return .{ .ptr = qtc.QVector4D_new5(@bitCast(xpos), @bitCast(ypos), @bitCast(zpos), @bitCast(wpos)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn new6(point: anytype) QVector4D {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QVector4D_new6(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPointF `
    ///
    pub fn new7(point: anytype) QVector4D {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QVector4D_new7(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    pub fn new8(vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector4D_new8(@ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    /// ` zpos: f32 `
    ///
    /// ` wpos: f32 `
    ///
    pub fn new9(vector: anytype, zpos: f32, wpos: f32) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector4D_new9(@ptrCast(vector.ptr), @bitCast(zpos), @bitCast(wpos)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector3D `
    ///
    pub fn new10(vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector4D_new10(@ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector3D `
    ///
    /// ` wpos: f32 `
    ///
    pub fn new11(vector: anytype, wpos: f32) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector4D_new11(@ptrCast(vector.ptr), @bitCast(wpos)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QVector4D object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVector4D `
    ///
    pub fn new12(param1: anytype) QVector4D {
        comptime _ = @TypeOf(param1)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_new12(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector4D `
    ///
    /// ` other: QVector4D `
    ///
    pub fn copyAssign(self: QVector4D, other: QVector4D) void {
        qtc.QVector4D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector4D `
    ///
    /// ` other: QVector4D `
    ///
    pub fn moveAssign(self: QVector4D, other: QVector4D) void {
        qtc.QVector4D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn isNull(self: QVector4D) bool {
        return qtc.QVector4D_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn x(self: QVector4D) f32 {
        return qtc.QVector4D_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn y(self: QVector4D) f32 {
        return qtc.QVector4D_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn z(self: QVector4D) f32 {
        return qtc.QVector4D_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `w` instead
    ///
    pub const W = w;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#w)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn w(self: QVector4D) f32 {
        return qtc.QVector4D_W(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QVector4D, _x: f32) void {
        qtc.QVector4D_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QVector4D, _y: f32) void {
        qtc.QVector4D_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` _z: f32 `
    ///
    pub fn setZ(self: QVector4D, _z: f32) void {
        qtc.QVector4D_SetZ(@ptrCast(self.ptr), @bitCast(_z));
    }

    /// ### DEPRECATED: Use `setW` instead
    ///
    pub const SetW = setW;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setW)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` _w: f32 `
    ///
    pub fn setW(self: QVector4D, _w: f32) void {
        qtc.QVector4D_SetW(@ptrCast(self.ptr), @bitCast(_w));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorSubscript(self: QVector4D, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector4D_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)));
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorSubscript2(self: QVector4D, i: i32) f32 {
        return qtc.QVector4D_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn length(self: QVector4D) f32 {
        return qtc.QVector4D_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lengthSquared` instead
    ///
    pub const LengthSquared = lengthSquared;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn lengthSquared(self: QVector4D) f32 {
        return qtc.QVector4D_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn normalized(self: QVector4D) QVector4D {
        return .{ .ptr = qtc.QVector4D_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn normalize(self: QVector4D) void {
        qtc.QVector4D_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn operatorPlusAssign(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn operatorMinusAssign(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` factor: f32 `
    ///
    pub fn operatorMultiplyAssign(self: QVector4D, factor: f32) QVector4D {
        return .{ .ptr = qtc.QVector4D_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn operatorMultiplyAssign2(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn operatorDivideAssign(self: QVector4D, divisor: f32) QVector4D {
        return .{ .ptr = qtc.QVector4D_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign2` instead
    ///
    pub const OperatorDivideAssign2 = operatorDivideAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn operatorDivideAssign2(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorDivideAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `dotProduct` instead
    ///
    pub const DotProduct = dotProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector4D `
    ///
    /// ` v2: QVector4D `
    ///
    pub fn dotProduct(v1: anytype, v2: anytype) f32 {
        comptime _ = @TypeOf(v1)._is_QVector4D;
        comptime _ = @TypeOf(v2)._is_QVector4D;
        return qtc.QVector4D_DotProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### DEPRECATED: Use `toVector2D` instead
    ///
    pub const ToVector2D = toVector2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toVector2D(self: QVector4D) QVector2D {
        return .{ .ptr = qtc.QVector4D_ToVector2D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVector2DAffine` instead
    ///
    pub const ToVector2DAffine = toVector2DAffine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toVector2DAffine(self: QVector4D) QVector2D {
        return .{ .ptr = qtc.QVector4D_ToVector2DAffine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVector3D` instead
    ///
    pub const ToVector3D = toVector3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toVector3D(self: QVector4D) QVector3D {
        return .{ .ptr = qtc.QVector4D_ToVector3D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVector3DAffine` instead
    ///
    pub const ToVector3DAffine = toVector3DAffine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toVector3DAffine(self: QVector4D) QVector3D {
        return .{ .ptr = qtc.QVector4D_ToVector3DAffine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPoint` instead
    ///
    pub const ToPoint = toPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toPoint(self: QVector4D) QPoint {
        return .{ .ptr = qtc.QVector4D_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPointF` instead
    ///
    pub const ToPointF = toPointF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toPointF(self: QVector4D) QPointF {
        return .{ .ptr = qtc.QVector4D_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn toQVariant(self: QVector4D) QVariant {
        return .{ .ptr = qtc.QVector4D_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dtor.QVector4D)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVector4D `
    ///
    pub fn delete(self: QVector4D) void {
        qtc.QVector4D_Delete(@ptrCast(self.ptr));
    }
};
