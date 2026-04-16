const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QQuaternion = @import("libqt6").QQuaternion;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const QVector4D = @import("libqt6").QVector4D;
const qmatrix4x4_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html)
pub const QMatrix4x4 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMatrix4x4,

    pub const _is_QMatrix4x4 = {};

    /// New constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn New(other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMatrix4x4 object and invalidates the source QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn New2(other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMatrix4x4 object.
    ///
    pub fn New3() QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new3() };
    }

    /// New4 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new4(@bitCast(param1)) };
    }

    /// New5 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` values: *const f32 `
    ///
    pub fn New5(values: *const f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new5(@ptrCast(values)) };
    }

    /// New6 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` m11: f32 `
    ///
    /// ` m12: f32 `
    ///
    /// ` m13: f32 `
    ///
    /// ` m14: f32 `
    ///
    /// ` m21: f32 `
    ///
    /// ` m22: f32 `
    ///
    /// ` m23: f32 `
    ///
    /// ` m24: f32 `
    ///
    /// ` m31: f32 `
    ///
    /// ` m32: f32 `
    ///
    /// ` m33: f32 `
    ///
    /// ` m34: f32 `
    ///
    /// ` m41: f32 `
    ///
    /// ` m42: f32 `
    ///
    /// ` m43: f32 `
    ///
    /// ` m44: f32 `
    ///
    pub fn New6(m11: f32, m12: f32, m13: f32, m14: f32, m21: f32, m22: f32, m23: f32, m24: f32, m31: f32, m32: f32, m33: f32, m34: f32, m41: f32, m42: f32, m43: f32, m44: f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new6(@bitCast(m11), @bitCast(m12), @bitCast(m13), @bitCast(m14), @bitCast(m21), @bitCast(m22), @bitCast(m23), @bitCast(m24), @bitCast(m31), @bitCast(m32), @bitCast(m33), @bitCast(m34), @bitCast(m41), @bitCast(m42), @bitCast(m43), @bitCast(m44)) };
    }

    /// New7 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` values: *const f32 `
    ///
    /// ` cols: i32 `
    ///
    /// ` rows: i32 `
    ///
    pub fn New7(values: *const f32, cols: i32, rows: i32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new7(@ptrCast(values), @bitCast(cols), @bitCast(rows)) };
    }

    /// New8 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` transform: QTransform `
    ///
    pub fn New8(transform: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(transform)._is_QTransform;
        return .{ .ptr = qtc.QMatrix4x4_new8(@ptrCast(transform.ptr)) };
    }

    /// New9 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMatrix4x4 `
    ///
    pub fn New9(param1: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(param1)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_new9(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn CopyAssign(self: QMatrix4x4, other: QMatrix4x4) void {
        qtc.QMatrix4x4_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn MoveAssign(self: QMatrix4x4, other: QMatrix4x4) void {
        qtc.QMatrix4x4_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn OperatorCall(self: QMatrix4x4, row: i32, column: i32) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn OperatorCall2(self: QMatrix4x4, row: i32, column: i32) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    pub fn Column(self: QMatrix4x4, index: i32) QVector4D {
        return .{ .ptr = qtc.QMatrix4x4_Column(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVector4D `
    ///
    pub fn SetColumn(self: QMatrix4x4, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QMatrix4x4_SetColumn(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    pub fn Row(self: QMatrix4x4, index: i32) QVector4D {
        return .{ .ptr = qtc.QMatrix4x4_Row(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QVector4D `
    ///
    pub fn SetRow(self: QMatrix4x4, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QMatrix4x4_SetRow(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn IsAffine(self: QMatrix4x4) bool {
        return qtc.QMatrix4x4_IsAffine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn IsIdentity(self: QMatrix4x4) bool {
        return qtc.QMatrix4x4_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn SetToIdentity(self: QMatrix4x4) void {
        qtc.QMatrix4x4_SetToIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` value: f32 `
    ///
    pub fn Fill(self: QMatrix4x4, value: f32) void {
        qtc.QMatrix4x4_Fill(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Determinant(self: QMatrix4x4) f64 {
        return qtc.QMatrix4x4_Determinant(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Inverted(self: QMatrix4x4) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_Inverted(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Transposed(self: QMatrix4x4) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn OperatorPlusAssign(self: QMatrix4x4, other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn OperatorMinusAssign(self: QMatrix4x4, other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn OperatorMultiplyAssign(self: QMatrix4x4, other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_OperatorMultiplyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign2(self: QMatrix4x4, factor: f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: QMatrix4x4, divisor: f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn OperatorEqual(self: QMatrix4x4, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return qtc.QMatrix4x4_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn OperatorNotEqual(self: QMatrix4x4, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return qtc.QMatrix4x4_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn Scale(self: QMatrix4x4, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QMatrix4x4_Scale(@ptrCast(self.ptr), @ptrCast(vector.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn Translate(self: QMatrix4x4, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QMatrix4x4_Translate(@ptrCast(self.ptr), @ptrCast(vector.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn Rotate(self: QMatrix4x4, angle: f32, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QMatrix4x4_Rotate(@ptrCast(self.ptr), @bitCast(angle), @ptrCast(vector.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn Scale2(self: QMatrix4x4, x: f32, y: f32) void {
        qtc.QMatrix4x4_Scale2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn Scale3(self: QMatrix4x4, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Scale3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` factor: f32 `
    ///
    pub fn Scale4(self: QMatrix4x4, factor: f32) void {
        qtc.QMatrix4x4_Scale4(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn Translate2(self: QMatrix4x4, x: f32, y: f32) void {
        qtc.QMatrix4x4_Translate2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn Translate3(self: QMatrix4x4, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Translate3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn Rotate2(self: QMatrix4x4, angle: f32, x: f32, y: f32) void {
        qtc.QMatrix4x4_Rotate2(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn Rotate3(self: QMatrix4x4, quaternion: anytype) void {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        qtc.QMatrix4x4_Rotate3(@ptrCast(self.ptr), @ptrCast(quaternion.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRect `
    ///
    pub fn Ortho(self: QMatrix4x4, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QMatrix4x4_Ortho(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Ortho2(self: QMatrix4x4, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QMatrix4x4_Ortho2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` left: f32 `
    ///
    /// ` right: f32 `
    ///
    /// ` bottom: f32 `
    ///
    /// ` top: f32 `
    ///
    /// ` nearPlane: f32 `
    ///
    /// ` farPlane: f32 `
    ///
    pub fn Ortho3(self: QMatrix4x4, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Ortho3(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#frustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` left: f32 `
    ///
    /// ` right: f32 `
    ///
    /// ` bottom: f32 `
    ///
    /// ` top: f32 `
    ///
    /// ` nearPlane: f32 `
    ///
    /// ` farPlane: f32 `
    ///
    pub fn Frustum(self: QMatrix4x4, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Frustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#perspective)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` verticalAngle: f32 `
    ///
    /// ` aspectRatio: f32 `
    ///
    /// ` nearPlane: f32 `
    ///
    /// ` farPlane: f32 `
    ///
    pub fn Perspective(self: QMatrix4x4, verticalAngle: f32, aspectRatio: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Perspective(@ptrCast(self.ptr), @bitCast(verticalAngle), @bitCast(aspectRatio), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#lookAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` eye: QVector3D `
    ///
    /// ` center: QVector3D `
    ///
    /// ` up: QVector3D `
    ///
    pub fn LookAt(self: QMatrix4x4, eye: anytype, center: anytype, up: anytype) void {
        comptime _ = @TypeOf(eye)._is_QVector3D;
        comptime _ = @TypeOf(center)._is_QVector3D;
        comptime _ = @TypeOf(up)._is_QVector3D;
        qtc.QMatrix4x4_LookAt(@ptrCast(self.ptr), @ptrCast(eye.ptr), @ptrCast(center.ptr), @ptrCast(up.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Viewport(self: QMatrix4x4, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QMatrix4x4_Viewport(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` left: f32 `
    ///
    /// ` bottom: f32 `
    ///
    /// ` width: f32 `
    ///
    /// ` height: f32 `
    ///
    pub fn Viewport2(self: QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32) void {
        qtc.QMatrix4x4_Viewport2(@ptrCast(self.ptr), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn FlipCoordinates(self: QMatrix4x4) void {
        qtc.QMatrix4x4_FlipCoordinates(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` values: *f32 `
    ///
    pub fn CopyDataTo(self: QMatrix4x4, values: *f32) void {
        qtc.QMatrix4x4_CopyDataTo(@ptrCast(self.ptr), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn ToTransform(self: QMatrix4x4) QTransform {
        return .{ .ptr = qtc.QMatrix4x4_ToTransform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` distanceToPlane: f32 `
    ///
    pub fn ToTransform2(self: QMatrix4x4, distanceToPlane: f32) QTransform {
        return .{ .ptr = qtc.QMatrix4x4_ToTransform2(@ptrCast(self.ptr), @bitCast(distanceToPlane)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QPoint `
    ///
    pub fn Map(self: QMatrix4x4, point: anytype) QPoint {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QMatrix4x4_Map(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QPointF `
    ///
    pub fn Map2(self: QMatrix4x4, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QMatrix4x4_Map2(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QVector3D `
    ///
    pub fn Map3(self: QMatrix4x4, point: anytype) QVector3D {
        comptime _ = @TypeOf(point)._is_QVector3D;
        return .{ .ptr = qtc.QMatrix4x4_Map3(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn MapVector(self: QMatrix4x4, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QMatrix4x4_MapVector(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QVector4D `
    ///
    pub fn Map4(self: QMatrix4x4, point: anytype) QVector4D {
        comptime _ = @TypeOf(point)._is_QVector4D;
        return .{ .ptr = qtc.QMatrix4x4_Map4(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRect `
    ///
    pub fn MapRect(self: QMatrix4x4, rect: anytype) QRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QMatrix4x4_MapRect(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRect2(self: QMatrix4x4, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QMatrix4x4_MapRect2(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Data(self: QMatrix4x4) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_Data(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Data2(self: QMatrix4x4) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_Data2(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn ConstData(self: QMatrix4x4) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_ConstData(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Optimize(self: QMatrix4x4) void {
        qtc.QMatrix4x4_Optimize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn ToQVariant(self: QMatrix4x4) QVariant {
        return .{ .ptr = qtc.QMatrix4x4_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` distanceToPlane: f32 `
    ///
    pub fn ProjectedRotate(self: QMatrix4x4, angle: f32, x: f32, y: f32, z: f32, distanceToPlane: f32) void {
        qtc.QMatrix4x4_ProjectedRotate(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(distanceToPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn ProjectedRotate2(self: QMatrix4x4, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_ProjectedRotate2(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmatrix4x4_enums.Flag `
    ///
    pub fn Flags(self: QMatrix4x4) i32 {
        return qtc.QMatrix4x4_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` invertible: *bool `
    ///
    pub fn Inverted1(self: QMatrix4x4, invertible: *bool) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_Inverted1(@ptrCast(self.ptr), @ptrCast(invertible)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn Rotate4(self: QMatrix4x4, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Rotate4(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` left: f32 `
    ///
    /// ` bottom: f32 `
    ///
    /// ` width: f32 `
    ///
    /// ` height: f32 `
    ///
    /// ` nearPlane: f32 `
    ///
    pub fn Viewport5(self: QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32) void {
        qtc.QMatrix4x4_Viewport5(@ptrCast(self.ptr), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height), @bitCast(nearPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` left: f32 `
    ///
    /// ` bottom: f32 `
    ///
    /// ` width: f32 `
    ///
    /// ` height: f32 `
    ///
    /// ` nearPlane: f32 `
    ///
    /// ` farPlane: f32 `
    ///
    pub fn Viewport6(self: QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Viewport6(@ptrCast(self.ptr), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#dtor.QMatrix4x4)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn Delete(self: QMatrix4x4) void {
        qtc.QMatrix4x4_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#public-types)
pub const enums = struct {
    pub const Flag = enum(i32) {
        pub const Identity: i32 = 0;
        pub const Translation: i32 = 1;
        pub const Scale: i32 = 2;
        pub const Rotation2D: i32 = 4;
        pub const Rotation: i32 = 8;
        pub const Perspective: i32 = 16;
        pub const General: i32 = 31;
    };
};
