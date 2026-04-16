const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const QVector4D = @import("libqt6").QVector4D;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html)
pub const QQuaternion = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuaternion,

    pub const _is_QQuaternion = {};

    /// New constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuaternion `
    ///
    pub fn New(other: anytype) QQuaternion {
        comptime _ = @TypeOf(other)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QQuaternion object and invalidates the source QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuaternion `
    ///
    pub fn New2(other: anytype) QQuaternion {
        comptime _ = @TypeOf(other)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QQuaternion object.
    ///
    pub fn New3() QQuaternion {
        return .{ .ptr = qtc.QQuaternion_new3() };
    }

    /// New4 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_new4(@bitCast(param1)) };
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
    pub fn New5(scalar: f32, xpos: f32, ypos: f32, zpos: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_new5(@bitCast(scalar), @bitCast(xpos), @bitCast(ypos), @bitCast(zpos)) };
    }

    /// New6 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scalar: f32 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn New6(scalar: f32, vector: anytype) QQuaternion {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_new6(@bitCast(scalar), @ptrCast(vector.ptr)) };
    }

    /// New7 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` vector: QVector4D `
    ///
    pub fn New7(vector: anytype) QQuaternion {
        comptime _ = @TypeOf(vector)._is_QVector4D;
        return .{ .ptr = qtc.QQuaternion_new7(@ptrCast(vector.ptr)) };
    }

    /// New8 constructs a new QQuaternion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQuaternion `
    ///
    pub fn New8(param1: anytype) QQuaternion {
        comptime _ = @TypeOf(param1)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_new8(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuaternion `
    ///
    /// ` other: QQuaternion `
    ///
    pub fn CopyAssign(self: QQuaternion, other: QQuaternion) void {
        qtc.QQuaternion_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuaternion `
    ///
    /// ` other: QQuaternion `
    ///
    pub fn MoveAssign(self: QQuaternion, other: QQuaternion) void {
        qtc.QQuaternion_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn IsNull(self: QQuaternion) bool {
        return qtc.QQuaternion_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn IsIdentity(self: QQuaternion) bool {
        return qtc.QQuaternion_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#vector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Vector(self: QQuaternion) QVector3D {
        return .{ .ptr = qtc.QQuaternion_Vector(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn SetVector(self: QQuaternion, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QQuaternion_SetVector(@ptrCast(self.ptr), @ptrCast(vector.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn SetVector2(self: QQuaternion, x: f32, y: f32, z: f32) void {
        qtc.QQuaternion_SetVector2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn X(self: QQuaternion) f32 {
        return qtc.QQuaternion_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Y(self: QQuaternion) f32 {
        return qtc.QQuaternion_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Z(self: QQuaternion) f32 {
        return qtc.QQuaternion_Z(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#scalar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Scalar(self: QQuaternion) f32 {
        return qtc.QQuaternion_Scalar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` x: f32 `
    ///
    pub fn SetX(self: QQuaternion, x: f32) void {
        qtc.QQuaternion_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` y: f32 `
    ///
    pub fn SetY(self: QQuaternion, y: f32) void {
        qtc.QQuaternion_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` z: f32 `
    ///
    pub fn SetZ(self: QQuaternion, z: f32) void {
        qtc.QQuaternion_SetZ(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setScalar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` scalar: f32 `
    ///
    pub fn SetScalar(self: QQuaternion, scalar: f32) void {
        qtc.QQuaternion_SetScalar(@ptrCast(self.ptr), @bitCast(scalar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QQuaternion `
    ///
    /// ` q2: QQuaternion `
    ///
    pub fn DotProduct(q1: anytype, q2: anytype) f32 {
        comptime _ = @TypeOf(q1)._is_QQuaternion;
        comptime _ = @TypeOf(q2)._is_QQuaternion;
        return qtc.QQuaternion_DotProduct(@ptrCast(q1.ptr), @ptrCast(q2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Length(self: QQuaternion) f32 {
        return qtc.QQuaternion_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn LengthSquared(self: QQuaternion) f32 {
        return qtc.QQuaternion_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Normalized(self: QQuaternion) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Normalize(self: QQuaternion) void {
        qtc.QQuaternion_Normalize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Inverted(self: QQuaternion) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_Inverted(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#conjugated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn Conjugated(self: QQuaternion) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_Conjugated(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#rotatedVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn RotatedVector(self: QQuaternion, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_RotatedVector(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn OperatorPlusAssign(self: QQuaternion, quaternion: anytype) QQuaternion {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(quaternion.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn OperatorMinusAssign(self: QQuaternion, quaternion: anytype) QQuaternion {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(quaternion.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign(self: QQuaternion, factor: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn OperatorMultiplyAssign2(self: QQuaternion, quaternion: anytype) QQuaternion {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(quaternion.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: QQuaternion, divisor: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn ToVector4D(self: QQuaternion) QVector4D {
        return .{ .ptr = qtc.QQuaternion_ToVector4D(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn ToQVariant(self: QQuaternion) QVariant {
        return .{ .ptr = qtc.QQuaternion_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: *f32 `
    ///
    pub fn GetAxisAndAngle(self: QQuaternion, axis: anytype, angle: *f32) void {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        qtc.QQuaternion_GetAxisAndAngle(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn FromAxisAndAngle(axis: anytype, angle: f32) QQuaternion {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromAxisAndAngle(@ptrCast(axis.ptr), @bitCast(angle)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` x: *f32 `
    ///
    /// ` y: *f32 `
    ///
    /// ` z: *f32 `
    ///
    /// ` angle: *f32 `
    ///
    pub fn GetAxisAndAngle2(self: QQuaternion, x: *f32, y: *f32, z: *f32, angle: *f32) void {
        qtc.QQuaternion_GetAxisAndAngle2(@ptrCast(self.ptr), @ptrCast(x), @ptrCast(y), @ptrCast(z), @ptrCast(angle));
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
    pub fn FromAxisAndAngle2(x: f32, y: f32, z: f32, angle: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_FromAxisAndAngle2(@bitCast(x), @bitCast(y), @bitCast(z), @bitCast(angle)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#toEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn ToEulerAngles(self: QQuaternion) QVector3D {
        return .{ .ptr = qtc.QQuaternion_ToEulerAngles(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` eulerAngles: QVector3D `
    ///
    pub fn FromEulerAngles(eulerAngles: anytype) QQuaternion {
        comptime _ = @TypeOf(eulerAngles)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromEulerAngles(@ptrCast(eulerAngles.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` pitch: *f32 `
    ///
    /// ` yaw: *f32 `
    ///
    /// ` roll: *f32 `
    ///
    pub fn GetEulerAngles(self: QQuaternion, pitch: *f32, yaw: *f32, roll: *f32) void {
        qtc.QQuaternion_GetEulerAngles(@ptrCast(self.ptr), @ptrCast(pitch), @ptrCast(yaw), @ptrCast(roll));
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
    pub fn FromEulerAngles2(pitch: f32, yaw: f32, roll: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_FromEulerAngles2(@bitCast(pitch), @bitCast(yaw), @bitCast(roll)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` xAxis: QVector3D `
    ///
    /// ` yAxis: QVector3D `
    ///
    /// ` zAxis: QVector3D `
    ///
    pub fn GetAxes(self: QQuaternion, xAxis: anytype, yAxis: anytype, zAxis: anytype) void {
        comptime _ = @TypeOf(xAxis)._is_QVector3D;
        comptime _ = @TypeOf(yAxis)._is_QVector3D;
        comptime _ = @TypeOf(zAxis)._is_QVector3D;
        qtc.QQuaternion_GetAxes(@ptrCast(self.ptr), @ptrCast(xAxis.ptr), @ptrCast(yAxis.ptr), @ptrCast(zAxis.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` xAxis: QVector3D `
    ///
    /// ` yAxis: QVector3D `
    ///
    /// ` zAxis: QVector3D `
    ///
    pub fn FromAxes(xAxis: anytype, yAxis: anytype, zAxis: anytype) QQuaternion {
        comptime _ = @TypeOf(xAxis)._is_QVector3D;
        comptime _ = @TypeOf(yAxis)._is_QVector3D;
        comptime _ = @TypeOf(zAxis)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromAxes(@ptrCast(xAxis.ptr), @ptrCast(yAxis.ptr), @ptrCast(zAxis.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: QVector3D `
    ///
    /// ` up: QVector3D `
    ///
    pub fn FromDirection(direction: anytype, up: anytype) QQuaternion {
        comptime _ = @TypeOf(direction)._is_QVector3D;
        comptime _ = @TypeOf(up)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromDirection(@ptrCast(direction.ptr), @ptrCast(up.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#rotationTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` from: QVector3D `
    ///
    /// ` to: QVector3D `
    ///
    pub fn RotationTo(from: anytype, to: anytype) QQuaternion {
        comptime _ = @TypeOf(from)._is_QVector3D;
        comptime _ = @TypeOf(to)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_RotationTo(@ptrCast(from.ptr), @ptrCast(to.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#slerp)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QQuaternion `
    ///
    /// ` q2: QQuaternion `
    ///
    /// ` t: f32 `
    ///
    pub fn Slerp(q1: anytype, q2: anytype, t: f32) QQuaternion {
        comptime _ = @TypeOf(q1)._is_QQuaternion;
        comptime _ = @TypeOf(q2)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_Slerp(@ptrCast(q1.ptr), @ptrCast(q2.ptr), @bitCast(t)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#nlerp)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QQuaternion `
    ///
    /// ` q2: QQuaternion `
    ///
    /// ` t: f32 `
    ///
    pub fn Nlerp(q1: anytype, q2: anytype, t: f32) QQuaternion {
        comptime _ = @TypeOf(q1)._is_QQuaternion;
        comptime _ = @TypeOf(q2)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_Nlerp(@ptrCast(q1.ptr), @ptrCast(q2.ptr), @bitCast(t)) };
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
    /// ` self: QQuaternion `
    ///
    pub fn Delete(self: QQuaternion) void {
        qtc.QQuaternion_Delete(@ptrCast(self.ptr));
    }
};
