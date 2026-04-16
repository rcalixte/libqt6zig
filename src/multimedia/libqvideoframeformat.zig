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

    /// New constructs a new QVideoFrameFormat object.
    ///
    pub fn New() QVideoFrameFormat {
        return .{ .ptr = qtc.QVideoFrameFormat_new() };
    }

    /// New2 constructs a new QVideoFrameFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` pixelFormat: qvideoframeformat_enums.PixelFormat `
    ///
    pub fn New2(size: anytype, pixelFormat: i32) QVideoFrameFormat {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QVideoFrameFormat_new2(@ptrCast(size.ptr), @bitCast(pixelFormat)) };
    }

    /// New3 constructs a new QVideoFrameFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn New3(format: anytype) QVideoFrameFormat {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return .{ .ptr = qtc.QVideoFrameFormat_new3(@ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` other: QVideoFrameFormat `
    ///
    pub fn Swap(self: QVideoFrameFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVideoFrameFormat;
        qtc.QVideoFrameFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn Detach(self: QVideoFrameFormat) void {
        qtc.QVideoFrameFormat_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn OperatorAssign(self: QVideoFrameFormat, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        qtc.QVideoFrameFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn OperatorEqual(self: QVideoFrameFormat, format: anytype) bool {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return qtc.QVideoFrameFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn OperatorNotEqual(self: QVideoFrameFormat, format: anytype) bool {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return qtc.QVideoFrameFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn IsValid(self: QVideoFrameFormat) bool {
        return qtc.QVideoFrameFormat_IsValid(@ptrCast(self.ptr));
    }

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
    pub fn PixelFormat(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_PixelFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn FrameSize(self: QVideoFrameFormat) QSize {
        return .{ .ptr = qtc.QVideoFrameFormat_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` size: QSize `
    ///
    pub fn SetFrameSize(self: QVideoFrameFormat, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QVideoFrameFormat_SetFrameSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

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
    pub fn SetFrameSize2(self: QVideoFrameFormat, width: i32, height: i32) void {
        qtc.QVideoFrameFormat_SetFrameSize2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn FrameWidth(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_FrameWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn FrameHeight(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_FrameHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#planeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn PlaneCount(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_PlaneCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn Viewport(self: QVideoFrameFormat) QRect {
        return .{ .ptr = qtc.QVideoFrameFormat_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` viewport: QRect `
    ///
    pub fn SetViewport(self: QVideoFrameFormat, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QRect;
        qtc.QVideoFrameFormat_SetViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

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
    pub fn ScanLineDirection(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ScanLineDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setScanLineDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` direction: qvideoframeformat_enums.Direction `
    ///
    pub fn SetScanLineDirection(self: QVideoFrameFormat, direction: i32) void {
        qtc.QVideoFrameFormat_SetScanLineDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn FrameRate(self: QVideoFrameFormat) f64 {
        return qtc.QVideoFrameFormat_FrameRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetFrameRate(self: QVideoFrameFormat, rate: f64) void {
        qtc.QVideoFrameFormat_SetFrameRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#streamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn StreamFrameRate(self: QVideoFrameFormat) f64 {
        return qtc.QVideoFrameFormat_StreamFrameRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setStreamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetStreamFrameRate(self: QVideoFrameFormat, rate: f64) void {
        qtc.QVideoFrameFormat_SetStreamFrameRate(@ptrCast(self.ptr), @bitCast(rate));
    }

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
    pub fn YCbCrColorSpace(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_YCbCrColorSpace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setYCbCrColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` colorSpace: qvideoframeformat_enums.YCbCrColorSpace `
    ///
    pub fn SetYCbCrColorSpace(self: QVideoFrameFormat, colorSpace: i32) void {
        qtc.QVideoFrameFormat_SetYCbCrColorSpace(@ptrCast(self.ptr), @bitCast(colorSpace));
    }

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
    pub fn ColorSpace(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ColorSpace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` colorSpace: qvideoframeformat_enums.ColorSpace `
    ///
    pub fn SetColorSpace(self: QVideoFrameFormat, colorSpace: i32) void {
        qtc.QVideoFrameFormat_SetColorSpace(@ptrCast(self.ptr), @bitCast(colorSpace));
    }

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
    pub fn ColorTransfer(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ColorTransfer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorTransfer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` colorTransfer: qvideoframeformat_enums.ColorTransfer `
    ///
    pub fn SetColorTransfer(self: QVideoFrameFormat, colorTransfer: i32) void {
        qtc.QVideoFrameFormat_SetColorTransfer(@ptrCast(self.ptr), @bitCast(colorTransfer));
    }

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
    pub fn ColorRange(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_ColorRange(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` range: qvideoframeformat_enums.ColorRange `
    ///
    pub fn SetColorRange(self: QVideoFrameFormat, range: i32) void {
        qtc.QVideoFrameFormat_SetColorRange(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#isMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn IsMirrored(self: QVideoFrameFormat) bool {
        return qtc.QVideoFrameFormat_IsMirrored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` mirrored: bool `
    ///
    pub fn SetMirrored(self: QVideoFrameFormat, mirrored: bool) void {
        qtc.QVideoFrameFormat_SetMirrored(@ptrCast(self.ptr), mirrored);
    }

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
    pub fn Rotation(self: QVideoFrameFormat) i32 {
        return qtc.QVideoFrameFormat_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` rotation: qtvideo_enums.Rotation `
    ///
    pub fn SetRotation(self: QVideoFrameFormat, rotation: i32) void {
        qtc.QVideoFrameFormat_SetRotation(@ptrCast(self.ptr), @bitCast(rotation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#vertexShaderFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VertexShaderFileName(self: QVideoFrameFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrameFormat_VertexShaderFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.VertexShaderFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#fragmentShaderFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FragmentShaderFileName(self: QVideoFrameFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrameFormat_FragmentShaderFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.FragmentShaderFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#maxLuminance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn MaxLuminance(self: QVideoFrameFormat) f32 {
        return qtc.QVideoFrameFormat_MaxLuminance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setMaxLuminance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrameFormat `
    ///
    /// ` lum: f32 `
    ///
    pub fn SetMaxLuminance(self: QVideoFrameFormat, lum: f32) void {
        qtc.QVideoFrameFormat_SetMaxLuminance(@ptrCast(self.ptr), @bitCast(lum));
    }

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
    pub fn PixelFormatFromImageFormat(format: i32) i32 {
        return qtc.QVideoFrameFormat_PixelFormatFromImageFormat(@bitCast(format));
    }

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
    pub fn ImageFormatFromPixelFormat(format: i32) i32 {
        return qtc.QVideoFrameFormat_ImageFormatFromPixelFormat(@bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pixelFormat: qvideoframeformat_enums.PixelFormat `
    ///
    pub fn PixelFormatToString(allocator: std.mem.Allocator, pixelFormat: i32) []const u8 {
        var _str = qtc.QVideoFrameFormat_PixelFormatToString(@bitCast(pixelFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.PixelFormatToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#dtor.QVideoFrameFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVideoFrameFormat `
    ///
    pub fn Delete(self: QVideoFrameFormat) void {
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
