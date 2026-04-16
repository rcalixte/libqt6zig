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

    /// New constructs a new QMargins object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMargins `
    ///
    pub fn New(other: anytype) QMargins {
        comptime _ = @TypeOf(other)._is_QMargins;
        return .{ .ptr = qtc.QMargins_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMargins object and invalidates the source QMargins object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMargins `
    ///
    pub fn New2(other: anytype) QMargins {
        comptime _ = @TypeOf(other)._is_QMargins;
        return .{ .ptr = qtc.QMargins_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMargins object.
    ///
    pub fn New3() QMargins {
        return .{ .ptr = qtc.QMargins_new3() };
    }

    /// New4 constructs a new QMargins object.
    ///
    /// ## Parameter(s):
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn New4(left: i32, top: i32, right: i32, bottom: i32) QMargins {
        return .{ .ptr = qtc.QMargins_new4(@bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom)) };
    }

    /// New5 constructs a new QMargins object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMargins `
    ///
    pub fn New5(param1: anytype) QMargins {
        comptime _ = @TypeOf(param1)._is_QMargins;
        return .{ .ptr = qtc.QMargins_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMargins `
    ///
    /// ` other: QMargins `
    ///
    pub fn CopyAssign(self: QMargins, other: QMargins) void {
        qtc.QMargins_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMargins `
    ///
    /// ` other: QMargins `
    ///
    pub fn MoveAssign(self: QMargins, other: QMargins) void {
        qtc.QMargins_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn IsNull(self: QMargins) bool {
        return qtc.QMargins_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn Left(self: QMargins) i32 {
        return qtc.QMargins_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn Top(self: QMargins) i32 {
        return qtc.QMargins_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn Right(self: QMargins) i32 {
        return qtc.QMargins_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn Bottom(self: QMargins) i32 {
        return qtc.QMargins_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` left: i32 `
    ///
    pub fn SetLeft(self: QMargins, left: i32) void {
        qtc.QMargins_SetLeft(@ptrCast(self.ptr), @bitCast(left));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` top: i32 `
    ///
    pub fn SetTop(self: QMargins, top: i32) void {
        qtc.QMargins_SetTop(@ptrCast(self.ptr), @bitCast(top));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` right: i32 `
    ///
    pub fn SetRight(self: QMargins, right: i32) void {
        qtc.QMargins_SetRight(@ptrCast(self.ptr), @bitCast(right));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetBottom(self: QMargins, bottom: i32) void {
        qtc.QMargins_SetBottom(@ptrCast(self.ptr), @bitCast(bottom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` margins: QMargins `
    ///
    pub fn OperatorPlusAssign(self: QMargins, margins: anytype) QMargins {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QMargins_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` margins: QMargins `
    ///
    pub fn OperatorMinusAssign(self: QMargins, margins: anytype) QMargins {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QMargins_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusAssign2(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorPlusAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusAssign2(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorMinusAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMultiplyAssign(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorDivideAssign(self: QMargins, param1: i32) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: f64 `
    ///
    pub fn OperatorMultiplyAssign2(self: QMargins, param1: f64) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorMultiplyAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    /// ` param1: f64 `
    ///
    pub fn OperatorDivideAssign2(self: QMargins, param1: f64) QMargins {
        return .{ .ptr = qtc.QMargins_OperatorDivideAssign2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#toMarginsF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMargins `
    ///
    pub fn ToMarginsF(self: QMargins) QMarginsF {
        return .{ .ptr = qtc.QMargins_ToMarginsF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#dtor.QMargins)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMargins `
    ///
    pub fn Delete(self: QMargins) void {
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

    /// New constructs a new QMarginsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMarginsF `
    ///
    pub fn New(other: anytype) QMarginsF {
        comptime _ = @TypeOf(other)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMarginsF object and invalidates the source QMarginsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMarginsF `
    ///
    pub fn New2(other: anytype) QMarginsF {
        comptime _ = @TypeOf(other)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMarginsF object.
    ///
    pub fn New3() QMarginsF {
        return .{ .ptr = qtc.QMarginsF_new3() };
    }

    /// New4 constructs a new QMarginsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn New4(left: f64, top: f64, right: f64, bottom: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_new4(@bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom)) };
    }

    /// New5 constructs a new QMarginsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` margins: QMargins `
    ///
    pub fn New5(margins: anytype) QMarginsF {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QMarginsF_new5(@ptrCast(margins.ptr)) };
    }

    /// New6 constructs a new QMarginsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMarginsF `
    ///
    pub fn New6(param1: anytype) QMarginsF {
        comptime _ = @TypeOf(param1)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_new6(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMarginsF `
    ///
    /// ` other: QMarginsF `
    ///
    pub fn CopyAssign(self: QMarginsF, other: QMarginsF) void {
        qtc.QMarginsF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMarginsF `
    ///
    /// ` other: QMarginsF `
    ///
    pub fn MoveAssign(self: QMarginsF, other: QMarginsF) void {
        qtc.QMarginsF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn IsNull(self: QMarginsF) bool {
        return qtc.QMarginsF_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn Left(self: QMarginsF) f64 {
        return qtc.QMarginsF_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn Top(self: QMarginsF) f64 {
        return qtc.QMarginsF_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn Right(self: QMarginsF) f64 {
        return qtc.QMarginsF_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn Bottom(self: QMarginsF) f64 {
        return qtc.QMarginsF_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` aleft: f64 `
    ///
    pub fn SetLeft(self: QMarginsF, aleft: f64) void {
        qtc.QMarginsF_SetLeft(@ptrCast(self.ptr), @bitCast(aleft));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` atop: f64 `
    ///
    pub fn SetTop(self: QMarginsF, atop: f64) void {
        qtc.QMarginsF_SetTop(@ptrCast(self.ptr), @bitCast(atop));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` aright: f64 `
    ///
    pub fn SetRight(self: QMarginsF, aright: f64) void {
        qtc.QMarginsF_SetRight(@ptrCast(self.ptr), @bitCast(aright));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` abottom: f64 `
    ///
    pub fn SetBottom(self: QMarginsF, abottom: f64) void {
        qtc.QMarginsF_SetBottom(@ptrCast(self.ptr), @bitCast(abottom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn OperatorPlusAssign(self: QMarginsF, margins: anytype) QMarginsF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn OperatorMinusAssign(self: QMarginsF, margins: anytype) QMarginsF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QMarginsF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` addend: f64 `
    ///
    pub fn OperatorPlusAssign2(self: QMarginsF, addend: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorPlusAssign2(@ptrCast(self.ptr), @bitCast(addend)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` subtrahend: f64 `
    ///
    pub fn OperatorMinusAssign2(self: QMarginsF, subtrahend: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorMinusAssign2(@ptrCast(self.ptr), @bitCast(subtrahend)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` factor: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: QMarginsF, factor: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(factor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    /// ` divisor: f64 `
    ///
    pub fn OperatorDivideAssign(self: QMarginsF, divisor: f64) QMarginsF {
        return .{ .ptr = qtc.QMarginsF_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(divisor)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#toMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMarginsF `
    ///
    pub fn ToMargins(self: QMarginsF) QMargins {
        return .{ .ptr = qtc.QMarginsF_ToMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#dtor.QMarginsF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMarginsF `
    ///
    pub fn Delete(self: QMarginsF) void {
        qtc.QMarginsF_Delete(@ptrCast(self.ptr));
    }
};
