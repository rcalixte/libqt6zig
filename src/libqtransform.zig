const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QLine = @import("libqt6").QLine;
const QLineF = @import("libqt6").QLineF;
const QPainterPath = @import("libqt6").QPainterPath;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtransform_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html)
pub const QTransform = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTransform,

    pub const _is_QTransform = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTransform `
    ///
    pub fn new(other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QTransform;
        return .{ .ptr = qtc.QTransform_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTransform object and invalidate the source QTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTransform `
    ///
    pub fn new2(other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QTransform;
        return .{ .ptr = qtc.QTransform_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new3(param1: i32) QTransform {
        return .{ .ptr = qtc.QTransform_new3(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTransform object in C++ memory
    ///
    pub fn new4() QTransform {
        return .{ .ptr = qtc.QTransform_new4() };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` h11: f64 `
    ///
    /// ` h12: f64 `
    ///
    /// ` h13: f64 `
    ///
    /// ` h21: f64 `
    ///
    /// ` h22: f64 `
    ///
    /// ` h23: f64 `
    ///
    /// ` h31: f64 `
    ///
    /// ` h32: f64 `
    ///
    /// ` h33: f64 `
    ///
    pub fn new5(h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64) QTransform {
        return .{ .ptr = qtc.QTransform_new5(@bitCast(h11), @bitCast(h12), @bitCast(h13), @bitCast(h21), @bitCast(h22), @bitCast(h23), @bitCast(h31), @bitCast(h32), @bitCast(h33)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` h11: f64 `
    ///
    /// ` h12: f64 `
    ///
    /// ` h21: f64 `
    ///
    /// ` h22: f64 `
    ///
    /// ` _dx: f64 `
    ///
    /// ` _dy: f64 `
    ///
    pub fn new6(h11: f64, h12: f64, h21: f64, h22: f64, _dx: f64, _dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_new6(@bitCast(h11), @bitCast(h12), @bitCast(h21), @bitCast(h22), @bitCast(_dx), @bitCast(_dy)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTransform `
    ///
    pub fn new7(other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QTransform;
        return .{ .ptr = qtc.QTransform_new7(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTransform `
    ///
    /// ` other: QTransform `
    ///
    pub fn copyAssign(self: QTransform, other: QTransform) void {
        qtc.QTransform_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTransform `
    ///
    /// ` other: QTransform `
    ///
    pub fn moveAssign(self: QTransform, other: QTransform) void {
        qtc.QTransform_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn operatorAssign(self: QTransform, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTransform;
        qtc.QTransform_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isAffine` instead
    ///
    pub const IsAffine = isAffine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn isAffine(self: QTransform) bool {
        return qtc.QTransform_IsAffine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isIdentity` instead
    ///
    pub const IsIdentity = isIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn isIdentity(self: QTransform) bool {
        return qtc.QTransform_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInvertible` instead
    ///
    pub const IsInvertible = isInvertible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn isInvertible(self: QTransform) bool {
        return qtc.QTransform_IsInvertible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isScaling` instead
    ///
    pub const IsScaling = isScaling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isScaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn isScaling(self: QTransform) bool {
        return qtc.QTransform_IsScaling(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRotating` instead
    ///
    pub const IsRotating = isRotating;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isRotating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn isRotating(self: QTransform) bool {
        return qtc.QTransform_IsRotating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTranslating` instead
    ///
    pub const IsTranslating = isTranslating;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn isTranslating(self: QTransform) bool {
        return qtc.QTransform_IsTranslating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ## Returns:
    ///
    /// ` qtransform_enums.TransformationType `
    ///
    pub fn type0(self: QTransform) i32 {
        return qtc.QTransform_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `determinant` instead
    ///
    pub const Determinant = determinant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn determinant(self: QTransform) f64 {
        return qtc.QTransform_Determinant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m11` instead
    ///
    pub const M11 = m11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m11)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m11(self: QTransform) f64 {
        return qtc.QTransform_M11(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m12` instead
    ///
    pub const M12 = m12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m12)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m12(self: QTransform) f64 {
        return qtc.QTransform_M12(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m13` instead
    ///
    pub const M13 = m13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m13)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m13(self: QTransform) f64 {
        return qtc.QTransform_M13(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m21` instead
    ///
    pub const M21 = m21;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m21)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m21(self: QTransform) f64 {
        return qtc.QTransform_M21(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m22` instead
    ///
    pub const M22 = m22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m22)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m22(self: QTransform) f64 {
        return qtc.QTransform_M22(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m23` instead
    ///
    pub const M23 = m23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m23)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m23(self: QTransform) f64 {
        return qtc.QTransform_M23(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m31` instead
    ///
    pub const M31 = m31;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m31)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m31(self: QTransform) f64 {
        return qtc.QTransform_M31(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m32` instead
    ///
    pub const M32 = m32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m32(self: QTransform) f64 {
        return qtc.QTransform_M32(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `m33` instead
    ///
    pub const M33 = m33;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m33)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn m33(self: QTransform) f64 {
        return qtc.QTransform_M33(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dx` instead
    ///
    pub const Dx = dx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn dx(self: QTransform) f64 {
        return qtc.QTransform_Dx(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dy` instead
    ///
    pub const Dy = dy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn dy(self: QTransform) f64 {
        return qtc.QTransform_Dy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMatrix` instead
    ///
    pub const SetMatrix = setMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` _m11: f64 `
    ///
    /// ` _m12: f64 `
    ///
    /// ` _m13: f64 `
    ///
    /// ` _m21: f64 `
    ///
    /// ` _m22: f64 `
    ///
    /// ` _m23: f64 `
    ///
    /// ` _m31: f64 `
    ///
    /// ` _m32: f64 `
    ///
    /// ` _m33: f64 `
    ///
    pub fn setMatrix(self: QTransform, _m11: f64, _m12: f64, _m13: f64, _m21: f64, _m22: f64, _m23: f64, _m31: f64, _m32: f64, _m33: f64) void {
        qtc.QTransform_SetMatrix(@ptrCast(self.ptr), @bitCast(_m11), @bitCast(_m12), @bitCast(_m13), @bitCast(_m21), @bitCast(_m22), @bitCast(_m23), @bitCast(_m31), @bitCast(_m32), @bitCast(_m33));
    }

    /// ### DEPRECATED: Use `inverted` instead
    ///
    pub const Inverted = inverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn inverted(self: QTransform) QTransform {
        return .{ .ptr = qtc.QTransform_Inverted(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `adjoint` instead
    ///
    pub const Adjoint = adjoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#adjoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn adjoint(self: QTransform) QTransform {
        return .{ .ptr = qtc.QTransform_Adjoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn transposed(self: QTransform) QTransform {
        return .{ .ptr = qtc.QTransform_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` _dx: f64 `
    ///
    /// ` _dy: f64 `
    ///
    pub fn translate(self: QTransform, _dx: f64, _dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Translate(@ptrCast(self.ptr), @bitCast(_dx), @bitCast(_dy)) };
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn scale(self: QTransform, sx: f64, sy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy)) };
    }

    /// ### DEPRECATED: Use `shear` instead
    ///
    pub const Shear = shear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#shear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn shear(self: QTransform, sh: f64, sv: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv)) };
    }

    /// ### DEPRECATED: Use `rotate` instead
    ///
    pub const Rotate = rotate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` distanceToPlane: f64 `
    ///
    pub fn rotate(self: QTransform, a: f64, axis: i32, distanceToPlane: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Rotate(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis), @bitCast(distanceToPlane)) };
    }

    /// ### DEPRECATED: Use `rotate2` instead
    ///
    pub const Rotate2 = rotate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    pub fn rotate2(self: QTransform, a: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Rotate2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `rotateRadians` instead
    ///
    pub const RotateRadians = rotateRadians;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` distanceToPlane: f64 `
    ///
    pub fn rotateRadians(self: QTransform, a: f64, axis: i32, distanceToPlane: f64) QTransform {
        return .{ .ptr = qtc.QTransform_RotateRadians(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis), @bitCast(distanceToPlane)) };
    }

    /// ### DEPRECATED: Use `rotateRadians2` instead
    ///
    pub const RotateRadians2 = rotateRadians2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    pub fn rotateRadians2(self: QTransform, a: f64) QTransform {
        return .{ .ptr = qtc.QTransform_RotateRadians2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn operatorEqual(self: QTransform, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return qtc.QTransform_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn operatorNotEqual(self: QTransform, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return qtc.QTransform_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn operatorMultiplyAssign(self: QTransform, param1: anytype) QTransform {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QTransform_OperatorMultiplyAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` o: QTransform `
    ///
    pub fn operatorMultiply(self: QTransform, o: anytype) QTransform {
        comptime _ = @TypeOf(o)._is_QTransform;
        return .{ .ptr = qtc.QTransform_OperatorMultiply(@ptrCast(self.ptr), @ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn toQVariant(self: QTransform) QVariant {
        return .{ .ptr = qtc.QTransform_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn reset(self: QTransform) void {
        qtc.QTransform_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` p: QPoint `
    ///
    pub fn map(self: QTransform, p: anytype) QPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTransform_Map(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `map2` instead
    ///
    pub const Map2 = map2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` p: QPointF `
    ///
    pub fn map2(self: QTransform, p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QTransform_Map2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `map3` instead
    ///
    pub const Map3 = map3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` l: QLine `
    ///
    pub fn map3(self: QTransform, l: anytype) QLine {
        comptime _ = @TypeOf(l)._is_QLine;
        return .{ .ptr = qtc.QTransform_Map3(@ptrCast(self.ptr), @ptrCast(l.ptr)) };
    }

    /// ### DEPRECATED: Use `map4` instead
    ///
    pub const Map4 = map4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` l: QLineF `
    ///
    pub fn map4(self: QTransform, l: anytype) QLineF {
        comptime _ = @TypeOf(l)._is_QLineF;
        return .{ .ptr = qtc.QTransform_Map4(@ptrCast(self.ptr), @ptrCast(l.ptr)) };
    }

    /// ### DEPRECATED: Use `map7` instead
    ///
    pub const Map7 = map7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` r: QRegion `
    ///
    pub fn map7(self: QTransform, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QTransform_Map7(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `map8` instead
    ///
    pub const Map8 = map8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` p: QPainterPath `
    ///
    pub fn map8(self: QTransform, p: anytype) QPainterPath {
        comptime _ = @TypeOf(p)._is_QPainterPath;
        return .{ .ptr = qtc.QTransform_Map8(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRect` instead
    ///
    pub const MapRect = mapRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QRect `
    ///
    pub fn mapRect(self: QTransform, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QTransform_MapRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRect2` instead
    ///
    pub const MapRect2 = mapRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QRectF `
    ///
    pub fn mapRect2(self: QTransform, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QRectF;
        return .{ .ptr = qtc.QTransform_MapRect2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `map9` instead
    ///
    pub const Map9 = map9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` tx: *i32 `
    ///
    /// ` ty: *i32 `
    ///
    pub fn map9(self: QTransform, x: i32, y: i32, tx: *i32, ty: *i32) void {
        qtc.QTransform_Map9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// ### DEPRECATED: Use `map10` instead
    ///
    pub const Map10 = map10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` tx: *f64 `
    ///
    /// ` ty: *f64 `
    ///
    pub fn map10(self: QTransform, x: f64, y: f64, tx: *f64, ty: *f64) void {
        qtc.QTransform_Map10(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn operatorMultiplyAssign2(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn operatorDivideAssign(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn operatorPlusAssign(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn operatorMinusAssign(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### DEPRECATED: Use `fromTranslate` instead
    ///
    pub const FromTranslate = fromTranslate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
    ///
    /// ## Parameter(s):
    ///
    /// ` _dx: f64 `
    ///
    /// ` _dy: f64 `
    ///
    pub fn fromTranslate(_dx: f64, _dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_FromTranslate(@bitCast(_dx), @bitCast(_dy)) };
    }

    /// ### DEPRECATED: Use `fromScale` instead
    ///
    pub const FromScale = fromScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#fromScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` _dx: f64 `
    ///
    /// ` _dy: f64 `
    ///
    pub fn fromScale(_dx: f64, _dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_FromScale(@bitCast(_dx), @bitCast(_dy)) };
    }

    /// ### DEPRECATED: Use `inverted1` instead
    ///
    pub const Inverted1 = inverted1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` invertible: *bool `
    ///
    pub fn inverted1(self: QTransform, invertible: *bool) QTransform {
        return .{ .ptr = qtc.QTransform_Inverted1(@ptrCast(self.ptr), @ptrCast(invertible)) };
    }

    /// ### DEPRECATED: Use `rotate22` instead
    ///
    pub const Rotate22 = rotate22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    pub fn rotate22(self: QTransform, a: f64, axis: i32) QTransform {
        return .{ .ptr = qtc.QTransform_Rotate22(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis)) };
    }

    /// ### DEPRECATED: Use `rotateRadians22` instead
    ///
    pub const RotateRadians22 = rotateRadians22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    pub fn rotateRadians22(self: QTransform, a: f64, axis: i32) QTransform {
        return .{ .ptr = qtc.QTransform_RotateRadians22(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dtor.QTransform)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTransform `
    ///
    pub fn delete(self: QTransform) void {
        qtc.QTransform_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#public-types)
pub const enums = struct {
    pub const TransformationType = enum {
        pub const TxNone: i32 = 0;
        pub const TxTranslate: i32 = 1;
        pub const TxScale: i32 = 2;
        pub const TxRotate: i32 = 4;
        pub const TxShear: i32 = 8;
        pub const TxProject: i32 = 16;
    };
};
