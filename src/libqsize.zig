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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSize `
    ///
    pub fn new(other: anytype) QSize {
        comptime _ = @TypeOf(other)._is_QSize;
        return .{ .ptr = qtc.QSize_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSize object and invalidate the source QSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSize `
    ///
    pub fn new2(other: anytype) QSize {
        comptime _ = @TypeOf(other)._is_QSize;
        return .{ .ptr = qtc.QSize_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSize object in C++ memory
    ///
    pub fn new3() QSize {
        return .{ .ptr = qtc.QSize_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn new4(w: i32, h: i32) QSize {
        return .{ .ptr = qtc.QSize_new4(@bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSize `
    ///
    pub fn new5(param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSize `
    ///
    /// ` other: QSize `
    ///
    pub fn copyAssign(self: QSize, other: QSize) void {
        qtc.QSize_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSize `
    ///
    /// ` other: QSize `
    ///
    pub fn moveAssign(self: QSize, other: QSize) void {
        qtc.QSize_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn isNull(self: QSize) bool {
        return qtc.QSize_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn isEmpty(self: QSize) bool {
        return qtc.QSize_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn isValid(self: QSize) bool {
        return qtc.QSize_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn width(self: QSize) i32 {
        return qtc.QSize_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn height(self: QSize) i32 {
        return qtc.QSize_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` w: i32 `
    ///
    pub fn setWidth(self: QSize, w: i32) void {
        qtc.QSize_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` h: i32 `
    ///
    pub fn setHeight(self: QSize, h: i32) void {
        qtc.QSize_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `transpose` instead
    ///
    pub const Transpose = transpose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn transpose(self: QSize) void {
        qtc.QSize_Transpose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn transposed(self: QSize) QSize {
        return .{ .ptr = qtc.QSize_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

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
    pub fn scale(self: QSize, w: i32, h: i32, mode: i32) void {
        qtc.QSize_Scale(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `scale2` instead
    ///
    pub const Scale2 = scale2;

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
    pub fn scale2(self: QSize, s: anytype, mode: i32) void {
        comptime _ = @TypeOf(s)._is_QSize;
        qtc.QSize_Scale2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `scaled` instead
    ///
    pub const Scaled = scaled;

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
    pub fn scaled(self: QSize, w: i32, h: i32, mode: i32) QSize {
        return .{ .ptr = qtc.QSize_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled2` instead
    ///
    pub const Scaled2 = scaled2;

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
    pub fn scaled2(self: QSize, s: anytype, mode: i32) QSize {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QSize_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `expandedTo` instead
    ///
    pub const ExpandedTo = expandedTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#expandedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn expandedTo(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_ExpandedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `boundedTo` instead
    ///
    pub const BoundedTo = boundedTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#boundedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn boundedTo(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_BoundedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `grownBy` instead
    ///
    pub const GrownBy = grownBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#grownBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` m: QMargins `
    ///
    pub fn grownBy(self: QSize, m: anytype) QSize {
        comptime _ = @TypeOf(m)._is_QMargins;
        return .{ .ptr = qtc.QSize_GrownBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `shrunkBy` instead
    ///
    pub const ShrunkBy = shrunkBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` m: QMargins `
    ///
    pub fn shrunkBy(self: QSize, m: anytype) QSize {
        comptime _ = @TypeOf(m)._is_QMargins;
        return .{ .ptr = qtc.QSize_ShrunkBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `rwidth` instead
    ///
    pub const Rwidth = rwidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rwidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn rwidth(self: QSize) ?*i32 {
        return @ptrCast(qtc.QSize_Rwidth(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `rheight` instead
    ///
    pub const Rheight = rheight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rheight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn rheight(self: QSize) ?*i32 {
        return @ptrCast(qtc.QSize_Rheight(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn operatorPlusAssign(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` param1: QSize `
    ///
    pub fn operatorMinusAssign(self: QSize, param1: anytype) QSize {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QSize_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` c: f64 `
    ///
    pub fn operatorMultiplyAssign(self: QSize, c: f64) QSize {
        return .{ .ptr = qtc.QSize_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    /// ` c: f64 `
    ///
    pub fn operatorDivideAssign(self: QSize, c: f64) QSize {
        return .{ .ptr = qtc.QSize_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `toSizeF` instead
    ///
    pub const ToSizeF = toSizeF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#toSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSize `
    ///
    pub fn toSizeF(self: QSize) QSizeF {
        return .{ .ptr = qtc.QSize_ToSizeF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsize.html#dtor.QSize)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSize `
    ///
    pub fn delete(self: QSize) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizeF `
    ///
    pub fn new(other: anytype) QSizeF {
        comptime _ = @TypeOf(other)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSizeF object and invalidate the source QSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSizeF `
    ///
    pub fn new2(other: anytype) QSizeF {
        comptime _ = @TypeOf(other)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSizeF object in C++ memory
    ///
    pub fn new3() QSizeF {
        return .{ .ptr = qtc.QSizeF_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sz: QSize `
    ///
    pub fn new4(sz: anytype) QSizeF {
        comptime _ = @TypeOf(sz)._is_QSize;
        return .{ .ptr = qtc.QSizeF_new4(@ptrCast(sz.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn new5(w: f64, h: f64) QSizeF {
        return .{ .ptr = qtc.QSizeF_new5(@bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSizeF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSizeF `
    ///
    pub fn new6(param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizeF `
    ///
    /// ` other: QSizeF `
    ///
    pub fn copyAssign(self: QSizeF, other: QSizeF) void {
        qtc.QSizeF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSizeF `
    ///
    /// ` other: QSizeF `
    ///
    pub fn moveAssign(self: QSizeF, other: QSizeF) void {
        qtc.QSizeF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn isNull(self: QSizeF) bool {
        return qtc.QSizeF_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn isEmpty(self: QSizeF) bool {
        return qtc.QSizeF_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn isValid(self: QSizeF) bool {
        return qtc.QSizeF_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn width(self: QSizeF) f64 {
        return qtc.QSizeF_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn height(self: QSizeF) f64 {
        return qtc.QSizeF_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` w: f64 `
    ///
    pub fn setWidth(self: QSizeF, w: f64) void {
        qtc.QSizeF_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` h: f64 `
    ///
    pub fn setHeight(self: QSizeF, h: f64) void {
        qtc.QSizeF_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `transpose` instead
    ///
    pub const Transpose = transpose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transpose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn transpose(self: QSizeF) void {
        qtc.QSizeF_Transpose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn transposed(self: QSizeF) QSizeF {
        return .{ .ptr = qtc.QSizeF_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

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
    pub fn scale(self: QSizeF, w: f64, h: f64, mode: i32) void {
        qtc.QSizeF_Scale(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `scale2` instead
    ///
    pub const Scale2 = scale2;

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
    pub fn scale2(self: QSizeF, s: anytype, mode: i32) void {
        comptime _ = @TypeOf(s)._is_QSizeF;
        qtc.QSizeF_Scale2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `scaled` instead
    ///
    pub const Scaled = scaled;

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
    pub fn scaled(self: QSizeF, w: f64, h: f64, mode: i32) QSizeF {
        return .{ .ptr = qtc.QSizeF_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled2` instead
    ///
    pub const Scaled2 = scaled2;

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
    pub fn scaled2(self: QSizeF, s: anytype, mode: i32) QSizeF {
        comptime _ = @TypeOf(s)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `expandedTo` instead
    ///
    pub const ExpandedTo = expandedTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn expandedTo(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_ExpandedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `boundedTo` instead
    ///
    pub const BoundedTo = boundedTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn boundedTo(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_BoundedTo(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `grownBy` instead
    ///
    pub const GrownBy = grownBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#grownBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` m: QMarginsF `
    ///
    pub fn grownBy(self: QSizeF, m: anytype) QSizeF {
        comptime _ = @TypeOf(m)._is_QMarginsF;
        return .{ .ptr = qtc.QSizeF_GrownBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `shrunkBy` instead
    ///
    pub const ShrunkBy = shrunkBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` m: QMarginsF `
    ///
    pub fn shrunkBy(self: QSizeF, m: anytype) QSizeF {
        comptime _ = @TypeOf(m)._is_QMarginsF;
        return .{ .ptr = qtc.QSizeF_ShrunkBy(@ptrCast(self.ptr), @ptrCast(m.ptr)) };
    }

    /// ### DEPRECATED: Use `rwidth` instead
    ///
    pub const Rwidth = rwidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rwidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn rwidth(self: QSizeF) ?*f64 {
        return @ptrCast(qtc.QSizeF_Rwidth(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `rheight` instead
    ///
    pub const Rheight = rheight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rheight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn rheight(self: QSizeF) ?*f64 {
        return @ptrCast(qtc.QSizeF_Rheight(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn operatorPlusAssign(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` param1: QSizeF `
    ///
    pub fn operatorMinusAssign(self: QSizeF, param1: anytype) QSizeF {
        comptime _ = @TypeOf(param1)._is_QSizeF;
        return .{ .ptr = qtc.QSizeF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiplyAssign` instead
    ///
    pub const OperatorMultiplyAssign = operatorMultiplyAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2a-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` c: f64 `
    ///
    pub fn operatorMultiplyAssign(self: QSizeF, c: f64) QSizeF {
        return .{ .ptr = qtc.QSizeF_OperatorMultiplyAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `operatorDivideAssign` instead
    ///
    pub const OperatorDivideAssign = operatorDivideAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2f-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    /// ` c: f64 `
    ///
    pub fn operatorDivideAssign(self: QSizeF, c: f64) QSizeF {
        return .{ .ptr = qtc.QSizeF_OperatorDivideAssign(@ptrCast(self.ptr), @bitCast(c)) };
    }

    /// ### DEPRECATED: Use `toSize` instead
    ///
    pub const ToSize = toSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#toSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSizeF `
    ///
    pub fn toSize(self: QSizeF) QSize {
        return .{ .ptr = qtc.QSizeF_ToSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#dtor.QSizeF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSizeF `
    ///
    pub fn delete(self: QSizeF) void {
        qtc.QSizeF_Delete(@ptrCast(self.ptr));
    }
};
