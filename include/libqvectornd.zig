const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qvector2d.html
pub const qvector2d = struct {
    /// New constructs a new QVector2D object.
    ///
    /// ``` other: QtC.QVector2D ```
    pub fn New(other: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new(@ptrCast(other));
    }

    /// New2 constructs a new QVector2D object and invalidates the source QVector2D object.
    ///
    /// ``` other: QtC.QVector2D ```
    pub fn New2(other: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new2(@ptrCast(other));
    }

    /// New3 constructs a new QVector2D object.
    ///
    ///
    pub fn New3() QtC.QVector2D {
        return qtc.QVector2D_new3();
    }

    /// New4 constructs a new QVector2D object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New4(param1: i64) QtC.QVector2D {
        return qtc.QVector2D_new4(@intCast(param1));
    }

    /// New5 constructs a new QVector2D object.
    ///
    /// ``` xpos: f32, ypos: f32 ```
    pub fn New5(xpos: f32, ypos: f32) QtC.QVector2D {
        return qtc.QVector2D_new5(@floatCast(xpos), @floatCast(ypos));
    }

    /// New6 constructs a new QVector2D object.
    ///
    /// ``` point: QtC.QPoint ```
    pub fn New6(point: QtC.QPoint) QtC.QVector2D {
        return qtc.QVector2D_new6(@ptrCast(point));
    }

    /// New7 constructs a new QVector2D object.
    ///
    /// ``` point: QtC.QPointF ```
    pub fn New7(point: QtC.QPointF) QtC.QVector2D {
        return qtc.QVector2D_new7(@ptrCast(point));
    }

    /// New8 constructs a new QVector2D object.
    ///
    /// ``` vector: QtC.QVector3D ```
    pub fn New8(vector: QtC.QVector3D) QtC.QVector2D {
        return qtc.QVector2D_new8(@ptrCast(vector));
    }

    /// New9 constructs a new QVector2D object.
    ///
    /// ``` vector: QtC.QVector4D ```
    pub fn New9(vector: QtC.QVector4D) QtC.QVector2D {
        return qtc.QVector2D_new9(@ptrCast(vector));
    }

    /// New10 constructs a new QVector2D object.
    ///
    /// ``` param1: QtC.QVector2D ```
    pub fn New10(param1: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_new10(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QVector2D, other: QtC.QVector2D ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector2D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QVector2D, other: QtC.QVector2D ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector2D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#isNull)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVector2D_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#x)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QVector2D_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#y)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QVector2D_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#setX)
    ///
    /// ``` self: QtC.QVector2D, x: f32 ```
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector2D_SetX(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#setY)
    ///
    /// ``` self: QtC.QVector2D, y: f32 ```
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector2D_SetY(@ptrCast(self), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator[])
    ///
    /// ``` self: QtC.QVector2D, i: i32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector2D_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#length)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QVector2D_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QVector2D_LengthSquared(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#normalized)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn Normalized(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector2D_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#normalize)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QVector2D_Normalize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
    ///
    /// ``` self: QtC.QVector2D, point: QtC.QVector2D ```
    pub fn DistanceToPoint(self: ?*anyopaque, point: QtC.QVector2D) f32 {
        return qtc.QVector2D_DistanceToPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#distanceToLine)
    ///
    /// ``` self: QtC.QVector2D, point: QtC.QVector2D, direction: QtC.QVector2D ```
    pub fn DistanceToLine(self: ?*anyopaque, point: QtC.QVector2D, direction: QtC.QVector2D) f32 {
        return qtc.QVector2D_DistanceToLine(@ptrCast(self), @ptrCast(point), @ptrCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator+=)
    ///
    /// ``` self: QtC.QVector2D, vector: QtC.QVector2D ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator-=)
    ///
    /// ``` self: QtC.QVector2D, vector: QtC.QVector2D ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator*=)
    ///
    /// ``` self: QtC.QVector2D, factor: f32 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector2D {
        return qtc.QVector2D_OperatorMultiplyAssign(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator*=)
    ///
    /// ``` self: QtC.QVector2D, vector: QtC.QVector2D ```
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator/=)
    ///
    /// ``` self: QtC.QVector2D, divisor: f32 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector2D {
        return qtc.QVector2D_OperatorDivideAssign(@ptrCast(self), @floatCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator/=)
    ///
    /// ``` self: QtC.QVector2D, vector: QtC.QVector2D ```
    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector2D) QtC.QVector2D {
        return qtc.QVector2D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#dotProduct)
    ///
    /// ``` v1: QtC.QVector2D, v2: QtC.QVector2D ```
    pub fn DotProduct(v1: QtC.QVector2D, v2: QtC.QVector2D) f32 {
        return qtc.QVector2D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toVector3D)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn ToVector3D(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector2D_ToVector3D(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn ToVector4D(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector2D_ToVector4D(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVector2D_ToPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVector2D_ToPointF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator QVariant)
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVector2D_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#dtor.QVector2D)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVector2D ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVector2D_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvector3d.html
pub const qvector3d = struct {
    /// New constructs a new QVector3D object.
    ///
    /// ``` other: QtC.QVector3D ```
    pub fn New(other: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new(@ptrCast(other));
    }

    /// New2 constructs a new QVector3D object and invalidates the source QVector3D object.
    ///
    /// ``` other: QtC.QVector3D ```
    pub fn New2(other: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new2(@ptrCast(other));
    }

    /// New3 constructs a new QVector3D object.
    ///
    ///
    pub fn New3() QtC.QVector3D {
        return qtc.QVector3D_new3();
    }

    /// New4 constructs a new QVector3D object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New4(param1: i64) QtC.QVector3D {
        return qtc.QVector3D_new4(@intCast(param1));
    }

    /// New5 constructs a new QVector3D object.
    ///
    /// ``` xpos: f32, ypos: f32, zpos: f32 ```
    pub fn New5(xpos: f32, ypos: f32, zpos: f32) QtC.QVector3D {
        return qtc.QVector3D_new5(@floatCast(xpos), @floatCast(ypos), @floatCast(zpos));
    }

    /// New6 constructs a new QVector3D object.
    ///
    /// ``` point: QtC.QPoint ```
    pub fn New6(point: QtC.QPoint) QtC.QVector3D {
        return qtc.QVector3D_new6(@ptrCast(point));
    }

    /// New7 constructs a new QVector3D object.
    ///
    /// ``` point: QtC.QPointF ```
    pub fn New7(point: QtC.QPointF) QtC.QVector3D {
        return qtc.QVector3D_new7(@ptrCast(point));
    }

    /// New8 constructs a new QVector3D object.
    ///
    /// ``` vector: QtC.QVector2D ```
    pub fn New8(vector: QtC.QVector2D) QtC.QVector3D {
        return qtc.QVector3D_new8(@ptrCast(vector));
    }

    /// New9 constructs a new QVector3D object.
    ///
    /// ``` vector: QtC.QVector2D, zpos: f32 ```
    pub fn New9(vector: QtC.QVector2D, zpos: f32) QtC.QVector3D {
        return qtc.QVector3D_new9(@ptrCast(vector), @floatCast(zpos));
    }

    /// New10 constructs a new QVector3D object.
    ///
    /// ``` vector: QtC.QVector4D ```
    pub fn New10(vector: QtC.QVector4D) QtC.QVector3D {
        return qtc.QVector3D_new10(@ptrCast(vector));
    }

    /// New11 constructs a new QVector3D object.
    ///
    /// ``` param1: QtC.QVector3D ```
    pub fn New11(param1: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_new11(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QVector3D, other: QtC.QVector3D ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector3D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QVector3D, other: QtC.QVector3D ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector3D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#isNull)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVector3D_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#x)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QVector3D_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#y)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QVector3D_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#z)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn Z(self: ?*anyopaque) f32 {
        return qtc.QVector3D_Z(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#setX)
    ///
    /// ``` self: QtC.QVector3D, x: f32 ```
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector3D_SetX(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#setY)
    ///
    /// ``` self: QtC.QVector3D, y: f32 ```
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector3D_SetY(@ptrCast(self), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#setZ)
    ///
    /// ``` self: QtC.QVector3D, z: f32 ```
    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QVector3D_SetZ(@ptrCast(self), @floatCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator[])
    ///
    /// ``` self: QtC.QVector3D, i: i32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector3D_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#length)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QVector3D_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QVector3D_LengthSquared(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normalized)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn Normalized(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normalize)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QVector3D_Normalize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator+=)
    ///
    /// ``` self: QtC.QVector3D, vector: QtC.QVector3D ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator-=)
    ///
    /// ``` self: QtC.QVector3D, vector: QtC.QVector3D ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator*=)
    ///
    /// ``` self: QtC.QVector3D, factor: f32 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector3D {
        return qtc.QVector3D_OperatorMultiplyAssign(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator*=)
    ///
    /// ``` self: QtC.QVector3D, vector: QtC.QVector3D ```
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator/=)
    ///
    /// ``` self: QtC.QVector3D, divisor: f32 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector3D {
        return qtc.QVector3D_OperatorDivideAssign(@ptrCast(self), @floatCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator/=)
    ///
    /// ``` self: QtC.QVector3D, vector: QtC.QVector3D ```
    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#dotProduct)
    ///
    /// ``` v1: QtC.QVector3D, v2: QtC.QVector3D ```
    pub fn DotProduct(v1: QtC.QVector3D, v2: QtC.QVector3D) f32 {
        return qtc.QVector3D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#crossProduct)
    ///
    /// ``` v1: QtC.QVector3D, v2: QtC.QVector3D ```
    pub fn CrossProduct(v1: QtC.QVector3D, v2: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_CrossProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ``` v1: QtC.QVector3D, v2: QtC.QVector3D ```
    pub fn Normal(v1: QtC.QVector3D, v2: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_Normal(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normal)
    ///
    /// ``` v1: QtC.QVector3D, v2: QtC.QVector3D, v3: QtC.QVector3D ```
    pub fn Normal2(v1: QtC.QVector3D, v2: QtC.QVector3D, v3: QtC.QVector3D) QtC.QVector3D {
        return qtc.QVector3D_Normal2(@ptrCast(v1), @ptrCast(v2), @ptrCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#project)
    ///
    /// ``` self: QtC.QVector3D, modelView: QtC.QMatrix4x4, projection: QtC.QMatrix4x4, viewport: QtC.QRect ```
    pub fn Project(self: ?*anyopaque, modelView: ?*anyopaque, projection: ?*anyopaque, viewport: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Project(@ptrCast(self), @ptrCast(modelView), @ptrCast(projection), @ptrCast(viewport));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#unproject)
    ///
    /// ``` self: QtC.QVector3D, modelView: QtC.QMatrix4x4, projection: QtC.QMatrix4x4, viewport: QtC.QRect ```
    pub fn Unproject(self: ?*anyopaque, modelView: ?*anyopaque, projection: ?*anyopaque, viewport: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector3D_Unproject(@ptrCast(self), @ptrCast(modelView), @ptrCast(projection), @ptrCast(viewport));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
    ///
    /// ``` self: QtC.QVector3D, point: QtC.QVector3D ```
    pub fn DistanceToPoint(self: ?*anyopaque, point: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ``` self: QtC.QVector3D, plane: QtC.QVector3D, normal: QtC.QVector3D ```
    pub fn DistanceToPlane(self: ?*anyopaque, plane: QtC.QVector3D, normal: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPlane(@ptrCast(self), @ptrCast(plane), @ptrCast(normal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
    ///
    /// ``` self: QtC.QVector3D, plane1: QtC.QVector3D, plane2: QtC.QVector3D, plane3: QtC.QVector3D ```
    pub fn DistanceToPlane2(self: ?*anyopaque, plane1: QtC.QVector3D, plane2: QtC.QVector3D, plane3: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToPlane2(@ptrCast(self), @ptrCast(plane1), @ptrCast(plane2), @ptrCast(plane3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToLine)
    ///
    /// ``` self: QtC.QVector3D, point: QtC.QVector3D, direction: QtC.QVector3D ```
    pub fn DistanceToLine(self: ?*anyopaque, point: QtC.QVector3D, direction: QtC.QVector3D) f32 {
        return qtc.QVector3D_DistanceToLine(@ptrCast(self), @ptrCast(point), @ptrCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn ToVector2D(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector3D_ToVector2D(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn ToVector4D(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector3D_ToVector4D(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVector3D_ToPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVector3D_ToPointF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator QVariant)
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVector3D_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#dtor.QVector3D)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVector3D ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVector3D_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvector4d.html
pub const qvector4d = struct {
    /// New constructs a new QVector4D object.
    ///
    /// ``` other: QtC.QVector4D ```
    pub fn New(other: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new(@ptrCast(other));
    }

    /// New2 constructs a new QVector4D object and invalidates the source QVector4D object.
    ///
    /// ``` other: QtC.QVector4D ```
    pub fn New2(other: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new2(@ptrCast(other));
    }

    /// New3 constructs a new QVector4D object.
    ///
    ///
    pub fn New3() QtC.QVector4D {
        return qtc.QVector4D_new3();
    }

    /// New4 constructs a new QVector4D object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New4(param1: i64) QtC.QVector4D {
        return qtc.QVector4D_new4(@intCast(param1));
    }

    /// New5 constructs a new QVector4D object.
    ///
    /// ``` xpos: f32, ypos: f32, zpos: f32, wpos: f32 ```
    pub fn New5(xpos: f32, ypos: f32, zpos: f32, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new5(@floatCast(xpos), @floatCast(ypos), @floatCast(zpos), @floatCast(wpos));
    }

    /// New6 constructs a new QVector4D object.
    ///
    /// ``` point: QtC.QPoint ```
    pub fn New6(point: QtC.QPoint) QtC.QVector4D {
        return qtc.QVector4D_new6(@ptrCast(point));
    }

    /// New7 constructs a new QVector4D object.
    ///
    /// ``` point: QtC.QPointF ```
    pub fn New7(point: QtC.QPointF) QtC.QVector4D {
        return qtc.QVector4D_new7(@ptrCast(point));
    }

    /// New8 constructs a new QVector4D object.
    ///
    /// ``` vector: QtC.QVector2D ```
    pub fn New8(vector: QtC.QVector2D) QtC.QVector4D {
        return qtc.QVector4D_new8(@ptrCast(vector));
    }

    /// New9 constructs a new QVector4D object.
    ///
    /// ``` vector: QtC.QVector2D, zpos: f32, wpos: f32 ```
    pub fn New9(vector: QtC.QVector2D, zpos: f32, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new9(@ptrCast(vector), @floatCast(zpos), @floatCast(wpos));
    }

    /// New10 constructs a new QVector4D object.
    ///
    /// ``` vector: QtC.QVector3D ```
    pub fn New10(vector: QtC.QVector3D) QtC.QVector4D {
        return qtc.QVector4D_new10(@ptrCast(vector));
    }

    /// New11 constructs a new QVector4D object.
    ///
    /// ``` vector: QtC.QVector3D, wpos: f32 ```
    pub fn New11(vector: QtC.QVector3D, wpos: f32) QtC.QVector4D {
        return qtc.QVector4D_new11(@ptrCast(vector), @floatCast(wpos));
    }

    /// New12 constructs a new QVector4D object.
    ///
    /// ``` param1: QtC.QVector4D ```
    pub fn New12(param1: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_new12(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QVector4D, other: QtC.QVector4D ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector4D_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QVector4D, other: QtC.QVector4D ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVector4D_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#isNull)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVector4D_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#x)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QVector4D_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#y)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QVector4D_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#z)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn Z(self: ?*anyopaque) f32 {
        return qtc.QVector4D_Z(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#w)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn W(self: ?*anyopaque) f32 {
        return qtc.QVector4D_W(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setX)
    ///
    /// ``` self: QtC.QVector4D, x: f32 ```
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QVector4D_SetX(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setY)
    ///
    /// ``` self: QtC.QVector4D, y: f32 ```
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QVector4D_SetY(@ptrCast(self), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setZ)
    ///
    /// ``` self: QtC.QVector4D, z: f32 ```
    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QVector4D_SetZ(@ptrCast(self), @floatCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setW)
    ///
    /// ``` self: QtC.QVector4D, w: f32 ```
    pub fn SetW(self: ?*anyopaque, w: f32) void {
        qtc.QVector4D_SetW(@ptrCast(self), @floatCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator[])
    ///
    /// ``` self: QtC.QVector4D, i: i32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: i32) f32 {
        return qtc.QVector4D_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#length)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QVector4D_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QVector4D_LengthSquared(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#normalized)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn Normalized(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QVector4D_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#normalize)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QVector4D_Normalize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator+=)
    ///
    /// ``` self: QtC.QVector4D, vector: QtC.QVector4D ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorPlusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator-=)
    ///
    /// ``` self: QtC.QVector4D, vector: QtC.QVector4D ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorMinusAssign(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator*=)
    ///
    /// ``` self: QtC.QVector4D, factor: f32 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QVector4D {
        return qtc.QVector4D_OperatorMultiplyAssign(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator*=)
    ///
    /// ``` self: QtC.QVector4D, vector: QtC.QVector4D ```
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator/=)
    ///
    /// ``` self: QtC.QVector4D, divisor: f32 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QVector4D {
        return qtc.QVector4D_OperatorDivideAssign(@ptrCast(self), @floatCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator/=)
    ///
    /// ``` self: QtC.QVector4D, vector: QtC.QVector4D ```
    pub fn OperatorDivideAssign2(self: ?*anyopaque, vector: QtC.QVector4D) QtC.QVector4D {
        return qtc.QVector4D_OperatorDivideAssign2(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#dotProduct)
    ///
    /// ``` v1: QtC.QVector4D, v2: QtC.QVector4D ```
    pub fn DotProduct(v1: QtC.QVector4D, v2: QtC.QVector4D) f32 {
        return qtc.QVector4D_DotProduct(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector2D)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToVector2D(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector4D_ToVector2D(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToVector2DAffine(self: ?*anyopaque) QtC.QVector2D {
        return qtc.QVector4D_ToVector2DAffine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToVector3D(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector4D_ToVector3D(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToVector3DAffine(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QVector4D_ToVector3DAffine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToPoint(self: ?*anyopaque) QtC.QPoint {
        return qtc.QVector4D_ToPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToPointF(self: ?*anyopaque) QtC.QPointF {
        return qtc.QVector4D_ToPointF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator QVariant)
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QVector4D_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#dtor.QVector4D)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVector4D ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVector4D_Delete(@ptrCast(self));
    }
};
