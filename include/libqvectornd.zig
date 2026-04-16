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

    /// New constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector2D `
    ///
    pub fn New(other: anytype) QVector2D {
        comptime _ = @TypeOf(other)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QVector2D object and invalidates the source QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector2D `
    ///
    pub fn New2(other: anytype) QVector2D {
        comptime _ = @TypeOf(other)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QVector2D object.
    ///
    pub fn New3() QVector2D {
        return .{ .ptr = qtc.QVector2D_new3() };
    }

    /// New4 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QVector2D {
        return .{ .ptr = qtc.QVector2D_new4(@bitCast(param1)) };
    }

    /// New5 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    pub fn New5(xpos: f32, ypos: f32) QVector2D {
        return .{ .ptr = qtc.QVector2D_new5(@bitCast(xpos), @bitCast(ypos)) };
    }

    /// New6 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn New6(point: anytype) QVector2D {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QVector2D_new6(@ptrCast(point.ptr)) };
    }

    /// New7 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPointF `
    ///
    pub fn New7(point: anytype) QVector2D {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QVector2D_new7(@ptrCast(point.ptr)) };
    }

    /// New8 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector3D `
    ///
    pub fn New8(vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector2D_new8(@ptrCast(vector.ptr)) };
    }

    /// New9 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector4D `
    ///
    pub fn New9(vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector2D_new9(@ptrCast(vector.ptr)) };
    }

    /// New10 constructs a new QVector2D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVector2D `
    ///
    pub fn New10(param1: anytype) QVector2D {
        comptime _ = @TypeOf(param1)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_new10(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector2D `
    ///
    /// ` other: QVector2D `
    ///
    pub fn CopyAssign(self: QVector2D, other: QVector2D) void {
        qtc.QVector2D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector2D `
    ///
    /// ` other: QVector2D `
    ///
    pub fn MoveAssign(self: QVector2D, other: QVector2D) void {
        qtc.QVector2D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn IsNull(self: QVector2D) bool {
        return qtc.QVector2D_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn X(self: QVector2D) f32 {
        return qtc.QVector2D_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn Y(self: QVector2D) f32 {
        return qtc.QVector2D_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: QVector2D, x: f32) void {
        qtc.QVector2D_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: QVector2D, y: f32) void {
        qtc.QVector2D_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript(self: QVector2D, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector2D_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript2(self: QVector2D, i: i32) f32 {
        return qtc.QVector2D_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn Length(self: QVector2D) f32 {
        return qtc.QVector2D_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn LengthSquared(self: QVector2D) f32 {
        return qtc.QVector2D_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn Normalized(self: QVector2D) QVector2D {
        return .{ .ptr = qtc.QVector2D_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn Normalize(self: QVector2D) void {
        qtc.QVector2D_Normalize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` point: QVector2D `
    ///
    pub fn DistanceToPoint(self: QVector2D, point: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector2D;
        return qtc.QVector2D_DistanceToPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

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
    pub fn DistanceToLine(self: QVector2D, point: anytype, direction: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector2D;
        comptime _ = @TypeOf(direction)._is_QVector2D;
        return qtc.QVector2D_DistanceToLine(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(direction.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn OperatorPlusAssign(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn OperatorMinusAssign(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: QVector2D, factor: f32) QVector2D {
        return .{ .ptr = qtc.QVector2D_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn OperatorMultiplyAssign2(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: QVector2D, divisor: f32) QVector2D {
        return .{ .ptr = qtc.QVector2D_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    /// ` vector: QVector2D `
    ///
    pub fn OperatorDivideAssign2(self: QVector2D, vector: anytype) QVector2D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector2D_OperatorDivideAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector2D `
    ///
    /// ` v2: QVector2D `
    ///
    pub fn DotProduct(v1: anytype, v2: anytype) f32 {
        comptime _ = @TypeOf(v1)._is_QVector2D;
        comptime _ = @TypeOf(v2)._is_QVector2D;
        return qtc.QVector2D_DotProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn ToVector3D(self: QVector2D) QVector3D {
        return .{ .ptr = qtc.QVector2D_ToVector3D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn ToVector4D(self: QVector2D) QVector4D {
        return .{ .ptr = qtc.QVector2D_ToVector4D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn ToPoint(self: QVector2D) QPoint {
        return .{ .ptr = qtc.QVector2D_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn ToPointF(self: QVector2D) QPointF {
        return .{ .ptr = qtc.QVector2D_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector2D `
    ///
    pub fn ToQVariant(self: QVector2D) QVariant {
        return .{ .ptr = qtc.QVector2D_ToQVariant(@ptrCast(self.ptr)) };
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
    /// ` self: QVector2D `
    ///
    pub fn Delete(self: QVector2D) void {
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

    /// New constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector3D `
    ///
    pub fn New(other: anytype) QVector3D {
        comptime _ = @TypeOf(other)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QVector3D object and invalidates the source QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector3D `
    ///
    pub fn New2(other: anytype) QVector3D {
        comptime _ = @TypeOf(other)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QVector3D object.
    ///
    pub fn New3() QVector3D {
        return .{ .ptr = qtc.QVector3D_new3() };
    }

    /// New4 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QVector3D {
        return .{ .ptr = qtc.QVector3D_new4(@bitCast(param1)) };
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
    pub fn New5(xpos: f32, ypos: f32, zpos: f32) QVector3D {
        return .{ .ptr = qtc.QVector3D_new5(@bitCast(xpos), @bitCast(ypos), @bitCast(zpos)) };
    }

    /// New6 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn New6(point: anytype) QVector3D {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QVector3D_new6(@ptrCast(point.ptr)) };
    }

    /// New7 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPointF `
    ///
    pub fn New7(point: anytype) QVector3D {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QVector3D_new7(@ptrCast(point.ptr)) };
    }

    /// New8 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    pub fn New8(vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector3D_new8(@ptrCast(vector.ptr)) };
    }

    /// New9 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    /// ` zpos: f32 `
    ///
    pub fn New9(vector: anytype, zpos: f32) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector3D_new9(@ptrCast(vector.ptr), @bitCast(zpos)) };
    }

    /// New10 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector4D `
    ///
    pub fn New10(vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector3D_new10(@ptrCast(vector.ptr)) };
    }

    /// New11 constructs a new QVector3D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVector3D `
    ///
    pub fn New11(param1: anytype) QVector3D {
        comptime _ = @TypeOf(param1)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_new11(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector3D `
    ///
    /// ` other: QVector3D `
    ///
    pub fn CopyAssign(self: QVector3D, other: QVector3D) void {
        qtc.QVector3D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector3D `
    ///
    /// ` other: QVector3D `
    ///
    pub fn MoveAssign(self: QVector3D, other: QVector3D) void {
        qtc.QVector3D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn IsNull(self: QVector3D) bool {
        return qtc.QVector3D_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn X(self: QVector3D) f32 {
        return qtc.QVector3D_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn Y(self: QVector3D) f32 {
        return qtc.QVector3D_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn Z(self: QVector3D) f32 {
        return qtc.QVector3D_Z(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: QVector3D, x: f32) void {
        qtc.QVector3D_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: QVector3D, y: f32) void {
        qtc.QVector3D_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` z: f32 `
    ///
    pub fn SetZ(self: QVector3D, z: f32) void {
        qtc.QVector3D_SetZ(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript(self: QVector3D, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector3D_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript2(self: QVector3D, i: i32) f32 {
        return qtc.QVector3D_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn Length(self: QVector3D) f32 {
        return qtc.QVector3D_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn LengthSquared(self: QVector3D) f32 {
        return qtc.QVector3D_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn Normalized(self: QVector3D) QVector3D {
        return .{ .ptr = qtc.QVector3D_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn Normalize(self: QVector3D) void {
        qtc.QVector3D_Normalize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn OperatorPlusAssign(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn OperatorMinusAssign(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: QVector3D, factor: f32) QVector3D {
        return .{ .ptr = qtc.QVector3D_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn OperatorMultiplyAssign2(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: QVector3D, divisor: f32) QVector3D {
        return .{ .ptr = qtc.QVector3D_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn OperatorDivideAssign2(self: QVector3D, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_OperatorDivideAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    pub fn DotProduct(v1: anytype, v2: anytype) f32 {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        return qtc.QVector3D_DotProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#crossProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    pub fn CrossProduct(v1: anytype, v2: anytype) QVector3D {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_CrossProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector3D `
    ///
    /// ` v2: QVector3D `
    ///
    pub fn Normal(v1: anytype, v2: anytype) QVector3D {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_Normal(@ptrCast(v1.ptr), @ptrCast(v2.ptr)) };
    }

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
    pub fn Normal2(v1: anytype, v2: anytype, v3: anytype) QVector3D {
        comptime _ = @TypeOf(v1)._is_QVector3D;
        comptime _ = @TypeOf(v2)._is_QVector3D;
        comptime _ = @TypeOf(v3)._is_QVector3D;
        return .{ .ptr = qtc.QVector3D_Normal2(@ptrCast(v1.ptr), @ptrCast(v2.ptr), @ptrCast(v3.ptr)) };
    }

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
    pub fn Project(self: QVector3D, modelView: anytype, projection: anytype, viewport: anytype) QVector3D {
        comptime _ = @TypeOf(modelView)._is_QMatrix4x4;
        comptime _ = @TypeOf(projection)._is_QMatrix4x4;
        comptime _ = @TypeOf(viewport)._is_QRect;
        return .{ .ptr = qtc.QVector3D_Project(@ptrCast(self.ptr), @ptrCast(modelView.ptr), @ptrCast(projection.ptr), @ptrCast(viewport.ptr)) };
    }

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
    pub fn Unproject(self: QVector3D, modelView: anytype, projection: anytype, viewport: anytype) QVector3D {
        comptime _ = @TypeOf(modelView)._is_QMatrix4x4;
        comptime _ = @TypeOf(projection)._is_QMatrix4x4;
        comptime _ = @TypeOf(viewport)._is_QRect;
        return .{ .ptr = qtc.QVector3D_Unproject(@ptrCast(self.ptr), @ptrCast(modelView.ptr), @ptrCast(projection.ptr), @ptrCast(viewport.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` point: QVector3D `
    ///
    pub fn DistanceToPoint(self: QVector3D, point: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector3D;
        return qtc.QVector3D_DistanceToPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    /// ` plane: QVector3D `
    ///
    /// ` normal: QVector3D `
    ///
    pub fn DistanceToPlane(self: QVector3D, plane: anytype, normal: anytype) f32 {
        comptime _ = @TypeOf(plane)._is_QVector3D;
        comptime _ = @TypeOf(normal)._is_QVector3D;
        return qtc.QVector3D_DistanceToPlane(@ptrCast(self.ptr), @ptrCast(plane.ptr), @ptrCast(normal.ptr));
    }

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
    pub fn DistanceToPlane2(self: QVector3D, plane1: anytype, plane2: anytype, plane3: anytype) f32 {
        comptime _ = @TypeOf(plane1)._is_QVector3D;
        comptime _ = @TypeOf(plane2)._is_QVector3D;
        comptime _ = @TypeOf(plane3)._is_QVector3D;
        return qtc.QVector3D_DistanceToPlane2(@ptrCast(self.ptr), @ptrCast(plane1.ptr), @ptrCast(plane2.ptr), @ptrCast(plane3.ptr));
    }

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
    pub fn DistanceToLine(self: QVector3D, point: anytype, direction: anytype) f32 {
        comptime _ = @TypeOf(point)._is_QVector3D;
        comptime _ = @TypeOf(direction)._is_QVector3D;
        return qtc.QVector3D_DistanceToLine(@ptrCast(self.ptr), @ptrCast(point.ptr), @ptrCast(direction.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn ToVector2D(self: QVector3D) QVector2D {
        return .{ .ptr = qtc.QVector3D_ToVector2D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn ToVector4D(self: QVector3D) QVector4D {
        return .{ .ptr = qtc.QVector3D_ToVector4D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn ToPoint(self: QVector3D) QPoint {
        return .{ .ptr = qtc.QVector3D_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn ToPointF(self: QVector3D) QPointF {
        return .{ .ptr = qtc.QVector3D_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector3D `
    ///
    pub fn ToQVariant(self: QVector3D) QVariant {
        return .{ .ptr = qtc.QVector3D_ToQVariant(@ptrCast(self.ptr)) };
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
    /// ` self: QVector3D `
    ///
    pub fn Delete(self: QVector3D) void {
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

    /// New constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector4D `
    ///
    pub fn New(other: anytype) QVector4D {
        comptime _ = @TypeOf(other)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QVector4D object and invalidates the source QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVector4D `
    ///
    pub fn New2(other: anytype) QVector4D {
        comptime _ = @TypeOf(other)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QVector4D object.
    ///
    pub fn New3() QVector4D {
        return .{ .ptr = qtc.QVector4D_new3() };
    }

    /// New4 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QVector4D {
        return .{ .ptr = qtc.QVector4D_new4(@bitCast(param1)) };
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
    pub fn New5(xpos: f32, ypos: f32, zpos: f32, wpos: f32) QVector4D {
        return .{ .ptr = qtc.QVector4D_new5(@bitCast(xpos), @bitCast(ypos), @bitCast(zpos), @bitCast(wpos)) };
    }

    /// New6 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn New6(point: anytype) QVector4D {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QVector4D_new6(@ptrCast(point.ptr)) };
    }

    /// New7 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPointF `
    ///
    pub fn New7(point: anytype) QVector4D {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QVector4D_new7(@ptrCast(point.ptr)) };
    }

    /// New8 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    pub fn New8(vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector4D_new8(@ptrCast(vector.ptr)) };
    }

    /// New9 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector2D `
    ///
    /// ` zpos: f32 `
    ///
    /// ` wpos: f32 `
    ///
    pub fn New9(vector: anytype, zpos: f32, wpos: f32) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector2D;
        return .{ .ptr = qtc.QVector4D_new9(@ptrCast(vector.ptr), @bitCast(zpos), @bitCast(wpos)) };
    }

    /// New10 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector3D `
    ///
    pub fn New10(vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector4D_new10(@ptrCast(vector.ptr)) };
    }

    /// New11 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector3D `
    ///
    /// ` wpos: f32 `
    ///
    pub fn New11(vector: anytype, wpos: f32) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QVector4D_new11(@ptrCast(vector.ptr), @bitCast(wpos)) };
    }

    /// New12 constructs a new QVector4D object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVector4D `
    ///
    pub fn New12(param1: anytype) QVector4D {
        comptime _ = @TypeOf(param1)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_new12(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector4D `
    ///
    /// ` other: QVector4D `
    ///
    pub fn CopyAssign(self: QVector4D, other: QVector4D) void {
        qtc.QVector4D_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVector4D `
    ///
    /// ` other: QVector4D `
    ///
    pub fn MoveAssign(self: QVector4D, other: QVector4D) void {
        qtc.QVector4D_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn IsNull(self: QVector4D) bool {
        return qtc.QVector4D_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn X(self: QVector4D) f32 {
        return qtc.QVector4D_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn Y(self: QVector4D) f32 {
        return qtc.QVector4D_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn Z(self: QVector4D) f32 {
        return qtc.QVector4D_Z(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#w)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn W(self: QVector4D) f32 {
        return qtc.QVector4D_W(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: QVector4D, x: f32) void {
        qtc.QVector4D_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: QVector4D, y: f32) void {
        qtc.QVector4D_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` z: f32 `
    ///
    pub fn SetZ(self: QVector4D, z: f32) void {
        qtc.QVector4D_SetZ(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setW)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` w: f32 `
    ///
    pub fn SetW(self: QVector4D, w: f32) void {
        qtc.QVector4D_SetW(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript(self: QVector4D, i: i32) ?*f32 {
        return @ptrCast(qtc.QVector4D_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` i: i32 `
    ///
    pub fn OperatorSubscript2(self: QVector4D, i: i32) f32 {
        return qtc.QVector4D_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn Length(self: QVector4D) f32 {
        return qtc.QVector4D_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn LengthSquared(self: QVector4D) f32 {
        return qtc.QVector4D_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn Normalized(self: QVector4D) QVector4D {
        return .{ .ptr = qtc.QVector4D_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn Normalize(self: QVector4D) void {
        qtc.QVector4D_Normalize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn OperatorPlusAssign(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn OperatorMinusAssign(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: QVector4D, factor: f32) QVector4D {
        return .{ .ptr = qtc.QVector4D_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn OperatorMultiplyAssign2(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: QVector4D, divisor: f32) QVector4D {
        return .{ .ptr = qtc.QVector4D_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    /// ` vector: QVector4D `
    ///
    pub fn OperatorDivideAssign2(self: QVector4D, vector: anytype) QVector4D {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QVector4D_OperatorDivideAssign2(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVector4D `
    ///
    /// ` v2: QVector4D `
    ///
    pub fn DotProduct(v1: anytype, v2: anytype) f32 {
        comptime _ = @TypeOf(v1)._is_QVector4D;
        comptime _ = @TypeOf(v2)._is_QVector4D;
        return qtc.QVector4D_DotProduct(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToVector2D(self: QVector4D) QVector2D {
        return .{ .ptr = qtc.QVector4D_ToVector2D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToVector2DAffine(self: QVector4D) QVector2D {
        return .{ .ptr = qtc.QVector4D_ToVector2DAffine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToVector3D(self: QVector4D) QVector3D {
        return .{ .ptr = qtc.QVector4D_ToVector3D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToVector3DAffine(self: QVector4D) QVector3D {
        return .{ .ptr = qtc.QVector4D_ToVector3DAffine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToPoint(self: QVector4D) QPoint {
        return .{ .ptr = qtc.QVector4D_ToPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToPointF(self: QVector4D) QPointF {
        return .{ .ptr = qtc.QVector4D_ToPointF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVector4D `
    ///
    pub fn ToQVariant(self: QVector4D) QVariant {
        return .{ .ptr = qtc.QVector4D_ToQVariant(@ptrCast(self.ptr)) };
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
    /// ` self: QVector4D `
    ///
    pub fn Delete(self: QVector4D) void {
        qtc.QVector4D_Delete(@ptrCast(self.ptr));
    }
};
