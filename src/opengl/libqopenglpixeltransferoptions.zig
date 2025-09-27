const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html
pub const qopenglpixeltransferoptions = struct {
    /// New constructs a new QOpenGLPixelTransferOptions object.
    ///
    ///
    pub fn New() QtC.QOpenGLPixelTransferOptions {
        return qtc.QOpenGLPixelTransferOptions_new();
    }

    /// New2 constructs a new QOpenGLPixelTransferOptions object.
    ///
    /// ``` param1: QtC.QOpenGLPixelTransferOptions ```
    pub fn New2(param1: ?*anyopaque) QtC.QOpenGLPixelTransferOptions {
        return qtc.QOpenGLPixelTransferOptions_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#operator-eq)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, param1: QtC.QOpenGLPixelTransferOptions ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#swap)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, other: QtC.QOpenGLPixelTransferOptions ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setAlignment)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#alignment)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_Alignment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipImages)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, skipImages: i32 ```
    pub fn SetSkipImages(self: ?*anyopaque, skipImages: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipImages(@ptrCast(self), @intCast(skipImages));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipImages)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn SkipImages(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipImages(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipRows)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, skipRows: i32 ```
    pub fn SetSkipRows(self: ?*anyopaque, skipRows: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipRows(@ptrCast(self), @intCast(skipRows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipRows)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn SkipRows(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipRows(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipPixels)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, skipPixels: i32 ```
    pub fn SetSkipPixels(self: ?*anyopaque, skipPixels: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipPixels(@ptrCast(self), @intCast(skipPixels));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipPixels)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn SkipPixels(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipPixels(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setImageHeight)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, imageHeight: i32 ```
    pub fn SetImageHeight(self: ?*anyopaque, imageHeight: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetImageHeight(@ptrCast(self), @intCast(imageHeight));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#imageHeight)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn ImageHeight(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_ImageHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setRowLength)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, rowLength: i32 ```
    pub fn SetRowLength(self: ?*anyopaque, rowLength: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetRowLength(@ptrCast(self), @intCast(rowLength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#rowLength)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn RowLength(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPixelTransferOptions_RowLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setLeastSignificantByteFirst)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, lsbFirst: bool ```
    pub fn SetLeastSignificantByteFirst(self: ?*anyopaque, lsbFirst: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(@ptrCast(self), lsbFirst);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isLeastSignificantBitFirst)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn IsLeastSignificantBitFirst(self: ?*anyopaque) bool {
        return qtc.QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSwapBytesEnabled)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions, swapBytes: bool ```
    pub fn SetSwapBytesEnabled(self: ?*anyopaque, swapBytes: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetSwapBytesEnabled(@ptrCast(self), swapBytes);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isSwapBytesEnabled)
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn IsSwapBytesEnabled(self: ?*anyopaque) bool {
        return qtc.QOpenGLPixelTransferOptions_IsSwapBytesEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#dtor.QOpenGLPixelTransferOptions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLPixelTransferOptions ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_Delete(@ptrCast(self));
    }
};
