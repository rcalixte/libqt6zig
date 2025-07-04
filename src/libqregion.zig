const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qregion_enums = enums;

/// https://doc.qt.io/qt-6/qregion.html
pub const qregion = struct {
    /// New constructs a new QRegion object.
    ///
    ///
    pub fn New() QtC.QRegion {
        return qtc.QRegion_new();
    }

    /// New2 constructs a new QRegion object.
    ///
    /// ``` x: i32, y: i32, w: i32, h: i32 ```
    pub fn New2(x: i32, y: i32, w: i32, h: i32) QtC.QRegion {
        return qtc.QRegion_new2(@intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// New3 constructs a new QRegion object.
    ///
    /// ``` r: QtC.QRect ```
    pub fn New3(r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new3(@ptrCast(r));
    }

    /// New4 constructs a new QRegion object.
    ///
    /// ``` region: QtC.QRegion ```
    pub fn New4(region: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new4(@ptrCast(region));
    }

    /// New5 constructs a new QRegion object.
    ///
    /// ``` bitmap: QtC.QBitmap ```
    pub fn New5(bitmap: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new5(@ptrCast(bitmap));
    }

    /// New6 constructs a new QRegion object.
    ///
    /// ``` x: i32, y: i32, w: i32, h: i32, t: qregion_enums.RegionType ```
    pub fn New6(x: i32, y: i32, w: i32, h: i32, t: i64) QtC.QRegion {
        return qtc.QRegion_new6(@intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(t));
    }

    /// New7 constructs a new QRegion object.
    ///
    /// ``` r: QtC.QRect, t: qregion_enums.RegionType ```
    pub fn New7(r: ?*anyopaque, t: i64) QtC.QRegion {
        return qtc.QRegion_new7(@ptrCast(r), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator=)
    ///
    /// ``` self: QtC.QRegion, param1: QtC.QRegion ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRegion_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#swap)
    ///
    /// ``` self: QtC.QRegion, other: QtC.QRegion ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegion_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#isEmpty)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QRegion_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#isNull)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QRegion_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#begin)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn Begin(self: ?*anyopaque) QtC.QRect {
        return qtc.QRegion_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#cbegin)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn Cbegin(self: ?*anyopaque) QtC.QRect {
        return qtc.QRegion_Cbegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#end)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn End(self: ?*anyopaque) QtC.QRect {
        return qtc.QRegion_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#cend)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn Cend(self: ?*anyopaque) QtC.QRect {
        return qtc.QRegion_Cend(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#contains)
    ///
    /// ``` self: QtC.QRegion, p: QtC.QPoint ```
    pub fn Contains(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRegion_Contains(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#contains)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn ContainsWithQRect(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_ContainsWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translate)
    ///
    /// ``` self: QtC.QRegion, dx: i32, dy: i32 ```
    pub fn Translate(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QRegion_Translate(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translate)
    ///
    /// ``` self: QtC.QRegion, p: QtC.QPoint ```
    pub fn TranslateWithQPoint(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRegion_TranslateWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translated)
    ///
    /// ``` self: QtC.QRegion, dx: i32, dy: i32 ```
    pub fn Translated(self: ?*anyopaque, dx: i32, dy: i32) QtC.QRegion {
        return qtc.QRegion_Translated(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translated)
    ///
    /// ``` self: QtC.QRegion, p: QtC.QPoint ```
    pub fn TranslatedWithQPoint(self: ?*anyopaque, p: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_TranslatedWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#united)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn United(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_United(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#united)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn UnitedWithQRect(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_UnitedWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersected)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn Intersected(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Intersected(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersected)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn IntersectedWithQRect(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_IntersectedWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#subtracted)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn Subtracted(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Subtracted(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#xored)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn Xored(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Xored(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersects)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_Intersects(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersects)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn IntersectsWithQRect(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_IntersectsWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#boundingRect)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QRegion_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#setRects)
    ///
    /// ``` self: QtC.QRegion, rect: QtC.QRect, num: i32 ```
    pub fn SetRects(self: ?*anyopaque, rect: ?*anyopaque, num: i32) void {
        qtc.QRegion_SetRects(@ptrCast(self), @ptrCast(rect), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#rectCount)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn RectCount(self: ?*anyopaque) i32 {
        return qtc.QRegion_RectCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator|)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorPlus(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlus(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn OperatorPlusWithQRect(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlusWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn OperatorBitwiseAndWithQRect(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseAndWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator-)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorMinus(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorMinus(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator^)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorBitwiseNot(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseNot(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator|=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlusAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn OperatorPlusAssignWithQRect(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlusAssignWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRect ```
    pub fn OperatorBitwiseAndAssignWithQRect(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseAndAssignWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator-=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorMinusAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator^=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorBitwiseNotAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseNotAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator==)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorEqual(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_OperatorEqual(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator!=)
    ///
    /// ``` self: QtC.QRegion, r: QtC.QRegion ```
    pub fn OperatorNotEqual(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_OperatorNotEqual(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator QVariant)
    ///
    /// ``` self: QtC.QRegion ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QRegion_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#dtor.QRegion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRegion ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegion_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregion.html#types
pub const enums = struct {
    pub const RegionType = enum {
        pub const Rectangle: i32 = 0;
        pub const Ellipse: i32 = 1;
    };
};
