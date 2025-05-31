const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qsize.html
pub const qsize = struct {
    /// New constructs a new QSize object.
    ///
    /// ``` other: QtC.QSize ```
    pub fn New(other: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new(@ptrCast(other));
    }

    /// New2 constructs a new QSize object and invalidates the source QSize object.
    ///
    /// ``` other: QtC.QSize ```
    pub fn New2(other: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSize object.
    ///
    ///
    pub fn New3() QtC.QSize {
        return qtc.QSize_new3();
    }

    /// New4 constructs a new QSize object.
    ///
    /// ``` w: i32, h: i32 ```
    pub fn New4(w: i32, h: i32) QtC.QSize {
        return qtc.QSize_new4(@intCast(w), @intCast(h));
    }

    /// New5 constructs a new QSize object.
    ///
    /// ``` param1: QtC.QSize ```
    pub fn New5(param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QSize, other: QtC.QSize ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSize_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QSize, other: QtC.QSize ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSize_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#isNull)
    ///
    /// ``` self: QtC.QSize ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSize_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#isEmpty)
    ///
    /// ``` self: QtC.QSize ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSize_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#isValid)
    ///
    /// ``` self: QtC.QSize ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSize_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#width)
    ///
    /// ``` self: QtC.QSize ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QSize_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#height)
    ///
    /// ``` self: QtC.QSize ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QSize_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#setWidth)
    ///
    /// ``` self: QtC.QSize, w: i32 ```
    pub fn SetWidth(self: ?*anyopaque, w: i32) void {
        qtc.QSize_SetWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#setHeight)
    ///
    /// ``` self: QtC.QSize, h: i32 ```
    pub fn SetHeight(self: ?*anyopaque, h: i32) void {
        qtc.QSize_SetHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#transpose)
    ///
    /// ``` self: QtC.QSize ```
    pub fn Transpose(self: ?*anyopaque) void {
        qtc.QSize_Transpose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#transposed)
    ///
    /// ``` self: QtC.QSize ```
    pub fn Transposed(self: ?*anyopaque) QtC.QSize {
        return qtc.QSize_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scale)
    ///
    /// ``` self: QtC.QSize, w: i32, h: i32, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scale(self: ?*anyopaque, w: i32, h: i32, mode: i64) void {
        qtc.QSize_Scale(@ptrCast(self), @intCast(w), @intCast(h), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scale)
    ///
    /// ``` self: QtC.QSize, s: QtC.QSize, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scale2(self: ?*anyopaque, s: ?*anyopaque, mode: i64) void {
        qtc.QSize_Scale2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scaled)
    ///
    /// ``` self: QtC.QSize, w: i32, h: i32, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32, mode: i64) QtC.QSize {
        return qtc.QSize_Scaled(@ptrCast(self), @intCast(w), @intCast(h), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scaled)
    ///
    /// ``` self: QtC.QSize, s: QtC.QSize, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, mode: i64) QtC.QSize {
        return qtc.QSize_Scaled2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#expandedTo)
    ///
    /// ``` self: QtC.QSize, param1: QtC.QSize ```
    pub fn ExpandedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_ExpandedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#boundedTo)
    ///
    /// ``` self: QtC.QSize, param1: QtC.QSize ```
    pub fn BoundedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_BoundedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#grownBy)
    ///
    /// ``` self: QtC.QSize, m: QtC.QMargins ```
    pub fn GrownBy(self: ?*anyopaque, m: QtC.QMargins) QtC.QSize {
        return qtc.QSize_GrownBy(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
    ///
    /// ``` self: QtC.QSize, m: QtC.QMargins ```
    pub fn ShrunkBy(self: ?*anyopaque, m: QtC.QMargins) QtC.QSize {
        return qtc.QSize_ShrunkBy(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator+=)
    ///
    /// ``` self: QtC.QSize, param1: QtC.QSize ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator-=)
    ///
    /// ``` self: QtC.QSize, param1: QtC.QSize ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSize {
        return qtc.QSize_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator*=)
    ///
    /// ``` self: QtC.QSize, c: f64 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QSize {
        return qtc.QSize_OperatorMultiplyAssign(@ptrCast(self), @floatCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator/=)
    ///
    /// ``` self: QtC.QSize, c: f64 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QSize {
        return qtc.QSize_OperatorDivideAssign(@ptrCast(self), @floatCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#toSizeF)
    ///
    /// ``` self: QtC.QSize ```
    pub fn ToSizeF(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QSize_ToSizeF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#dtor.QSize)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSize ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSize_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsizef.html
pub const qsizef = struct {
    /// New constructs a new QSizeF object.
    ///
    /// ``` other: QtC.QSizeF ```
    pub fn New(other: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new(@ptrCast(other));
    }

    /// New2 constructs a new QSizeF object and invalidates the source QSizeF object.
    ///
    /// ``` other: QtC.QSizeF ```
    pub fn New2(other: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSizeF object.
    ///
    ///
    pub fn New3() QtC.QSizeF {
        return qtc.QSizeF_new3();
    }

    /// New4 constructs a new QSizeF object.
    ///
    /// ``` sz: QtC.QSize ```
    pub fn New4(sz: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new4(@ptrCast(sz));
    }

    /// New5 constructs a new QSizeF object.
    ///
    /// ``` w: f64, h: f64 ```
    pub fn New5(w: f64, h: f64) QtC.QSizeF {
        return qtc.QSizeF_new5(@floatCast(w), @floatCast(h));
    }

    /// New6 constructs a new QSizeF object.
    ///
    /// ``` param1: QtC.QSizeF ```
    pub fn New6(param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QSizeF, other: QtC.QSizeF ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizeF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QSizeF, other: QtC.QSizeF ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizeF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#isNull)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSizeF_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSizeF_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#isValid)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSizeF_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#width)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QSizeF_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#height)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QSizeF_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#setWidth)
    ///
    /// ``` self: QtC.QSizeF, w: f64 ```
    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QSizeF_SetWidth(@ptrCast(self), @floatCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#setHeight)
    ///
    /// ``` self: QtC.QSizeF, h: f64 ```
    pub fn SetHeight(self: ?*anyopaque, h: f64) void {
        qtc.QSizeF_SetHeight(@ptrCast(self), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#transpose)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn Transpose(self: ?*anyopaque) void {
        qtc.QSizeF_Transpose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#transposed)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn Transposed(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scale)
    ///
    /// ``` self: QtC.QSizeF, w: f64, h: f64, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scale(self: ?*anyopaque, w: f64, h: f64, mode: i64) void {
        qtc.QSizeF_Scale(@ptrCast(self), @floatCast(w), @floatCast(h), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scale)
    ///
    /// ``` self: QtC.QSizeF, s: QtC.QSizeF, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scale2(self: ?*anyopaque, s: ?*anyopaque, mode: i64) void {
        qtc.QSizeF_Scale2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scaled)
    ///
    /// ``` self: QtC.QSizeF, w: f64, h: f64, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled(self: ?*anyopaque, w: f64, h: f64, mode: i64) QtC.QSizeF {
        return qtc.QSizeF_Scaled(@ptrCast(self), @floatCast(w), @floatCast(h), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scaled)
    ///
    /// ``` self: QtC.QSizeF, s: QtC.QSizeF, mode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, mode: i64) QtC.QSizeF {
        return qtc.QSizeF_Scaled2(@ptrCast(self), @ptrCast(s), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
    ///
    /// ``` self: QtC.QSizeF, param1: QtC.QSizeF ```
    pub fn ExpandedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_ExpandedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
    ///
    /// ``` self: QtC.QSizeF, param1: QtC.QSizeF ```
    pub fn BoundedTo(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_BoundedTo(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#grownBy)
    ///
    /// ``` self: QtC.QSizeF, m: QtC.QMarginsF ```
    pub fn GrownBy(self: ?*anyopaque, m: QtC.QMarginsF) QtC.QSizeF {
        return qtc.QSizeF_GrownBy(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
    ///
    /// ``` self: QtC.QSizeF, m: QtC.QMarginsF ```
    pub fn ShrunkBy(self: ?*anyopaque, m: QtC.QMarginsF) QtC.QSizeF {
        return qtc.QSizeF_ShrunkBy(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator+=)
    ///
    /// ``` self: QtC.QSizeF, param1: QtC.QSizeF ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator-=)
    ///
    /// ``` self: QtC.QSizeF, param1: QtC.QSizeF ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QSizeF {
        return qtc.QSizeF_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator*=)
    ///
    /// ``` self: QtC.QSizeF, c: f64 ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, c: f64) QtC.QSizeF {
        return qtc.QSizeF_OperatorMultiplyAssign(@ptrCast(self), @floatCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator/=)
    ///
    /// ``` self: QtC.QSizeF, c: f64 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, c: f64) QtC.QSizeF {
        return qtc.QSizeF_OperatorDivideAssign(@ptrCast(self), @floatCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#toSize)
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn ToSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QSizeF_ToSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#dtor.QSizeF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSizeF ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSizeF_Delete(@ptrCast(self));
    }
};
