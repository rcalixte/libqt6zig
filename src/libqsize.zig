const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html)
pub const qsize = struct {
    /// New constructs a new QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSize `
    ///
    pub fn New(other: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new(@ptrCast(other));
    }

    /// New2 constructs a new QSize object and invalidates the source QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSize `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSize object.
    ///
    pub fn New3() QtC.QSize {
        return qtc.QSize_new3();
    }

    /// New4 constructs a new QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New4(w: i32, h: i32) QtC.QSize {
        return qtc.QSize_new4(@bitCast(w), @bitCast(h));
    }

    /// New5 constructs a new QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` other: QtC.QSize `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSize_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` other: QtC.QSize `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSize_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSize_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSize_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSize_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QSize_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QSize_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` w: i32 `
    ///
    pub fn SetWidth(self: ?*anyopaque, w: i32) void {
        qtc.QSize_SetWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` h: i32 `
    ///
    pub fn SetHeight(self: ?*anyopaque, h: i32) void {
        qtc.QSize_SetHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Transpose(self: ?*anyopaque) void {
        qtc.QSize_Transpose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QSize {
        return qtc.QSize_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale(self: ?*anyopaque, w: i32, h: i32, mode: i32) void {
        qtc.QSize_Scale(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` s: QtC.QSize `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) void {
        qtc.QSize_Scale2(@ptrCast(self), @ptrCast(s), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32, mode: i32) QtC.QSize {
        return qtc.QSize_Scaled(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` s: QtC.QSize `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) QtC.QSize {
        return qtc.QSize_Scaled2(@ptrCast(self), @ptrCast(s), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#expandedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn ExpandedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_ExpandedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#boundedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn BoundedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_BoundedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#grownBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` m: QtC.QMargins `
    ///
    pub fn GrownBy(self: ?*anyopaque, m: QtC.QMargins) QtC.QSize {
        return qtc.QSize_GrownBy(@ptrCast(self), @ptrCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` m: QtC.QMargins `
    ///
    pub fn ShrunkBy(self: ?*anyopaque, m: QtC.QMargins) QtC.QSize {
        return qtc.QSize_ShrunkBy(@ptrCast(self), @ptrCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rwidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Rwidth(self: ?*anyopaque) ?*i32 {
        return @ptrCast(qtc.QSize_Rwidth(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rheight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Rheight(self: ?*anyopaque) ?*i32 {
        return @ptrCast(qtc.QSize_Rheight(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QSize {
        return qtc.QSize_OperatorMultiplyAssign(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QSize {
        return qtc.QSize_OperatorDivideAssign(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#toSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn ToSizeF(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QSize_ToSizeF(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#dtor.QSize)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSize `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSize_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)
pub const qsizef = struct {
    /// New constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSizeF `
    ///
    pub fn New(other: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new(@ptrCast(other));
    }

    /// New2 constructs a new QSizeF object and invalidates the source QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSizeF `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSizeF object.
    ///
    pub fn New3() QtC.QSizeF {
        return qtc.QSizeF_new3();
    }

    /// New4 constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sz: QtC.QSize `
    ///
    pub fn New4(sz: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new4(@ptrCast(sz));
    }

    /// New5 constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn New5(w: f64, h: f64) QtC.QSizeF {
        return qtc.QSizeF_new5(@bitCast(w), @bitCast(h));
    }

    /// New6 constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QSizeF `
    ///
    pub fn New6(param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` other: QtC.QSizeF `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizeF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` other: QtC.QSizeF `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizeF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSizeF_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSizeF_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSizeF_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QSizeF_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QSizeF_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` w: f64 `
    ///
    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QSizeF_SetWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` h: f64 `
    ///
    pub fn SetHeight(self: ?*anyopaque, h: f64) void {
        qtc.QSizeF_SetHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Transpose(self: ?*anyopaque) void {
        qtc.QSizeF_Transpose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale(self: ?*anyopaque, w: f64, h: f64, mode: i32) void {
        qtc.QSizeF_Scale(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` s: QtC.QSizeF `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) void {
        qtc.QSizeF_Scale2(@ptrCast(self), @ptrCast(s), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled(self: ?*anyopaque, w: f64, h: f64, mode: i32) QtC.QSizeF {
        return qtc.QSizeF_Scaled(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` s: QtC.QSizeF `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, mode: i32) QtC.QSizeF {
        return qtc.QSizeF_Scaled2(@ptrCast(self), @ptrCast(s), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` param1: QtC.QSizeF `
    ///
    pub fn ExpandedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_ExpandedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` param1: QtC.QSizeF `
    ///
    pub fn BoundedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_BoundedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#grownBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` m: QtC.QMarginsF `
    ///
    pub fn GrownBy(self: ?*anyopaque, m: QtC.QMarginsF) QtC.QSizeF {
        return qtc.QSizeF_GrownBy(@ptrCast(self), @ptrCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` m: QtC.QMarginsF `
    ///
    pub fn ShrunkBy(self: ?*anyopaque, m: QtC.QMarginsF) QtC.QSizeF {
        return qtc.QSizeF_ShrunkBy(@ptrCast(self), @ptrCast(m));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rwidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Rwidth(self: ?*anyopaque) ?*f64 {
        return @ptrCast(qtc.QSizeF_Rwidth(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rheight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Rheight(self: ?*anyopaque) ?*f64 {
        return @ptrCast(qtc.QSizeF_Rheight(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` param1: QtC.QSizeF `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` param1: QtC.QSizeF `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QSizeF {
        return qtc.QSizeF_OperatorMultiplyAssign(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QSizeF {
        return qtc.QSizeF_OperatorDivideAssign(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn ToSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSizeF_ToSize(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#dtor.QSizeF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSizeF `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSizeF_Delete(@ptrCast(self));
    }
};
