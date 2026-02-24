const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qtvideo_enums = @import("libqtvideo.zig").enums;
const qvideoframe_enums = enums;
const qvideoframeformat_enums = @import("libqvideoframeformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)
pub const qvideoframe = struct {
    /// New constructs a new QVideoFrame object.
    ///
    pub fn New() QtC.QVideoFrame {
        return qtc.QVideoFrame_new();
    }

    /// New2 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QtC.QVideoFrameFormat `
    ///
    pub fn New2(format: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new2(@ptrCast(format));
    }

    /// New3 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn New3(image: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new3(@ptrCast(image));
    }

    /// New4 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` videoBuffer: QtC.QAbstractVideoBuffer (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.) `
    ///
    pub fn New4(videoBuffer: QtC.QAbstractVideoBuffer) QtC.QVideoFrame {
        return qtc.QVideoFrame_new4(@ptrCast(videoBuffer));
    }

    /// New5 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVideoFrame `
    ///
    pub fn New5(other: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new5(@ptrCast(other));
    }

    /// New6 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: QtC.QAbstractVideoBuffer `
    ///
    /// ` format: QtC.QVideoFrameFormat `
    ///
    pub fn New6(buffer: ?*anyopaque, format: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new6(@ptrCast(buffer), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` other: QtC.QVideoFrame `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` other: QtC.QVideoFrame `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` other: QtC.QVideoFrame `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVideoFrame_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` other: QtC.QVideoFrame `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVideoFrame_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#pixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.PixelFormat `
    ///
    pub fn PixelFormat(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_PixelFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn SurfaceFormat(self: ?*anyopaque) QtC.QVideoFrameFormat {
        return qtc.QVideoFrame_SurfaceFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#handleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframe_enums.HandleType `
    ///
    pub fn HandleType(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_HandleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QVideoFrame_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn IsMapped(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsMapped(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsReadable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsWritable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframe_enums.MapMode `
    ///
    pub fn MapMode(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_MapMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` mode: qvideoframe_enums.MapMode `
    ///
    pub fn Map(self: ?*anyopaque, mode: i32) bool {
        return qtc.QVideoFrame_Map(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn Unmap(self: ?*anyopaque) void {
        qtc.QVideoFrame_Unmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn BytesPerLine(self: ?*anyopaque, plane: i32) i32 {
        return qtc.QVideoFrame_BytesPerLine(@ptrCast(self), @bitCast(plane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn Bits(self: ?*anyopaque, plane: i32) ?*u8 {
        return @ptrCast(qtc.QVideoFrame_Bits(@ptrCast(self), @bitCast(plane)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn Bits2(self: ?*anyopaque, plane: i32) ?*const u8 {
        return @ptrCast(qtc.QVideoFrame_Bits2(@ptrCast(self), @bitCast(plane)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn MappedBytes(self: ?*anyopaque, plane: i32) i32 {
        return qtc.QVideoFrame_MappedBytes(@ptrCast(self), @bitCast(plane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn PlaneCount(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_PlaneCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn StartTime(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_StartTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` time: i64 `
    ///
    pub fn SetStartTime(self: ?*anyopaque, time: i64) void {
        qtc.QVideoFrame_SetStartTime(@ptrCast(self), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn EndTime(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_EndTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` time: i64 `
    ///
    pub fn SetEndTime(self: ?*anyopaque, time: i64) void {
        qtc.QVideoFrame_SetEndTime(@ptrCast(self), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` angle: qvideoframe_enums.RotationAngle `
    ///
    pub fn SetRotationAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QVideoFrame_SetRotationAngle(@ptrCast(self), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#rotationAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframe_enums.RotationAngle `
    ///
    pub fn RotationAngle(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_RotationAngle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` angle: qtvideo_enums.Rotation `
    ///
    pub fn SetRotation(self: ?*anyopaque, angle: i32) void {
        qtc.QVideoFrame_SetRotation(@ptrCast(self), @bitCast(angle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qtvideo_enums.Rotation `
    ///
    pub fn Rotation(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_Rotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` mirrored: bool `
    ///
    pub fn SetMirrored(self: ?*anyopaque, mirrored: bool) void {
        qtc.QVideoFrame_SetMirrored(@ptrCast(self), mirrored);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn Mirrored(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_Mirrored(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStreamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetStreamFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrame_SetStreamFrameRate(@ptrCast(self), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#streamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn StreamFrameRate(self: ?*anyopaque) f64 {
        return qtc.QVideoFrame_StreamFrameRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QVideoFrame_ToImage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubtitleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrame_SubtitleText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframe.SubtitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSubtitleText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVideoFrame_SetSubtitleText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` options: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QVideoFrame_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#videoBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn VideoBuffer(self: ?*anyopaque) QtC.QAbstractVideoBuffer {
        return qtc.QVideoFrame_VideoBuffer(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#dtor.QVideoFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVideoFrame `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVideoFrame_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html)
pub const qvideoframe__paintoptions = struct {
    /// New constructs a new QVideoFrame::PaintOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn New(other: ?*anyopaque) QtC.QVideoFrame__PaintOptions {
        return qtc.QVideoFrame__PaintOptions_new(@ptrCast(other));
    }

    /// New2 constructs a new QVideoFrame::PaintOptions object and invalidates the source QVideoFrame::PaintOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QVideoFrame__PaintOptions {
        return qtc.QVideoFrame__PaintOptions_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ` other: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ` other: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QVideoFrame__PaintOptions_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ` backgroundColor: QtC.QColor `
    ///
    pub fn SetBackgroundColor(self: ?*anyopaque, backgroundColor: QtC.QColor) void {
        qtc.QVideoFrame__PaintOptions_SetBackgroundColor(@ptrCast(self), @ptrCast(backgroundColor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.AspectRatioMode `
    ///
    pub fn AspectRatioMode(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame__PaintOptions_AspectRatioMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ` aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn SetAspectRatioMode(self: ?*anyopaque, aspectRatioMode: i32) void {
        qtc.QVideoFrame__PaintOptions_SetAspectRatioMode(@ptrCast(self), @bitCast(aspectRatioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ## Returns:
    ///
    /// ` flag of qvideoframe_enums.PaintFlag `
    ///
    pub fn PaintFlags(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame__PaintOptions_PaintFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    /// ` paintFlags: flag of qvideoframe_enums.PaintFlag `
    ///
    pub fn SetPaintFlags(self: ?*anyopaque, paintFlags: i32) void {
        qtc.QVideoFrame__PaintOptions_SetPaintFlags(@ptrCast(self), @bitCast(paintFlags));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QVideoFrame__PaintOptions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#public-types)
pub const enums = struct {
    pub const HandleType = enum(i32) {
        pub const NoHandle: i32 = 0;
        pub const RhiTextureHandle: i32 = 1;
    };

    pub const MapMode = enum(i32) {
        pub const NotMapped: i32 = 0;
        pub const ReadOnly: i32 = 1;
        pub const WriteOnly: i32 = 2;
        pub const ReadWrite: i32 = 3;
    };

    pub const RotationAngle = enum(i32) {
        pub const Rotation0: i32 = 0;
        pub const Rotation90: i32 = 90;
        pub const Rotation180: i32 = 180;
        pub const Rotation270: i32 = 270;
    };

    pub const PaintFlag = enum(i32) {
        pub const DontDrawSubtitles: i32 = 1;
    };
};
