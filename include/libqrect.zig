const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html)
pub const qrect = struct {
    /// New constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QRect `
    ///
    pub fn New(other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new(@ptrCast(other));
    }

    /// New2 constructs a new QRect object and invalidates the source QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QRect `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new2(@ptrCast(other));
    }

    /// New3 constructs a new QRect object.
    ///
    pub fn New3() QtC.QRect {
        return qtc.QRect_new3();
    }

    /// New4 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QtC.QPoint `
    ///
    /// ` bottomright: QtC.QPoint `
    ///
    pub fn New4(topleft: ?*anyopaque, bottomright: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new4(@ptrCast(topleft), @ptrCast(bottomright));
    }

    /// New5 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QtC.QPoint `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn New5(topleft: ?*anyopaque, size: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new5(@ptrCast(topleft), @ptrCast(size));
    }

    /// New6 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn New6(left: i32, top: i32, width: i32, height: i32) QtC.QRect {
        return qtc.QRect_new6(@bitCast(left), @bitCast(top), @bitCast(width), @bitCast(height));
    }

    /// New7 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn New7(param1: ?*anyopaque) QtC.QRect {
        return qtc.QRect_new7(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` other: QtC.QRect `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRect_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` other: QtC.QRect `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRect_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QRect_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QRect_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRect_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Left(self: ?*anyopaque) i32 {
        return qtc.QRect_Left(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Top(self: ?*anyopaque) i32 {
        return qtc.QRect_Top(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Right(self: ?*anyopaque) i32 {
        return qtc.QRect_Right(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Bottom(self: ?*anyopaque) i32 {
        return qtc.QRect_Bottom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QRect_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QRect_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetLeft(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetLeft(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetTop(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetTop(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetRight(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetRight(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetBottom(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_SetBottom(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x: i32 `
    ///
    pub fn SetX(self: ?*anyopaque, x: i32) void {
        qtc.QRect_SetX(@ptrCast(self), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` y: i32 `
    ///
    pub fn SetY(self: ?*anyopaque, y: i32) void {
        qtc.QRect_SetY(@ptrCast(self), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn SetTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn SetBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn SetTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn SetBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_SetBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn TopLeft(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_TopLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn BottomRight(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_BottomRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn TopRight(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_TopRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn BottomLeft(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_BottomLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QPoint {
        return qtc.QRect_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveLeft(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveLeft(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveTop(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveTop(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveRight(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveRight(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveBottom(self: ?*anyopaque, pos: i32) void {
        qtc.QRect_MoveBottom(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn MoveTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn MoveBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn MoveTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn MoveBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn MoveCenter(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveCenter(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translate(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QRect_Translate(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn Translate2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_Translate2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translated(self: ?*anyopaque, dx: i32, dy: i32) QtC.QRect {
        return qtc.QRect_Translated(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn Translated2(self: ?*anyopaque, p: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Translated2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn MoveTo(self: ?*anyopaque, x: i32, t: i32) void {
        qtc.QRect_MoveTo(@ptrCast(self), @bitCast(x), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn MoveTo2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRect_MoveTo2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetRect(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QRect_SetRect(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` w: *i32 `
    ///
    /// ` h: *i32 `
    ///
    pub fn GetRect(self: ?*anyopaque, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QRect_GetRect(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn SetCoords(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_SetCoords(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x1: *i32 `
    ///
    /// ` y1: *i32 `
    ///
    /// ` x2: *i32 `
    ///
    /// ` y2: *i32 `
    ///
    pub fn GetCoords(self: ?*anyopaque, x1: *i32, y1: *i32, x2: *i32, y2: *i32) void {
        qtc.QRect_GetCoords(@ptrCast(self), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#adjust)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn Adjust(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_Adjust(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#adjusted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn Adjusted(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) QtC.QRect {
        return qtc.QRect_Adjusted(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QRect_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QRect_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QRect_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` w: i32 `
    ///
    pub fn SetWidth(self: ?*anyopaque, w: i32) void {
        qtc.QRect_SetWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` h: i32 `
    ///
    pub fn SetHeight(self: ?*anyopaque, h: i32) void {
        qtc.QRect_SetHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` s: QtC.QSize `
    ///
    pub fn SetSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRect_SetSize(@ptrCast(self), @ptrCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRect_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRect_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn Contains(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRect_Contains(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    pub fn Contains2(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRect_Contains2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Contains3(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QRect_Contains3(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` proper: bool `
    ///
    pub fn Contains4(self: ?*anyopaque, x: i32, y: i32, proper: bool) bool {
        return qtc.QRect_Contains4(@ptrCast(self), @bitCast(x), @bitCast(y), proper);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` other: QtC.QRect `
    ///
    pub fn United(self: ?*anyopaque, other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_United(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` other: QtC.QRect `
    ///
    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Intersected(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRect_Intersects(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn MarginsAdded(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_MarginsAdded(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn MarginsRemoved(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_MarginsRemoved(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRect {
        return qtc.QRect_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#span)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QtC.QPoint `
    ///
    /// ` p2: QtC.QPoint `
    ///
    pub fn Span(p1: ?*anyopaque, p2: ?*anyopaque) QtC.QRect {
        return qtc.QRect_Span(@ptrCast(p1), @ptrCast(p2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#toRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn ToRectF(self: ?*anyopaque) QtC.QRectF {
        return qtc.QRect_ToRectF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` proper: bool `
    ///
    pub fn Contains22(self: ?*anyopaque, r: ?*anyopaque, proper: bool) bool {
        return qtc.QRect_Contains22(@ptrCast(self), @ptrCast(r), proper);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRect `
    ///
    /// ` p: QtC.QPoint `
    ///
    /// ` proper: bool `
    ///
    pub fn Contains23(self: ?*anyopaque, p: ?*anyopaque, proper: bool) bool {
        return qtc.QRect_Contains23(@ptrCast(self), @ptrCast(p), proper);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#dtor.QRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QRect `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QRect_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)
pub const qrectf = struct {
    /// New constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QRectF `
    ///
    pub fn New(other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new(@ptrCast(other));
    }

    /// New2 constructs a new QRectF object and invalidates the source QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QRectF `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new2(@ptrCast(other));
    }

    /// New3 constructs a new QRectF object.
    ///
    pub fn New3() QtC.QRectF {
        return qtc.QRectF_new3();
    }

    /// New4 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QtC.QPointF `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn New4(topleft: ?*anyopaque, size: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new4(@ptrCast(topleft), @ptrCast(size));
    }

    /// New5 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QtC.QPointF `
    ///
    /// ` bottomRight: QtC.QPointF `
    ///
    pub fn New5(topleft: ?*anyopaque, bottomRight: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new5(@ptrCast(topleft), @ptrCast(bottomRight));
    }

    /// New6 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn New6(left: f64, top: f64, width: f64, height: f64) QtC.QRectF {
        return qtc.QRectF_new6(@bitCast(left), @bitCast(top), @bitCast(width), @bitCast(height));
    }

    /// New7 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn New7(rect: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new7(@ptrCast(rect));
    }

    /// New8 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QRectF `
    ///
    pub fn New8(param1: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_new8(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` other: QtC.QRectF `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRectF_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` other: QtC.QRectF `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRectF_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QRectF_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QRectF_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QRectF_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Left(self: ?*anyopaque) f64 {
        return qtc.QRectF_Left(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Top(self: ?*anyopaque) f64 {
        return qtc.QRectF_Top(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Right(self: ?*anyopaque) f64 {
        return qtc.QRectF_Right(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Bottom(self: ?*anyopaque) f64 {
        return qtc.QRectF_Bottom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QRectF_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QRectF_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetLeft(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetLeft(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetTop(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetTop(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetRight(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetRight(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetBottom(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetBottom(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetX(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetX(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetY(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_SetY(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn TopLeft(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_TopLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn BottomRight(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_BottomRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn TopRight(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_TopRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn BottomLeft(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_BottomLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Center(self: ?*anyopaque) QtC.QPointF {
        return qtc.QRectF_Center(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn SetTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn SetBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn SetTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn SetBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_SetBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveLeft(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveLeft(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveTop(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveTop(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveRight(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveRight(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveBottom(self: ?*anyopaque, pos: f64) void {
        qtc.QRectF_MoveBottom(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn MoveTopLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTopLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn MoveBottomRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveBottomRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn MoveTopRight(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTopRight(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn MoveBottomLeft(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveBottomLeft(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn MoveCenter(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveCenter(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QRectF_Translate(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn Translate2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_Translate2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translated(self: ?*anyopaque, dx: f64, dy: f64) QtC.QRectF {
        return qtc.QRectF_Translated(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn Translated2(self: ?*anyopaque, p: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Translated2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Transposed(self: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Transposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MoveTo(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QRectF_MoveTo(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn MoveTo2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRectF_MoveTo2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetRect(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QRectF_SetRect(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x: *f64 `
    ///
    /// ` y: *f64 `
    ///
    /// ` w: *f64 `
    ///
    /// ` h: *f64 `
    ///
    pub fn GetRect(self: ?*anyopaque, x: *f64, y: *f64, w: *f64, h: *f64) void {
        qtc.QRectF_GetRect(@ptrCast(self), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn SetCoords(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_SetCoords(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x1: *f64 `
    ///
    /// ` y1: *f64 `
    ///
    /// ` x2: *f64 `
    ///
    /// ` y2: *f64 `
    ///
    pub fn GetCoords(self: ?*anyopaque, x1: *f64, y1: *f64, x2: *f64, y2: *f64) void {
        qtc.QRectF_GetCoords(@ptrCast(self), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#adjust)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn Adjust(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_Adjust(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#adjusted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn Adjusted(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) QtC.QRectF {
        return qtc.QRectF_Adjusted(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QRectF_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QRectF_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QRectF_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` w: f64 `
    ///
    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QRectF_SetWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` h: f64 `
    ///
    pub fn SetHeight(self: ?*anyopaque, h: f64) void {
        qtc.QRectF_SetHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` s: QtC.QSizeF `
    ///
    pub fn SetSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QRectF_SetSize(@ptrCast(self), @ptrCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` r: QtC.QRectF `
    ///
    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` r: QtC.QRectF `
    ///
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` r: QtC.QRectF `
    ///
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRectF_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` r: QtC.QRectF `
    ///
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRectF_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` r: QtC.QRectF `
    ///
    pub fn Contains(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRectF_Contains(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` p: QtC.QPointF `
    ///
    pub fn Contains2(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRectF_Contains2(@ptrCast(self), @ptrCast(p));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Contains3(self: ?*anyopaque, x: f64, y: f64) bool {
        return qtc.QRectF_Contains3(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` other: QtC.QRectF `
    ///
    pub fn United(self: ?*anyopaque, other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_United(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` other: QtC.QRectF `
    ///
    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_Intersected(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` r: QtC.QRectF `
    ///
    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRectF_Intersects(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn MarginsAdded(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_MarginsAdded(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn MarginsRemoved(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_MarginsRemoved(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorPlusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, margins: ?*anyopaque) QtC.QRectF {
        return qtc.QRectF_OperatorMinusAssign(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn ToRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QRectF_ToRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toAlignedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn ToAlignedRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QRectF_ToAlignedRect(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#dtor.QRectF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QRectF `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QRectF_Delete(@ptrCast(self));
    }
};
