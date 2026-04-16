const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMargins = @import("libqt6").QMargins;
const QMarginsF = @import("libqt6").QMarginsF;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html)
pub const QSize = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSize,

    pub const _is_QSize = {};

    /// New constructs a new QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSize `
    ///
    pub fn New(other: anytype) QSize {
        comptime _ = @TypeOf(other)._is_QSize;
        return .{ .ptr = qtc.QSize_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QSize object and invalidates the source QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSize `
    ///
    pub fn New2(other: anytype) QSize {
        comptime _ = @TypeOf(other)._is_QSize;
        return .{ .ptr = qtc.QSize_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSize object.
    ///
    pub fn New3() QSize {
        return .{ .ptr = qtc.QSize_new3() };
    }

    /// New4 constructs a new QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New4(w: i32, h: i32) QSize {
        return .{ .ptr = qtc.QSize_new4(@bitCast(w), @bitCast(h)) };
    }

    /// New5 constructs a new QSize object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSize `
    ///
    pub fn New5(param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_new5(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSize `
    ///
    /// ` other: QSize `
    ///
    pub fn CopyAssign(self: QSize, other: QSize) void {
        qtc.QSize_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSize `
    ///
    /// ` other: QSize `
    ///
    pub fn MoveAssign(self: QSize, other: QSize) void {
        qtc.QSize_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn IsNull(self: QSize) bool {
        return qtc.QSize_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn IsEmpty(self: QSize) bool {
        return qtc.QSize_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn IsValid(self: QSize) bool {
        return qtc.QSize_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn Width(self: QSize) i32 {
        return qtc.QSize_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn Height(self: QSize) i32 {
        return qtc.QSize_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` w: i32 `
    ///
    pub fn SetWidth(self: QSize, w: i32) void {
        qtc.QSize_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` h: i32 `
    ///
    pub fn SetHeight(self: QSize, h: i32) void {
        qtc.QSize_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn Transpose(self: QSize) void {
        qtc.QSize_Transpose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn Transposed(self: QSize) QSize {
        return .{ .ptr = qtc.QSize_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale(self: QSize, w: i32, h: i32, mode: i32) void {
        qtc.QSize_Scale(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` s: QSize `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale2(self: QSize, s: anytype, mode: i32) void {
        comptime _ = @TypeOf(s)._is_QSize;
        qtc.QSize_Scale2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled(self: QSize, w: i32, h: i32, mode: i32) QSize {
        return .{ .ptr = qtc.QSize_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` s: QSize `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled2(self: QSize, s: anytype, mode: i32) QSize {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QSize_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#expandedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn ExpandedTo(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_ExpandedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#boundedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn BoundedTo(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_BoundedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#grownBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` m: QMargins `
    ///
    pub fn GrownBy(self: QSize, m: anytype) QSize {
        comptime _ = @TypeOf(m)._is_QMargins;
        return .{ .ptr = qtc.QSize_GrownBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` m: QMargins `
    ///
    pub fn ShrunkBy(self: QSize, m: anytype) QSize {
        comptime _ = @TypeOf(m)._is_QMargins;
        return .{ .ptr = qtc.QSize_ShrunkBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rwidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn Rwidth(self: QSize) ?*i32 {
        return @ptrCast(qtc.QSize_Rwidth(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rheight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn Rheight(self: QSize) ?*i32 {
        return @ptrCast(qtc.QSize_Rheight(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn OperatorPlusAssign(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn OperatorMinusAssign(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: QSize, c: f64) QSize {
        return .{ .ptr = qtc.QSize_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorDivideAssign(self: QSize, c: f64) QSize {
        return .{ .ptr = qtc.QSize_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#toSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn ToSizeF(self: QSize) QSizeF {
        return .{ .ptr = qtc.QSize_ToSizeF(@ptrCast(self.ptr)) };
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
    /// ` self: QSize `
    ///
    pub fn Delete(self: QSize) void {
        qtc.QSize_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)
pub const QSizeF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSizeF,

    pub const _is_QSizeF = {};

    /// New constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizeF `
    ///
    pub fn New(other: anytype) QSizeF {
        comptime _ = @TypeOf(other)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QSizeF object and invalidates the source QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizeF `
    ///
    pub fn New2(other: anytype) QSizeF {
        comptime _ = @TypeOf(other)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSizeF object.
    ///
    pub fn New3() QSizeF {
        return .{ .ptr = qtc.QSizeF_new3() };
    }

    /// New4 constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sz: QSize `
    ///
    pub fn New4(sz: anytype) QSizeF {
        comptime _ = @TypeOf(sz)._is_QSize;
        return .{ .ptr = qtc.QSizeF_new4(@ptrCast(sz.ptr)) };
    }

    /// New5 constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn New5(w: f64, h: f64) QSizeF {
        return .{ .ptr = qtc.QSizeF_new5(@bitCast(w), @bitCast(h)) };
    }

    /// New6 constructs a new QSizeF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSizeF `
    ///
    pub fn New6(param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_new6(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizeF `
    ///
    /// ` other: QSizeF `
    ///
    pub fn CopyAssign(self: QSizeF, other: QSizeF) void {
        qtc.QSizeF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizeF `
    ///
    /// ` other: QSizeF `
    ///
    pub fn MoveAssign(self: QSizeF, other: QSizeF) void {
        qtc.QSizeF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn IsNull(self: QSizeF) bool {
        return qtc.QSizeF_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn IsEmpty(self: QSizeF) bool {
        return qtc.QSizeF_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn IsValid(self: QSizeF) bool {
        return qtc.QSizeF_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn Width(self: QSizeF) f64 {
        return qtc.QSizeF_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn Height(self: QSizeF) f64 {
        return qtc.QSizeF_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` w: f64 `
    ///
    pub fn SetWidth(self: QSizeF, w: f64) void {
        qtc.QSizeF_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` h: f64 `
    ///
    pub fn SetHeight(self: QSizeF, h: f64) void {
        qtc.QSizeF_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn Transpose(self: QSizeF) void {
        qtc.QSizeF_Transpose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn Transposed(self: QSizeF) QSizeF {
        return .{ .ptr = qtc.QSizeF_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale(self: QSizeF, w: f64, h: f64, mode: i32) void {
        qtc.QSizeF_Scale(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` s: QSizeF `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scale2(self: QSizeF, s: anytype, mode: i32) void {
        comptime _ = @TypeOf(s)._is_QSizeF;
        qtc.QSizeF_Scale2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled(self: QSizeF, w: f64, h: f64, mode: i32) QSizeF {
        return .{ .ptr = qtc.QSizeF_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` s: QSizeF `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled2(self: QSizeF, s: anytype, mode: i32) QSizeF {
        comptime _ = @TypeOf(s)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn ExpandedTo(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_ExpandedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn BoundedTo(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_BoundedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#grownBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` m: QMarginsF `
    ///
    pub fn GrownBy(self: QSizeF, m: anytype) QSizeF {
        comptime _ = @TypeOf(m)._is_QMarginsF;
        return .{ .ptr = qtc.QSizeF_GrownBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` m: QMarginsF `
    ///
    pub fn ShrunkBy(self: QSizeF, m: anytype) QSizeF {
        comptime _ = @TypeOf(m)._is_QMarginsF;
        return .{ .ptr = qtc.QSizeF_ShrunkBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rwidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn Rwidth(self: QSizeF) ?*f64 {
        return @ptrCast(qtc.QSizeF_Rwidth(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rheight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn Rheight(self: QSizeF) ?*f64 {
        return @ptrCast(qtc.QSizeF_Rheight(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn OperatorPlusAssign(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn OperatorMinusAssign(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorMultiplyAssign(self: QSizeF, c: f64) QSizeF {
        return .{ .ptr = qtc.QSizeF_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` c: f64 `
    ///
    pub fn OperatorDivideAssign(self: QSizeF, c: f64) QSizeF {
        return .{ .ptr = qtc.QSizeF_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn ToSize(self: QSizeF) QSize {
        return .{ .ptr = qtc.QSizeF_ToSize(@ptrCast(self.ptr)) };
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
    /// ` self: QSizeF `
    ///
    pub fn Delete(self: QSizeF) void {
        qtc.QSizeF_Delete(@ptrCast(self.ptr));
    }
};
