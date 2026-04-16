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

    /// New constructs a new QCursor object.
    ///
    pub fn New() QCursor {
        return .{ .ptr = qtc.QCursor_new() };
    }

    /// New2 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` shape: qnamespace_enums.CursorShape `
    ///
    pub fn New2(shape: i32) QCursor {
        return .{ .ptr = qtc.QCursor_new2(@bitCast(shape)) };
    }

    /// New3 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bitmap: QBitmap `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn New3(bitmap: anytype, mask: anytype) QCursor {
        comptime _ = @TypeOf(bitmap)._is_QBitmap;
        comptime _ = @TypeOf(mask)._is_QBitmap;
        return .{ .ptr = qtc.QCursor_new3(@ptrCast(bitmap.ptr), @ptrCast(mask.ptr)) };
    }

    /// New4 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn New4(pixmap: anytype) QCursor {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCursor_new4(@ptrCast(pixmap.ptr)) };
    }

    /// New5 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursor: QCursor `
    ///
    pub fn New5(cursor: anytype) QCursor {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        return .{ .ptr = qtc.QCursor_new5(@ptrCast(cursor.ptr)) };
    }

    /// New6 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bitmap: QBitmap `
    ///
    /// ` mask: QBitmap `
    ///
    /// ` hotX: i32 `
    ///
    pub fn New6(bitmap: anytype, mask: anytype, hotX: i32) QCursor {
        comptime _ = @TypeOf(bitmap)._is_QBitmap;
        comptime _ = @TypeOf(mask)._is_QBitmap;
        return .{ .ptr = qtc.QCursor_new6(@ptrCast(bitmap.ptr), @ptrCast(mask.ptr), @bitCast(hotX)) };
    }

    /// New7 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bitmap: QBitmap `
    ///
    /// ` mask: QBitmap `
    ///
    /// ` hotX: i32 `
    ///
    /// ` hotY: i32 `
    ///
    pub fn New7(bitmap: anytype, mask: anytype, hotX: i32, hotY: i32) QCursor {
        comptime _ = @TypeOf(bitmap)._is_QBitmap;
        comptime _ = @TypeOf(mask)._is_QBitmap;
        return .{ .ptr = qtc.QCursor_new7(@ptrCast(bitmap.ptr), @ptrCast(mask.ptr), @bitCast(hotX), @bitCast(hotY)) };
    }

    /// New8 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` hotX: i32 `
    ///
    pub fn New8(pixmap: anytype, hotX: i32) QCursor {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCursor_new8(@ptrCast(pixmap.ptr), @bitCast(hotX)) };
    }

    /// New9 constructs a new QCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` hotX: i32 `
    ///
    /// ` hotY: i32 `
    ///
    pub fn New9(pixmap: anytype, hotX: i32, hotY: i32) QCursor {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCursor_new9(@ptrCast(pixmap.ptr), @bitCast(hotX), @bitCast(hotY)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn OperatorAssign(self: QCursor, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QCursor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` other: QCursor `
    ///
    pub fn Swap(self: QCursor, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCursor;
        qtc.QCursor_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn ToQVariant(self: QCursor) QVariant {
        return .{ .ptr = qtc.QCursor_ToQVariant(@ptrCast(self.ptr)) };
    }

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
    pub fn Shape(self: QCursor) i32 {
        return qtc.QCursor_Shape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` newShape: qnamespace_enums.CursorShape `
    ///
    pub fn SetShape(self: QCursor, newShape: i32) void {
        qtc.QCursor_SetShape(@ptrCast(self.ptr), @bitCast(newShape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#bitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` param1: qnamespace_enums.ReturnByValueConstant `
    ///
    pub fn Bitmap(self: QCursor, param1: i32) QBitmap {
        return .{ .ptr = qtc.QCursor_Bitmap(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    /// ` param1: qnamespace_enums.ReturnByValueConstant `
    ///
    pub fn Mask(self: QCursor, param1: i32) QBitmap {
        return .{ .ptr = qtc.QCursor_Mask(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#bitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn Bitmap2(self: QCursor) QBitmap {
        return .{ .ptr = qtc.QCursor_Bitmap2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn Mask2(self: QCursor) QBitmap {
        return .{ .ptr = qtc.QCursor_Mask2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn Pixmap(self: QCursor) QPixmap {
        return .{ .ptr = qtc.QCursor_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCursor `
    ///
    pub fn HotSpot(self: QCursor) QPoint {
        return .{ .ptr = qtc.QCursor_HotSpot(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pos)
    ///
    pub fn Pos() QPoint {
        return .{ .ptr = qtc.QCursor_Pos() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QScreen `
    ///
    pub fn Pos2(screen: anytype) QPoint {
        comptime _ = @TypeOf(screen)._is_QScreen;
        return .{ .ptr = qtc.QCursor_Pos2(@ptrCast(screen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SetPos(x: i32, y: i32) void {
        qtc.QCursor_SetPos(@bitCast(x), @bitCast(y));
    }

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
    pub fn SetPos2(screen: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QCursor_SetPos2(@ptrCast(screen.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn SetPos3(p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QCursor_SetPos3(@ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QScreen `
    ///
    /// ` p: QPoint `
    ///
    pub fn SetPos4(screen: anytype, p: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        comptime _ = @TypeOf(p)._is_QPoint;
        qtc.QCursor_SetPos4(@ptrCast(screen.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#dtor.QCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCursor `
    ///
    pub fn Delete(self: QCursor) void {
        qtc.QCursor_Delete(@ptrCast(self.ptr));
    }
};
