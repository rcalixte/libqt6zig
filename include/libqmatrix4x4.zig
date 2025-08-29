const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmatrix4x4_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qmatrix4x4.html
pub const qmatrix4x4 = struct {
    /// New constructs a new QMatrix4x4 object.
    ///
    /// ``` other: QtC.QMatrix4x4 ```
    pub fn New(other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new(@ptrCast(other));
    }

    /// New2 constructs a new QMatrix4x4 object and invalidates the source QMatrix4x4 object.
    ///
    /// ``` other: QtC.QMatrix4x4 ```
    pub fn New2(other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMatrix4x4 object.
    ///
    ///
    pub fn New3() QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new3();
    }

    /// New4 constructs a new QMatrix4x4 object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New4(param1: i32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new4(@intCast(param1));
    }

    /// New5 constructs a new QMatrix4x4 object.
    ///
    /// ``` values: *const f32 ```
    pub fn New5(values: *const f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new5(@ptrCast(values));
    }

    /// New6 constructs a new QMatrix4x4 object.
    ///
    /// ``` m11: f32, m12: f32, m13: f32, m14: f32, m21: f32, m22: f32, m23: f32, m24: f32, m31: f32, m32: f32, m33: f32, m34: f32, m41: f32, m42: f32, m43: f32, m44: f32 ```
    pub fn New6(m11: f32, m12: f32, m13: f32, m14: f32, m21: f32, m22: f32, m23: f32, m24: f32, m31: f32, m32: f32, m33: f32, m34: f32, m41: f32, m42: f32, m43: f32, m44: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new6(@floatCast(m11), @floatCast(m12), @floatCast(m13), @floatCast(m14), @floatCast(m21), @floatCast(m22), @floatCast(m23), @floatCast(m24), @floatCast(m31), @floatCast(m32), @floatCast(m33), @floatCast(m34), @floatCast(m41), @floatCast(m42), @floatCast(m43), @floatCast(m44));
    }

    /// New7 constructs a new QMatrix4x4 object.
    ///
    /// ``` values: *const f32, cols: i32, rows: i32 ```
    pub fn New7(values: *const f32, cols: i32, rows: i32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new7(@ptrCast(values), @intCast(cols), @intCast(rows));
    }

    /// New8 constructs a new QMatrix4x4 object.
    ///
    /// ``` transform: QtC.QTransform ```
    pub fn New8(transform: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new8(@ptrCast(transform));
    }

    /// New9 constructs a new QMatrix4x4 object.
    ///
    /// ``` param1: QtC.QMatrix4x4 ```
    pub fn New9(param1: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_new9(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMatrix4x4_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMatrix4x4_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
    ///
    /// ``` self: QtC.QMatrix4x4, index: i32 ```
    pub fn Column(self: ?*anyopaque, index: i32) QtC.QVector4D {
        return qtc.QMatrix4x4_Column(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setColumn)
    ///
    /// ``` self: QtC.QMatrix4x4, index: i32, value: QtC.QVector4D ```
    pub fn SetColumn(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QMatrix4x4_SetColumn(@ptrCast(self), @intCast(index), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
    ///
    /// ``` self: QtC.QMatrix4x4, index: i32 ```
    pub fn Row(self: ?*anyopaque, index: i32) QtC.QVector4D {
        return qtc.QMatrix4x4_Row(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setRow)
    ///
    /// ``` self: QtC.QMatrix4x4, index: i32, value: QtC.QVector4D ```
    pub fn SetRow(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QMatrix4x4_SetRow(@ptrCast(self), @intCast(index), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn IsAffine(self: ?*anyopaque) bool {
        return qtc.QMatrix4x4_IsAffine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return qtc.QMatrix4x4_IsIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn SetToIdentity(self: ?*anyopaque) void {
        qtc.QMatrix4x4_SetToIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
    ///
    /// ``` self: QtC.QMatrix4x4, value: f32 ```
    pub fn Fill(self: ?*anyopaque, value: f32) void {
        qtc.QMatrix4x4_Fill(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn Determinant(self: ?*anyopaque) f64 {
        return qtc.QMatrix4x4_Determinant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn Inverted(self: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Inverted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn Transposed(self: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorPlusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator--eq)
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMinusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ``` self: QtC.QMatrix4x4, factor: f32 ```
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, factor: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorMultiplyAssign2(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2f-eq)
    ///
    /// ``` self: QtC.QMatrix4x4, divisor: f32 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f32) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_OperatorDivideAssign(@ptrCast(self), @floatCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMatrix4x4_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-not-eq)
    ///
    /// ``` self: QtC.QMatrix4x4, other: QtC.QMatrix4x4 ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMatrix4x4_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ``` self: QtC.QMatrix4x4, vector: QtC.QVector3D ```
    pub fn Scale(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Scale(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ``` self: QtC.QMatrix4x4, vector: QtC.QVector3D ```
    pub fn Translate(self: ?*anyopaque, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Translate(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ``` self: QtC.QMatrix4x4, angle: f32, vector: QtC.QVector3D ```
    pub fn Rotate(self: ?*anyopaque, angle: f32, vector: ?*anyopaque) void {
        qtc.QMatrix4x4_Rotate(@ptrCast(self), @floatCast(angle), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ``` self: QtC.QMatrix4x4, x: f32, y: f32 ```
    pub fn Scale2(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QMatrix4x4_Scale2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ``` self: QtC.QMatrix4x4, x: f32, y: f32, z: f32 ```
    pub fn Scale3(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Scale3(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ``` self: QtC.QMatrix4x4, factor: f32 ```
    pub fn Scale4(self: ?*anyopaque, factor: f32) void {
        qtc.QMatrix4x4_Scale4(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ``` self: QtC.QMatrix4x4, x: f32, y: f32 ```
    pub fn Translate2(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QMatrix4x4_Translate2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ``` self: QtC.QMatrix4x4, x: f32, y: f32, z: f32 ```
    pub fn Translate3(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Translate3(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ``` self: QtC.QMatrix4x4, angle: f32, x: f32, y: f32 ```
    pub fn Rotate2(self: ?*anyopaque, angle: f32, x: f32, y: f32) void {
        qtc.QMatrix4x4_Rotate2(@ptrCast(self), @floatCast(angle), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ``` self: QtC.QMatrix4x4, quaternion: QtC.QQuaternion ```
    pub fn Rotate3(self: ?*anyopaque, quaternion: ?*anyopaque) void {
        qtc.QMatrix4x4_Rotate3(@ptrCast(self), @ptrCast(quaternion));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ``` self: QtC.QMatrix4x4, rect: QtC.QRect ```
    pub fn Ortho(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Ortho(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ``` self: QtC.QMatrix4x4, rect: QtC.QRectF ```
    pub fn Ortho2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Ortho2(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ``` self: QtC.QMatrix4x4, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32 ```
    pub fn Ortho3(self: ?*anyopaque, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Ortho3(@ptrCast(self), @floatCast(left), @floatCast(right), @floatCast(bottom), @floatCast(top), @floatCast(nearPlane), @floatCast(farPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#frustum)
    ///
    /// ``` self: QtC.QMatrix4x4, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32 ```
    pub fn Frustum(self: ?*anyopaque, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Frustum(@ptrCast(self), @floatCast(left), @floatCast(right), @floatCast(bottom), @floatCast(top), @floatCast(nearPlane), @floatCast(farPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#perspective)
    ///
    /// ``` self: QtC.QMatrix4x4, verticalAngle: f32, aspectRatio: f32, nearPlane: f32, farPlane: f32 ```
    pub fn Perspective(self: ?*anyopaque, verticalAngle: f32, aspectRatio: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Perspective(@ptrCast(self), @floatCast(verticalAngle), @floatCast(aspectRatio), @floatCast(nearPlane), @floatCast(farPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#lookAt)
    ///
    /// ``` self: QtC.QMatrix4x4, eye: QtC.QVector3D, center: QtC.QVector3D, up: QtC.QVector3D ```
    pub fn LookAt(self: ?*anyopaque, eye: ?*anyopaque, center: ?*anyopaque, up: ?*anyopaque) void {
        qtc.QMatrix4x4_LookAt(@ptrCast(self), @ptrCast(eye), @ptrCast(center), @ptrCast(up));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ``` self: QtC.QMatrix4x4, rect: QtC.QRectF ```
    pub fn Viewport(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QMatrix4x4_Viewport(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ``` self: QtC.QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32 ```
    pub fn Viewport2(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32) void {
        qtc.QMatrix4x4_Viewport2(@ptrCast(self), @floatCast(left), @floatCast(bottom), @floatCast(width), @floatCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn FlipCoordinates(self: ?*anyopaque) void {
        qtc.QMatrix4x4_FlipCoordinates(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
    ///
    /// ``` self: QtC.QMatrix4x4, values: *f32 ```
    pub fn CopyDataTo(self: ?*anyopaque, values: *f32) void {
        qtc.QMatrix4x4_CopyDataTo(@ptrCast(self), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn ToTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QMatrix4x4_ToTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ``` self: QtC.QMatrix4x4, distanceToPlane: f32 ```
    pub fn ToTransform2(self: ?*anyopaque, distanceToPlane: f32) QtC.QTransform {
        return qtc.QMatrix4x4_ToTransform2(@ptrCast(self), @floatCast(distanceToPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ``` self: QtC.QMatrix4x4, point: QtC.QPoint ```
    pub fn Map(self: ?*anyopaque, point: ?*anyopaque) QtC.QPoint {
        return qtc.QMatrix4x4_Map(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ``` self: QtC.QMatrix4x4, point: QtC.QPointF ```
    pub fn Map2(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QMatrix4x4_Map2(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ``` self: QtC.QMatrix4x4, point: QtC.QVector3D ```
    pub fn Map3(self: ?*anyopaque, point: ?*anyopaque) QtC.QVector3D {
        return qtc.QMatrix4x4_Map3(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
    ///
    /// ``` self: QtC.QMatrix4x4, vector: QtC.QVector3D ```
    pub fn MapVector(self: ?*anyopaque, vector: ?*anyopaque) QtC.QVector3D {
        return qtc.QMatrix4x4_MapVector(@ptrCast(self), @ptrCast(vector));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ``` self: QtC.QMatrix4x4, point: QtC.QVector4D ```
    pub fn Map4(self: ?*anyopaque, point: ?*anyopaque) QtC.QVector4D {
        return qtc.QMatrix4x4_Map4(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ``` self: QtC.QMatrix4x4, rect: QtC.QRect ```
    pub fn MapRect(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRect {
        return qtc.QMatrix4x4_MapRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ``` self: QtC.QMatrix4x4, rect: QtC.QRectF ```
    pub fn MapRect2(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QMatrix4x4_MapRect2(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn Data(self: ?*anyopaque) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_Data(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn Data2(self: ?*anyopaque) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_Data2(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn ConstData(self: ?*anyopaque) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_ConstData(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn Optimize(self: ?*anyopaque) void {
        qtc.QMatrix4x4_Optimize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QMatrix4x4_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
    ///
    /// ``` self: QtC.QMatrix4x4, angle: f32, x: f32, y: f32, z: f32, distanceToPlane: f32 ```
    pub fn ProjectedRotate(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32, distanceToPlane: f32) void {
        qtc.QMatrix4x4_ProjectedRotate(@ptrCast(self), @floatCast(angle), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(distanceToPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
    ///
    /// ``` self: QtC.QMatrix4x4, angle: f32, x: f32, y: f32, z: f32 ```
    pub fn ProjectedRotate2(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_ProjectedRotate2(@ptrCast(self), @floatCast(angle), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#flags)
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    ///
    /// Returns: ``` flag of qmatrix4x4_enums.Flag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QMatrix4x4_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ``` self: QtC.QMatrix4x4, invertible: *bool ```
    pub fn Inverted1(self: ?*anyopaque, invertible: *bool) QtC.QMatrix4x4 {
        return qtc.QMatrix4x4_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ``` self: QtC.QMatrix4x4, angle: f32, x: f32, y: f32, z: f32 ```
    pub fn Rotate4(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Rotate4(@ptrCast(self), @floatCast(angle), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ``` self: QtC.QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32 ```
    pub fn Viewport5(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32) void {
        qtc.QMatrix4x4_Viewport5(@ptrCast(self), @floatCast(left), @floatCast(bottom), @floatCast(width), @floatCast(height), @floatCast(nearPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ``` self: QtC.QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32, farPlane: f32 ```
    pub fn Viewport6(self: ?*anyopaque, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Viewport6(@ptrCast(self), @floatCast(left), @floatCast(bottom), @floatCast(width), @floatCast(height), @floatCast(nearPlane), @floatCast(farPlane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#dtor.QMatrix4x4)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMatrix4x4 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMatrix4x4_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmatrix4x4.html#types
pub const enums = struct {
    pub const Flag = enum {
        pub const Identity: i32 = 0;
        pub const Translation: i32 = 1;
        pub const Scale: i32 = 2;
        pub const Rotation2D: i32 = 4;
        pub const Rotation: i32 = 8;
        pub const Perspective: i32 = 16;
        pub const General: i32 = 31;
    };
};
