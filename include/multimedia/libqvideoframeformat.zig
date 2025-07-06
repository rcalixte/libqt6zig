const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimage_enums = @import("../libqimage.zig").enums;
const qtvideo_enums = @import("libqtvideo.zig").enums;
const qvideoframeformat_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qvideoframeformat.html
pub const qvideoframeformat = struct {
    /// New constructs a new QVideoFrameFormat object.
    ///
    ///
    pub fn New() QtC.QVideoFrameFormat {
        return qtc.QVideoFrameFormat_new();
    }

    /// New2 constructs a new QVideoFrameFormat object.
    ///
    /// ``` size: QtC.QSize, pixelFormat: qvideoframeformat_enums.PixelFormat ```
    pub fn New2(size: ?*anyopaque, pixelFormat: i64) QtC.QVideoFrameFormat {
        return qtc.QVideoFrameFormat_new2(@ptrCast(size), @intCast(pixelFormat));
    }

    /// New3 constructs a new QVideoFrameFormat object.
    ///
    /// ``` format: QtC.QVideoFrameFormat ```
    pub fn New3(format: ?*anyopaque) QtC.QVideoFrameFormat {
        return qtc.QVideoFrameFormat_new3(@ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#swap)
    ///
    /// ``` self: QtC.QVideoFrameFormat, other: QtC.QVideoFrameFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrameFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#detach)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QVideoFrameFormat_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator=)
    ///
    /// ``` self: QtC.QVideoFrameFormat, format: QtC.QVideoFrameFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QVideoFrameFormat_OperatorAssign(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator==)
    ///
    /// ``` self: QtC.QVideoFrameFormat, format: QtC.QVideoFrameFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, format: ?*anyopaque) bool {
        return qtc.QVideoFrameFormat_OperatorEqual(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator!=)
    ///
    /// ``` self: QtC.QVideoFrameFormat, format: QtC.QVideoFrameFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, format: ?*anyopaque) bool {
        return qtc.QVideoFrameFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#isValid)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QVideoFrameFormat_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormat)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn PixelFormat(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_PixelFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameSize)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVideoFrameFormat_FrameSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
    ///
    /// ``` self: QtC.QVideoFrameFormat, size: QtC.QSize ```
    pub fn SetFrameSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QVideoFrameFormat_SetFrameSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
    ///
    /// ``` self: QtC.QVideoFrameFormat, width: i32, height: i32 ```
    pub fn SetFrameSize2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QVideoFrameFormat_SetFrameSize2(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameWidth)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QVideoFrameFormat_FrameWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameHeight)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn FrameHeight(self: ?*anyopaque) i32 {
        return qtc.QVideoFrameFormat_FrameHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#planeCount)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn PlaneCount(self: ?*anyopaque) i32 {
        return qtc.QVideoFrameFormat_PlaneCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#viewport)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn Viewport(self: ?*anyopaque) QtC.QRect {
        return qtc.QVideoFrameFormat_Viewport(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setViewport)
    ///
    /// ``` self: QtC.QVideoFrameFormat, viewport: QtC.QRect ```
    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QVideoFrameFormat_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#scanLineDirection)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn ScanLineDirection(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_ScanLineDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setScanLineDirection)
    ///
    /// ``` self: QtC.QVideoFrameFormat, direction: qvideoframeformat_enums.Direction ```
    pub fn SetScanLineDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QVideoFrameFormat_SetScanLineDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameRate)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn FrameRate(self: ?*anyopaque) f64 {
        return qtc.QVideoFrameFormat_FrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameRate)
    ///
    /// ``` self: QtC.QVideoFrameFormat, rate: f64 ```
    pub fn SetFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrameFormat_SetFrameRate(@ptrCast(self), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#streamFrameRate)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn StreamFrameRate(self: ?*anyopaque) f64 {
        return qtc.QVideoFrameFormat_StreamFrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setStreamFrameRate)
    ///
    /// ``` self: QtC.QVideoFrameFormat, rate: f64 ```
    pub fn SetStreamFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrameFormat_SetStreamFrameRate(@ptrCast(self), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#yCbCrColorSpace)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn YCbCrColorSpace(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_YCbCrColorSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setYCbCrColorSpace)
    ///
    /// ``` self: QtC.QVideoFrameFormat, colorSpace: qvideoframeformat_enums.YCbCrColorSpace ```
    pub fn SetYCbCrColorSpace(self: ?*anyopaque, colorSpace: i64) void {
        qtc.QVideoFrameFormat_SetYCbCrColorSpace(@ptrCast(self), @intCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorSpace)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn ColorSpace(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_ColorSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorSpace)
    ///
    /// ``` self: QtC.QVideoFrameFormat, colorSpace: qvideoframeformat_enums.ColorSpace ```
    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: i64) void {
        qtc.QVideoFrameFormat_SetColorSpace(@ptrCast(self), @intCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorTransfer)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn ColorTransfer(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_ColorTransfer(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorTransfer)
    ///
    /// ``` self: QtC.QVideoFrameFormat, colorTransfer: qvideoframeformat_enums.ColorTransfer ```
    pub fn SetColorTransfer(self: ?*anyopaque, colorTransfer: i64) void {
        qtc.QVideoFrameFormat_SetColorTransfer(@ptrCast(self), @intCast(colorTransfer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorRange)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn ColorRange(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_ColorRange(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorRange)
    ///
    /// ``` self: QtC.QVideoFrameFormat, range: qvideoframeformat_enums.ColorRange ```
    pub fn SetColorRange(self: ?*anyopaque, range: i64) void {
        qtc.QVideoFrameFormat_SetColorRange(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#isMirrored)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn IsMirrored(self: ?*anyopaque) bool {
        return qtc.QVideoFrameFormat_IsMirrored(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setMirrored)
    ///
    /// ``` self: QtC.QVideoFrameFormat, mirrored: bool ```
    pub fn SetMirrored(self: ?*anyopaque, mirrored: bool) void {
        qtc.QVideoFrameFormat_SetMirrored(@ptrCast(self), mirrored);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#rotation)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn Rotation(self: ?*anyopaque) i64 {
        return qtc.QVideoFrameFormat_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setRotation)
    ///
    /// ``` self: QtC.QVideoFrameFormat, rotation: qtvideo_enums.Rotation ```
    pub fn SetRotation(self: ?*anyopaque, rotation: i64) void {
        qtc.QVideoFrameFormat_SetRotation(@ptrCast(self), @intCast(rotation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#vertexShaderFileName)
    ///
    /// ``` self: QtC.QVideoFrameFormat, allocator: std.mem.Allocator ```
    pub fn VertexShaderFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameFormat_VertexShaderFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.VertexShaderFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#fragmentShaderFileName)
    ///
    /// ``` self: QtC.QVideoFrameFormat, allocator: std.mem.Allocator ```
    pub fn FragmentShaderFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameFormat_FragmentShaderFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.FragmentShaderFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#maxLuminance)
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn MaxLuminance(self: ?*anyopaque) f32 {
        return qtc.QVideoFrameFormat_MaxLuminance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setMaxLuminance)
    ///
    /// ``` self: QtC.QVideoFrameFormat, lum: f32 ```
    pub fn SetMaxLuminance(self: ?*anyopaque, lum: f32) void {
        qtc.QVideoFrameFormat_SetMaxLuminance(@ptrCast(self), @floatCast(lum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatFromImageFormat)
    ///
    /// ``` format: qimage_enums.Format ```
    pub fn PixelFormatFromImageFormat(format: i64) i64 {
        return qtc.QVideoFrameFormat_PixelFormatFromImageFormat(@intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#imageFormatFromPixelFormat)
    ///
    /// ``` format: qvideoframeformat_enums.PixelFormat ```
    pub fn ImageFormatFromPixelFormat(format: i64) i64 {
        return qtc.QVideoFrameFormat_ImageFormatFromPixelFormat(@intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatToString)
    ///
    /// ``` pixelFormat: qvideoframeformat_enums.PixelFormat, allocator: std.mem.Allocator ```
    pub fn PixelFormatToString(pixelFormat: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameFormat_PixelFormatToString(@intCast(pixelFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.PixelFormatToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#dtor.QVideoFrameFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVideoFrameFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrameFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvideoframeformat.html#types
pub const enums = struct {
    pub const PixelFormat = enum {
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

    pub const Direction = enum {
        pub const TopToBottom: i32 = 0;
        pub const BottomToTop: i32 = 1;
    };

    pub const YCbCrColorSpace = enum {
        pub const YCbCr_Undefined: i32 = 0;
        pub const YCbCr_BT601: i32 = 1;
        pub const YCbCr_BT709: i32 = 2;
        pub const YCbCr_xvYCC601: i32 = 3;
        pub const YCbCr_xvYCC709: i32 = 4;
        pub const YCbCr_JPEG: i32 = 5;
        pub const YCbCr_BT2020: i32 = 6;
    };

    pub const ColorSpace = enum {
        pub const ColorSpace_Undefined: i32 = 0;
        pub const ColorSpace_BT601: i32 = 1;
        pub const ColorSpace_BT709: i32 = 2;
        pub const ColorSpace_AdobeRgb: i32 = 5;
        pub const ColorSpace_BT2020: i32 = 6;
    };

    pub const ColorTransfer = enum {
        pub const ColorTransfer_Unknown: i32 = 0;
        pub const ColorTransfer_BT709: i32 = 1;
        pub const ColorTransfer_BT601: i32 = 2;
        pub const ColorTransfer_Linear: i32 = 3;
        pub const ColorTransfer_Gamma22: i32 = 4;
        pub const ColorTransfer_Gamma28: i32 = 5;
        pub const ColorTransfer_ST2084: i32 = 6;
        pub const ColorTransfer_STD_B67: i32 = 7;
    };

    pub const ColorRange = enum {
        pub const ColorRange_Unknown: i32 = 0;
        pub const ColorRange_Video: i32 = 1;
        pub const ColorRange_Full: i32 = 2;
    };
};
