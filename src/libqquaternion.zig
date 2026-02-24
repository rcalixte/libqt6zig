const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html)
pub const qquaternion = struct {
    /// New constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QQuaternion `
    ///
    pub fn New(other: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new(@ptrCast(other));
    }

    /// New2 constructs a new QQuaternion object and invalidates the source QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QQuaternion `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new2(@ptrCast(other));
    }

    /// New3 constructs a new QQuaternion object.
    ///
    pub fn New3() QtC.QQuaternion {
        return qtc.QQuaternion_new3();
    }

    /// New4 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QtC.QQuaternion {
        return qtc.QQuaternion_new4(@bitCast(param1));
    }

    /// New5 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scalar: f32 `
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    /// ` zpos: f32 `
    ///
    pub fn New5(scalar: f32, xpos: f32, ypos: f32, zpos: f32) QtC.QQuaternion {
        return qtc.QQuaternion_new5(@bitCast(scalar), @bitCast(xpos), @bitCast(ypos), @bitCast(zpos));
    }

    /// New6 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scalar: f32 `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn New6(scalar: f32, vector: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new6(@bitCast(scalar), @ptrCast(vector));
    }

    /// New7 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QtC.QVector4D `
    ///
    pub fn New7(vector: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new7(@ptrCast(vector));
    }

    /// New8 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QQuaternion `
    ///
    pub fn New8(param1: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_new8(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` other: QtC.QQuaternion `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QQuaternion_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` other: QtC.QQuaternion `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QQuaternion_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QQuaternion_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return qtc.QQuaternion_IsIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#vector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Vector(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QQuaternion_Vector(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn SetVector(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QQuaternion_SetVector(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn SetVector2(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QQuaternion_SetVector2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn X(self: ?*anyopaque) f32 {
        return qtc.QQuaternion_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Y(self: ?*anyopaque) f32 {
        return qtc.QQuaternion_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Z(self: ?*anyopaque) f32 {
        return qtc.QQuaternion_Z(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#scalar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Scalar(self: ?*anyopaque) f32 {
        return qtc.QQuaternion_Scalar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f32) void {
        qtc.QQuaternion_SetX(@ptrCast(self), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f32) void {
        qtc.QQuaternion_SetY(@ptrCast(self), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` z: f32 `
    ///
    pub fn SetZ(self: ?*anyopaque, z: f32) void {
        qtc.QQuaternion_SetZ(@ptrCast(self), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setScalar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` scalar: f32 `
    ///
    pub fn SetScalar(self: ?*anyopaque, scalar: f32) void {
        qtc.QQuaternion_SetScalar(@ptrCast(self), @bitCast(scalar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QtC.QQuaternion `
    ///
    /// ` q2: QtC.QQuaternion `
    ///
    pub fn DotProduct(q1: ?*anyopaque, q2: ?*anyopaque) f32 {
        return qtc.QQuaternion_DotProduct(@ptrCast(q1), @ptrCast(q2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Length(self: ?*anyopaque) f32 {
        return qtc.QQuaternion_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn LengthSquared(self: ?*anyopaque) f32 {
        return qtc.QQuaternion_LengthSquared(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QQuaternion_Normalize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Inverted(self: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_Inverted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#conjugated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Conjugated(self: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_Conjugated(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#rotatedVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn RotatedVector(self: ?*anyopaque, vector: ?*anyopaque) QtC.QVector3D {
        return qtc.QQuaternion_RotatedVector(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` quaternion: QtC.QQuaternion `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, quaternion: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorPlusAssign(@ptrCast(self), @ptrCast(quaternion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` quaternion: QtC.QQuaternion `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, quaternion: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorMinusAssign(@ptrCast(self), @ptrCast(quaternion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f32) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorMultiplyAssign(@ptrCast(self), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` quaternion: QtC.QQuaternion `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, quaternion: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorMultiplyAssign2(@ptrCast(self), @ptrCast(quaternion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QQuaternion {
        return qtc.QQuaternion_OperatorDivideAssign(@ptrCast(self), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn ToVector4D(self: ?*anyopaque) QtC.QVector4D {
        return qtc.QQuaternion_ToVector4D(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QQuaternion_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` axis: QtC.QVector3D `
    ///
    /// ` angle: *f32 `
    ///
    pub fn GetAxisAndAngle(self: ?*anyopaque, axis: ?*anyopaque, angle: *f32) void {
        qtc.QQuaternion_GetAxisAndAngle(@ptrCast(self), @ptrCast(axis), @ptrCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` axis: QtC.QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn FromAxisAndAngle(axis: ?*anyopaque, angle: f32) QtC.QQuaternion {
        return qtc.QQuaternion_FromAxisAndAngle(@ptrCast(axis), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` x: *f32 `
    ///
    /// ` y: *f32 `
    ///
    /// ` z: *f32 `
    ///
    /// ` angle: *f32 `
    ///
    pub fn GetAxisAndAngle2(self: ?*anyopaque, x: *f32, y: *f32, z: *f32, angle: *f32) void {
        qtc.QQuaternion_GetAxisAndAngle2(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(z), @ptrCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` angle: f32 `
    ///
    pub fn FromAxisAndAngle2(x: f32, y: f32, z: f32, angle: f32) QtC.QQuaternion {
        return qtc.QQuaternion_FromAxisAndAngle2(@bitCast(x), @bitCast(y), @bitCast(z), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#toEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn ToEulerAngles(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QQuaternion_ToEulerAngles(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` eulerAngles: QtC.QVector3D `
    ///
    pub fn FromEulerAngles(eulerAngles: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_FromEulerAngles(@ptrCast(eulerAngles));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` pitch: *f32 `
    ///
    /// ` yaw: *f32 `
    ///
    /// ` roll: *f32 `
    ///
    pub fn GetEulerAngles(self: ?*anyopaque, pitch: *f32, yaw: *f32, roll: *f32) void {
        qtc.QQuaternion_GetEulerAngles(@ptrCast(self), @ptrCast(pitch), @ptrCast(yaw), @ptrCast(roll));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` pitch: f32 `
    ///
    /// ` yaw: f32 `
    ///
    /// ` roll: f32 `
    ///
    pub fn FromEulerAngles2(pitch: f32, yaw: f32, roll: f32) QtC.QQuaternion {
        return qtc.QQuaternion_FromEulerAngles2(@bitCast(pitch), @bitCast(yaw), @bitCast(roll));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QQuaternion `
    ///
    /// ` xAxis: QtC.QVector3D `
    ///
    /// ` yAxis: QtC.QVector3D `
    ///
    /// ` zAxis: QtC.QVector3D `
    ///
    pub fn GetAxes(self: ?*anyopaque, xAxis: ?*anyopaque, yAxis: ?*anyopaque, zAxis: ?*anyopaque) void {
        qtc.QQuaternion_GetAxes(@ptrCast(self), @ptrCast(xAxis), @ptrCast(yAxis), @ptrCast(zAxis));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` xAxis: QtC.QVector3D `
    ///
    /// ` yAxis: QtC.QVector3D `
    ///
    /// ` zAxis: QtC.QVector3D `
    ///
    pub fn FromAxes(xAxis: ?*anyopaque, yAxis: ?*anyopaque, zAxis: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_FromAxes(@ptrCast(xAxis), @ptrCast(yAxis), @ptrCast(zAxis));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: QtC.QVector3D `
    ///
    /// ` up: QtC.QVector3D `
    ///
    pub fn FromDirection(direction: ?*anyopaque, up: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_FromDirection(@ptrCast(direction), @ptrCast(up));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#rotationTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` from: QtC.QVector3D `
    ///
    /// ` to: QtC.QVector3D `
    ///
    pub fn RotationTo(from: ?*anyopaque, to: ?*anyopaque) QtC.QQuaternion {
        return qtc.QQuaternion_RotationTo(@ptrCast(from), @ptrCast(to));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#slerp)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QtC.QQuaternion `
    ///
    /// ` q2: QtC.QQuaternion `
    ///
    /// ` t: f32 `
    ///
    pub fn Slerp(q1: ?*anyopaque, q2: ?*anyopaque, t: f32) QtC.QQuaternion {
        return qtc.QQuaternion_Slerp(@ptrCast(q1), @ptrCast(q2), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#nlerp)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QtC.QQuaternion `
    ///
    /// ` q2: QtC.QQuaternion `
    ///
    /// ` t: f32 `
    ///
    pub fn Nlerp(q1: ?*anyopaque, q2: ?*anyopaque, t: f32) QtC.QQuaternion {
        return qtc.QQuaternion_Nlerp(@ptrCast(q1), @ptrCast(q2), @bitCast(t));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#dtor.QQuaternion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QQuaternion `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QQuaternion_Delete(@ptrCast(self));
    }
};
