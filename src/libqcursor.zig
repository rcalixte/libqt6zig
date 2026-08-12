const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBitmap = @import("libqt6").QBitmap;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QScreen = @import("libqt6").QScreen;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)
pub const QCursor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCursor,

    pub const _is_QCursor = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCursor object in C++ memory
    ///
    pub fn new() QCursor {
        return .{ .ptr = qtc.QCursor_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _shape: qnamespace_enums.CursorShape `
    ///
    pub fn new2(_shape: i32) QCursor {
        return .{ .ptr = qtc.QCursor_new2(@bitCast(_shape)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _bitmap: QBitmap `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn new3(_bitmap: anytype, _mask: anytype) QCursor {
        comptime _ = @TypeOf(_bitmap)._is_QBitmap;
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        return .{ .ptr = qtc.QCursor_new3(@ptrCast(_bitmap.ptr), @ptrCast(_mask.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pixmap: QPixmap `
    ///
    pub fn new4(_pixmap: anytype) QCursor {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCursor_new4(@ptrCast(_pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QCursor `
    ///
    pub fn new5(cursor: anytype) QCursor {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        return .{ .ptr = qtc.QCursor_new5(@ptrCast(cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _bitmap: QBitmap `
    ///
    /// ` _mask: QBitmap `
    ///
    /// ` hotX: i32 `
    ///
    pub fn new6(_bitmap: anytype, _mask: anytype, hotX: i32) QCursor {
        comptime _ = @TypeOf(_bitmap)._is_QBitmap;
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        return .{ .ptr = qtc.QCursor_new6(@ptrCast(_bitmap.ptr), @ptrCast(_mask.ptr), @bitCast(hotX)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _bitmap: QBitmap `
    ///
    /// ` _mask: QBitmap `
    ///
    /// ` hotX: i32 `
    ///
    /// ` hotY: i32 `
    ///
    pub fn new7(_bitmap: anytype, _mask: anytype, hotX: i32, hotY: i32) QCursor {
        comptime _ = @TypeOf(_bitmap)._is_QBitmap;
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        return .{ .ptr = qtc.QCursor_new7(@ptrCast(_bitmap.ptr), @ptrCast(_mask.ptr), @bitCast(hotX), @bitCast(hotY)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` hotX: i32 `
    ///
    pub fn new8(_pixmap: anytype, hotX: i32) QCursor {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCursor_new8(@ptrCast(_pixmap.ptr), @bitCast(hotX)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` hotX: i32 `
    ///
    /// ` hotY: i32 `
    ///
    pub fn new9(_pixmap: anytype, hotX: i32, hotY: i32) QCursor {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCursor_new9(@ptrCast(_pixmap.ptr), @bitCast(hotX), @bitCast(hotY)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn operatorAssign(self: QCursor, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QCursor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` other: QCursor `
    ///
    pub fn swap(self: QCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCursor;
        qtc.QCursor_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn toQVariant(self: QCursor) QVariant {
        return .{ .ptr = qtc.QCursor_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#shape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CursorShape `
    ///
    pub fn shape(self: QCursor) i32 {
        return qtc.QCursor_Shape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShape` instead
    ///
    pub const SetShape = setShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` newShape: qnamespace_enums.CursorShape `
    ///
    pub fn setShape(self: QCursor, newShape: i32) void {
        qtc.QCursor_SetShape(@ptrCast(self.ptr), @bitCast(newShape));
    }

    /// ### DEPRECATED: Use `bitmap` instead
    ///
    pub const Bitmap = bitmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#bitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` param1: qnamespace_enums.ReturnByValueConstant `
    ///
    pub fn bitmap(self: QCursor, param1: i32) QBitmap {
        return .{ .ptr = qtc.QCursor_Bitmap(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` param1: qnamespace_enums.ReturnByValueConstant `
    ///
    pub fn mask(self: QCursor, param1: i32) QBitmap {
        return .{ .ptr = qtc.QCursor_Mask(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `bitmap2` instead
    ///
    pub const Bitmap2 = bitmap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#bitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn bitmap2(self: QCursor) QBitmap {
        return .{ .ptr = qtc.QCursor_Bitmap2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mask2` instead
    ///
    pub const Mask2 = mask2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn mask2(self: QCursor) QBitmap {
        return .{ .ptr = qtc.QCursor_Mask2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn pixmap(self: QCursor) QPixmap {
        return .{ .ptr = qtc.QCursor_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hotSpot` instead
    ///
    pub const HotSpot = hotSpot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn hotSpot(self: QCursor) QPoint {
        return .{ .ptr = qtc.QCursor_HotSpot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pos)
    ///
    pub fn pos() QPoint {
        return .{ .ptr = qtc.QCursor_Pos() };
    }

    /// ### DEPRECATED: Use `pos2` instead
    ///
    pub const Pos2 = pos2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QScreen `
    ///
    pub fn pos2(screen: anytype) QPoint {
        comptime _ = @TypeOf(screen)._is_QScreen;
        return .{ .ptr = qtc.QCursor_Pos2(@ptrCast(screen.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn setPos(x: i32, y: i32) void {
        qtc.QCursor_SetPos(@bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setPos2` instead
    ///
    pub const SetPos2 = setPos2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QScreen `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn setPos2(screen: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QCursor_SetPos2(@ptrCast(screen.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setPos3` instead
    ///
    pub const SetPos3 = setPos3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn setPos3(p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QCursor_SetPos3(@ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `setPos4` instead
    ///
    pub const SetPos4 = setPos4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QScreen `
    ///
    /// ` p: QPoint `
    ///
    pub fn setPos4(screen: anytype, p: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QCursor_SetPos4(@ptrCast(screen.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#dtor.QCursor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCursor `
    ///
    pub fn delete(self: QCursor) void {
        qtc.QCursor_Delete(@ptrCast(self.ptr));
    }
};
