const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtransform_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html)
pub const qtransform = struct {
    /// New constructs a new QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTransform `
    ///
    pub fn New(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new(@ptrCast(other));
    }

    /// New2 constructs a new QTransform object and invalidates the source QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTransform `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New3(param1: i32) QtC.QTransform {
        return qtc.QTransform_new3(@intCast(param1));
    }

    /// New4 constructs a new QTransform object.
    ///
    pub fn New4() QtC.QTransform {
        return qtc.QTransform_new4();
    }

    /// New5 constructs a new QTransform object.
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
    pub fn New5(h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64) QtC.QTransform {
        return qtc.QTransform_new5(@floatCast(h11), @floatCast(h12), @floatCast(h13), @floatCast(h21), @floatCast(h22), @floatCast(h23), @floatCast(h31), @floatCast(h32), @floatCast(h33));
    }

    /// New6 constructs a new QTransform object.
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
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn New6(h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_new6(@floatCast(h11), @floatCast(h12), @floatCast(h21), @floatCast(h22), @floatCast(dx), @floatCast(dy));
    }

    /// New7 constructs a new QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTransform `
    ///
    pub fn New7(other: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_new7(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` other: QtC.QTransform `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTransform_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` other: QtC.QTransform `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTransform_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` param1: QtC.QTransform `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTransform_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn IsAffine(self: ?*anyopaque) bool {
        return qtc.QTransform_IsAffine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return qtc.QTransform_IsIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn IsInvertible(self: ?*anyopaque) bool {
        return qtc.QTransform_IsInvertible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isScaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn IsScaling(self: ?*anyopaque) bool {
        return qtc.QTransform_IsScaling(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isRotating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn IsRotating(self: ?*anyopaque) bool {
        return qtc.QTransform_IsRotating(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn IsTranslating(self: ?*anyopaque) bool {
        return qtc.QTransform_IsTranslating(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ## Returns:
    ///
    /// ` qtransform_enums.TransformationType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QTransform_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Determinant(self: ?*anyopaque) f64 {
        return qtc.QTransform_Determinant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m11)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M11(self: ?*anyopaque) f64 {
        return qtc.QTransform_M11(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m12)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M12(self: ?*anyopaque) f64 {
        return qtc.QTransform_M12(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m13)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M13(self: ?*anyopaque) f64 {
        return qtc.QTransform_M13(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m21)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M21(self: ?*anyopaque) f64 {
        return qtc.QTransform_M21(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m22)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M22(self: ?*anyopaque) f64 {
        return qtc.QTransform_M22(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m23)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M23(self: ?*anyopaque) f64 {
        return qtc.QTransform_M23(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m31)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M31(self: ?*anyopaque) f64 {
        return qtc.QTransform_M31(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M32(self: ?*anyopaque) f64 {
        return qtc.QTransform_M32(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m33)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn M33(self: ?*anyopaque) f64 {
        return qtc.QTransform_M33(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Dx(self: ?*anyopaque) f64 {
        return qtc.QTransform_Dx(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Dy(self: ?*anyopaque) f64 {
        return qtc.QTransform_Dy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` m11: f64 `
    ///
    /// ` m12: f64 `
    ///
    /// ` m13: f64 `
    ///
    /// ` m21: f64 `
    ///
    /// ` m22: f64 `
    ///
    /// ` m23: f64 `
    ///
    /// ` m31: f64 `
    ///
    /// ` m32: f64 `
    ///
    /// ` m33: f64 `
    ///
    pub fn SetMatrix(self: ?*anyopaque, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64) void {
        qtc.QTransform_SetMatrix(@ptrCast(self), @floatCast(m11), @floatCast(m12), @floatCast(m13), @floatCast(m21), @floatCast(m22), @floatCast(m23), @floatCast(m31), @floatCast(m32), @floatCast(m33));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Inverted(self: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_Inverted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#adjoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Adjoint(self: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_Adjoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_Translate(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) QtC.QTransform {
        return qtc.QTransform_Scale(@ptrCast(self), @floatCast(sx), @floatCast(sy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#shear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) QtC.QTransform {
        return qtc.QTransform_Shear(@ptrCast(self), @floatCast(sh), @floatCast(sv));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` distanceToPlane: f64 `
    ///
    pub fn Rotate(self: ?*anyopaque, a: f64, axis: i32, distanceToPlane: f64) QtC.QTransform {
        return qtc.QTransform_Rotate(@ptrCast(self), @floatCast(a), @intCast(axis), @floatCast(distanceToPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` a: f64 `
    ///
    pub fn Rotate2(self: ?*anyopaque, a: f64) QtC.QTransform {
        return qtc.QTransform_Rotate2(@ptrCast(self), @floatCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` distanceToPlane: f64 `
    ///
    pub fn RotateRadians(self: ?*anyopaque, a: f64, axis: i32, distanceToPlane: f64) QtC.QTransform {
        return qtc.QTransform_RotateRadians(@ptrCast(self), @floatCast(a), @intCast(axis), @floatCast(distanceToPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` a: f64 `
    ///
    pub fn RotateRadians2(self: ?*anyopaque, a: f64) QtC.QTransform {
        return qtc.QTransform_RotateRadians2(@ptrCast(self), @floatCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` param1: QtC.QTransform `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTransform_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` param1: QtC.QTransform `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QTransform_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` param1: QtC.QTransform `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` o: QtC.QTransform `
    ///
    pub fn OperatorMultiply(self: ?*anyopaque, o: ?*anyopaque) QtC.QTransform {
        return qtc.QTransform_OperatorMultiply(@ptrCast(self), @ptrCast(o));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QTransform_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QTransform_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn Map(self: ?*anyopaque, p: ?*anyopaque) QtC.QPoint {
        return qtc.QTransform_Map(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn Map2(self: ?*anyopaque, p: ?*anyopaque) QtC.QPointF {
        return qtc.QTransform_Map2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` l: QtC.QLine `
    ///
    pub fn Map3(self: ?*anyopaque, l: ?*anyopaque) QtC.QLine {
        return qtc.QTransform_Map3(@ptrCast(self), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` l: QtC.QLineF `
    ///
    pub fn Map4(self: ?*anyopaque, l: ?*anyopaque) QtC.QLineF {
        return qtc.QTransform_Map4(@ptrCast(self), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` r: QtC.QRegion `
    ///
    pub fn Map7(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QTransform_Map7(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` p: QtC.QPainterPath `
    ///
    pub fn Map8(self: ?*anyopaque, p: ?*anyopaque) QtC.QPainterPath {
        return qtc.QTransform_Map8(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn MapRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QTransform_MapRect(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` param1: QtC.QRectF `
    ///
    pub fn MapRect2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QTransform_MapRect2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` tx: *i32 `
    ///
    /// ` ty: *i32 `
    ///
    pub fn Map9(self: ?*anyopaque, x: i32, y: i32, tx: *i32, ty: *i32) void {
        qtc.QTransform_Map9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` tx: *f64 `
    ///
    /// ` ty: *f64 `
    ///
    pub fn Map10(self: ?*anyopaque, x: f64, y: f64, tx: *f64, ty: *f64) void {
        qtc.QTransform_Map10(@ptrCast(self), @floatCast(x), @floatCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorMultiplyAssign2(@ptrCast(self), @floatCast(div));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorDivideAssign(@ptrCast(self), @floatCast(div));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorPlusAssign(@ptrCast(self), @floatCast(div));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, div: f64) QtC.QTransform {
        return qtc.QTransform_OperatorMinusAssign(@ptrCast(self), @floatCast(div));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
    ///
    /// ## Parameter(s):
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn FromTranslate(dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_FromTranslate(@floatCast(dx), @floatCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#fromScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn FromScale(dx: f64, dy: f64) QtC.QTransform {
        return qtc.QTransform_FromScale(@floatCast(dx), @floatCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` invertible: *bool `
    ///
    pub fn Inverted1(self: ?*anyopaque, invertible: *bool) QtC.QTransform {
        return qtc.QTransform_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    pub fn Rotate22(self: ?*anyopaque, a: f64, axis: i32) QtC.QTransform {
        return qtc.QTransform_Rotate22(@ptrCast(self), @floatCast(a), @intCast(axis));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTransform `
    ///
    /// ` a: f64 `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    pub fn RotateRadians22(self: ?*anyopaque, a: f64, axis: i32) QtC.QTransform {
        return qtc.QTransform_RotateRadians22(@ptrCast(self), @floatCast(a), @intCast(axis));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dtor.QTransform)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTransform `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTransform_Delete(@ptrCast(self));
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
