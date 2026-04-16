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

    /// New constructs a new QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTransform `
    ///
    pub fn New(other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QTransform;
        return .{ .ptr = qtc.QTransform_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTransform object and invalidates the source QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTransform `
    ///
    pub fn New2(other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QTransform;
        return .{ .ptr = qtc.QTransform_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New3(param1: i32) QTransform {
        return .{ .ptr = qtc.QTransform_new3(@bitCast(param1)) };
    }

    /// New4 constructs a new QTransform object.
    ///
    pub fn New4() QTransform {
        return .{ .ptr = qtc.QTransform_new4() };
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
    pub fn New5(h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64) QTransform {
        return .{ .ptr = qtc.QTransform_new5(@bitCast(h11), @bitCast(h12), @bitCast(h13), @bitCast(h21), @bitCast(h22), @bitCast(h23), @bitCast(h31), @bitCast(h32), @bitCast(h33)) };
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
    pub fn New6(h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_new6(@bitCast(h11), @bitCast(h12), @bitCast(h21), @bitCast(h22), @bitCast(dx), @bitCast(dy)) };
    }

    /// New7 constructs a new QTransform object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTransform `
    ///
    pub fn New7(other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QTransform;
        return .{ .ptr = qtc.QTransform_new7(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTransform `
    ///
    /// ` other: QTransform `
    ///
    pub fn CopyAssign(self: QTransform, other: QTransform) void {
        qtc.QTransform_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTransform `
    ///
    /// ` other: QTransform `
    ///
    pub fn MoveAssign(self: QTransform, other: QTransform) void {
        qtc.QTransform_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn OperatorAssign(self: QTransform, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTransform;
        qtc.QTransform_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn IsAffine(self: QTransform) bool {
        return qtc.QTransform_IsAffine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn IsIdentity(self: QTransform) bool {
        return qtc.QTransform_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn IsInvertible(self: QTransform) bool {
        return qtc.QTransform_IsInvertible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isScaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn IsScaling(self: QTransform) bool {
        return qtc.QTransform_IsScaling(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isRotating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn IsRotating(self: QTransform) bool {
        return qtc.QTransform_IsRotating(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn IsTranslating(self: QTransform) bool {
        return qtc.QTransform_IsTranslating(@ptrCast(self.ptr));
    }

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
    pub fn Type(self: QTransform) i32 {
        return qtc.QTransform_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Determinant(self: QTransform) f64 {
        return qtc.QTransform_Determinant(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m11)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M11(self: QTransform) f64 {
        return qtc.QTransform_M11(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m12)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M12(self: QTransform) f64 {
        return qtc.QTransform_M12(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m13)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M13(self: QTransform) f64 {
        return qtc.QTransform_M13(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m21)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M21(self: QTransform) f64 {
        return qtc.QTransform_M21(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m22)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M22(self: QTransform) f64 {
        return qtc.QTransform_M22(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m23)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M23(self: QTransform) f64 {
        return qtc.QTransform_M23(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m31)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M31(self: QTransform) f64 {
        return qtc.QTransform_M31(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M32(self: QTransform) f64 {
        return qtc.QTransform_M32(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#m33)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn M33(self: QTransform) f64 {
        return qtc.QTransform_M33(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dx)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Dx(self: QTransform) f64 {
        return qtc.QTransform_Dx(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Dy(self: QTransform) f64 {
        return qtc.QTransform_Dy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
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
    pub fn SetMatrix(self: QTransform, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64) void {
        qtc.QTransform_SetMatrix(@ptrCast(self.ptr), @bitCast(m11), @bitCast(m12), @bitCast(m13), @bitCast(m21), @bitCast(m22), @bitCast(m23), @bitCast(m31), @bitCast(m32), @bitCast(m33));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Inverted(self: QTransform) QTransform {
        return .{ .ptr = qtc.QTransform_Inverted(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#adjoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Adjoint(self: QTransform) QTransform {
        return .{ .ptr = qtc.QTransform_Adjoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Transposed(self: QTransform) QTransform {
        return .{ .ptr = qtc.QTransform_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: QTransform, dx: f64, dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

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
    pub fn Scale(self: QTransform, sx: f64, sy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Scale(@ptrCast(self.ptr), @bitCast(sx), @bitCast(sy)) };
    }

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
    pub fn Shear(self: QTransform, sh: f64, sv: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Shear(@ptrCast(self.ptr), @bitCast(sh), @bitCast(sv)) };
    }

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
    pub fn Rotate(self: QTransform, a: f64, axis: i32, distanceToPlane: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Rotate(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis), @bitCast(distanceToPlane)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    pub fn Rotate2(self: QTransform, a: f64) QTransform {
        return .{ .ptr = qtc.QTransform_Rotate2(@ptrCast(self.ptr), @bitCast(a)) };
    }

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
    pub fn RotateRadians(self: QTransform, a: f64, axis: i32, distanceToPlane: f64) QTransform {
        return .{ .ptr = qtc.QTransform_RotateRadians(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis), @bitCast(distanceToPlane)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` a: f64 `
    ///
    pub fn RotateRadians2(self: QTransform, a: f64) QTransform {
        return .{ .ptr = qtc.QTransform_RotateRadians2(@ptrCast(self.ptr), @bitCast(a)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn OperatorEqual(self: QTransform, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return qtc.QTransform_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn OperatorNotEqual(self: QTransform, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return qtc.QTransform_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QTransform `
    ///
    pub fn OperatorMultiplyAssign(self: QTransform, param1: anytype) QTransform {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QTransform_OperatorMultiplyAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` o: QTransform `
    ///
    pub fn OperatorMultiply(self: QTransform, o: anytype) QTransform {
        comptime _ = @TypeOf(o)._is_QTransform;
        return .{ .ptr = qtc.QTransform_OperatorMultiply(@ptrCast(self.ptr), @ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn ToQVariant(self: QTransform) QVariant {
        return .{ .ptr = qtc.QTransform_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    pub fn Reset(self: QTransform) void {
        qtc.QTransform_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` p: QPoint `
    ///
    pub fn Map(self: QTransform, p: anytype) QPoint {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTransform_Map(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` p: QPointF `
    ///
    pub fn Map2(self: QTransform, p: anytype) QPointF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QTransform_Map2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` l: QLine `
    ///
    pub fn Map3(self: QTransform, l: anytype) QLine {
        comptime _ = @TypeOf(l)._is_QLine;
        return .{ .ptr = qtc.QTransform_Map3(@ptrCast(self.ptr), @ptrCast(l.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` l: QLineF `
    ///
    pub fn Map4(self: QTransform, l: anytype) QLineF {
        comptime _ = @TypeOf(l)._is_QLineF;
        return .{ .ptr = qtc.QTransform_Map4(@ptrCast(self.ptr), @ptrCast(l.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` r: QRegion `
    ///
    pub fn Map7(self: QTransform, r: anytype) QRegion {
        comptime _ = @TypeOf(r)._is_QRegion;
        return .{ .ptr = qtc.QTransform_Map7(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` p: QPainterPath `
    ///
    pub fn Map8(self: QTransform, p: anytype) QPainterPath {
        comptime _ = @TypeOf(p)._is_QPainterPath;
        return .{ .ptr = qtc.QTransform_Map8(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QRect `
    ///
    pub fn MapRect(self: QTransform, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QTransform_MapRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` param1: QRectF `
    ///
    pub fn MapRect2(self: QTransform, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QRectF;
        return .{ .ptr = qtc.QTransform_MapRect2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn Map9(self: QTransform, x: i32, y: i32, tx: *i32, ty: *i32) void {
        qtc.QTransform_Map9(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(tx), @ptrCast(ty));
    }

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
    pub fn Map10(self: QTransform, x: f64, y: f64, tx: *f64, ty: *f64) void {
        qtc.QTransform_Map10(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(tx), @ptrCast(ty));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorMultiplyAssign2(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorDivideAssign(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorPlusAssign(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` div: f64 `
    ///
    pub fn OperatorMinusAssign(self: QTransform, div: f64) QTransform {
        return .{ .ptr = qtc.QTransform_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(div)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
    ///
    /// ## Parameter(s):
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn FromTranslate(dx: f64, dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_FromTranslate(@bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#fromScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn FromScale(dx: f64, dy: f64) QTransform {
        return .{ .ptr = qtc.QTransform_FromScale(@bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTransform `
    ///
    /// ` invertible: *bool `
    ///
    pub fn Inverted1(self: QTransform, invertible: *bool) QTransform {
        return .{ .ptr = qtc.QTransform_Inverted1(@ptrCast(self.ptr), @ptrCast(invertible)) };
    }

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
    pub fn Rotate22(self: QTransform, a: f64, axis: i32) QTransform {
        return .{ .ptr = qtc.QTransform_Rotate22(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis)) };
    }

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
    pub fn RotateRadians22(self: QTransform, a: f64, axis: i32) QTransform {
        return .{ .ptr = qtc.QTransform_RotateRadians22(@ptrCast(self.ptr), @bitCast(a), @bitCast(axis)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#dtor.QTransform)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTransform `
    ///
    pub fn Delete(self: QTransform) void {
        qtc.QTransform_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtransform.html#public-types)
pub const enums = struct {
    pub const TransformationType = enum(i32) {
        pub const TxNone: i32 = 0;
        pub const TxTranslate: i32 = 1;
        pub const TxScale: i32 = 2;
        pub const TxRotate: i32 = 4;
        pub const TxShear: i32 = 8;
        pub const TxProject: i32 = 16;
    };
};
