const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)
pub const qvector2d = struct {
    /// New constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVector2D `
    ///
    pub fn New(other: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new(@ptrCast(other));
    }

    /// New2 constructs a new QVector2D object and invalidates the source QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVector2D `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new2(@ptrCast(other));
    }

    /// New3 constructs a new QVector2D object.
    ///
    pub fn New3() QtC.QVector2D {
        return qtc.QVector2D_new3();
    }

    /// New4 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QtC.QVector2D {
        return qtc.QVector2D_new4(@bitCast(param1));
    }

    /// New5 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    pub fn New5(xpos: f32, ypos: f32) QtC.QVector2D {
        return qtc.QVector2D_new5(@bitCast(xpos), @bitCast(ypos));
    }

    /// New6 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn New6(point: QtC.QPoint) QtC.QVector2D {
        return qtc.QVector2D_new6(@ptrCast(point));
    }

    /// New7 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn New7(point: QtC.QPointF) QtC.QVector2D {
        return qtc.QVector2D_new7(@ptrCast(point));
    }

    /// New8 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn New8(vector: QtC.QVector3D) QtC.QVector2D {
        return qtc.QVector2D_new8(@ptrCast(vector));
    }

    /// New9 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn New9(vector: QtC.QVector4D) QtC.QVector2D {
        return qtc.QVector2D_new9(@ptrCast(vector));
    }

    /// New10 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QVector2D `
    ///
    pub fn New10(param1: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new10(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` other: QtC.QVector2D `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector2D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` other: QtC.QVector2D `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector2D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVector2D_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QVector2D_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QVector2D_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector2D_SetX(@ptrCast(self), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector2D_SetY(@ptrCast(self), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector2D_OperatorSubscript(@ptrCast(self), @bitCast(i)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript2(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector2D_OperatorSubscript2(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QVector2D_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QVector2D_LengthSquared(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QVector2D_Normalize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` point: QtC.QVector2D `
    ///
    pub fn DistanceToPoint(self: ?*anyopaque, point: QtC.QVector2D) f32 {
        return qtc.QVector2D_DistanceToPoint(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` point: QtC.QVector2D `
    ///
    /// ` direction: QtC.QVector2D `
    ///
    pub fn DistanceToLine(self: ?*anyopaque, point: QtC.QVector2D, direction: QtC.QVector2D) f32 {
        return qtc.QVector2D_DistanceToLine(@ptrCast(self), @ptrCast(point), @ptrCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` vector: QtC.QVector2D `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` vector: QtC.QVector2D `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector2D {
        return qtc.QVector2D_OperatorMultiplyAssign(@ptrCast(self), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` vector: QtC.QVector2D `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector2D {
        return qtc.QVector2D_OperatorDivideAssign(@ptrCast(self), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    /// ` vector: QtC.QVector2D `
    ///
    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVector2D `
    ///
    /// ` v2: QtC.QVector2D `
    ///
    pub fn DotProduct(v1: QtC.QVector2D, v2: QtC.QVector2D) f32 {
        return qtc.QVector2D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn ToVector3D(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector2D_ToVector3D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn ToVector4D(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector2D_ToVector4D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVector2D_ToPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVector2D_ToPointF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVector2D_ToQVariant(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dtor.QVector2D)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVector2D `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVector2D_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)
pub const qvector3d = struct {
    /// New constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVector3D `
    ///
    pub fn New(other: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new(@ptrCast(other));
    }

    /// New2 constructs a new QVector3D object and invalidates the source QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVector3D `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new2(@ptrCast(other));
    }

    /// New3 constructs a new QVector3D object.
    ///
    pub fn New3() QtC.QVector3D {
        return qtc.QVector3D_new3();
    }

    /// New4 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QtC.QVector3D {
        return qtc.QVector3D_new4(@bitCast(param1));
    }

    /// New5 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    /// ` zpos: f32 `
    ///
    pub fn New5(xpos: f32, ypos: f32, zpos: f32) QtC.QVector3D {
        return qtc.QVector3D_new5(@bitCast(xpos), @bitCast(ypos), @bitCast(zpos));
    }

    /// New6 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn New6(point: QtC.QPoint) QtC.QVector3D {
        return qtc.QVector3D_new6(@ptrCast(point));
    }

    /// New7 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn New7(point: QtC.QPointF) QtC.QVector3D {
        return qtc.QVector3D_new7(@ptrCast(point));
    }

    /// New8 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector2D `
    ///
    pub fn New8(vector: QtC.QVector2D) QtC.QVector3D {
        return qtc.QVector3D_new8(@ptrCast(vector));
    }

    /// New9 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector2D `
    ///
    /// ` zpos: f32 `
    ///
    pub fn New9(vector: QtC.QVector2D, zpos: f32) QtC.QVector3D {
        return qtc.QVector3D_new9(@ptrCast(vector), @bitCast(zpos));
    }

    /// New10 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn New10(vector: QtC.QVector4D) QtC.QVector3D {
        return qtc.QVector3D_new10(@ptrCast(vector));
    }

    /// New11 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QVector3D `
    ///
    pub fn New11(param1: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new11(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` other: QtC.QVector3D `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector3D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` other: QtC.QVector3D `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector3D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVector3D_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QVector3D_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QVector3D_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn Z(self: ?*anyopaque) f32 {
        return qtc.QVector3D_Z(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector3D_SetX(@ptrCast(self), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector3D_SetY(@ptrCast(self), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` z: f32 `
    ///
    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QVector3D_SetZ(@ptrCast(self), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector3D_OperatorSubscript(@ptrCast(self), @bitCast(i)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript2(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector3D_OperatorSubscript2(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QVector3D_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QVector3D_LengthSquared(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QVector3D_Normalize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector3D {
        return qtc.QVector3D_OperatorMultiplyAssign(@ptrCast(self), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector3D {
        return qtc.QVector3D_OperatorDivideAssign(@ptrCast(self), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVector3D `
    ///
    /// ` v2: QtC.QVector3D `
    ///
    pub fn DotProduct(v1: QtC.QVector3D, v2: QtC.QVector3D) f32 {
        return qtc.QVector3D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#crossProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVector3D `
    ///
    /// ` v2: QtC.QVector3D `
    ///
    pub fn CrossProduct(v1: QtC.QVector3D, v2: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_CrossProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVector3D `
    ///
    /// ` v2: QtC.QVector3D `
    ///
    pub fn Normal(v1: QtC.QVector3D, v2: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_Normal(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVector3D `
    ///
    /// ` v2: QtC.QVector3D `
    ///
    /// ` v3: QtC.QVector3D `
    ///
    pub fn Normal2(v1: QtC.QVector3D, v2: QtC.QVector3D, v3: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_Normal2(@ptrCast(v1), @ptrCast(v2), @ptrCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#project)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` modelView: QtC.QMatrix4x4 `
    ///
    /// ` projection: QtC.QMatrix4x4 `
    ///
    /// ` viewport: QtC.QRect `
    ///
    pub fn Project(self: ?*anyopaque, modelView: ?*anyopaque, projection: ?*anyopaque, viewport: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Project(@ptrCast(self), @ptrCast(modelView), @ptrCast(projection), @ptrCast(viewport));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#unproject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` modelView: QtC.QMatrix4x4 `
    ///
    /// ` projection: QtC.QMatrix4x4 `
    ///
    /// ` viewport: QtC.QRect `
    ///
    pub fn Unproject(self: ?*anyopaque, modelView: ?*anyopaque, projection: ?*anyopaque, viewport: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Unproject(@ptrCast(self), @ptrCast(modelView), @ptrCast(projection), @ptrCast(viewport));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` point: QtC.QVector3D `
    ///
    pub fn DistanceToPoint(self: ?*anyopaque, point: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPoint(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` plane: QtC.QVector3D `
    ///
    /// ` normal: QtC.QVector3D `
    ///
    pub fn DistanceToPlane(self: ?*anyopaque, plane: QtC.QVector3D, normal: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPlane(@ptrCast(self), @ptrCast(plane), @ptrCast(normal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` plane1: QtC.QVector3D `
    ///
    /// ` plane2: QtC.QVector3D `
    ///
    /// ` plane3: QtC.QVector3D `
    ///
    pub fn DistanceToPlane2(self: ?*anyopaque, plane1: QtC.QVector3D, plane2: QtC.QVector3D, plane3: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPlane2(@ptrCast(self), @ptrCast(plane1), @ptrCast(plane2), @ptrCast(plane3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    /// ` point: QtC.QVector3D `
    ///
    /// ` direction: QtC.QVector3D `
    ///
    pub fn DistanceToLine(self: ?*anyopaque, point: QtC.QVector3D, direction: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToLine(@ptrCast(self), @ptrCast(point), @ptrCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn ToVector2D(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector3D_ToVector2D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn ToVector4D(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector3D_ToVector4D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVector3D_ToPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVector3D_ToPointF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVector3D_ToQVariant(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dtor.QVector3D)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVector3D `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVector3D_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)
pub const qvector4d = struct {
    /// New constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVector4D `
    ///
    pub fn New(other: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new(@ptrCast(other));
    }

    /// New2 constructs a new QVector4D object and invalidates the source QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVector4D `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new2(@ptrCast(other));
    }

    /// New3 constructs a new QVector4D object.
    ///
    pub fn New3() QtC.QVector4D {
        return qtc.QVector4D_new3();
    }

    /// New4 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QtC.QVector4D {
        return qtc.QVector4D_new4(@bitCast(param1));
    }

    /// New5 constructs a new QVector4D object.
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
    pub fn New5(xpos: f32, ypos: f32, zpos: f32, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new5(@bitCast(xpos), @bitCast(ypos), @bitCast(zpos), @bitCast(wpos));
    }

    /// New6 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn New6(point: QtC.QPoint) QtC.QVector4D {
        return qtc.QVector4D_new6(@ptrCast(point));
    }

    /// New7 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn New7(point: QtC.QPointF) QtC.QVector4D {
        return qtc.QVector4D_new7(@ptrCast(point));
    }

    /// New8 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector2D `
    ///
    pub fn New8(vector: QtC.QVector2D) QtC.QVector4D {
        return qtc.QVector4D_new8(@ptrCast(vector));
    }

    /// New9 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector2D `
    ///
    /// ` zpos: f32 `
    ///
    /// ` wpos: f32 `
    ///
    pub fn New9(vector: QtC.QVector2D, zpos: f32, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new9(@ptrCast(vector), @bitCast(zpos), @bitCast(wpos));
    }

    /// New10 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn New10(vector: QtC.QVector3D) QtC.QVector4D {
        return qtc.QVector4D_new10(@ptrCast(vector));
    }

    /// New11 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector3D `
    ///
    /// ` wpos: f32 `
    ///
    pub fn New11(vector: QtC.QVector3D, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new11(@ptrCast(vector), @bitCast(wpos));
    }

    /// New12 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QVector4D `
    ///
    pub fn New12(param1: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new12(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` other: QtC.QVector4D `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector4D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` other: QtC.QVector4D `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector4D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVector4D_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QVector4D_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QVector4D_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn Z(self: ?*anyopaque) f32 {
        return qtc.QVector4D_Z(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#w)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn W(self: ?*anyopaque) f32 {
        return qtc.QVector4D_W(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector4D_SetX(@ptrCast(self), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector4D_SetY(@ptrCast(self), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` z: f32 `
    ///
    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QVector4D_SetZ(@ptrCast(self), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setW)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` w: f32 `
    ///
    pub fn SetW(self: ?*anyopaque, w: f32) void {
        qtc.QVector4D_SetW(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector4D_OperatorSubscript(@ptrCast(self), @bitCast(i)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript2(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector4D_OperatorSubscript2(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QVector4D_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QVector4D_LengthSquared(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QVector4D_Normalize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector4D {
        return qtc.QVector4D_OperatorMultiplyAssign(@ptrCast(self), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector4D {
        return qtc.QVector4D_OperatorDivideAssign(@ptrCast(self), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVector4D `
    ///
    /// ` v2: QtC.QVector4D `
    ///
    pub fn DotProduct(v1: QtC.QVector4D, v2: QtC.QVector4D) f32 {
        return qtc.QVector4D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToVector2D(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector4D_ToVector2D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToVector2DAffine(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector4D_ToVector2DAffine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToVector3D(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector4D_ToVector3D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToVector3DAffine(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector4D_ToVector3DAffine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVector4D_ToPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVector4D_ToPointF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVector4D_ToQVariant(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dtor.QVector4D)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVector4D `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVector4D_Delete(@ptrCast(self));
    }
};
