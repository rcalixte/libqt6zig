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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuaternion `
    ///
    pub fn new(other: anytype) QQuaternion {
        comptime _ = @TypeOf(other)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuaternion object and invalidate the source QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuaternion `
    ///
    pub fn new2(other: anytype) QQuaternion {
        comptime _ = @TypeOf(other)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    pub fn new3() QQuaternion {
        return .{ .ptr = qtc.QQuaternion_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new4(param1: i32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_new4(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scalar: f32 `
    ///
    /// ` xpos: f32 `
    ///
    /// ` ypos: f32 `
    ///
    /// ` zpos: f32 `
    ///
    pub fn new5(_scalar: f32, xpos: f32, ypos: f32, zpos: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_new5(@bitCast(_scalar), @bitCast(xpos), @bitCast(ypos), @bitCast(zpos)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scalar: f32 `
    ///
    /// ` _vector: QVector3D `
    ///
    pub fn new6(_scalar: f32, _vector: anytype) QQuaternion {
        comptime _ = @TypeOf(_vector)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_new6(@bitCast(_scalar), @ptrCast(_vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _vector: QVector4D `
    ///
    pub fn new7(_vector: anytype) QQuaternion {
        comptime _ = @TypeOf(_vector)._is_QVector4D;
        return .{ .ptr = qtc.QQuaternion_new7(@ptrCast(_vector.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QQuaternion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQuaternion `
    ///
    pub fn new8(param1: anytype) QQuaternion {
        comptime _ = @TypeOf(param1)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_new8(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuaternion `
    ///
    /// ` other: QQuaternion `
    ///
    pub fn copyAssign(self: QQuaternion, other: QQuaternion) void {
        qtc.QQuaternion_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuaternion `
    ///
    /// ` other: QQuaternion `
    ///
    pub fn moveAssign(self: QQuaternion, other: QQuaternion) void {
        qtc.QQuaternion_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn isNull(self: QQuaternion) bool {
        return qtc.QQuaternion_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isIdentity` instead
    ///
    pub const IsIdentity = isIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn isIdentity(self: QQuaternion) bool {
        return qtc.QQuaternion_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `vector` instead
    ///
    pub const Vector = vector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#vector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn vector(self: QQuaternion) QVector3D {
        return .{ .ptr = qtc.QQuaternion_Vector(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVector` instead
    ///
    pub const SetVector = setVector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _vector: QVector3D `
    ///
    pub fn setVector(self: QQuaternion, _vector: anytype) void {
        comptime _ = @TypeOf(_vector)._is_QVector3D;
        qtc.QQuaternion_SetVector(@ptrCast(self.ptr), @ptrCast(_vector.ptr));
    }

    /// ### DEPRECATED: Use `setVector2` instead
    ///
    pub const SetVector2 = setVector2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _x: f32 `
    ///
    /// ` _y: f32 `
    ///
    /// ` _z: f32 `
    ///
    pub fn setVector2(self: QQuaternion, _x: f32, _y: f32, _z: f32) void {
        qtc.QQuaternion_SetVector2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(_z));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn x(self: QQuaternion) f32 {
        return qtc.QQuaternion_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn y(self: QQuaternion) f32 {
        return qtc.QQuaternion_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn z(self: QQuaternion) f32 {
        return qtc.QQuaternion_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scalar` instead
    ///
    pub const Scalar = scalar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#scalar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn scalar(self: QQuaternion) f32 {
        return qtc.QQuaternion_Scalar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QQuaternion, _x: f32) void {
        qtc.QQuaternion_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QQuaternion, _y: f32) void {
        qtc.QQuaternion_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _z: f32 `
    ///
    pub fn setZ(self: QQuaternion, _z: f32) void {
        qtc.QQuaternion_SetZ(@ptrCast(self.ptr), @bitCast(_z));
    }

    /// ### DEPRECATED: Use `setScalar` instead
    ///
    pub const SetScalar = setScalar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#setScalar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _scalar: f32 `
    ///
    pub fn setScalar(self: QQuaternion, _scalar: f32) void {
        qtc.QQuaternion_SetScalar(@ptrCast(self.ptr), @bitCast(_scalar));
    }

    /// ### DEPRECATED: Use `dotProduct` instead
    ///
    pub const DotProduct = dotProduct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#dotProduct)
    ///
    /// ## Parameter(s):
    ///
    /// ` q1: QQuaternion `
    ///
    /// ` q2: QQuaternion `
    ///
    pub fn dotProduct(q1: anytype, q2: anytype) f32 {
        comptime _ = @TypeOf(q1)._is_QQuaternion;
        comptime _ = @TypeOf(q2)._is_QQuaternion;
        return qtc.QQuaternion_DotProduct(@ptrCast(q1.ptr), @ptrCast(q2.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn length(self: QQuaternion) f32 {
        return qtc.QQuaternion_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lengthSquared` instead
    ///
    pub const LengthSquared = lengthSquared;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#lengthSquared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn lengthSquared(self: QQuaternion) f32 {
        return qtc.QQuaternion_LengthSquared(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn normalized(self: QQuaternion) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn normalize(self: QQuaternion) void {
        qtc.QQuaternion_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inverted` instead
    ///
    pub const Inverted = inverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn inverted(self: QQuaternion) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_Inverted(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `conjugated` instead
    ///
    pub const Conjugated = conjugated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#conjugated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn conjugated(self: QQuaternion) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_Conjugated(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rotatedVector` instead
    ///
    pub const RotatedVector = rotatedVector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#rotatedVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _vector: QVector3D `
    ///
    pub fn rotatedVector(self: QQuaternion, _vector: anytype) QVector3D {
        comptime _ = @TypeOf(_vector)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_RotatedVector(@ptrCast(self.ptr), @ptrCast(_vector.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn operatorPlusAssign(self: QQuaternion, quaternion: anytype) QQuaternion {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(quaternion.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn operatorMinusAssign(self: QQuaternion, quaternion: anytype) QQuaternion {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(quaternion.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` factor: f32 `
    ///
    pub fn operatorMultiplyAssign(self: QQuaternion, factor: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn operatorMultiplyAssign2(self: QQuaternion, quaternion: anytype) QQuaternion {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_OperatorMultiplyAssign2(@ptrCast(self.ptr), @ptrCast(quaternion.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` divisor: f32 `
    ///
    pub fn operatorDivideAssign(self: QQuaternion, divisor: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `toVector4D` instead
    ///
    pub const ToVector4D = toVector4D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#toVector4D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn toVector4D(self: QQuaternion) QVector4D {
        return .{ .ptr = qtc.QQuaternion_ToVector4D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn toQVariant(self: QQuaternion) QVariant {
        return .{ .ptr = qtc.QQuaternion_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `getAxisAndAngle` instead
    ///
    pub const GetAxisAndAngle = getAxisAndAngle;

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
    pub fn getAxisAndAngle(self: QQuaternion, axis: anytype, angle: *f32) void {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        qtc.QQuaternion_GetAxisAndAngle(@ptrCast(self.ptr), @ptrCast(axis.ptr), @ptrCast(angle));
    }

    /// ### DEPRECATED: Use `fromAxisAndAngle` instead
    ///
    pub const FromAxisAndAngle = fromAxisAndAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn fromAxisAndAngle(axis: anytype, angle: f32) QQuaternion {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromAxisAndAngle(@ptrCast(axis.ptr), @bitCast(angle)) };
    }

    /// ### DEPRECATED: Use `getAxisAndAngle2` instead
    ///
    pub const GetAxisAndAngle2 = getAxisAndAngle2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    /// ` _x: *f32 `
    ///
    /// ` _y: *f32 `
    ///
    /// ` _z: *f32 `
    ///
    /// ` angle: *f32 `
    ///
    pub fn getAxisAndAngle2(self: QQuaternion, _x: *f32, _y: *f32, _z: *f32, angle: *f32) void {
        qtc.QQuaternion_GetAxisAndAngle2(@ptrCast(self.ptr), @ptrCast(_x), @ptrCast(_y), @ptrCast(_z), @ptrCast(angle));
    }

    /// ### DEPRECATED: Use `fromAxisAndAngle2` instead
    ///
    pub const FromAxisAndAngle2 = fromAxisAndAngle2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` _x: f32 `
    ///
    /// ` _y: f32 `
    ///
    /// ` _z: f32 `
    ///
    /// ` angle: f32 `
    ///
    pub fn fromAxisAndAngle2(_x: f32, _y: f32, _z: f32, angle: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_FromAxisAndAngle2(@bitCast(_x), @bitCast(_y), @bitCast(_z), @bitCast(angle)) };
    }

    /// ### DEPRECATED: Use `toEulerAngles` instead
    ///
    pub const ToEulerAngles = toEulerAngles;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#toEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuaternion `
    ///
    pub fn toEulerAngles(self: QQuaternion) QVector3D {
        return .{ .ptr = qtc.QQuaternion_ToEulerAngles(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromEulerAngles` instead
    ///
    pub const FromEulerAngles = fromEulerAngles;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
    ///
    /// ## Parameter(s):
    ///
    /// ` eulerAngles: QVector3D `
    ///
    pub fn fromEulerAngles(eulerAngles: anytype) QQuaternion {
        comptime _ = @TypeOf(eulerAngles)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromEulerAngles(@ptrCast(eulerAngles.ptr)) };
    }

    /// ### DEPRECATED: Use `getEulerAngles` instead
    ///
    pub const GetEulerAngles = getEulerAngles;

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
    pub fn getEulerAngles(self: QQuaternion, pitch: *f32, yaw: *f32, roll: *f32) void {
        qtc.QQuaternion_GetEulerAngles(@ptrCast(self.ptr), @ptrCast(pitch), @ptrCast(yaw), @ptrCast(roll));
    }

    /// ### DEPRECATED: Use `fromEulerAngles2` instead
    ///
    pub const FromEulerAngles2 = fromEulerAngles2;

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
    pub fn fromEulerAngles2(pitch: f32, yaw: f32, roll: f32) QQuaternion {
        return .{ .ptr = qtc.QQuaternion_FromEulerAngles2(@bitCast(pitch), @bitCast(yaw), @bitCast(roll)) };
    }

    /// ### DEPRECATED: Use `getAxes` instead
    ///
    pub const GetAxes = getAxes;

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
    pub fn getAxes(self: QQuaternion, xAxis: anytype, yAxis: anytype, zAxis: anytype) void {
        comptime _ = @TypeOf(xAxis)._is_QVector3D;
        comptime _ = @TypeOf(yAxis)._is_QVector3D;
        comptime _ = @TypeOf(zAxis)._is_QVector3D;
        qtc.QQuaternion_GetAxes(@ptrCast(self.ptr), @ptrCast(xAxis.ptr), @ptrCast(yAxis.ptr), @ptrCast(zAxis.ptr));
    }

    /// ### DEPRECATED: Use `fromAxes` instead
    ///
    pub const FromAxes = fromAxes;

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
    pub fn fromAxes(xAxis: anytype, yAxis: anytype, zAxis: anytype) QQuaternion {
        comptime _ = @TypeOf(xAxis)._is_QVector3D;
        comptime _ = @TypeOf(yAxis)._is_QVector3D;
        comptime _ = @TypeOf(zAxis)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromAxes(@ptrCast(xAxis.ptr), @ptrCast(yAxis.ptr), @ptrCast(zAxis.ptr)) };
    }

    /// ### DEPRECATED: Use `fromDirection` instead
    ///
    pub const FromDirection = fromDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#fromDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: QVector3D `
    ///
    /// ` up: QVector3D `
    ///
    pub fn fromDirection(direction: anytype, up: anytype) QQuaternion {
        comptime _ = @TypeOf(direction)._is_QVector3D;
        comptime _ = @TypeOf(up)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_FromDirection(@ptrCast(direction.ptr), @ptrCast(up.ptr)) };
    }

    /// ### DEPRECATED: Use `rotationTo` instead
    ///
    pub const RotationTo = rotationTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#rotationTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` from: QVector3D `
    ///
    /// ` to: QVector3D `
    ///
    pub fn rotationTo(from: anytype, to: anytype) QQuaternion {
        comptime _ = @TypeOf(from)._is_QVector3D;
        comptime _ = @TypeOf(to)._is_QVector3D;
        return .{ .ptr = qtc.QQuaternion_RotationTo(@ptrCast(from.ptr), @ptrCast(to.ptr)) };
    }

    /// ### DEPRECATED: Use `slerp` instead
    ///
    pub const Slerp = slerp;

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
    pub fn slerp(q1: anytype, q2: anytype, t: f32) QQuaternion {
        comptime _ = @TypeOf(q1)._is_QQuaternion;
        comptime _ = @TypeOf(q2)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_Slerp(@ptrCast(q1.ptr), @ptrCast(q2.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `nlerp` instead
    ///
    pub const Nlerp = nlerp;

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
    pub fn nlerp(q1: anytype, q2: anytype, t: f32) QQuaternion {
        comptime _ = @TypeOf(q1)._is_QQuaternion;
        comptime _ = @TypeOf(q2)._is_QQuaternion;
        return .{ .ptr = qtc.QQuaternion_Nlerp(@ptrCast(q1.ptr), @ptrCast(q2.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquaternion.html#dtor.QQuaternion)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuaternion `
    ///
    pub fn delete(self: QQuaternion) void {
        qtc.QQuaternion_Delete(@ptrCast(self.ptr));
    }
};
