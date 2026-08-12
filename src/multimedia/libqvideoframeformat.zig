const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qimage_enums = @import("../libqimage.zig").enums;
const qtvideo_enums = @import("libqtvideo.zig").enums;
const qvideoframeformat_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html)
pub const QVideoFrameFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVideoFrameFormat,

    pub const _is_QVideoFrameFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVideoFrameFormat object in C++ memory
    ///
    pub fn new() QVideoFrameFormat {
        return .{ .ptr = qtc.QVideoFrameFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVideoFrameFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` _pixelFormat: qvideoframeformat_enums.PixelFormat `
    ///
    pub fn new2(size: anytype, _pixelFormat: i32) QVideoFrameFormat {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QVideoFrameFormat_new2(@ptrCast(size.ptr), @bitCast(_pixelFormat)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVideoFrameFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn new3(format: anytype) QVideoFrameFormat {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return .{ .ptr = qtc.QVideoFrameFormat_new3(@ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` other: QVideoFrameFormat `
    ///
    pub fn swap(self: QVideoFrameFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVideoFrameFormat;
        qtc.QVideoFrameFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn detach(self: QVideoFrameFormat) void {
        qtc.QVideoFrameFormat_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn operatorAssign(self: QVideoFrameFormat, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        qtc.QVideoFrameFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn operatorEqual(self: QVideoFrameFormat, format: anytype) bool {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return qtc.QVideoFrameFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn operatorNotEqual(self: QVideoFrameFormat, format: anytype) bool {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return qtc.QVideoFrameFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn isValid(self: QVideoFrameFormat) bool {
        return qtc.QVideoFrameFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pixelFormat` instead
    ///
    pub const PixelFormat = pixelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.PixelFormat `
    ///
    pub fn pixelFormat(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_PixelFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn frameSize(self: QVideoFrameFormat) QSize {
        return .{ .ptr = qtc.QVideoFrameFormat_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFrameSize` instead
    ///
    pub const SetFrameSize = setFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` size: QSize `
    ///
    pub fn setFrameSize(self: QVideoFrameFormat, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QVideoFrameFormat_SetFrameSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setFrameSize2` instead
    ///
    pub const SetFrameSize2 = setFrameSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn setFrameSize2(self: QVideoFrameFormat, width: i32, height: i32) void {
        qtc.QVideoFrameFormat_SetFrameSize2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `frameWidth` instead
    ///
    pub const FrameWidth = frameWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn frameWidth(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_FrameWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameHeight` instead
    ///
    pub const FrameHeight = frameHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn frameHeight(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_FrameHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `planeCount` instead
    ///
    pub const PlaneCount = planeCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#planeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn planeCount(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_PlaneCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn viewport(self: QVideoFrameFormat) QRect {
        return .{ .ptr = qtc.QVideoFrameFormat_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` _viewport: QRect `
    ///
    pub fn setViewport(self: QVideoFrameFormat, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QRect;
        qtc.QVideoFrameFormat_SetViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `scanLineDirection` instead
    ///
    pub const ScanLineDirection = scanLineDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#scanLineDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.Direction `
    ///
    pub fn scanLineDirection(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ScanLineDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScanLineDirection` instead
    ///
    pub const SetScanLineDirection = setScanLineDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setScanLineDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` direction: qvideoframeformat_enums.Direction `
    ///
    pub fn setScanLineDirection(self: QVideoFrameFormat, direction: i32) void {
        qtc.QVideoFrameFormat_SetScanLineDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `frameRate` instead
    ///
    pub const FrameRate = frameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn frameRate(self: QVideoFrameFormat) f64 {
        return qtc.QVideoFrameFormat_FrameRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameRate` instead
    ///
    pub const SetFrameRate = setFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` rate: f64 `
    ///
    pub fn setFrameRate(self: QVideoFrameFormat, rate: f64) void {
        qtc.QVideoFrameFormat_SetFrameRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `streamFrameRate` instead
    ///
    pub const StreamFrameRate = streamFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#streamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn streamFrameRate(self: QVideoFrameFormat) f64 {
        return qtc.QVideoFrameFormat_StreamFrameRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStreamFrameRate` instead
    ///
    pub const SetStreamFrameRate = setStreamFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setStreamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` rate: f64 `
    ///
    pub fn setStreamFrameRate(self: QVideoFrameFormat, rate: f64) void {
        qtc.QVideoFrameFormat_SetStreamFrameRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `yCbCrColorSpace` instead
    ///
    pub const YCbCrColorSpace = yCbCrColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#yCbCrColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.YCbCrColorSpace `
    ///
    pub fn yCbCrColorSpace(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_YCbCrColorSpace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYCbCrColorSpace` instead
    ///
    pub const SetYCbCrColorSpace = setYCbCrColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setYCbCrColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` _colorSpace: qvideoframeformat_enums.YCbCrColorSpace `
    ///
    pub fn setYCbCrColorSpace(self: QVideoFrameFormat, _colorSpace: i32) void {
        qtc.QVideoFrameFormat_SetYCbCrColorSpace(@ptrCast(self.ptr), @bitCast(_colorSpace));
    }

    /// ### DEPRECATED: Use `colorSpace` instead
    ///
    pub const ColorSpace = colorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#colorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.ColorSpace `
    ///
    pub fn colorSpace(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ColorSpace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorSpace` instead
    ///
    pub const SetColorSpace = setColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` _colorSpace: qvideoframeformat_enums.ColorSpace `
    ///
    pub fn setColorSpace(self: QVideoFrameFormat, _colorSpace: i32) void {
        qtc.QVideoFrameFormat_SetColorSpace(@ptrCast(self.ptr), @bitCast(_colorSpace));
    }

    /// ### DEPRECATED: Use `colorTransfer` instead
    ///
    pub const ColorTransfer = colorTransfer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#colorTransfer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.ColorTransfer `
    ///
    pub fn colorTransfer(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ColorTransfer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorTransfer` instead
    ///
    pub const SetColorTransfer = setColorTransfer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorTransfer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` _colorTransfer: qvideoframeformat_enums.ColorTransfer `
    ///
    pub fn setColorTransfer(self: QVideoFrameFormat, _colorTransfer: i32) void {
        qtc.QVideoFrameFormat_SetColorTransfer(@ptrCast(self.ptr), @bitCast(_colorTransfer));
    }

    /// ### DEPRECATED: Use `colorRange` instead
    ///
    pub const ColorRange = colorRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#colorRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.ColorRange `
    ///
    pub fn colorRange(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ColorRange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorRange` instead
    ///
    pub const SetColorRange = setColorRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` range: qvideoframeformat_enums.ColorRange `
    ///
    pub fn setColorRange(self: QVideoFrameFormat, range: i32) void {
        qtc.QVideoFrameFormat_SetColorRange(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `isMirrored` instead
    ///
    pub const IsMirrored = isMirrored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#isMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn isMirrored(self: QVideoFrameFormat) bool {
        return qtc.QVideoFrameFormat_IsMirrored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMirrored` instead
    ///
    pub const SetMirrored = setMirrored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` mirrored: bool `
    ///
    pub fn setMirrored(self: QVideoFrameFormat, mirrored: bool) void {
        qtc.QVideoFrameFormat_SetMirrored(@ptrCast(self.ptr), mirrored);
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtvideo_enums.Rotation `
    ///
    pub fn rotation(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` _rotation: qtvideo_enums.Rotation `
    ///
    pub fn setRotation(self: QVideoFrameFormat, _rotation: i32) void {
        qtc.QVideoFrameFormat_SetRotation(@ptrCast(self.ptr), @bitCast(_rotation));
    }

    /// ### DEPRECATED: Use `vertexShaderFileName` instead
    ///
    pub const VertexShaderFileName = vertexShaderFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#vertexShaderFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn vertexShaderFileName(self: QVideoFrameFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrameFormat_VertexShaderFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVideoFrameFormat.vertexShaderFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fragmentShaderFileName` instead
    ///
    pub const FragmentShaderFileName = fragmentShaderFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#fragmentShaderFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fragmentShaderFileName(self: QVideoFrameFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrameFormat_FragmentShaderFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVideoFrameFormat.fragmentShaderFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `maxLuminance` instead
    ///
    pub const MaxLuminance = maxLuminance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#maxLuminance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn maxLuminance(self: QVideoFrameFormat) f32 {
        return qtc.QVideoFrameFormat_MaxLuminance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxLuminance` instead
    ///
    pub const SetMaxLuminance = setMaxLuminance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setMaxLuminance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` lum: f32 `
    ///
    pub fn setMaxLuminance(self: QVideoFrameFormat, lum: f32) void {
        qtc.QVideoFrameFormat_SetMaxLuminance(@ptrCast(self.ptr), @bitCast(lum));
    }

    /// ### DEPRECATED: Use `pixelFormatFromImageFormat` instead
    ///
    pub const PixelFormatFromImageFormat = pixelFormatFromImageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatFromImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.PixelFormat `
    ///
    pub fn pixelFormatFromImageFormat(format: i32) i32 {
        return qtc.QVideoFrameFormat_PixelFormatFromImageFormat(@bitCast(format));
    }

    /// ### DEPRECATED: Use `imageFormatFromPixelFormat` instead
    ///
    pub const ImageFormatFromPixelFormat = imageFormatFromPixelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#imageFormatFromPixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qvideoframeformat_enums.PixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn imageFormatFromPixelFormat(format: i32) i32 {
        return qtc.QVideoFrameFormat_ImageFormatFromPixelFormat(@bitCast(format));
    }

    /// ### DEPRECATED: Use `pixelFormatToString` instead
    ///
    pub const PixelFormatToString = pixelFormatToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pixelFormat: qvideoframeformat_enums.PixelFormat `
    ///
    pub fn pixelFormatToString(allocator: std.mem.Allocator, _pixelFormat: i32) []const u8 {
        var _str = qtc.QVideoFrameFormat_PixelFormatToString(@bitCast(_pixelFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVideoFrameFormat.pixelFormatToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#dtor.QVideoFrameFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn delete(self: QVideoFrameFormat) void {
        qtc.QVideoFrameFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#public-types)
pub const enums = struct {
    pub const PixelFormat = enum(i32) {
        pub const Format_Invalid: i32 = 0;
        pub const Format_ARGB8888: i32 = 1;
        pub const Format_ARGB8888_Premultiplied: i32 = 2;
        pub const Format_XRGB8888: i32 = 3;
        pub const Format_BGRA8888: i32 = 4;
        pub const Format_BGRA8888_Premultiplied: i32 = 5;
        pub const Format_BGRX8888: i32 = 6;
        pub const Format_ABGR8888: i32 = 7;
        pub const Format_XBGR8888: i32 = 8;
        pub const Format_RGBA8888: i32 = 9;
        pub const Format_RGBX8888: i32 = 10;
        pub const Format_AYUV: i32 = 11;
        pub const Format_AYUV_Premultiplied: i32 = 12;
        pub const Format_YUV420P: i32 = 13;
        pub const Format_YUV422P: i32 = 14;
        pub const Format_YV12: i32 = 15;
        pub const Format_UYVY: i32 = 16;
        pub const Format_YUYV: i32 = 17;
        pub const Format_NV12: i32 = 18;
        pub const Format_NV21: i32 = 19;
        pub const Format_IMC1: i32 = 20;
        pub const Format_IMC2: i32 = 21;
        pub const Format_IMC3: i32 = 22;
        pub const Format_IMC4: i32 = 23;
        pub const Format_Y8: i32 = 24;
        pub const Format_Y16: i32 = 25;
        pub const Format_P010: i32 = 26;
        pub const Format_P016: i32 = 27;
        pub const Format_SamplerExternalOES: i32 = 28;
        pub const Format_Jpeg: i32 = 29;
        pub const Format_SamplerRect: i32 = 30;
        pub const Format_YUV420P10: i32 = 31;
    };

    pub const Direction = enum(i32) {
        pub const TopToBottom: i32 = 0;
        pub const BottomToTop: i32 = 1;
    };

    pub const YCbCrColorSpace = enum(i32) {
        pub const YCbCr_Undefined: i32 = 0;
        pub const YCbCr_BT601: i32 = 1;
        pub const YCbCr_BT709: i32 = 2;
        pub const YCbCr_xvYCC601: i32 = 3;
        pub const YCbCr_xvYCC709: i32 = 4;
        pub const YCbCr_JPEG: i32 = 5;
        pub const YCbCr_BT2020: i32 = 6;
    };

    pub const ColorSpace = enum(i32) {
        pub const ColorSpace_Undefined: i32 = 0;
        pub const ColorSpace_BT601: i32 = 1;
        pub const ColorSpace_BT709: i32 = 2;
        pub const ColorSpace_AdobeRgb: i32 = 5;
        pub const ColorSpace_BT2020: i32 = 6;
    };

    pub const ColorTransfer = enum(i32) {
        pub const ColorTransfer_Unknown: i32 = 0;
        pub const ColorTransfer_BT709: i32 = 1;
        pub const ColorTransfer_BT601: i32 = 2;
        pub const ColorTransfer_Linear: i32 = 3;
        pub const ColorTransfer_Gamma22: i32 = 4;
        pub const ColorTransfer_Gamma28: i32 = 5;
        pub const ColorTransfer_ST2084: i32 = 6;
        pub const ColorTransfer_STD_B67: i32 = 7;
    };

    pub const ColorRange = enum(i32) {
        pub const ColorRange_Unknown: i32 = 0;
        pub const ColorRange_Video: i32 = 1;
        pub const ColorRange_Full: i32 = 2;
    };
};
