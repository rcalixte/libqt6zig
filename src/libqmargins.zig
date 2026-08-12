const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)
pub const QMargins = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMargins,

    pub const _is_QMargins = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMargins object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMargins `
    ///
    pub fn new(other: anytype) QMargins {
        comptime _ = @TypeOf(other)._is_QMargins;
        return .{ .ptr = qtc.QMargins_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMargins object and invalidate the source QMargins object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMargins `
    ///
    pub fn new2(other: anytype) QMargins {
        comptime _ = @TypeOf(other)._is_QMargins;
        return .{ .ptr = qtc.QMargins_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMargins object in C++ memory
    ///
    pub fn new3() QMargins {
        return .{ .ptr = qtc.QMargins_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMargins object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _left: i32 `
    ///
    /// ` _top: i32 `
    ///
    /// ` _right: i32 `
    ///
    /// ` _bottom: i32 `
    ///
    pub fn new4(_left: i32, _top: i32, _right: i32, _bottom: i32) QMargins {
        return .{ .ptr = qtc.QMargins_new4(@bitCast(_left), @bitCast(_top), @bitCast(_right), @bitCast(_bottom)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMargins object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMargins `
    ///
    pub fn new5(param1: anytype) QMargins {
        comptime _ = @TypeOf(param1)._is_QMargins;
        return .{ .ptr = qtc.QMargins_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMargins `
    ///
    /// ` other: QMargins `
    ///
    pub fn copyAssign(self: QMargins, other: QMargins) void {
        qtc.QMargins_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMargins `
    ///
    /// ` other: QMargins `
    ///
    pub fn moveAssign(self: QMargins, other: QMargins) void {
        qtc.QMargins_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn isNull(self: QMargins) bool {
        return qtc.QMargins_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `left` instead
    ///
    pub const Left = left;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn left(self: QMargins) i32 {
        return qtc.QMargins_Left(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `top` instead
    ///
    pub const Top = top;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn top(self: QMargins) i32 {
        return qtc.QMargins_Top(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `right` instead
    ///
    pub const Right = right;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn right(self: QMargins) i32 {
        return qtc.QMargins_Right(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bottom` instead
    ///
    pub const Bottom = bottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn bottom(self: QMargins) i32 {
        return qtc.QMargins_Bottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeft` instead
    ///
    pub const SetLeft = setLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` _left: i32 `
    ///
    pub fn setLeft(self: QMargins, _left: i32) void {
        qtc.QMargins_SetLeft(@ptrCast(self.ptr), @bitCast(_left));
    }

    /// ### DEPRECATED: Use `setTop` instead
    ///
    pub const SetTop = setTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` _top: i32 `
    ///
    pub fn setTop(self: QMargins, _top: i32) void {
        qtc.QMargins_SetTop(@ptrCast(self.ptr), @bitCast(_top));
    }

    /// ### DEPRECATED: Use `setRight` instead
    ///
    pub const SetRight = setRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` _right: i32 `
    ///
    pub fn setRight(self: QMargins, _right: i32) void {
        qtc.QMargins_SetRight(@ptrCast(self.ptr), @bitCast(_right));
    }

    /// ### DEPRECATED: Use `setBottom` instead
    ///
    pub const SetBottom = setBottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` _bottom: i32 `
    ///
    pub fn setBottom(self: QMargins, _bottom: i32) void {
        qtc.QMargins_SetBottom(@ptrCast(self.ptr), @bitCast(_bottom));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` margins: QMargins `
    ///
    pub fn operatorPlusAssign(self: QMargins, margins: anytype) QMargins {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QMargins_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` margins: QMargins `
    ///
    pub fn operatorMinusAssign(self: QMargins, margins: anytype) QMargins {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QMargins_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign2` instead
    ///
    pub const OperatorPlusAssign2 = operatorPlusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusAssign2(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorPlusAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign2` instead
    ///
    pub const OperatorMinusAssign2 = operatorMinusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusAssign2(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorMinusAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMultiplyAssign(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorDivideAssign(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign2` instead
    ///
    pub const OperatorMultiplyAssign2 = operatorMultiplyAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: f64 `
    ///
    pub fn operatorMultiplyAssign2(self: QMargins, param1: f64) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign2` instead
    ///
    pub const OperatorDivideAssign2 = operatorDivideAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: f64 `
    ///
    pub fn operatorDivideAssign2(self: QMargins, param1: f64) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorDivideAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `toMarginsF` instead
    ///
    pub const ToMarginsF = toMarginsF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#toMarginsF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn toMarginsF(self: QMargins) QMarginsF {
        return .{ .ptr = qtc.QMargins_ToMarginsF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#dtor.QMargins)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMargins `
    ///
    pub fn delete(self: QMargins) void {
        qtc.QMargins_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)
pub const QMarginsF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMarginsF,

    pub const _is_QMarginsF = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMarginsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMarginsF `
    ///
    pub fn new(other: anytype) QMarginsF {
        comptime _ = @TypeOf(other)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMarginsF object and invalidate the source QMarginsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMarginsF `
    ///
    pub fn new2(other: anytype) QMarginsF {
        comptime _ = @TypeOf(other)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMarginsF object in C++ memory
    ///
    pub fn new3() QMarginsF {
        return .{ .ptr = qtc.QMarginsF_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMarginsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _left: f64 `
    ///
    /// ` _top: f64 `
    ///
    /// ` _right: f64 `
    ///
    /// ` _bottom: f64 `
    ///
    pub fn new4(_left: f64, _top: f64, _right: f64, _bottom: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_new4(@bitCast(_left), @bitCast(_top), @bitCast(_right), @bitCast(_bottom)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMarginsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` margins: QMargins `
    ///
    pub fn new5(margins: anytype) QMarginsF {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QMarginsF_new5(@ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QMarginsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMarginsF `
    ///
    pub fn new6(param1: anytype) QMarginsF {
        comptime _ = @TypeOf(param1)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMarginsF `
    ///
    /// ` other: QMarginsF `
    ///
    pub fn copyAssign(self: QMarginsF, other: QMarginsF) void {
        qtc.QMarginsF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMarginsF `
    ///
    /// ` other: QMarginsF `
    ///
    pub fn moveAssign(self: QMarginsF, other: QMarginsF) void {
        qtc.QMarginsF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn isNull(self: QMarginsF) bool {
        return qtc.QMarginsF_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `left` instead
    ///
    pub const Left = left;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn left(self: QMarginsF) f64 {
        return qtc.QMarginsF_Left(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `top` instead
    ///
    pub const Top = top;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn top(self: QMarginsF) f64 {
        return qtc.QMarginsF_Top(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `right` instead
    ///
    pub const Right = right;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn right(self: QMarginsF) f64 {
        return qtc.QMarginsF_Right(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bottom` instead
    ///
    pub const Bottom = bottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn bottom(self: QMarginsF) f64 {
        return qtc.QMarginsF_Bottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeft` instead
    ///
    pub const SetLeft = setLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` aleft: f64 `
    ///
    pub fn setLeft(self: QMarginsF, aleft: f64) void {
        qtc.QMarginsF_SetLeft(@ptrCast(self.ptr), @bitCast(aleft));
    }

    /// ### DEPRECATED: Use `setTop` instead
    ///
    pub const SetTop = setTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` atop: f64 `
    ///
    pub fn setTop(self: QMarginsF, atop: f64) void {
        qtc.QMarginsF_SetTop(@ptrCast(self.ptr), @bitCast(atop));
    }

    /// ### DEPRECATED: Use `setRight` instead
    ///
    pub const SetRight = setRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` aright: f64 `
    ///
    pub fn setRight(self: QMarginsF, aright: f64) void {
        qtc.QMarginsF_SetRight(@ptrCast(self.ptr), @bitCast(aright));
    }

    /// ### DEPRECATED: Use `setBottom` instead
    ///
    pub const SetBottom = setBottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` abottom: f64 `
    ///
    pub fn setBottom(self: QMarginsF, abottom: f64) void {
        qtc.QMarginsF_SetBottom(@ptrCast(self.ptr), @bitCast(abottom));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn operatorPlusAssign(self: QMarginsF, margins: anytype) QMarginsF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn operatorMinusAssign(self: QMarginsF, margins: anytype) QMarginsF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign2` instead
    ///
    pub const OperatorPlusAssign2 = operatorPlusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` addend: f64 `
    ///
    pub fn operatorPlusAssign2(self: QMarginsF, addend: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorPlusAssign2(@ptrCast(self.ptr), @bitCast(addend)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign2` instead
    ///
    pub const OperatorMinusAssign2 = operatorMinusAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` subtrahend: f64 `
    ///
    pub fn operatorMinusAssign2(self: QMarginsF, subtrahend: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorMinusAssign2(@ptrCast(self.ptr), @bitCast(subtrahend)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` factor: f64 `
    ///
    pub fn operatorMultiplyAssign(self: QMarginsF, factor: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` divisor: f64 `
    ///
    pub fn operatorDivideAssign(self: QMarginsF, divisor: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### DEPRECATED: Use `toMargins` instead
    ///
    pub const ToMargins = toMargins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#toMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn toMargins(self: QMarginsF) QMargins {
        return .{ .ptr = qtc.QMarginsF_ToMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#dtor.QMarginsF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMarginsF `
    ///
    pub fn delete(self: QMarginsF) void {
        qtc.QMarginsF_Delete(@ptrCast(self.ptr));
    }
};
