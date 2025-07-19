const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtransform_enums = enums;

/// https://doc.qt.io/qt-6/qtransform.html
pub const qtransform = struct {
    /// New constructs a new QTransform object.
    ///
    /// ``` other: QtC.QTransform ```
    pub fn New(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new(@ptrCast(other));
    }

    /// New2 constructs a new QTransform object and invalidates the source QTransform object.
    ///
    /// ``` other: QtC.QTransform ```
    pub fn New2(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTransform object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New3(param1: i64) QtC.QTransform {
        return qtc.QTransform_new3(@intCast(param1));
    }

    /// New4 constructs a new QTransform object.
    ///
    ///
    pub fn New4() QtC.QTransform {
        return qtc.QTransform_new4();
    }

    /// New5 constructs a new QTransform object.
    ///
    /// ``` h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64 ```
    pub fn New5(h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64) QtC.QTransform {
        return qtc.QTransform_new5(@floatCast(h11), @floatCast(h12), @floatCast(h13), @floatCast(h21), @floatCast(h22), @floatCast(h23), @floatCast(h31), @floatCast(h32), @floatCast(h33));
    }

    /// New6 constructs a new QTransform object.
    ///
    /// ``` h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64 ```
    pub fn New6(h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_new6(@floatCast(h11), @floatCast(h12), @floatCast(h21), @floatCast(h22), @floatCast(dx), @floatCast(dy));
    }

    /// New7 constructs a new QTransform object.
    ///
    /// ``` other: QtC.QTransform ```
    pub fn New7(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new7(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTransform, other: QtC.QTransform ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTransform_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTransform, other: QtC.QTransform ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTransform_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-eq)
    ///
    /// ``` self: QtC.QTransform, param1: QtC.QTransform ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTransform_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isAffine)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn IsAffine(self: ?*anyopaque) bool {
        return qtc.QTransform_IsAffine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return qtc.QTransform_IsIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn IsInvertible(self: ?*anyopaque) bool {
        return qtc.QTransform_IsInvertible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isScaling)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn IsScaling(self: ?*anyopaque) bool {
        return qtc.QTransform_IsScaling(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isRotating)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn IsRotating(self: ?*anyopaque) bool {
        return qtc.QTransform_IsRotating(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn IsTranslating(self: ?*anyopaque) bool {
        return qtc.QTransform_IsTranslating(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#type)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QTransform_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#determinant)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Determinant(self: ?*anyopaque) f64 {
        return qtc.QTransform_Determinant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m11)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M11(self: ?*anyopaque) f64 {
        return qtc.QTransform_M11(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m12)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M12(self: ?*anyopaque) f64 {
        return qtc.QTransform_M12(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m13)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M13(self: ?*anyopaque) f64 {
        return qtc.QTransform_M13(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m21)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M21(self: ?*anyopaque) f64 {
        return qtc.QTransform_M21(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m22)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M22(self: ?*anyopaque) f64 {
        return qtc.QTransform_M22(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m23)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M23(self: ?*anyopaque) f64 {
        return qtc.QTransform_M23(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m31)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M31(self: ?*anyopaque) f64 {
        return qtc.QTransform_M31(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m32)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M32(self: ?*anyopaque) f64 {
        return qtc.QTransform_M32(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m33)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn M33(self: ?*anyopaque) f64 {
        return qtc.QTransform_M33(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dx)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Dx(self: ?*anyopaque) f64 {
        return qtc.QTransform_Dx(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dy)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Dy(self: ?*anyopaque) f64 {
        return qtc.QTransform_Dy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
    ///
    /// ``` self: QtC.QTransform, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64 ```
    pub fn SetMatrix(self: ?*anyopaque, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64) void {
        qtc.QTransform_SetMatrix(@ptrCast(self), @floatCast(m11), @floatCast(m12), @floatCast(m13), @floatCast(m21), @floatCast(m22), @floatCast(m23), @floatCast(m31), @floatCast(m32), @floatCast(m33));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Inverted(self: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_Inverted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#adjoint)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Adjoint(self: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_Adjoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#transposed)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Transposed(self: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#translate)
    ///
    /// ``` self: QtC.QTransform, dx: f64, dy: f64 ```
    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_Translate(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#scale)
    ///
    /// ``` self: QtC.QTransform, sx: f64, sy: f64 ```
    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) QtC.QTransform {
        return qtc.QTransform_Scale(@ptrCast(self), @floatCast(sx), @floatCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#shear)
    ///
    /// ``` self: QtC.QTransform, sh: f64, sv: f64 ```
    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) QtC.QTransform {
        return qtc.QTransform_Shear(@ptrCast(self), @floatCast(sh), @floatCast(sv));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ``` self: QtC.QTransform, a: f64, axis: qnamespace_enums.Axis, distanceToPlane: f64 ```
    pub fn Rotate(self: ?*anyopaque, a: f64, axis: i64, distanceToPlane: f64) QtC.QTransform {
        return qtc.QTransform_Rotate(@ptrCast(self), @floatCast(a), @intCast(axis), @floatCast(distanceToPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ``` self: QtC.QTransform, a: f64 ```
    pub fn Rotate2(self: ?*anyopaque, a: f64) QtC.QTransform {
        return qtc.QTransform_Rotate2(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ``` self: QtC.QTransform, a: f64, axis: qnamespace_enums.Axis, distanceToPlane: f64 ```
    pub fn RotateRadians(self: ?*anyopaque, a: f64, axis: i64, distanceToPlane: f64) QtC.QTransform {
        return qtc.QTransform_RotateRadians(@ptrCast(self), @floatCast(a), @intCast(axis), @floatCast(distanceToPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ``` self: QtC.QTransform, a: f64 ```
    pub fn RotateRadians2(self: ?*anyopaque, a: f64) QtC.QTransform {
        return qtc.QTransform_RotateRadians2(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QTransform, param1: QtC.QTransform ```
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTransform_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-not-eq)
    ///
    /// ``` self: QtC.QTransform, param1: QtC.QTransform ```
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTransform_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ``` self: QtC.QTransform, param1: QtC.QTransform ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2a)
    ///
    /// ``` self: QtC.QTransform, o: QtC.QTransform ```
    pub fn OperatorMultiply(self: ?*anyopaque, o: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_OperatorMultiply(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTransform_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#reset)
    ///
    /// ``` self: QtC.QTransform ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QTransform_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, p: QtC.QPoint ```
    pub fn Map(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QTransform_Map(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, p: QtC.QPointF ```
    pub fn Map2(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QTransform_Map2(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, l: QtC.QLine ```
    pub fn Map3(self: ?*anyopaque, l: ?*anyopaque) QtC.QLine {
        return qtc.QTransform_Map3(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, l: QtC.QLineF ```
    pub fn Map4(self: ?*anyopaque, l: ?*anyopaque) QtC.QLineF {
        return qtc.QTransform_Map4(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, r: QtC.QRegion ```
    pub fn Map7(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QTransform_Map7(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, p: QtC.QPainterPath ```
    pub fn Map8(self: ?*anyopaque, p: ?*anyopaque) QtC.QPainterPath {
        return qtc.QTransform_Map8(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ``` self: QtC.QTransform, param1: QtC.QRect ```
    pub fn MapRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QTransform_MapRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ``` self: QtC.QTransform, param1: QtC.QRectF ```
    pub fn MapRect2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QTransform_MapRect2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, x: i32, y: i32, tx: *i32, ty: *i32 ```
    pub fn Map9(self: ?*anyopaque, x: i32, y: i32, tx: *i32, ty: *i32) void {
        qtc.QTransform_Map9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: QtC.QTransform, x: f64, y: f64, tx: *f64, ty: *f64 ```
    pub fn Map10(self: ?*anyopaque, x: f64, y: f64, tx: *f64, ty: *f64) void {
        qtc.QTransform_Map10(@ptrCast(self), @floatCast(x), @floatCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ``` self: QtC.QTransform, div: f64 ```
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorMultiplyAssign2(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2f-eq)
    ///
    /// ``` self: QtC.QTransform, div: f64 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorDivideAssign(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QTransform, div: f64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorPlusAssign(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator--eq)
    ///
    /// ``` self: QtC.QTransform, div: f64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorMinusAssign(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
    ///
    /// ``` dx: f64, dy: f64 ```
    pub fn FromTranslate(dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_FromTranslate(@floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromScale)
    ///
    /// ``` dx: f64, dy: f64 ```
    pub fn FromScale(dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_FromScale(@floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ``` self: QtC.QTransform, invertible: bool ```
    pub fn Inverted1(self: ?*anyopaque, invertible: *bool) QtC.QTransform {
        return qtc.QTransform_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ``` self: QtC.QTransform, a: f64, axis: qnamespace_enums.Axis ```
    pub fn Rotate22(self: ?*anyopaque, a: f64, axis: i64) QtC.QTransform {
        return qtc.QTransform_Rotate22(@ptrCast(self), @floatCast(a), @intCast(axis));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ``` self: QtC.QTransform, a: f64, axis: qnamespace_enums.Axis ```
    pub fn RotateRadians22(self: ?*anyopaque, a: f64, axis: i64) QtC.QTransform {
        return qtc.QTransform_RotateRadians22(@ptrCast(self), @floatCast(a), @intCast(axis));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dtor.QTransform)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTransform ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTransform_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtransform.html#types
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
