const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qrect.html
pub const qrect = struct {
    /// New constructs a new QRect object.
    ///
    /// ``` other: QtC.QRect ```
    pub fn New(other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new(@ptrCast(other));
    }

    /// New2 constructs a new QRect object and invalidates the source QRect object.
    ///
    /// ``` other: QtC.QRect ```
    pub fn New2(other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new2(@ptrCast(other));
    }

    /// New3 constructs a new QRect object.
    ///
    ///
    pub fn New3() QtC.QRect {
        return qtc.QRect_new3();
    }

    /// New4 constructs a new QRect object.
    ///
    /// ``` topleft: QtC.QPoint, bottomright: QtC.QPoint ```
    pub fn New4(topleft: ?*anyopaque, bottomright: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new4(@ptrCast(topleft), @ptrCast(bottomright));
    }

    /// New5 constructs a new QRect object.
    ///
    /// ``` topleft: QtC.QPoint, size: QtC.QSize ```
    pub fn New5(topleft: ?*anyopaque, size: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new5(@ptrCast(topleft), @ptrCast(size));
    }

    /// New6 constructs a new QRect object.
    ///
    /// ``` left: i32, top: i32, width: i32, height: i32 ```
    pub fn New6(left: i32, top: i32, width: i32, height: i32) QtC.QRect {
        return qtc.QRect_new6(@intCast(left), @intCast(top), @intCast(width), @intCast(height));
    }

    /// New7 constructs a new QRect object.
    ///
    /// ``` param1: QtC.QRect ```
    pub fn New7(param1: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QRect, other: QtC.QRect ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRect_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QRect, other: QtC.QRect ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRect_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#isNull)
    ///
    /// ``` self: QtC.QRect ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QRect_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#isEmpty)
    ///
    /// ``` self: QtC.QRect ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QRect_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#isValid)
    ///
    /// ``` self: QtC.QRect ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRect_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#left)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Left(self: ?*anyopaque) i32 {
        return qtc.QRect_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#top)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Top(self: ?*anyopaque) i32 {
        return qtc.QRect_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#right)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Right(self: ?*anyopaque) i32 {
        return qtc.QRect_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#bottom)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Bottom(self: ?*anyopaque) i32 {
        return qtc.QRect_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#normalized)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Normalized(self: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#x)
    ///
    /// ``` self: QtC.QRect ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QRect_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#y)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QRect_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setLeft)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn SetLeft(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetLeft(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setTop)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn SetTop(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetTop(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setRight)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn SetRight(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetRight(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setBottom)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn SetBottom(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetBottom(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setX)
    ///
    /// ``` self: QtC.QRect, x: i32 ```
    pub fn SetX(self: ?*anyopaque, x: i32) void {
        qtc.QRect_SetX(@ptrCast(self), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setY)
    ///
    /// ``` self: QtC.QRect, y: i32 ```
    pub fn SetY(self: ?*anyopaque, y: i32) void {
        qtc.QRect_SetY(@ptrCast(self), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setTopLeft)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn SetTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setBottomRight)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn SetBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setTopRight)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn SetTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setBottomLeft)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn SetBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#topLeft)
    ///
    /// ``` self: QtC.QRect ```
    pub fn TopLeft(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_TopLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#bottomRight)
    ///
    /// ``` self: QtC.QRect ```
    pub fn BottomRight(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_BottomRight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#topRight)
    ///
    /// ``` self: QtC.QRect ```
    pub fn TopRight(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_TopRight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#bottomLeft)
    ///
    /// ``` self: QtC.QRect ```
    pub fn BottomLeft(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_BottomLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#center)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Center(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_Center(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveLeft)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn MoveLeft(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveLeft(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTop)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn MoveTop(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveTop(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveRight)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn MoveRight(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveRight(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveBottom)
    ///
    /// ``` self: QtC.QRect, pos: i32 ```
    pub fn MoveBottom(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveBottom(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTopLeft)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn MoveTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveBottomRight)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn MoveBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTopRight)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn MoveTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveBottomLeft)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn MoveBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveCenter)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn MoveCenter(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveCenter(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ``` self: QtC.QRect, dx: i32, dy: i32 ```
    pub fn Translate(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QRect_Translate(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn TranslateWithQPoint(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_TranslateWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ``` self: QtC.QRect, dx: i32, dy: i32 ```
    pub fn Translated(self: ?*anyopaque, dx: i32, dy: i32) QtC.QRect {
        return qtc.QRect_Translated(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn TranslatedWithQPoint(self: ?*anyopaque, p: ?*anyopaque) QtC.QRect {
        return qtc.QRect_TranslatedWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#transposed)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Transposed(self: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ``` self: QtC.QRect, x: i32, t: i32 ```
    pub fn MoveTo(self: ?*anyopaque, x: i32, t: i32) void {
        qtc.QRect_MoveTo(@ptrCast(self), @intCast(x), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn MoveToWithQPoint(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveToWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setRect)
    ///
    /// ``` self: QtC.QRect, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetRect(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QRect_SetRect(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#getRect)
    ///
    /// ``` self: QtC.QRect, x: ?*i32, y: ?*i32, w: ?*i32, h: ?*i32 ```
    pub fn GetRect(self: ?*anyopaque, x: ?*anyopaque, y: ?*anyopaque, w: ?*anyopaque, h: ?*anyopaque) void {
        qtc.QRect_GetRect(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setCoords)
    ///
    /// ``` self: QtC.QRect, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn SetCoords(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_SetCoords(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#getCoords)
    ///
    /// ``` self: QtC.QRect, x1: ?*i32, y1: ?*i32, x2: ?*i32, y2: ?*i32 ```
    pub fn GetCoords(self: ?*anyopaque, x1: ?*anyopaque, y1: ?*anyopaque, x2: ?*anyopaque, y2: ?*anyopaque) void {
        qtc.QRect_GetCoords(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#adjust)
    ///
    /// ``` self: QtC.QRect, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn Adjust(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_Adjust(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#adjusted)
    ///
    /// ``` self: QtC.QRect, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn Adjusted(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) QtC.QRect {
        return qtc.QRect_Adjusted(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#size)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QRect_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#width)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QRect_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#height)
    ///
    /// ``` self: QtC.QRect ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QRect_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setWidth)
    ///
    /// ``` self: QtC.QRect, w: i32 ```
    pub fn SetWidth(self: ?*anyopaque, w: i32) void {
        qtc.QRect_SetWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setHeight)
    ///
    /// ``` self: QtC.QRect, h: i32 ```
    pub fn SetHeight(self: ?*anyopaque, h: i32) void {
        qtc.QRect_SetHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setSize)
    ///
    /// ``` self: QtC.QRect, s: QtC.QSize ```
    pub fn SetSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRect_SetSize(@ptrCast(self), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator|)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect ```
    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator&)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect ```
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator|=)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect ```
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRect_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator&=)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect ```
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRect_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect ```
    pub fn Contains(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRect_Contains(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint ```
    pub fn ContainsWithQPoint(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRect_ContainsWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ``` self: QtC.QRect, x: i32, y: i32 ```
    pub fn Contains2(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QRect_Contains2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ``` self: QtC.QRect, x: i32, y: i32, proper: bool ```
    pub fn Contains3(self: ?*anyopaque, x: i32, y: i32, proper: bool) bool {
        return qtc.QRect_Contains3(@ptrCast(self), @intCast(x), @intCast(y), proper);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#united)
    ///
    /// ``` self: QtC.QRect, other: QtC.QRect ```
    pub fn United(self: ?*anyopaque, other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_United(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#intersected)
    ///
    /// ``` self: QtC.QRect, other: QtC.QRect ```
    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Intersected(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#intersects)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect ```
    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRect_Intersects(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#marginsAdded)
    ///
    /// ``` self: QtC.QRect, margins: QtC.QMargins ```
    pub fn MarginsAdded(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_MarginsAdded(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#marginsRemoved)
    ///
    /// ``` self: QtC.QRect, margins: QtC.QMargins ```
    pub fn MarginsRemoved(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_MarginsRemoved(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator+=)
    ///
    /// ``` self: QtC.QRect, margins: QtC.QMargins ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator-=)
    ///
    /// ``` self: QtC.QRect, margins: QtC.QMargins ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#span)
    ///
    /// ``` p1: QtC.QPoint, p2: QtC.QPoint ```
    pub fn Span(p1: ?*anyopaque, p2: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Span(@ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#toRectF)
    ///
    /// ``` self: QtC.QRect ```
    pub fn ToRectF(self: ?*anyopaque) QtC.QRectF {
        return qtc.QRect_ToRectF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ``` self: QtC.QRect, r: QtC.QRect, proper: bool ```
    pub fn Contains22(self: ?*anyopaque, r: ?*anyopaque, proper: bool) bool {
        return qtc.QRect_Contains22(@ptrCast(self), @ptrCast(r), proper);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ``` self: QtC.QRect, p: QtC.QPoint, proper: bool ```
    pub fn Contains23(self: ?*anyopaque, p: ?*anyopaque, proper: bool) bool {
        return qtc.QRect_Contains23(@ptrCast(self), @ptrCast(p), proper);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#dtor.QRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrectf.html
pub const qrectf = struct {
    /// New constructs a new QRectF object.
    ///
    /// ``` other: QtC.QRectF ```
    pub fn New(other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new(@ptrCast(other));
    }

    /// New2 constructs a new QRectF object and invalidates the source QRectF object.
    ///
    /// ``` other: QtC.QRectF ```
    pub fn New2(other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QRectF object.
    ///
    ///
    pub fn New3() QtC.QRectF {
        return qtc.QRectF_new3();
    }

    /// New4 constructs a new QRectF object.
    ///
    /// ``` topleft: QtC.QPointF, size: QtC.QSizeF ```
    pub fn New4(topleft: ?*anyopaque, size: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new4(@ptrCast(topleft), @ptrCast(size));
    }

    /// New5 constructs a new QRectF object.
    ///
    /// ``` topleft: QtC.QPointF, bottomRight: QtC.QPointF ```
    pub fn New5(topleft: ?*anyopaque, bottomRight: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new5(@ptrCast(topleft), @ptrCast(bottomRight));
    }

    /// New6 constructs a new QRectF object.
    ///
    /// ``` left: f64, top: f64, width: f64, height: f64 ```
    pub fn New6(left: f64, top: f64, width: f64, height: f64) QtC.QRectF {
        return qtc.QRectF_new6(@floatCast(left), @floatCast(top), @floatCast(width), @floatCast(height));
    }

    /// New7 constructs a new QRectF object.
    ///
    /// ``` rect: QtC.QRect ```
    pub fn New7(rect: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new7(@ptrCast(rect));
    }

    /// New8 constructs a new QRectF object.
    ///
    /// ``` param1: QtC.QRectF ```
    pub fn New8(param1: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new8(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QRectF, other: QtC.QRectF ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRectF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QRectF, other: QtC.QRectF ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRectF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#isNull)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QRectF_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#isEmpty)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QRectF_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#isValid)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRectF_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#normalized)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Normalized(self: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#left)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Left(self: ?*anyopaque) f64 {
        return qtc.QRectF_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#top)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Top(self: ?*anyopaque) f64 {
        return qtc.QRectF_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#right)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Right(self: ?*anyopaque) f64 {
        return qtc.QRectF_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#bottom)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Bottom(self: ?*anyopaque) f64 {
        return qtc.QRectF_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#x)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QRectF_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#y)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QRectF_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setLeft)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn SetLeft(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetLeft(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setTop)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn SetTop(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetTop(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setRight)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn SetRight(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetRight(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setBottom)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn SetBottom(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetBottom(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setX)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn SetX(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetX(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setY)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn SetY(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetY(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#topLeft)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn TopLeft(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_TopLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#bottomRight)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn BottomRight(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_BottomRight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#topRight)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn TopRight(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_TopRight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#bottomLeft)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn BottomLeft(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_BottomLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#center)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Center(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_Center(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setTopLeft)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn SetTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setBottomRight)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn SetBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setTopRight)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn SetTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setBottomLeft)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn SetBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveLeft)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn MoveLeft(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveLeft(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTop)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn MoveTop(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveTop(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveRight)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn MoveRight(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveRight(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveBottom)
    ///
    /// ``` self: QtC.QRectF, pos: f64 ```
    pub fn MoveBottom(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveBottom(@ptrCast(self), @floatCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTopLeft)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn MoveTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveBottomRight)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn MoveBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTopRight)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn MoveTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveBottomLeft)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn MoveBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveCenter)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn MoveCenter(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveCenter(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ``` self: QtC.QRectF, dx: f64, dy: f64 ```
    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QRectF_Translate(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn TranslateWithQPointF(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_TranslateWithQPointF(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ``` self: QtC.QRectF, dx: f64, dy: f64 ```
    pub fn Translated(self: ?*anyopaque, dx: f64, dy: f64) QtC.QRectF {
        return qtc.QRectF_Translated(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn TranslatedWithQPointF(self: ?*anyopaque, p: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_TranslatedWithQPointF(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#transposed)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Transposed(self: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ``` self: QtC.QRectF, x: f64, y: f64 ```
    pub fn MoveTo(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QRectF_MoveTo(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn MoveToWithQPointF(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveToWithQPointF(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setRect)
    ///
    /// ``` self: QtC.QRectF, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetRect(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QRectF_SetRect(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#getRect)
    ///
    /// ``` self: QtC.QRectF, x: ?*f64, y: ?*f64, w: ?*f64, h: ?*f64 ```
    pub fn GetRect(self: ?*anyopaque, x: ?*anyopaque, y: ?*anyopaque, w: ?*anyopaque, h: ?*anyopaque) void {
        qtc.QRectF_GetRect(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setCoords)
    ///
    /// ``` self: QtC.QRectF, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn SetCoords(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_SetCoords(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#getCoords)
    ///
    /// ``` self: QtC.QRectF, x1: ?*f64, y1: ?*f64, x2: ?*f64, y2: ?*f64 ```
    pub fn GetCoords(self: ?*anyopaque, x1: ?*anyopaque, y1: ?*anyopaque, x2: ?*anyopaque, y2: ?*anyopaque) void {
        qtc.QRectF_GetCoords(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#adjust)
    ///
    /// ``` self: QtC.QRectF, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn Adjust(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_Adjust(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#adjusted)
    ///
    /// ``` self: QtC.QRectF, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn Adjusted(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) QtC.QRectF {
        return qtc.QRectF_Adjusted(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#size)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QRectF_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#width)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QRectF_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#height)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QRectF_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setWidth)
    ///
    /// ``` self: QtC.QRectF, w: f64 ```
    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QRectF_SetWidth(@ptrCast(self), @floatCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setHeight)
    ///
    /// ``` self: QtC.QRectF, h: f64 ```
    pub fn SetHeight(self: ?*anyopaque, h: f64) void {
        qtc.QRectF_SetHeight(@ptrCast(self), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setSize)
    ///
    /// ``` self: QtC.QRectF, s: QtC.QSizeF ```
    pub fn SetSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRectF_SetSize(@ptrCast(self), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator|)
    ///
    /// ``` self: QtC.QRectF, r: QtC.QRectF ```
    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator&)
    ///
    /// ``` self: QtC.QRectF, r: QtC.QRectF ```
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator|=)
    ///
    /// ``` self: QtC.QRectF, r: QtC.QRectF ```
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRectF_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator&=)
    ///
    /// ``` self: QtC.QRectF, r: QtC.QRectF ```
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRectF_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ``` self: QtC.QRectF, r: QtC.QRectF ```
    pub fn Contains(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRectF_Contains(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ``` self: QtC.QRectF, p: QtC.QPointF ```
    pub fn ContainsWithQPointF(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRectF_ContainsWithQPointF(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ``` self: QtC.QRectF, x: f64, y: f64 ```
    pub fn Contains2(self: ?*anyopaque, x: f64, y: f64) bool {
        return qtc.QRectF_Contains2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#united)
    ///
    /// ``` self: QtC.QRectF, other: QtC.QRectF ```
    pub fn United(self: ?*anyopaque, other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_United(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#intersected)
    ///
    /// ``` self: QtC.QRectF, other: QtC.QRectF ```
    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Intersected(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#intersects)
    ///
    /// ``` self: QtC.QRectF, r: QtC.QRectF ```
    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRectF_Intersects(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#marginsAdded)
    ///
    /// ``` self: QtC.QRectF, margins: QtC.QMarginsF ```
    pub fn MarginsAdded(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_MarginsAdded(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#marginsRemoved)
    ///
    /// ``` self: QtC.QRectF, margins: QtC.QMarginsF ```
    pub fn MarginsRemoved(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_MarginsRemoved(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator+=)
    ///
    /// ``` self: QtC.QRectF, margins: QtC.QMarginsF ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator-=)
    ///
    /// ``` self: QtC.QRectF, margins: QtC.QMarginsF ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#toRect)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn ToRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QRectF_ToRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#toAlignedRect)
    ///
    /// ``` self: QtC.QRectF ```
    pub fn ToAlignedRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QRectF_ToAlignedRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#dtor.QRectF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRectF ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRectF_Delete(@ptrCast(self));
    }
};
