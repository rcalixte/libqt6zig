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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRect `
    ///
    pub fn new(other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRect object and invalidate the source QRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRect `
    ///
    pub fn new2(other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRect object in C++ memory
    ///
    pub fn new3() QRect {
        return .{ .ptr = qtc.QRect_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPoint `
    ///
    /// ` bottomright: QPoint `
    ///
    pub fn new4(topleft: anytype, bottomright: anytype) QRect {
        comptime _ = @TypeOf(topleft)._is_QPoint;
        comptime _ = @TypeOf(bottomright)._is_QPoint;
        return .{ .ptr = qtc.QRect_new4(@ptrCast(topleft.ptr), @ptrCast(bottomright.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPoint `
    ///
    /// ` _size: QSize `
    ///
    pub fn new5(topleft: anytype, _size: anytype) QRect {
        comptime _ = @TypeOf(topleft)._is_QPoint;
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QRect_new5(@ptrCast(topleft.ptr), @ptrCast(_size.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _left: i32 `
    ///
    /// ` _top: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn new6(_left: i32, _top: i32, _width: i32, _height: i32) QRect {
        return .{ .ptr = qtc.QRect_new6(@bitCast(_left), @bitCast(_top), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QRect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRect `
    ///
    pub fn new7(param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QRect_new7(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn copyAssign(self: QRect, other: QRect) void {
        qtc.QRect_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn moveAssign(self: QRect, other: QRect) void {
        qtc.QRect_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn isNull(self: QRect) bool {
        return qtc.QRect_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn isEmpty(self: QRect) bool {
        return qtc.QRect_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn isValid(self: QRect) bool {
        return qtc.QRect_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `left` instead
    ///
    pub const Left = left;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn left(self: QRect) i32 {
        return qtc.QRect_Left(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `top` instead
    ///
    pub const Top = top;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn top(self: QRect) i32 {
        return qtc.QRect_Top(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `right` instead
    ///
    pub const Right = right;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn right(self: QRect) i32 {
        return qtc.QRect_Right(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bottom` instead
    ///
    pub const Bottom = bottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn bottom(self: QRect) i32 {
        return qtc.QRect_Bottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn normalized(self: QRect) QRect {
        return .{ .ptr = qtc.QRect_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn x(self: QRect) i32 {
        return qtc.QRect_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn y(self: QRect) i32 {
        return qtc.QRect_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeft` instead
    ///
    pub const SetLeft = setLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn setLeft(self: QRect, pos: i32) void {
        qtc.QRect_SetLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setTop` instead
    ///
    pub const SetTop = setTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn setTop(self: QRect, pos: i32) void {
        qtc.QRect_SetTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setRight` instead
    ///
    pub const SetRight = setRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn setRight(self: QRect, pos: i32) void {
        qtc.QRect_SetRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setBottom` instead
    ///
    pub const SetBottom = setBottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn setBottom(self: QRect, pos: i32) void {
        qtc.QRect_SetBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _x: i32 `
    ///
    pub fn setX(self: QRect, _x: i32) void {
        qtc.QRect_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _y: i32 `
    ///
    pub fn setY(self: QRect, _y: i32) void {
        qtc.QRect_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setTopLeft` instead
    ///
    pub const SetTopLeft = setTopLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn setTopLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setBottomRight` instead
    ///
    pub const SetBottomRight = setBottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn setBottomRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setTopRight` instead
    ///
    pub const SetTopRight = setTopRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn setTopRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setBottomLeft` instead
    ///
    pub const SetBottomLeft = setBottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn setBottomLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_SetBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `topLeft` instead
    ///
    pub const TopLeft = topLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn topLeft(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bottomRight` instead
    ///
    pub const BottomRight = bottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn bottomRight(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topRight` instead
    ///
    pub const TopRight = topRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn topRight(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_TopRight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bottomLeft` instead
    ///
    pub const BottomLeft = bottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn bottomLeft(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_BottomLeft(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn center(self: QRect) QPoint {
        return .{ .ptr = qtc.QRect_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveLeft` instead
    ///
    pub const MoveLeft = moveLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn moveLeft(self: QRect, pos: i32) void {
        qtc.QRect_MoveLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveTop` instead
    ///
    pub const MoveTop = moveTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn moveTop(self: QRect, pos: i32) void {
        qtc.QRect_MoveTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveRight` instead
    ///
    pub const MoveRight = moveRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn moveRight(self: QRect, pos: i32) void {
        qtc.QRect_MoveRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveBottom` instead
    ///
    pub const MoveBottom = moveBottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` pos: i32 `
    ///
    pub fn moveBottom(self: QRect, pos: i32) void {
        qtc.QRect_MoveBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveTopLeft` instead
    ///
    pub const MoveTopLeft = moveTopLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn moveTopLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveBottomRight` instead
    ///
    pub const MoveBottomRight = moveBottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn moveBottomRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveTopRight` instead
    ///
    pub const MoveTopRight = moveTopRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn moveTopRight(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveBottomLeft` instead
    ///
    pub const MoveBottomLeft = moveBottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn moveBottomLeft(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveCenter` instead
    ///
    pub const MoveCenter = moveCenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn moveCenter(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveCenter(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QRect, dx: i32, dy: i32) void {
        qtc.QRect_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn translate2(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_Translate2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QRect, dx: i32, dy: i32) QRect {
        return .{ .ptr = qtc.QRect_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn translated2(self: QRect, p: anytype) QRect {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QRect_Translated2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn transposed(self: QRect) QRect {
        return .{ .ptr = qtc.QRect_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveTo` instead
    ///
    pub const MoveTo = moveTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _x: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn moveTo(self: QRect, _x: i32, t: i32) void {
        qtc.QRect_MoveTo(@ptrCast(self.ptr), @bitCast(_x), @bitCast(t));
    }

    /// ### DEPRECATED: Use `moveTo2` instead
    ///
    pub const MoveTo2 = moveTo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn moveTo2(self: QRect, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QRect_MoveTo2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setRect(self: QRect, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QRect_SetRect(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `getRect` instead
    ///
    pub const GetRect = getRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _x: *i32 `
    ///
    /// ` _y: *i32 `
    ///
    /// ` w: *i32 `
    ///
    /// ` h: *i32 `
    ///
    pub fn getRect(self: QRect, _x: *i32, _y: *i32, w: *i32, h: *i32) void {
        qtc.QRect_GetRect(@ptrCast(self.ptr), @ptrCast(_x), @ptrCast(_y), @ptrCast(w), @ptrCast(h));
    }

    /// ### DEPRECATED: Use `setCoords` instead
    ///
    pub const SetCoords = setCoords;

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
    pub fn setCoords(self: QRect, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_SetCoords(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `getCoords` instead
    ///
    pub const GetCoords = getCoords;

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
    pub fn getCoords(self: QRect, x1: *i32, y1: *i32, x2: *i32, y2: *i32) void {
        qtc.QRect_GetCoords(@ptrCast(self.ptr), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    /// ### DEPRECATED: Use `adjust` instead
    ///
    pub const Adjust = adjust;

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
    pub fn adjust(self: QRect, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QRect_Adjust(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `adjusted` instead
    ///
    pub const Adjusted = adjusted;

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
    pub fn adjusted(self: QRect, x1: i32, y1: i32, x2: i32, y2: i32) QRect {
        return .{ .ptr = qtc.QRect_Adjusted(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn size(self: QRect) QSize {
        return .{ .ptr = qtc.QRect_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn width(self: QRect) i32 {
        return qtc.QRect_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn height(self: QRect) i32 {
        return qtc.QRect_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` w: i32 `
    ///
    pub fn setWidth(self: QRect, w: i32) void {
        qtc.QRect_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` h: i32 `
    ///
    pub fn setHeight(self: QRect, h: i32) void {
        qtc.QRect_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` s: QSize `
    ///
    pub fn setSize(self: QRect, s: anytype) void {
        comptime _ = @TypeOf(s)._is_QSize;
        qtc.QRect_SetSize(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorBitwiseOr(self: QRect, r: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRect_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd` instead
    ///
    pub const OperatorBitwiseAnd = operatorBitwiseAnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorBitwiseAnd(self: QRect, r: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        return .{ .ptr = qtc.QRect_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorBitwiseOrAssign(self: QRect, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QRect_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn operatorBitwiseAndAssign(self: QRect, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QRect_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn contains(self: QRect, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRect_Contains(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` p: QPoint `
    ///
    pub fn contains2(self: QRect, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPoint;
        return qtc.QRect_Contains2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `contains3` instead
    ///
    pub const Contains3 = contains3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn contains3(self: QRect, _x: i32, _y: i32) bool {
        return qtc.QRect_Contains3(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `contains4` instead
    ///
    pub const Contains4 = contains4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` proper: bool `
    ///
    pub fn contains4(self: QRect, _x: i32, _y: i32, proper: bool) bool {
        return qtc.QRect_Contains4(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), proper);
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn united(self: QRect, other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_United(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected` instead
    ///
    pub const Intersected = intersected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` other: QRect `
    ///
    pub fn intersected(self: QRect, other: anytype) QRect {
        comptime _ = @TypeOf(other)._is_QRect;
        return .{ .ptr = qtc.QRect_Intersected(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` r: QRect `
    ///
    pub fn intersects(self: QRect, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRect_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `marginsAdded` instead
    ///
    pub const MarginsAdded = marginsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn marginsAdded(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_MarginsAdded(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `marginsRemoved` instead
    ///
    pub const MarginsRemoved = marginsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn marginsRemoved(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_MarginsRemoved(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn operatorPlusAssign(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    /// ` margins: QMargins `
    ///
    pub fn operatorMinusAssign(self: QRect, margins: anytype) QRect {
        comptime _ = @TypeOf(margins)._is_QMargins;
        return .{ .ptr = qtc.QRect_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#span)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    pub fn span(p1: anytype, p2: anytype) QRect {
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        return .{ .ptr = qtc.QRect_Span(@ptrCast(p1.ptr), @ptrCast(p2.ptr)) };
    }

    /// ### DEPRECATED: Use `toRectF` instead
    ///
    pub const ToRectF = toRectF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#toRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRect `
    ///
    pub fn toRectF(self: QRect) QRectF {
        return .{ .ptr = qtc.QRect_ToRectF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contains22` instead
    ///
    pub const Contains22 = contains22;

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
    pub fn contains22(self: QRect, r: anytype, proper: bool) bool {
        comptime _ = @TypeOf(r)._is_QRect;
        return qtc.QRect_Contains22(@ptrCast(self.ptr), @ptrCast(r.ptr), proper);
    }

    /// ### DEPRECATED: Use `contains23` instead
    ///
    pub const Contains23 = contains23;

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
    pub fn contains23(self: QRect, p: anytype, proper: bool) bool {
        comptime _ = @TypeOf(p)._is_QPoint;
        return qtc.QRect_Contains23(@ptrCast(self.ptr), @ptrCast(p.ptr), proper);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrect.html#dtor.QRect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRect `
    ///
    pub fn delete(self: QRect) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRectF `
    ///
    pub fn new(other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRectF object and invalidate the source QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QRectF `
    ///
    pub fn new2(other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRectF object in C++ memory
    ///
    pub fn new3() QRectF {
        return .{ .ptr = qtc.QRectF_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPointF `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn new4(topleft: anytype, _size: anytype) QRectF {
        comptime _ = @TypeOf(topleft)._is_QPointF;
        comptime _ = @TypeOf(_size)._is_QSizeF;
        return .{ .ptr = qtc.QRectF_new4(@ptrCast(topleft.ptr), @ptrCast(_size.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` topleft: QPointF `
    ///
    /// ` _bottomRight: QPointF `
    ///
    pub fn new5(topleft: anytype, _bottomRight: anytype) QRectF {
        comptime _ = @TypeOf(topleft)._is_QPointF;
        comptime _ = @TypeOf(_bottomRight)._is_QPointF;
        return .{ .ptr = qtc.QRectF_new5(@ptrCast(topleft.ptr), @ptrCast(_bottomRight.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _left: f64 `
    ///
    /// ` _top: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    pub fn new6(_left: f64, _top: f64, _width: f64, _height: f64) QRectF {
        return .{ .ptr = qtc.QRectF_new6(@bitCast(_left), @bitCast(_top), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rect: QRect `
    ///
    pub fn new7(rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QRectF_new7(@ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QRectF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRectF `
    ///
    pub fn new8(param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QRectF;
        return .{ .ptr = qtc.QRectF_new8(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn copyAssign(self: QRectF, other: QRectF) void {
        qtc.QRectF_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn moveAssign(self: QRectF, other: QRectF) void {
        qtc.QRectF_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn isNull(self: QRectF) bool {
        return qtc.QRectF_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn isEmpty(self: QRectF) bool {
        return qtc.QRectF_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn isValid(self: QRectF) bool {
        return qtc.QRectF_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn normalized(self: QRectF) QRectF {
        return .{ .ptr = qtc.QRectF_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `left` instead
    ///
    pub const Left = left;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn left(self: QRectF) f64 {
        return qtc.QRectF_Left(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `top` instead
    ///
    pub const Top = top;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn top(self: QRectF) f64 {
        return qtc.QRectF_Top(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `right` instead
    ///
    pub const Right = right;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn right(self: QRectF) f64 {
        return qtc.QRectF_Right(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bottom` instead
    ///
    pub const Bottom = bottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn bottom(self: QRectF) f64 {
        return qtc.QRectF_Bottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn x(self: QRectF) f64 {
        return qtc.QRectF_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn y(self: QRectF) f64 {
        return qtc.QRectF_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeft` instead
    ///
    pub const SetLeft = setLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn setLeft(self: QRectF, pos: f64) void {
        qtc.QRectF_SetLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setTop` instead
    ///
    pub const SetTop = setTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn setTop(self: QRectF, pos: f64) void {
        qtc.QRectF_SetTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setRight` instead
    ///
    pub const SetRight = setRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn setRight(self: QRectF, pos: f64) void {
        qtc.QRectF_SetRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setBottom` instead
    ///
    pub const SetBottom = setBottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn setBottom(self: QRectF, pos: f64) void {
        qtc.QRectF_SetBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn setX(self: QRectF, pos: f64) void {
        qtc.QRectF_SetX(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn setY(self: QRectF, pos: f64) void {
        qtc.QRectF_SetY(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `topLeft` instead
    ///
    pub const TopLeft = topLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn topLeft(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bottomRight` instead
    ///
    pub const BottomRight = bottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn bottomRight(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topRight` instead
    ///
    pub const TopRight = topRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn topRight(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_TopRight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bottomLeft` instead
    ///
    pub const BottomLeft = bottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn bottomLeft(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_BottomLeft(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn center(self: QRectF) QPointF {
        return .{ .ptr = qtc.QRectF_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTopLeft` instead
    ///
    pub const SetTopLeft = setTopLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn setTopLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setBottomRight` instead
    ///
    pub const SetBottomRight = setBottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn setBottomRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setTopRight` instead
    ///
    pub const SetTopRight = setTopRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn setTopRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setBottomLeft` instead
    ///
    pub const SetBottomLeft = setBottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn setBottomLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_SetBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveLeft` instead
    ///
    pub const MoveLeft = moveLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn moveLeft(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveLeft(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveTop` instead
    ///
    pub const MoveTop = moveTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn moveTop(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveTop(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveRight` instead
    ///
    pub const MoveRight = moveRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn moveRight(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveRight(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveBottom` instead
    ///
    pub const MoveBottom = moveBottom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` pos: f64 `
    ///
    pub fn moveBottom(self: QRectF, pos: f64) void {
        qtc.QRectF_MoveBottom(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `moveTopLeft` instead
    ///
    pub const MoveTopLeft = moveTopLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveTopLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveTopLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveBottomRight` instead
    ///
    pub const MoveBottomRight = moveBottomRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveBottomRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveBottomRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveTopRight` instead
    ///
    pub const MoveTopRight = moveTopRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveTopRight(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveTopRight(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveBottomLeft` instead
    ///
    pub const MoveBottomLeft = moveBottomLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveBottomLeft(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveBottomLeft(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `moveCenter` instead
    ///
    pub const MoveCenter = moveCenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveCenter(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveCenter(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(self: QRectF, dx: f64, dy: f64) void {
        qtc.QRectF_Translate(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `translate2` instead
    ///
    pub const Translate2 = translate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn translate2(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_Translate2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `translated` instead
    ///
    pub const Translated = translated;

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
    pub fn translated(self: QRectF, dx: f64, dy: f64) QRectF {
        return .{ .ptr = qtc.QRectF_Translated(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy)) };
    }

    /// ### DEPRECATED: Use `translated2` instead
    ///
    pub const Translated2 = translated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn translated2(self: QRectF, p: anytype) QRectF {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QRectF_Translated2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `transposed` instead
    ///
    pub const Transposed = transposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#transposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn transposed(self: QRectF) QRectF {
        return .{ .ptr = qtc.QRectF_Transposed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveTo` instead
    ///
    pub const MoveTo = moveTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn moveTo(self: QRectF, _x: f64, _y: f64) void {
        qtc.QRectF_MoveTo(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `moveTo2` instead
    ///
    pub const MoveTo2 = moveTo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn moveTo2(self: QRectF, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QRectF_MoveTo2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setRect(self: QRectF, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QRectF_SetRect(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `getRect` instead
    ///
    pub const GetRect = getRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` _x: *f64 `
    ///
    /// ` _y: *f64 `
    ///
    /// ` w: *f64 `
    ///
    /// ` h: *f64 `
    ///
    pub fn getRect(self: QRectF, _x: *f64, _y: *f64, w: *f64, h: *f64) void {
        qtc.QRectF_GetRect(@ptrCast(self.ptr), @ptrCast(_x), @ptrCast(_y), @ptrCast(w), @ptrCast(h));
    }

    /// ### DEPRECATED: Use `setCoords` instead
    ///
    pub const SetCoords = setCoords;

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
    pub fn setCoords(self: QRectF, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_SetCoords(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `getCoords` instead
    ///
    pub const GetCoords = getCoords;

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
    pub fn getCoords(self: QRectF, x1: *f64, y1: *f64, x2: *f64, y2: *f64) void {
        qtc.QRectF_GetCoords(@ptrCast(self.ptr), @ptrCast(x1), @ptrCast(y1), @ptrCast(x2), @ptrCast(y2));
    }

    /// ### DEPRECATED: Use `adjust` instead
    ///
    pub const Adjust = adjust;

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
    pub fn adjust(self: QRectF, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QRectF_Adjust(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `adjusted` instead
    ///
    pub const Adjusted = adjusted;

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
    pub fn adjusted(self: QRectF, x1: f64, y1: f64, x2: f64, y2: f64) QRectF {
        return .{ .ptr = qtc.QRectF_Adjusted(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn size(self: QRectF) QSizeF {
        return .{ .ptr = qtc.QRectF_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn width(self: QRectF) f64 {
        return qtc.QRectF_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn height(self: QRectF) f64 {
        return qtc.QRectF_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` w: f64 `
    ///
    pub fn setWidth(self: QRectF, w: f64) void {
        qtc.QRectF_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` h: f64 `
    ///
    pub fn setHeight(self: QRectF, h: f64) void {
        qtc.QRectF_SetHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` s: QSizeF `
    ///
    pub fn setSize(self: QRectF, s: anytype) void {
        comptime _ = @TypeOf(s)._is_QSizeF;
        qtc.QRectF_SetSize(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn operatorBitwiseOr(self: QRectF, r: anytype) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        return .{ .ptr = qtc.QRectF_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd` instead
    ///
    pub const OperatorBitwiseAnd = operatorBitwiseAnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn operatorBitwiseAnd(self: QRectF, r: anytype) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        return .{ .ptr = qtc.QRectF_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(r.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn operatorBitwiseOrAssign(self: QRectF, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QRectF_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn operatorBitwiseAndAssign(self: QRectF, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QRectF_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn contains(self: QRectF, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRectF;
        return qtc.QRectF_Contains(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` p: QPointF `
    ///
    pub fn contains2(self: QRectF, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPointF;
        return qtc.QRectF_Contains2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `contains3` instead
    ///
    pub const Contains3 = contains3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn contains3(self: QRectF, _x: f64, _y: f64) bool {
        return qtc.QRectF_Contains3(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `united` instead
    ///
    pub const United = united;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#united)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn united(self: QRectF, other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_United(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `intersected` instead
    ///
    pub const Intersected = intersected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` other: QRectF `
    ///
    pub fn intersected(self: QRectF, other: anytype) QRectF {
        comptime _ = @TypeOf(other)._is_QRectF;
        return .{ .ptr = qtc.QRectF_Intersected(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `intersects` instead
    ///
    pub const Intersects = intersects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` r: QRectF `
    ///
    pub fn intersects(self: QRectF, r: anytype) bool {
        comptime _ = @TypeOf(r)._is_QRectF;
        return qtc.QRectF_Intersects(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `marginsAdded` instead
    ///
    pub const MarginsAdded = marginsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn marginsAdded(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_MarginsAdded(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `marginsRemoved` instead
    ///
    pub const MarginsRemoved = marginsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn marginsRemoved(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_MarginsRemoved(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn operatorPlusAssign(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn operatorMinusAssign(self: QRectF, margins: anytype) QRectF {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return .{ .ptr = qtc.QRectF_OperatorMinusAssign(@ptrCast(self.ptr), @ptrCast(margins.ptr)) };
    }

    /// ### DEPRECATED: Use `toRect` instead
    ///
    pub const ToRect = toRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn toRect(self: QRectF) QRect {
        return .{ .ptr = qtc.QRectF_ToRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toAlignedRect` instead
    ///
    pub const ToAlignedRect = toAlignedRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toAlignedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRectF `
    ///
    pub fn toAlignedRect(self: QRectF) QRect {
        return .{ .ptr = qtc.QRectF_ToAlignedRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#dtor.QRectF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRectF `
    ///
    pub fn delete(self: QRectF) void {
        qtc.QRectF_Delete(@ptrCast(self.ptr));
    }
};
