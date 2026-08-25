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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn new(other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMatrix4x4 object and invalidate the source QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn new2(other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    pub fn new3() QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new4(param1: i32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new4(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` values: *const f32 `
    ///
    pub fn new5(values: *const f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new5(@ptrCast(values)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QMatrix4x4 object in C++ memory
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
    pub fn new6(m11: f32, m12: f32, m13: f32, m14: f32, m21: f32, m22: f32, m23: f32, m24: f32, m31: f32, m32: f32, m33: f32, m34: f32, m41: f32, m42: f32, m43: f32, m44: f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new6(@bitCast(m11), @bitCast(m12), @bitCast(m13), @bitCast(m14), @bitCast(m21), @bitCast(m22), @bitCast(m23), @bitCast(m24), @bitCast(m31), @bitCast(m32), @bitCast(m33), @bitCast(m34), @bitCast(m41), @bitCast(m42), @bitCast(m43), @bitCast(m44)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` values: *const f32 `
    ///
    /// ` cols: i32 `
    ///
    /// ` rows: i32 `
    ///
    pub fn new7(values: *const f32, cols: i32, rows: i32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_new7(@ptrCast(values), @bitCast(cols), @bitCast(rows)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` transform: QTransform `
    ///
    pub fn new8(transform: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(transform)._is_QTransform;
        return .{ .ptr = qtc.QMatrix4x4_new8(@ptrCast(transform.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QMatrix4x4 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMatrix4x4 `
    ///
    pub fn new9(param1: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(param1)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_new9(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn copyAssign(self: QMatrix4x4, other: QMatrix4x4) void {
        qtc.QMatrix4x4_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn moveAssign(self: QMatrix4x4, other: QMatrix4x4) void {
        qtc.QMatrix4x4_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorCall` instead
    ///
    pub const OperatorCall = operatorCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn operatorCall(self: QMatrix4x4, _row: i32, _column: i32) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)));
    }

    /// ### DEPRECATED: Use `operatorCall2` instead
    ///
    pub const OperatorCall2 = operatorCall2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn operatorCall2(self: QMatrix4x4, _row: i32, _column: i32) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_OperatorCall2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    pub fn column(self: QMatrix4x4, index: i32) QVector4D {
        return .{ .ptr = qtc.QMatrix4x4_Column(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `setColumn` instead
    ///
    pub const SetColumn = setColumn;

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
    pub fn setColumn(self: QMatrix4x4, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QMatrix4x4_SetColumn(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` index: i32 `
    ///
    pub fn row(self: QMatrix4x4, index: i32) QVector4D {
        return .{ .ptr = qtc.QMatrix4x4_Row(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

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
    pub fn setRow(self: QMatrix4x4, index: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QMatrix4x4_SetRow(@ptrCast(self.ptr), @bitCast(index), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `isAffine` instead
    ///
    pub const IsAffine = isAffine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn isAffine(self: QMatrix4x4) bool {
        return qtc.QMatrix4x4_IsAffine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isIdentity` instead
    ///
    pub const IsIdentity = isIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn isIdentity(self: QMatrix4x4) bool {
        return qtc.QMatrix4x4_IsIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToIdentity` instead
    ///
    pub const SetToIdentity = setToIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn setToIdentity(self: QMatrix4x4) void {
        qtc.QMatrix4x4_SetToIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fill` instead
    ///
    pub const Fill = fill;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` value: f32 `
    ///
    pub fn fill(self: QMatrix4x4, value: f32) void {
        qtc.QMatrix4x4_Fill(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `determinant` instead
    ///
    pub const Determinant = determinant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn determinant(self: QMatrix4x4) f64 {
        return qtc.QMatrix4x4_Determinant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inverted` instead
    ///
    pub const Inverted = inverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn inverted(self: QMatrix4x4) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_Inverted(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn transposed(self: QMatrix4x4) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn operatorPlusAssign(self: QMatrix4x4, other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn operatorMinusAssign(self: QMatrix4x4, other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn operatorMultiplyAssign(self: QMatrix4x4, other: anytype) QMatrix4x4 {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return .{ .ptr = qtc.QMatrix4x4_OperatorMultiplyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` factor: f32 `
    ///
    pub fn operatorMultiplyAssign2(self: QMatrix4x4, factor: f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` divisor: f32 `
    ///
    pub fn operatorDivideAssign(self: QMatrix4x4, divisor: f32) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn operatorEqual(self: QMatrix4x4, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return qtc.QMatrix4x4_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` other: QMatrix4x4 `
    ///
    pub fn operatorNotEqual(self: QMatrix4x4, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMatrix4x4;
        return qtc.QMatrix4x4_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn scale(self: QMatrix4x4, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QMatrix4x4_Scale(@ptrCast(self.ptr), @ptrCast(vector.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn translate(self: QMatrix4x4, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QMatrix4x4_Translate(@ptrCast(self.ptr), @ptrCast(vector.ptr));
    }

    /// ### DEPRECATED: Use `rotate` instead
    ///
    pub const Rotate = rotate;

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
    pub fn rotate(self: QMatrix4x4, angle: f32, vector: anytype) void {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        qtc.QMatrix4x4_Rotate(@ptrCast(self.ptr), @bitCast(angle), @ptrCast(vector.ptr));
    }

    /// ### DEPRECATED: Use `scale2` instead
    ///
    pub const Scale2 = scale2;

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
    pub fn scale2(self: QMatrix4x4, x: f32, y: f32) void {
        qtc.QMatrix4x4_Scale2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `scale3` instead
    ///
    pub const Scale3 = scale3;

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
    pub fn scale3(self: QMatrix4x4, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Scale3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `scale4` instead
    ///
    pub const Scale4 = scale4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` factor: f32 `
    ///
    pub fn scale4(self: QMatrix4x4, factor: f32) void {
        qtc.QMatrix4x4_Scale4(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

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
    pub fn translate2(self: QMatrix4x4, x: f32, y: f32) void {
        qtc.QMatrix4x4_Translate2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `translate3` instead
    ///
    pub const Translate3 = translate3;

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
    pub fn translate3(self: QMatrix4x4, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Translate3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `rotate2` instead
    ///
    pub const Rotate2 = rotate2;

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
    pub fn rotate2(self: QMatrix4x4, angle: f32, x: f32, y: f32) void {
        qtc.QMatrix4x4_Rotate2(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `rotate3` instead
    ///
    pub const Rotate3 = rotate3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` quaternion: QQuaternion `
    ///
    pub fn rotate3(self: QMatrix4x4, quaternion: anytype) void {
        comptime _ = @TypeOf(quaternion)._is_QQuaternion;
        qtc.QMatrix4x4_Rotate3(@ptrCast(self.ptr), @ptrCast(quaternion.ptr));
    }

    /// ### DEPRECATED: Use `ortho` instead
    ///
    pub const Ortho = ortho;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRect `
    ///
    pub fn ortho(self: QMatrix4x4, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QMatrix4x4_Ortho(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `ortho2` instead
    ///
    pub const Ortho2 = ortho2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn ortho2(self: QMatrix4x4, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QMatrix4x4_Ortho2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `ortho3` instead
    ///
    pub const Ortho3 = ortho3;

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
    pub fn ortho3(self: QMatrix4x4, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Ortho3(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### DEPRECATED: Use `frustum` instead
    ///
    pub const Frustum = frustum;

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
    pub fn frustum(self: QMatrix4x4, left: f32, right: f32, bottom: f32, top: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Frustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### DEPRECATED: Use `perspective` instead
    ///
    pub const Perspective = perspective;

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
    pub fn perspective(self: QMatrix4x4, verticalAngle: f32, aspectRatio: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Perspective(@ptrCast(self.ptr), @bitCast(verticalAngle), @bitCast(aspectRatio), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### DEPRECATED: Use `lookAt` instead
    ///
    pub const LookAt = lookAt;

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
    pub fn lookAt(self: QMatrix4x4, eye: anytype, center: anytype, up: anytype) void {
        comptime _ = @TypeOf(eye)._is_QVector3D;
        comptime _ = @TypeOf(center)._is_QVector3D;
        comptime _ = @TypeOf(up)._is_QVector3D;
        qtc.QMatrix4x4_LookAt(@ptrCast(self.ptr), @ptrCast(eye.ptr), @ptrCast(center.ptr), @ptrCast(up.ptr));
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn viewport(self: QMatrix4x4, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QMatrix4x4_Viewport(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `viewport2` instead
    ///
    pub const Viewport2 = viewport2;

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
    pub fn viewport2(self: QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32) void {
        qtc.QMatrix4x4_Viewport2(@ptrCast(self.ptr), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `flipCoordinates` instead
    ///
    pub const FlipCoordinates = flipCoordinates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn flipCoordinates(self: QMatrix4x4) void {
        qtc.QMatrix4x4_FlipCoordinates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copyDataTo` instead
    ///
    pub const CopyDataTo = copyDataTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` values: *f32 `
    ///
    pub fn copyDataTo(self: QMatrix4x4, values: *f32) void {
        qtc.QMatrix4x4_CopyDataTo(@ptrCast(self.ptr), @ptrCast(values));
    }

    /// ### DEPRECATED: Use `toTransform` instead
    ///
    pub const ToTransform = toTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn toTransform(self: QMatrix4x4) QTransform {
        return .{ .ptr = qtc.QMatrix4x4_ToTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTransform2` instead
    ///
    pub const ToTransform2 = toTransform2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` distanceToPlane: f32 `
    ///
    pub fn toTransform2(self: QMatrix4x4, distanceToPlane: f32) QTransform {
        return .{ .ptr = qtc.QMatrix4x4_ToTransform2(@ptrCast(self.ptr), @bitCast(distanceToPlane)) };
    }

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QPoint `
    ///
    pub fn map(self: QMatrix4x4, point: anytype) QPoint {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QMatrix4x4_Map(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `map2` instead
    ///
    pub const Map2 = map2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QPointF `
    ///
    pub fn map2(self: QMatrix4x4, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QMatrix4x4_Map2(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `map3` instead
    ///
    pub const Map3 = map3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QVector3D `
    ///
    pub fn map3(self: QMatrix4x4, point: anytype) QVector3D {
        comptime _ = @TypeOf(point)._is_QVector3D;
        return .{ .ptr = qtc.QMatrix4x4_Map3(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapVector` instead
    ///
    pub const MapVector = mapVector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` vector: QVector3D `
    ///
    pub fn mapVector(self: QMatrix4x4, vector: anytype) QVector3D {
        comptime _ = @TypeOf(vector)._is_QVector3D;
        return .{ .ptr = qtc.QMatrix4x4_MapVector(@ptrCast(self.ptr), @ptrCast(vector.ptr)) };
    }

    /// ### DEPRECATED: Use `map4` instead
    ///
    pub const Map4 = map4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` point: QVector4D `
    ///
    pub fn map4(self: QMatrix4x4, point: anytype) QVector4D {
        comptime _ = @TypeOf(point)._is_QVector4D;
        return .{ .ptr = qtc.QMatrix4x4_Map4(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRect` instead
    ///
    pub const MapRect = mapRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRect `
    ///
    pub fn mapRect(self: QMatrix4x4, rect: anytype) QRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QMatrix4x4_MapRect(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRect2` instead
    ///
    pub const MapRect2 = mapRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRect2(self: QMatrix4x4, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QMatrix4x4_MapRect2(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn data(self: QMatrix4x4) ?*f32 {
        return @ptrCast(qtc.QMatrix4x4_Data(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `data2` instead
    ///
    pub const Data2 = data2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn data2(self: QMatrix4x4) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_Data2(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `constData` instead
    ///
    pub const ConstData = constData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn constData(self: QMatrix4x4) ?*const f32 {
        return @ptrCast(qtc.QMatrix4x4_ConstData(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `optimize` instead
    ///
    pub const Optimize = optimize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn optimize(self: QMatrix4x4) void {
        qtc.QMatrix4x4_Optimize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn toQVariant(self: QMatrix4x4) QVariant {
        return .{ .ptr = qtc.QMatrix4x4_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `projectedRotate` instead
    ///
    pub const ProjectedRotate = projectedRotate;

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
    pub fn projectedRotate(self: QMatrix4x4, angle: f32, x: f32, y: f32, z: f32, distanceToPlane: f32) void {
        qtc.QMatrix4x4_ProjectedRotate(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(distanceToPlane));
    }

    /// ### DEPRECATED: Use `projectedRotate2` instead
    ///
    pub const ProjectedRotate2 = projectedRotate2;

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
    pub fn projectedRotate2(self: QMatrix4x4, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_ProjectedRotate2(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QMatrix4x4) i32 {
        return qtc.QMatrix4x4_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inverted1` instead
    ///
    pub const Inverted1 = inverted1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMatrix4x4 `
    ///
    /// ` invertible: *bool `
    ///
    pub fn inverted1(self: QMatrix4x4, invertible: *bool) QMatrix4x4 {
        return .{ .ptr = qtc.QMatrix4x4_Inverted1(@ptrCast(self.ptr), @ptrCast(invertible)) };
    }

    /// ### DEPRECATED: Use `rotate4` instead
    ///
    pub const Rotate4 = rotate4;

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
    pub fn rotate4(self: QMatrix4x4, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QMatrix4x4_Rotate4(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `viewport5` instead
    ///
    pub const Viewport5 = viewport5;

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
    pub fn viewport5(self: QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32) void {
        qtc.QMatrix4x4_Viewport5(@ptrCast(self.ptr), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height), @bitCast(nearPlane));
    }

    /// ### DEPRECATED: Use `viewport6` instead
    ///
    pub const Viewport6 = viewport6;

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
    pub fn viewport6(self: QMatrix4x4, left: f32, bottom: f32, width: f32, height: f32, nearPlane: f32, farPlane: f32) void {
        qtc.QMatrix4x4_Viewport6(@ptrCast(self.ptr), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height), @bitCast(nearPlane), @bitCast(farPlane));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#dtor.QMatrix4x4)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMatrix4x4 `
    ///
    pub fn delete(self: QMatrix4x4) void {
        qtc.QMatrix4x4_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#public-types)
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
