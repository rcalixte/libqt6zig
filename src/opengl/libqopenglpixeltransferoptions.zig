const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html)
pub const QOpenGLPixelTransferOptions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLPixelTransferOptions,

    pub const _is_QOpenGLPixelTransferOptions = {};

    /// New constructs a new QOpenGLPixelTransferOptions object.
    ///
    pub fn New() QOpenGLPixelTransferOptions {
        return .{ .ptr = qtc.QOpenGLPixelTransferOptions_new() };
    }

    /// New2 constructs a new QOpenGLPixelTransferOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOpenGLPixelTransferOptions `
    ///
    pub fn New2(param1: anytype) QOpenGLPixelTransferOptions {
        comptime _ = @TypeOf(param1)._is_QOpenGLPixelTransferOptions;
        return .{ .ptr = qtc.QOpenGLPixelTransferOptions_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` param1: QOpenGLPixelTransferOptions `
    ///
    pub fn OperatorAssign(self: QOpenGLPixelTransferOptions, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLPixelTransferOptions_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` other: QOpenGLPixelTransferOptions `
    ///
    pub fn Swap(self: QOpenGLPixelTransferOptions, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLPixelTransferOptions_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` alignment: i32 `
    ///
    pub fn SetAlignment(self: QOpenGLPixelTransferOptions, alignment: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn Alignment(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` skipImages: i32 `
    ///
    pub fn SetSkipImages(self: QOpenGLPixelTransferOptions, skipImages: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipImages(@ptrCast(self.ptr), @bitCast(skipImages));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn SkipImages(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipImages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` skipRows: i32 `
    ///
    pub fn SetSkipRows(self: QOpenGLPixelTransferOptions, skipRows: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipRows(@ptrCast(self.ptr), @bitCast(skipRows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn SkipRows(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipRows(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` skipPixels: i32 `
    ///
    pub fn SetSkipPixels(self: QOpenGLPixelTransferOptions, skipPixels: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipPixels(@ptrCast(self.ptr), @bitCast(skipPixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn SkipPixels(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipPixels(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setImageHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` imageHeight: i32 `
    ///
    pub fn SetImageHeight(self: QOpenGLPixelTransferOptions, imageHeight: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetImageHeight(@ptrCast(self.ptr), @bitCast(imageHeight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#imageHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn ImageHeight(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_ImageHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setRowLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` rowLength: i32 `
    ///
    pub fn SetRowLength(self: QOpenGLPixelTransferOptions, rowLength: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetRowLength(@ptrCast(self.ptr), @bitCast(rowLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#rowLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn RowLength(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_RowLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setLeastSignificantByteFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` lsbFirst: bool `
    ///
    pub fn SetLeastSignificantByteFirst(self: QOpenGLPixelTransferOptions, lsbFirst: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(@ptrCast(self.ptr), lsbFirst);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isLeastSignificantBitFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn IsLeastSignificantBitFirst(self: QOpenGLPixelTransferOptions) bool {
        return qtc.QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSwapBytesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` swapBytes: bool `
    ///
    pub fn SetSwapBytesEnabled(self: QOpenGLPixelTransferOptions, swapBytes: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetSwapBytesEnabled(@ptrCast(self.ptr), swapBytes);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isSwapBytesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn IsSwapBytesEnabled(self: QOpenGLPixelTransferOptions) bool {
        return qtc.QOpenGLPixelTransferOptions_IsSwapBytesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#dtor.QOpenGLPixelTransferOptions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn Delete(self: QOpenGLPixelTransferOptions) void {
        qtc.QOpenGLPixelTransferOptions_Delete(@ptrCast(self.ptr));
    }
};
