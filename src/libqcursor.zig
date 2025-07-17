const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qcursor.html
pub const qcursor = struct {
    /// New constructs a new QCursor object.
    ///
    ///
    pub fn New() QtC.QCursor {
        return qtc.QCursor_new();
    }

    /// New2 constructs a new QCursor object.
    ///
    /// ``` shape: qnamespace_enums.CursorShape ```
    pub fn New2(shape: i64) QtC.QCursor {
        return qtc.QCursor_new2(@intCast(shape));
    }

    /// New3 constructs a new QCursor object.
    ///
    /// ``` bitmap: QtC.QBitmap, mask: QtC.QBitmap ```
    pub fn New3(bitmap: ?*anyopaque, mask: ?*anyopaque) QtC.QCursor {
        return qtc.QCursor_new3(@ptrCast(bitmap), @ptrCast(mask));
    }

    /// New4 constructs a new QCursor object.
    ///
    /// ``` pixmap: QtC.QPixmap ```
    pub fn New4(pixmap: ?*anyopaque) QtC.QCursor {
        return qtc.QCursor_new4(@ptrCast(pixmap));
    }

    /// New5 constructs a new QCursor object.
    ///
    /// ``` cursor: QtC.QCursor ```
    pub fn New5(cursor: ?*anyopaque) QtC.QCursor {
        return qtc.QCursor_new5(@ptrCast(cursor));
    }

    /// New6 constructs a new QCursor object.
    ///
    /// ``` bitmap: QtC.QBitmap, mask: QtC.QBitmap, hotX: i32 ```
    pub fn New6(bitmap: ?*anyopaque, mask: ?*anyopaque, hotX: i32) QtC.QCursor {
        return qtc.QCursor_new6(@ptrCast(bitmap), @ptrCast(mask), @intCast(hotX));
    }

    /// New7 constructs a new QCursor object.
    ///
    /// ``` bitmap: QtC.QBitmap, mask: QtC.QBitmap, hotX: i32, hotY: i32 ```
    pub fn New7(bitmap: ?*anyopaque, mask: ?*anyopaque, hotX: i32, hotY: i32) QtC.QCursor {
        return qtc.QCursor_new7(@ptrCast(bitmap), @ptrCast(mask), @intCast(hotX), @intCast(hotY));
    }

    /// New8 constructs a new QCursor object.
    ///
    /// ``` pixmap: QtC.QPixmap, hotX: i32 ```
    pub fn New8(pixmap: ?*anyopaque, hotX: i32) QtC.QCursor {
        return qtc.QCursor_new8(@ptrCast(pixmap), @intCast(hotX));
    }

    /// New9 constructs a new QCursor object.
    ///
    /// ``` pixmap: QtC.QPixmap, hotX: i32, hotY: i32 ```
    pub fn New9(pixmap: ?*anyopaque, hotX: i32, hotY: i32) QtC.QCursor {
        return qtc.QCursor_new9(@ptrCast(pixmap), @intCast(hotX), @intCast(hotY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator-eq)
    ///
    /// ``` self: QtC.QCursor, cursor: QtC.QCursor ```
    pub fn OperatorAssign(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QCursor_OperatorAssign(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#swap)
    ///
    /// ``` self: QtC.QCursor, other: QtC.QCursor ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCursor_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator)
    ///
    /// ``` self: QtC.QCursor ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QCursor_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#shape)
    ///
    /// ``` self: QtC.QCursor ```
    pub fn Shape(self: ?*anyopaque) i64 {
        return qtc.QCursor_Shape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setShape)
    ///
    /// ``` self: QtC.QCursor, newShape: qnamespace_enums.CursorShape ```
    pub fn SetShape(self: ?*anyopaque, newShape: i64) void {
        qtc.QCursor_SetShape(@ptrCast(self), @intCast(newShape));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
    ///
    /// ``` self: QtC.QCursor, param1: qnamespace_enums.ReturnByValueConstant ```
    pub fn Bitmap(self: ?*anyopaque, param1: i64) QtC.QBitmap {
        return qtc.QCursor_Bitmap(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
    ///
    /// ``` self: QtC.QCursor, param1: qnamespace_enums.ReturnByValueConstant ```
    pub fn Mask(self: ?*anyopaque, param1: i64) QtC.QBitmap {
        return qtc.QCursor_Mask(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
    ///
    /// ``` self: QtC.QCursor ```
    pub fn Bitmap2(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QCursor_Bitmap2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
    ///
    /// ``` self: QtC.QCursor ```
    pub fn Mask2(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QCursor_Mask2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pixmap)
    ///
    /// ``` self: QtC.QCursor ```
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QCursor_Pixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
    ///
    /// ``` self: QtC.QCursor ```
    pub fn HotSpot(self: ?*anyopaque) QtC.QPoint {
        return qtc.QCursor_HotSpot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
    ///
    ///
    pub fn Pos() QtC.QPoint {
        return qtc.QCursor_Pos();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
    ///
    /// ``` screen: QtC.QScreen ```
    pub fn Pos2(screen: ?*anyopaque) QtC.QPoint {
        return qtc.QCursor_Pos2(@ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ``` x: i32, y: i32 ```
    pub fn SetPos(x: i32, y: i32) void {
        qtc.QCursor_SetPos(@intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ``` screen: QtC.QScreen, x: i32, y: i32 ```
    pub fn SetPos2(screen: ?*anyopaque, x: i32, y: i32) void {
        qtc.QCursor_SetPos2(@ptrCast(screen), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ``` p: QtC.QPoint ```
    pub fn SetPos3(p: ?*anyopaque) void {
        qtc.QCursor_SetPos3(@ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
    ///
    /// ``` screen: QtC.QScreen, p: QtC.QPoint ```
    pub fn SetPos4(screen: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QCursor_SetPos4(@ptrCast(screen), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#dtor.QCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCursor_Delete(@ptrCast(self));
    }
};
