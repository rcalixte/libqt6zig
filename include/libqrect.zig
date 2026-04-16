const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMargins = @import("libqt6").QMargins;
const QMarginsF = @import("libqt6").QMarginsF;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html)
pub const QRect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRect,

    pub const _is_QRect = {};

    /// New constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRect `
    ///
    pub fn New(other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QRect object and invalidates the source QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRect `
    ///
    pub fn New2(other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QRect object.
    ///
    pub fn New3() QRect {
        return .{ .ptr = qtc.QRect_new3() };
    }

    /// New4 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPoint `
    ///
    /// ` bottomright: QPoint `
    ///
    pub fn New4(topleft: anytype, bottomright: anytype) QRect {
        comptime _ = @TypeOf(topleft)._is_QPoint;
        comptime _ = @TypeOf(bottomright)._is_QPoint;
        return .{ .ptr = qtc.QRect_new4(@ptrCast(topleft.ptr), @ptrCast(bottomright.ptr)) };
    }

    /// New5 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPoint `
    ///
    /// ` size: QSize `
    ///
    pub fn New5(topleft: anytype, size: anytype) QRect {
        comptime _ = @TypeOf(topleft)._is_QPoint;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QRect_new5(@ptrCast(topleft.ptr), @ptrCast(size.ptr)) };
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
    pub fn New6(left: i32, top: i32, width: i32, height: i32) QRect {
        return .{ .ptr = qtc.QRect_new6(@bitCast(left), @bitCast(top), @bitCast(width), @bitCast(height)) };
    }

    /// New7 constructs a new QRect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRect `
    ///
    pub fn New7(param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QRect_new7(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn CopyAssign(self: QRect, other: QRect) void {
        qtc.QRect_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn MoveAssign(self: QRect, other: QRect) void {
        qtc.QRect_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn IsNull(self: QRect) bool {
        return qtc.QRect_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn IsEmpty(self: QRect) bool {
        return qtc.QRect_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn IsValid(self: QRect) bool {
        return qtc.QRect_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Left(self: QRect) i32 {
        return qtc.QRect_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Top(self: QRect) i32 {
        return qtc.QRect_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Right(self: QRect) i32 {
        return qtc.QRect_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Bottom(self: QRect) i32 {
        return qtc.QRect_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Normalized(self: QRect) QRect {
        return .{ .ptr = qtc.QRect_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn X(self: QRect) i32 {
        return qtc.QRect_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Y(self: QRect) i32 {
        return qtc.QRect_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetLeft(self: QRect, pos: i32) void {
        qtc.QRect_SetLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetTop(self: QRect, pos: i32) void {
        qtc.QRect_SetTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetRight(self: QRect, pos: i32) void {
        qtc.QRect_SetRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn SetBottom(self: QRect, pos: i32) void {
        qtc.QRect_SetBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x: i32 `
    ///
    pub fn SetX(self: QRect, x: i32) void {
        qtc.QRect_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` y: i32 `
    ///
    pub fn SetY(self: QRect, y: i32) void {
        qtc.QRect_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn SetTopLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn SetBottomRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn SetTopRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn SetBottomLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn TopLeft(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn BottomRight(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn TopRight(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_TopRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn BottomLeft(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_BottomLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Center(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveLeft(self: QRect, pos: i32) void {
        qtc.QRect_MoveLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveTop(self: QRect, pos: i32) void {
        qtc.QRect_MoveTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveRight(self: QRect, pos: i32) void {
        qtc.QRect_MoveRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn MoveBottom(self: QRect, pos: i32) void {
        qtc.QRect_MoveBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn MoveTopLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn MoveBottomRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn MoveTopRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn MoveBottomLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn MoveCenter(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveCenter(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translate(self: QRect, dx: i32, dy: i32) void {
        qtc.QRect_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn Translate2(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_Translate2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Translated(self: QRect, dx: i32, dy: i32) QRect {
        return .{ .ptr = qtc.QRect_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn Translated2(self: QRect, p: anytype) QRect {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QRect_Translated2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Transposed(self: QRect) QRect {
        return .{ .ptr = qtc.QRect_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn MoveTo(self: QRect, x: i32, t: i32) void {
        qtc.QRect_MoveTo(@ptrCast(self.ptr), @bitCast(x), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn MoveTo2(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveTo2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetRect(self: QRect, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QRect_SetRect(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` w: *i32 `
    ///
    /// ` h: *i32 `
    ///
    pub fn GetRect(self: QRect, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QRect_GetRect(@ptrCast(self.ptr), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn SetCoords(self: QRect, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_SetCoords(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x1: *i32 `
    ///
    /// ` y1: *i32 `
    ///
    /// ` x2: *i32 `
    ///
    /// ` y2: *i32 `
    ///
    pub fn GetCoords(self: QRect, x1: *i32, y1: *i32, x2: *i32, y2: *i32) void {
        qtc.QRect_GetCoords(@ptrCast(self.ptr), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#adjust)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn Adjust(self: QRect, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_Adjust(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#adjusted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn Adjusted(self: QRect, x1: i32, y1: i32, x2: i32, y2: i32) QRect {
        return .{ .ptr = qtc.QRect_Adjusted(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Size(self: QRect) QSize {
        return .{ .ptr = qtc.QRect_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Width(self: QRect) i32 {
        return qtc.QRect_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn Height(self: QRect) i32 {
        return qtc.QRect_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` w: i32 `
    ///
    pub fn SetWidth(self: QRect, w: i32) void {
        qtc.QRect_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` h: i32 `
    ///
    pub fn SetHeight(self: QRect, h: i32) void {
        qtc.QRect_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` s: QSize `
    ///
    pub fn SetSize(self: QRect, s: anytype) void {
        comptime _ = @TypeOf(s)._is_QSize;
        qtc.QRect_SetSize(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorBitwiseOr(self: QRect, r: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRect_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorBitwiseAnd(self: QRect, r: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRect_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorBitwiseOrAssign(self: QRect, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QRect_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn OperatorBitwiseAndAssign(self: QRect, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QRect_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn Contains(self: QRect, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRect_Contains(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn Contains2(self: QRect, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPoint;
        return qtc.QRect_Contains2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Contains3(self: QRect, x: i32, y: i32) bool {
        return qtc.QRect_Contains3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` proper: bool `
    ///
    pub fn Contains4(self: QRect, x: i32, y: i32, proper: bool) bool {
        return qtc.QRect_Contains4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), proper);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn United(self: QRect, other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_United(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn Intersected(self: QRect, other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_Intersected(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn Intersects(self: QRect, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRect_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn MarginsAdded(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_MarginsAdded(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn MarginsRemoved(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_MarginsRemoved(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn OperatorPlusAssign(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn OperatorMinusAssign(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#span)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn Span(p1: anytype, p2: anytype) QRect {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        return .{ .ptr = qtc.QRect_Span(@ptrCast(p1.ptr), @ptrCast(p2.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#toRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn ToRectF(self: QRect) QRectF {
        return .{ .ptr = qtc.QRect_ToRectF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    /// ` proper: bool `
    ///
    pub fn Contains22(self: QRect, r: anytype, proper: bool) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRect_Contains22(@ptrCast(self.ptr), @ptrCast(r.ptr), proper);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    /// ` proper: bool `
    ///
    pub fn Contains23(self: QRect, p: anytype, proper: bool) bool {
        comptime _ = @TypeOf(p)._is_QPoint;
        return qtc.QRect_Contains23(@ptrCast(self.ptr), @ptrCast(p.ptr), proper);
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
    /// ` self: QRect `
    ///
    pub fn Delete(self: QRect) void {
        qtc.QRect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)
pub const QRectF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRectF,

    pub const _is_QRectF = {};

    /// New constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRectF `
    ///
    pub fn New(other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QRectF object and invalidates the source QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRectF `
    ///
    pub fn New2(other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QRectF object.
    ///
    pub fn New3() QRectF {
        return .{ .ptr = qtc.QRectF_new3() };
    }

    /// New4 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPointF `
    ///
    /// ` size: QSizeF `
    ///
    pub fn New4(topleft: anytype, size: anytype) QRectF {
        comptime _ = @TypeOf(topleft)._is_QPointF;
        comptime _ = @TypeOf(size)._is_QSizeF;
        return .{ .ptr = qtc.QRectF_new4(@ptrCast(topleft.ptr), @ptrCast(size.ptr)) };
    }

    /// New5 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPointF `
    ///
    /// ` bottomRight: QPointF `
    ///
    pub fn New5(topleft: anytype, bottomRight: anytype) QRectF {
        comptime _ = @TypeOf(topleft)._is_QPointF;
        comptime _ = @TypeOf(bottomRight)._is_QPointF;
        return .{ .ptr = qtc.QRectF_new5(@ptrCast(topleft.ptr), @ptrCast(bottomRight.ptr)) };
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
    pub fn New6(left: f64, top: f64, width: f64, height: f64) QRectF {
        return .{ .ptr = qtc.QRectF_new6(@bitCast(left), @bitCast(top), @bitCast(width), @bitCast(height)) };
    }

    /// New7 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    pub fn New7(rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QRectF_new7(@ptrCast(rect.ptr)) };
    }

    /// New8 constructs a new QRectF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRectF `
    ///
    pub fn New8(param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QRectF;
        return .{ .ptr = qtc.QRectF_new8(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn CopyAssign(self: QRectF, other: QRectF) void {
        qtc.QRectF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn MoveAssign(self: QRectF, other: QRectF) void {
        qtc.QRectF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn IsNull(self: QRectF) bool {
        return qtc.QRectF_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn IsEmpty(self: QRectF) bool {
        return qtc.QRectF_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn IsValid(self: QRectF) bool {
        return qtc.QRectF_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Normalized(self: QRectF) QRectF {
        return .{ .ptr = qtc.QRectF_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Left(self: QRectF) f64 {
        return qtc.QRectF_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Top(self: QRectF) f64 {
        return qtc.QRectF_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Right(self: QRectF) f64 {
        return qtc.QRectF_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Bottom(self: QRectF) f64 {
        return qtc.QRectF_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn X(self: QRectF) f64 {
        return qtc.QRectF_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Y(self: QRectF) f64 {
        return qtc.QRectF_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetLeft(self: QRectF, pos: f64) void {
        qtc.QRectF_SetLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetTop(self: QRectF, pos: f64) void {
        qtc.QRectF_SetTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetRight(self: QRectF, pos: f64) void {
        qtc.QRectF_SetRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetBottom(self: QRectF, pos: f64) void {
        qtc.QRectF_SetBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetX(self: QRectF, pos: f64) void {
        qtc.QRectF_SetX(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn SetY(self: QRectF, pos: f64) void {
        qtc.QRectF_SetY(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn TopLeft(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn BottomRight(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn TopRight(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_TopRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn BottomLeft(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_BottomLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Center(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn SetTopLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn SetBottomRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn SetTopRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn SetBottomLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveLeft(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveTop(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveRight(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn MoveBottom(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveTopLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveBottomRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveTopRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveBottomLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveCenter(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveCenter(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translate(self: QRectF, dx: f64, dy: f64) void {
        qtc.QRectF_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn Translate2(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_Translate2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Translated(self: QRectF, dx: f64, dy: f64) QRectF {
        return .{ .ptr = qtc.QRectF_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn Translated2(self: QRectF, p: anytype) QRectF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QRectF_Translated2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Transposed(self: QRectF) QRectF {
        return .{ .ptr = qtc.QRectF_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MoveTo(self: QRectF, x: f64, y: f64) void {
        qtc.QRectF_MoveTo(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn MoveTo2(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveTo2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetRect(self: QRectF, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QRectF_SetRect(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x: *f64 `
    ///
    /// ` y: *f64 `
    ///
    /// ` w: *f64 `
    ///
    /// ` h: *f64 `
    ///
    pub fn GetRect(self: QRectF, x: *f64, y: *f64, w: *f64, h: *f64) void {
        qtc.QRectF_GetRect(@ptrCast(self.ptr), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn SetCoords(self: QRectF, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_SetCoords(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getCoords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x1: *f64 `
    ///
    /// ` y1: *f64 `
    ///
    /// ` x2: *f64 `
    ///
    /// ` y2: *f64 `
    ///
    pub fn GetCoords(self: QRectF, x1: *f64, y1: *f64, x2: *f64, y2: *f64) void {
        qtc.QRectF_GetCoords(@ptrCast(self.ptr), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#adjust)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn Adjust(self: QRectF, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_Adjust(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#adjusted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn Adjusted(self: QRectF, x1: f64, y1: f64, x2: f64, y2: f64) QRectF {
        return .{ .ptr = qtc.QRectF_Adjusted(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Size(self: QRectF) QSizeF {
        return .{ .ptr = qtc.QRectF_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Width(self: QRectF) f64 {
        return qtc.QRectF_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn Height(self: QRectF) f64 {
        return qtc.QRectF_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` w: f64 `
    ///
    pub fn SetWidth(self: QRectF, w: f64) void {
        qtc.QRectF_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` h: f64 `
    ///
    pub fn SetHeight(self: QRectF, h: f64) void {
        qtc.QRectF_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` s: QSizeF `
    ///
    pub fn SetSize(self: QRectF, s: anytype) void {
        comptime _ = @TypeOf(s)._is_QSizeF;
        qtc.QRectF_SetSize(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn OperatorBitwiseOr(self: QRectF, r: anytype) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        return .{ .ptr = qtc.QRectF_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn OperatorBitwiseAnd(self: QRectF, r: anytype) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        return .{ .ptr = qtc.QRectF_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn OperatorBitwiseOrAssign(self: QRectF, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QRectF_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn OperatorBitwiseAndAssign(self: QRectF, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QRectF_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn Contains(self: QRectF, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRectF;
        return qtc.QRectF_Contains(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn Contains2(self: QRectF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPointF;
        return qtc.QRectF_Contains2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Contains3(self: QRectF, x: f64, y: f64) bool {
        return qtc.QRectF_Contains3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn United(self: QRectF, other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_United(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn Intersected(self: QRectF, other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_Intersected(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn Intersects(self: QRectF, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRectF;
        return qtc.QRectF_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn MarginsAdded(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_MarginsAdded(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn MarginsRemoved(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_MarginsRemoved(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn OperatorPlusAssign(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn OperatorMinusAssign(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn ToRect(self: QRectF) QRect {
        return .{ .ptr = qtc.QRectF_ToRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toAlignedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn ToAlignedRect(self: QRectF) QRect {
        return .{ .ptr = qtc.QRectF_ToAlignedRect(@ptrCast(self.ptr)) };
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
    /// ` self: QRectF `
    ///
    pub fn Delete(self: QRectF) void {
        qtc.QRectF_Delete(@ptrCast(self.ptr));
    }
};
