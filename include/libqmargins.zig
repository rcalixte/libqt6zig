const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qmargins.html
pub const qmargins = struct {
    /// New constructs a new QMargins object.
    ///
    /// ``` other: QtC.QMargins ```
    pub fn New(other: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_new(@ptrCast(other));
    }

    /// New2 constructs a new QMargins object and invalidates the source QMargins object.
    ///
    /// ``` other: QtC.QMargins ```
    pub fn New2(other: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMargins object.
    ///
    ///
    pub fn New3() QtC.QMargins {
        return qtc.QMargins_new3();
    }

    /// New4 constructs a new QMargins object.
    ///
    /// ``` left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn New4(left: i32, top: i32, right: i32, bottom: i32) QtC.QMargins {
        return qtc.QMargins_new4(@intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// New5 constructs a new QMargins object.
    ///
    /// ``` param1: QtC.QMargins ```
    pub fn New5(param1: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMargins, other: QtC.QMargins ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMargins_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMargins, other: QtC.QMargins ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMargins_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#isNull)
    ///
    /// ``` self: QtC.QMargins ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QMargins_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#left)
    ///
    /// ``` self: QtC.QMargins ```
    pub fn Left(self: ?*anyopaque) i32 {
        return qtc.QMargins_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#top)
    ///
    /// ``` self: QtC.QMargins ```
    pub fn Top(self: ?*anyopaque) i32 {
        return qtc.QMargins_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#right)
    ///
    /// ``` self: QtC.QMargins ```
    pub fn Right(self: ?*anyopaque) i32 {
        return qtc.QMargins_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#bottom)
    ///
    /// ``` self: QtC.QMargins ```
    pub fn Bottom(self: ?*anyopaque) i32 {
        return qtc.QMargins_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setLeft)
    ///
    /// ``` self: QtC.QMargins, left: i32 ```
    pub fn SetLeft(self: ?*anyopaque, left: i32) void {
        qtc.QMargins_SetLeft(@ptrCast(self), @intCast(left));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setTop)
    ///
    /// ``` self: QtC.QMargins, top: i32 ```
    pub fn SetTop(self: ?*anyopaque, top: i32) void {
        qtc.QMargins_SetTop(@ptrCast(self), @intCast(top));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setRight)
    ///
    /// ``` self: QtC.QMargins, right: i32 ```
    pub fn SetRight(self: ?*anyopaque, right: i32) void {
        qtc.QMargins_SetRight(@ptrCast(self), @intCast(right));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setBottom)
    ///
    /// ``` self: QtC.QMargins, bottom: i32 ```
    pub fn SetBottom(self: ?*anyopaque, bottom: i32) void {
        qtc.QMargins_SetBottom(@ptrCast(self), @intCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator+=)
    ///
    /// ``` self: QtC.QMargins, margins: QtC.QMargins ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator-=)
    ///
    /// ``` self: QtC.QMargins, margins: QtC.QMargins ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMargins {
        return qtc.QMargins_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator+=)
    ///
    /// ``` self: QtC.QMargins, param1: i32 ```
    pub fn OperatorPlusAssign2(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorPlusAssign2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator-=)
    ///
    /// ``` self: QtC.QMargins, param1: i32 ```
    pub fn OperatorMinusAssign2(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorMinusAssign2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator*=)
    ///
    /// ``` self: QtC.QMargins, param1: i32 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorMultiplyAssign(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator/=)
    ///
    /// ``` self: QtC.QMargins, param1: i32 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, param1: i32) QtC.QMargins {
        return qtc.QMargins_OperatorDivideAssign(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator*=)
    ///
    /// ``` self: QtC.QMargins, param1: f64 ```
    pub fn OperatorMultiplyAssign2(self: ?*anyopaque, param1: f64) QtC.QMargins {
        return qtc.QMargins_OperatorMultiplyAssign2(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator/=)
    ///
    /// ``` self: QtC.QMargins, param1: f64 ```
    pub fn OperatorDivideAssign2(self: ?*anyopaque, param1: f64) QtC.QMargins {
        return qtc.QMargins_OperatorDivideAssign2(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#toMarginsF)
    ///
    /// ``` self: QtC.QMargins ```
    pub fn ToMarginsF(self: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMargins_ToMarginsF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#dtor.QMargins)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMargins ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMargins_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmarginsf.html
pub const qmarginsf = struct {
    /// New constructs a new QMarginsF object.
    ///
    /// ``` other: QtC.QMarginsF ```
    pub fn New(other: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new(@ptrCast(other));
    }

    /// New2 constructs a new QMarginsF object and invalidates the source QMarginsF object.
    ///
    /// ``` other: QtC.QMarginsF ```
    pub fn New2(other: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMarginsF object.
    ///
    ///
    pub fn New3() QtC.QMarginsF {
        return qtc.QMarginsF_new3();
    }

    /// New4 constructs a new QMarginsF object.
    ///
    /// ``` left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn New4(left: f64, top: f64, right: f64, bottom: f64) QtC.QMarginsF {
        return qtc.QMarginsF_new4(@floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// New5 constructs a new QMarginsF object.
    ///
    /// ``` margins: QtC.QMargins ```
    pub fn New5(margins: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new5(@ptrCast(margins));
    }

    /// New6 constructs a new QMarginsF object.
    ///
    /// ``` param1: QtC.QMarginsF ```
    pub fn New6(param1: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMarginsF, other: QtC.QMarginsF ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMarginsF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMarginsF, other: QtC.QMarginsF ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMarginsF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#isNull)
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QMarginsF_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#left)
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn Left(self: ?*anyopaque) f64 {
        return qtc.QMarginsF_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#top)
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn Top(self: ?*anyopaque) f64 {
        return qtc.QMarginsF_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#right)
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn Right(self: ?*anyopaque) f64 {
        return qtc.QMarginsF_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#bottom)
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn Bottom(self: ?*anyopaque) f64 {
        return qtc.QMarginsF_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setLeft)
    ///
    /// ``` self: QtC.QMarginsF, aleft: f64 ```
    pub fn SetLeft(self: ?*anyopaque, aleft: f64) void {
        qtc.QMarginsF_SetLeft(@ptrCast(self), @floatCast(aleft));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setTop)
    ///
    /// ``` self: QtC.QMarginsF, atop: f64 ```
    pub fn SetTop(self: ?*anyopaque, atop: f64) void {
        qtc.QMarginsF_SetTop(@ptrCast(self), @floatCast(atop));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setRight)
    ///
    /// ``` self: QtC.QMarginsF, aright: f64 ```
    pub fn SetRight(self: ?*anyopaque, aright: f64) void {
        qtc.QMarginsF_SetRight(@ptrCast(self), @floatCast(aright));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setBottom)
    ///
    /// ``` self: QtC.QMarginsF, abottom: f64 ```
    pub fn SetBottom(self: ?*anyopaque, abottom: f64) void {
        qtc.QMarginsF_SetBottom(@ptrCast(self), @floatCast(abottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator+=)
    ///
    /// ``` self: QtC.QMarginsF, margins: QtC.QMarginsF ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator-=)
    ///
    /// ``` self: QtC.QMarginsF, margins: QtC.QMarginsF ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator+=)
    ///
    /// ``` self: QtC.QMarginsF, addend: f64 ```
    pub fn OperatorPlusAssign2(self: ?*anyopaque, addend: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorPlusAssign2(@ptrCast(self), @floatCast(addend));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator-=)
    ///
    /// ``` self: QtC.QMarginsF, subtrahend: f64 ```
    pub fn OperatorMinusAssign2(self: ?*anyopaque, subtrahend: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorMinusAssign2(@ptrCast(self), @floatCast(subtrahend));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator*=)
    ///
    /// ``` self: QtC.QMarginsF, factor: f64 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, factor: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorMultiplyAssign(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator/=)
    ///
    /// ``` self: QtC.QMarginsF, divisor: f64 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, divisor: f64) QtC.QMarginsF {
        return qtc.QMarginsF_OperatorDivideAssign(@ptrCast(self), @floatCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#toMargins)
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn ToMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QMarginsF_ToMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#dtor.QMarginsF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMarginsF ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMarginsF_Delete(@ptrCast(self));
    }
};
