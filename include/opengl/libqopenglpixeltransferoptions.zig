const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html)
pub const qopenglpixeltransferoptions = struct {
    /// New constructs a new QOpenGLPixelTransferOptions object.
    ///
    pub fn New() QtC.QOpenGLPixelTransferOptions {
        return qtc.QOpenGLPixelTransferOptions_new();
    }

    /// New2 constructs a new QOpenGLPixelTransferOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QOpenGLPixelTransferOptions {
        return qtc.QOpenGLPixelTransferOptions_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` param1: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` other: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` alignment: i32 `
    ///
    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetAlignment(@ptrCast(self), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_Alignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` skipImages: i32 `
    ///
    pub fn SetSkipImages(self: ?*anyopaque, skipImages: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipImages(@ptrCast(self), @bitCast(skipImages));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn SkipImages(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipImages(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` skipRows: i32 `
    ///
    pub fn SetSkipRows(self: ?*anyopaque, skipRows: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipRows(@ptrCast(self), @bitCast(skipRows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn SkipRows(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipRows(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` skipPixels: i32 `
    ///
    pub fn SetSkipPixels(self: ?*anyopaque, skipPixels: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipPixels(@ptrCast(self), @bitCast(skipPixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn SkipPixels(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipPixels(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setImageHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` imageHeight: i32 `
    ///
    pub fn SetImageHeight(self: ?*anyopaque, imageHeight: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetImageHeight(@ptrCast(self), @bitCast(imageHeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#imageHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn ImageHeight(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_ImageHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setRowLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` rowLength: i32 `
    ///
    pub fn SetRowLength(self: ?*anyopaque, rowLength: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetRowLength(@ptrCast(self), @bitCast(rowLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#rowLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn RowLength(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_RowLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setLeastSignificantByteFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` lsbFirst: bool `
    ///
    pub fn SetLeastSignificantByteFirst(self: ?*anyopaque, lsbFirst: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(@ptrCast(self), lsbFirst);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isLeastSignificantBitFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn IsLeastSignificantBitFirst(self: ?*anyopaque) bool {
        return qtc.QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSwapBytesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    /// ` swapBytes: bool `
    ///
    pub fn SetSwapBytesEnabled(self: ?*anyopaque, swapBytes: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetSwapBytesEnabled(@ptrCast(self), swapBytes);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isSwapBytesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn IsSwapBytesEnabled(self: ?*anyopaque) bool {
        return qtc.QOpenGLPixelTransferOptions_IsSwapBytesEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#dtor.QOpenGLPixelTransferOptions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLPixelTransferOptions `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_Delete(@ptrCast(self));
    }
};
