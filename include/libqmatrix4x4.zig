const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmatrix4x4_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html)
pub const qmatrix4x4 = struct {
    /// New constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn New(other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new(@ptrCast(other));
    }

    /// New2 constructs a new QMatrix4x4 object and invalidates the source QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMatrix4x4 object.
    ///
    pub fn New3() QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new3();
    }

    /// New4 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New4(param1: i32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new4(@bitCast(param1));
    }

    /// New5 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` values: *const f32 `
    ///
    pub fn New5(values: *const f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new5(@ptrCast(values));
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
    pub fn New6(m11: f32, m12: f32, m13: f32, m14: f32, m21: f32, m22: f32, m23: f32, m24: f32, m31: f32, m32: f32, m33: f32, m34: f32, m41: f32, m42: f32, m43: f32, m44: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new6(@bitCast(m11), @bitCast(m12), @bitCast(m13), @bitCast(m14), @bitCast(m21), @bitCast(m22), @bitCast(m23), @bitCast(m24), @bitCast(m31), @bitCast(m32), @bitCast(m33), @bitCast(m34), @bitCast(m41), @bitCast(m42), @bitCast(m43), @bitCast(m44));
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
    pub fn New7(values: *const f32, cols: i32, rows: i32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new7(@ptrCast(values), @bitCast(cols), @bitCast(rows));
    }

    /// New8 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` transform: QtC.QTransform `
    ///
    pub fn New8(transform: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new8(@ptrCast(transform));
    }

    /// New9 constructs a new QMatrix4x4 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMatrix4x4 `
    ///
    pub fn New9(param1: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new9(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMatrix4x4_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMatrix4x4_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn OperatorCall(self: ?*anyopaque, row: i32, column: i32) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall(@ptrCast(self), @bitCast(row), @bitCast(column)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn OperatorCall2(self: ?*anyopaque, row: i32, column: i32) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall2(@ptrCast(self), @bitCast(row), @bitCast(column)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    pub fn Column(self: ?*anyopaque, index: i32) QtC.QVector4D {
        return qtc.QMatrix4x4_Column(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QtC.QVector4D `
    ///
    pub fn SetColumn(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QMatrix4x4_SetColumn(@ptrCast(self), @bitCast(index), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    pub fn Row(self: ?*anyopaque, index: i32) QtC.QVector4D {
        return qtc.QMatrix4x4_Row(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    /// ` value: QtC.QVector4D `
    ///
    pub fn SetRow(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QMatrix4x4_SetRow(@ptrCast(self), @bitCast(index), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn IsAffine(self: ?*anyopaque) bool {
        return qtc.QMatrix4x4_IsAffine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return qtc.QMatrix4x4_IsIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn SetToIdentity(self: ?*anyopaque) void {
        qtc.QMatrix4x4_SetToIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` value: f32 `
    ///
    pub fn Fill(self: ?*anyopaque, value: f32) void {
        qtc.QMatrix4x4_Fill(@ptrCast(self), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Determinant(self: ?*anyopaque) f64 {
        return qtc.QMatrix4x4_Determinant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Inverted(self: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Inverted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorPlusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMinusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` factor: f32 `
    ///
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, factor: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMultiplyAssign2(@ptrCast(self), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` divisor: f32 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorDivideAssign(@ptrCast(self), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMatrix4x4_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` other: QtC.QMatrix4x4 `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMatrix4x4_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn Scale(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Scale(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn Translate(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Translate(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn Rotate(self: ?*anyopaque, angle: f32, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Rotate(@ptrCast(self), @bitCast(angle), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn Scale2(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QMatrix4x4_Scale2(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn Scale3(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Scale3(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` factor: f32 `
    ///
    pub fn Scale4(self: ?*anyopaque, factor: f32) void {
        qtc.QMatrix4x4_Scale4(@ptrCast(self), @bitCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn Translate2(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QMatrix4x4_Translate2(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn Translate3(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Translate3(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn Rotate2(self: ?*anyopaque, angle: f32, x: f32, y: f32) void {
        qtc.QMatrix4x4_Rotate2(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` quaternion: QtC.QQuaternion `
    ///
    pub fn Rotate3(self: ?*anyopaque, quaternion: ?*anyopaque) void {
        qtc.QMatrix4x4_Rotate3(@ptrCast(self), @ptrCast(quaternion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn Ortho(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Ortho(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Ortho2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Ortho2(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
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
    pub fn Ortho3(self: ?*anyopaque, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Ortho3(@ptrCast(self), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#frustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
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
    pub fn Frustum(self: ?*anyopaque, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Frustum(@ptrCast(self), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#perspective)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` verticalAngle: f32 `
    ///
    /// ` aspectRatio: f32 `
    ///
    /// ` nearPlane: f32 `
    ///
    /// ` farPlane: f32 `
    ///
    pub fn Perspective(self: ?*anyopaque, verticalAngle: f32, aspectRatio: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Perspective(@ptrCast(self), @bitCast(verticalAngle), @bitCast(aspectRatio), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#lookAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` eye: QtC.QVector3D `
    ///
    /// ` center: QtC.QVector3D `
    ///
    /// ` up: QtC.QVector3D `
    ///
    pub fn LookAt(self: ?*anyopaque, eye: ?*anyopaque, center: ?*anyopaque, up: ?*anyopaque) void {
        qtc.QMatrix4x4_LookAt(@ptrCast(self), @ptrCast(eye), @ptrCast(center), @ptrCast(up));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Viewport(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Viewport(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` left: f32 `
    ///
    /// ` bottom: f32 `
    ///
    /// ` width: f32 `
    ///
    /// ` height: f32 `
    ///
    pub fn Viewport2(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32) void {
        qtc.QMatrix4x4_Viewport2(@ptrCast(self), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn FlipCoordinates(self: ?*anyopaque) void {
        qtc.QMatrix4x4_FlipCoordinates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` values: *f32 `
    ///
    pub fn CopyDataTo(self: ?*anyopaque, values: *f32) void {
        qtc.QMatrix4x4_CopyDataTo(@ptrCast(self), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn ToTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QMatrix4x4_ToTransform(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` distanceToPlane: f32 `
    ///
    pub fn ToTransform2(self: ?*anyopaque, distanceToPlane: f32) QtC.QTransform {
        return qtc.QMatrix4x4_ToTransform2(@ptrCast(self), @bitCast(distanceToPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn Map(self: ?*anyopaque, point: ?*anyopaque) QtC.QPoint {
        return qtc.QMatrix4x4_Map(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Map2(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QMatrix4x4_Map2(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` point: QtC.QVector3D `
    ///
    pub fn Map3(self: ?*anyopaque, point: ?*anyopaque) QtC.QVector3D {
        return qtc.QMatrix4x4_Map3(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` vector: QtC.QVector3D `
    ///
    pub fn MapVector(self: ?*anyopaque, vector: ?*anyopaque) QtC.QVector3D {
        return qtc.QMatrix4x4_MapVector(@ptrCast(self), @ptrCast(vector));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` point: QtC.QVector4D `
    ///
    pub fn Map4(self: ?*anyopaque, point: ?*anyopaque) QtC.QVector4D {
        return qtc.QMatrix4x4_Map4(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn MapRect(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRect {
        return qtc.QMatrix4x4_MapRect(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRect2(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QMatrix4x4_MapRect2(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Data(self: ?*anyopaque) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_Data(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Data2(self: ?*anyopaque) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_Data2(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn ConstData(self: ?*anyopaque) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_ConstData(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Optimize(self: ?*anyopaque) void {
        qtc.QMatrix4x4_Optimize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QMatrix4x4_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
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
    pub fn ProjectedRotate(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32, distanceToPlane: f32) void {
        qtc.QMatrix4x4_ProjectedRotate(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(distanceToPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn ProjectedRotate2(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_ProjectedRotate2(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmatrix4x4_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QMatrix4x4_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` invertible: *bool `
    ///
    pub fn Inverted1(self: ?*anyopaque, invertible: *bool) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn Rotate4(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Rotate4(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
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
    pub fn Viewport5(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32) void {
        qtc.QMatrix4x4_Viewport5(@ptrCast(self), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height), @bitCast(nearPlane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMatrix4x4 `
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
    pub fn Viewport6(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Viewport6(@ptrCast(self), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height), @bitCast(nearPlane), @bitCast(farPlane));
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
    /// ` self: QtC.QMatrix4x4 `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QMatrix4x4_Delete(@ptrCast(self));
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
