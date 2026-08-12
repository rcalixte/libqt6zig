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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLPixelTransferOptions object in C++ memory
    ///
    pub fn new() QOpenGLPixelTransferOptions {
        return .{ .ptr = qtc.QOpenGLPixelTransferOptions_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLPixelTransferOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOpenGLPixelTransferOptions `
    ///
    pub fn new2(param1: anytype) QOpenGLPixelTransferOptions {
        comptime _ = @TypeOf(param1)._is_QOpenGLPixelTransferOptions;
        return .{ .ptr = qtc.QOpenGLPixelTransferOptions_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` param1: QOpenGLPixelTransferOptions `
    ///
    pub fn operatorAssign(self: QOpenGLPixelTransferOptions, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLPixelTransferOptions_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` other: QOpenGLPixelTransferOptions `
    ///
    pub fn swap(self: QOpenGLPixelTransferOptions, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLPixelTransferOptions_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` _alignment: i32 `
    ///
    pub fn setAlignment(self: QOpenGLPixelTransferOptions, _alignment: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn alignment(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSkipImages` instead
    ///
    pub const SetSkipImages = setSkipImages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` _skipImages: i32 `
    ///
    pub fn setSkipImages(self: QOpenGLPixelTransferOptions, _skipImages: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipImages(@ptrCast(self.ptr), @bitCast(_skipImages));
    }

    /// ### DEPRECATED: Use `skipImages` instead
    ///
    pub const SkipImages = skipImages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn skipImages(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipImages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSkipRows` instead
    ///
    pub const SetSkipRows = setSkipRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` _skipRows: i32 `
    ///
    pub fn setSkipRows(self: QOpenGLPixelTransferOptions, _skipRows: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipRows(@ptrCast(self.ptr), @bitCast(_skipRows));
    }

    /// ### DEPRECATED: Use `skipRows` instead
    ///
    pub const SkipRows = skipRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn skipRows(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSkipPixels` instead
    ///
    pub const SetSkipPixels = setSkipPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` _skipPixels: i32 `
    ///
    pub fn setSkipPixels(self: QOpenGLPixelTransferOptions, _skipPixels: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipPixels(@ptrCast(self.ptr), @bitCast(_skipPixels));
    }

    /// ### DEPRECATED: Use `skipPixels` instead
    ///
    pub const SkipPixels = skipPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn skipPixels(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipPixels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImageHeight` instead
    ///
    pub const SetImageHeight = setImageHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setImageHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` _imageHeight: i32 `
    ///
    pub fn setImageHeight(self: QOpenGLPixelTransferOptions, _imageHeight: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetImageHeight(@ptrCast(self.ptr), @bitCast(_imageHeight));
    }

    /// ### DEPRECATED: Use `imageHeight` instead
    ///
    pub const ImageHeight = imageHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#imageHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn imageHeight(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_ImageHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRowLength` instead
    ///
    pub const SetRowLength = setRowLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setRowLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` _rowLength: i32 `
    ///
    pub fn setRowLength(self: QOpenGLPixelTransferOptions, _rowLength: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetRowLength(@ptrCast(self.ptr), @bitCast(_rowLength));
    }

    /// ### DEPRECATED: Use `rowLength` instead
    ///
    pub const RowLength = rowLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#rowLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn rowLength(self: QOpenGLPixelTransferOptions) i32 {
        return qtc.QOpenGLPixelTransferOptions_RowLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeastSignificantByteFirst` instead
    ///
    pub const SetLeastSignificantByteFirst = setLeastSignificantByteFirst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setLeastSignificantByteFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` lsbFirst: bool `
    ///
    pub fn setLeastSignificantByteFirst(self: QOpenGLPixelTransferOptions, lsbFirst: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(@ptrCast(self.ptr), lsbFirst);
    }

    /// ### DEPRECATED: Use `isLeastSignificantBitFirst` instead
    ///
    pub const IsLeastSignificantBitFirst = isLeastSignificantBitFirst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isLeastSignificantBitFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn isLeastSignificantBitFirst(self: QOpenGLPixelTransferOptions) bool {
        return qtc.QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSwapBytesEnabled` instead
    ///
    pub const SetSwapBytesEnabled = setSwapBytesEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSwapBytesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    /// ` swapBytes: bool `
    ///
    pub fn setSwapBytesEnabled(self: QOpenGLPixelTransferOptions, swapBytes: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetSwapBytesEnabled(@ptrCast(self.ptr), swapBytes);
    }

    /// ### DEPRECATED: Use `isSwapBytesEnabled` instead
    ///
    pub const IsSwapBytesEnabled = isSwapBytesEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isSwapBytesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn isSwapBytesEnabled(self: QOpenGLPixelTransferOptions) bool {
        return qtc.QOpenGLPixelTransferOptions_IsSwapBytesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#dtor.QOpenGLPixelTransferOptions)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLPixelTransferOptions `
    ///
    pub fn delete(self: QOpenGLPixelTransferOptions) void {
        qtc.QOpenGLPixelTransferOptions_Delete(@ptrCast(self.ptr));
    }
};
