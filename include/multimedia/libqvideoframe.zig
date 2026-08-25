const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractVideoBuffer = @import("libqt6").QAbstractVideoBuffer;
const QColor = @import("libqt6").QColor;
const QImage = @import("libqt6").QImage;
const QPainter = @import("libqt6").QPainter;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QVideoFrameFormat = @import("libqt6").QVideoFrameFormat;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qtvideo_enums = @import("libqtvideo.zig").enums;
const qvideoframe_enums = enums;
const qvideoframeformat_enums = @import("libqvideoframeformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)
pub const QVideoFrame = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVideoFrame,

    pub const _is_QVideoFrame = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVideoFrame object in C++ memory
    ///
    pub fn new() QVideoFrame {
        return .{ .ptr = qtc.QVideoFrame_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVideoFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn new2(format: anytype) QVideoFrame {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return .{ .ptr = qtc.QVideoFrame_new2(@ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVideoFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn new3(image: anytype) QVideoFrame {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QVideoFrame_new3(@ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QVideoFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _videoBuffer: QAbstractVideoBuffer (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.) `
    ///
    pub fn new4(_videoBuffer: anytype) QVideoFrame {
        comptime _ = @TypeOf(_videoBuffer)._is_QAbstractVideoBuffer;
        return .{ .ptr = qtc.QVideoFrame_new4(@ptrCast(_videoBuffer.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QVideoFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn new5(other: anytype) QVideoFrame {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        return .{ .ptr = qtc.QVideoFrame_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QVideoFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: QAbstractVideoBuffer `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn new6(buffer: anytype, format: anytype) QVideoFrame {
        comptime _ = @TypeOf(buffer)._is_QAbstractVideoBuffer;
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return .{ .ptr = qtc.QVideoFrame_new6(@ptrCast(buffer.ptr), @ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn swap(self: QVideoFrame, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        qtc.QVideoFrame_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn operatorAssign(self: QVideoFrame, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        qtc.QVideoFrame_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn operatorEqual(self: QVideoFrame, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        return qtc.QVideoFrame_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn operatorNotEqual(self: QVideoFrame, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        return qtc.QVideoFrame_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn isValid(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pixelFormat` instead
    ///
    pub const PixelFormat = pixelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#pixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.PixelFormat `
    ///
    pub fn pixelFormat(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_PixelFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `surfaceFormat` instead
    ///
    pub const SurfaceFormat = surfaceFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn surfaceFormat(self: QVideoFrame) QVideoFrameFormat {
        return .{ .ptr = qtc.QVideoFrame_SurfaceFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `handleType` instead
    ///
    pub const HandleType = handleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#handleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframe_enums.HandleType `
    ///
    pub fn handleType(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_HandleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn size(self: QVideoFrame) QSize {
        return .{ .ptr = qtc.QVideoFrame_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn width(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn height(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMapped` instead
    ///
    pub const IsMapped = isMapped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn isMapped(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsMapped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn isReadable(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn isWritable(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mapMode` instead
    ///
    pub const MapMode = mapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframe_enums.MapMode `
    ///
    pub fn mapMode(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_MapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` mode: qvideoframe_enums.MapMode `
    ///
    pub fn map(self: QVideoFrame, mode: i32) bool {
        return qtc.QVideoFrame_Map(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `unmap` instead
    ///
    pub const Unmap = unmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn unmap(self: QVideoFrame) void {
        qtc.QVideoFrame_Unmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesPerLine` instead
    ///
    pub const BytesPerLine = bytesPerLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn bytesPerLine(self: QVideoFrame, plane: i32) i32 {
        return qtc.QVideoFrame_BytesPerLine(@ptrCast(self.ptr), @bitCast(plane));
    }

    /// ### DEPRECATED: Use `bits` instead
    ///
    pub const Bits = bits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn bits(self: QVideoFrame, plane: i32) ?*u8 {
        return @ptrCast(qtc.QVideoFrame_Bits(@ptrCast(self.ptr), @bitCast(plane)));
    }

    /// ### DEPRECATED: Use `bits2` instead
    ///
    pub const Bits2 = bits2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn bits2(self: QVideoFrame, plane: i32) ?*const u8 {
        return @ptrCast(qtc.QVideoFrame_Bits2(@ptrCast(self.ptr), @bitCast(plane)));
    }

    /// ### DEPRECATED: Use `mappedBytes` instead
    ///
    pub const MappedBytes = mappedBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn mappedBytes(self: QVideoFrame, plane: i32) i32 {
        return qtc.QVideoFrame_MappedBytes(@ptrCast(self.ptr), @bitCast(plane));
    }

    /// ### DEPRECATED: Use `planeCount` instead
    ///
    pub const PlaneCount = planeCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn planeCount(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_PlaneCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTime` instead
    ///
    pub const StartTime = startTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn startTime(self: QVideoFrame) i64 {
        return qtc.QVideoFrame_StartTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStartTime` instead
    ///
    pub const SetStartTime = setStartTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` time: i64 `
    ///
    pub fn setStartTime(self: QVideoFrame, time: i64) void {
        qtc.QVideoFrame_SetStartTime(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `endTime` instead
    ///
    pub const EndTime = endTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn endTime(self: QVideoFrame) i64 {
        return qtc.QVideoFrame_EndTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEndTime` instead
    ///
    pub const SetEndTime = setEndTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` time: i64 `
    ///
    pub fn setEndTime(self: QVideoFrame, time: i64) void {
        qtc.QVideoFrame_SetEndTime(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `setRotationAngle` instead
    ///
    pub const SetRotationAngle = setRotationAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` angle: qvideoframe_enums.RotationAngle `
    ///
    pub fn setRotationAngle(self: QVideoFrame, angle: i32) void {
        qtc.QVideoFrame_SetRotationAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotationAngle` instead
    ///
    pub const RotationAngle = rotationAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#rotationAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframe_enums.RotationAngle `
    ///
    pub fn rotationAngle(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_RotationAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` angle: qtvideo_enums.Rotation `
    ///
    pub fn setRotation(self: QVideoFrame, angle: i32) void {
        qtc.QVideoFrame_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ## Returns:
    ///
    /// ` qtvideo_enums.Rotation `
    ///
    pub fn rotation(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMirrored` instead
    ///
    pub const SetMirrored = setMirrored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` _mirrored: bool `
    ///
    pub fn setMirrored(self: QVideoFrame, _mirrored: bool) void {
        qtc.QVideoFrame_SetMirrored(@ptrCast(self.ptr), _mirrored);
    }

    /// ### DEPRECATED: Use `mirrored` instead
    ///
    pub const Mirrored = mirrored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn mirrored(self: QVideoFrame) bool {
        return qtc.QVideoFrame_Mirrored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStreamFrameRate` instead
    ///
    pub const SetStreamFrameRate = setStreamFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStreamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` rate: f64 `
    ///
    pub fn setStreamFrameRate(self: QVideoFrame, rate: f64) void {
        qtc.QVideoFrame_SetStreamFrameRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `streamFrameRate` instead
    ///
    pub const StreamFrameRate = streamFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#streamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn streamFrameRate(self: QVideoFrame) f64 {
        return qtc.QVideoFrame_StreamFrameRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toImage` instead
    ///
    pub const ToImage = toImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn toImage(self: QVideoFrame) QImage {
        return .{ .ptr = qtc.QVideoFrame_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `subtitleText` instead
    ///
    pub const SubtitleText = subtitleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subtitleText(self: QVideoFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrame_SubtitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVideoFrame.subtitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSubtitleText` instead
    ///
    pub const SetSubtitleText = setSubtitleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setSubtitleText(self: QVideoFrame, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVideoFrame_SetSubtitleText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` options: QVideoFrame__PaintOptions `
    ///
    pub fn paint(self: QVideoFrame, painter: anytype, rect: anytype, options: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(options)._is_QVideoFrame__PaintOptions;
        qtc.QVideoFrame_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `videoBuffer` instead
    ///
    pub const VideoBuffer = videoBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#videoBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn videoBuffer(self: QVideoFrame) QAbstractVideoBuffer {
        return .{ .ptr = qtc.QVideoFrame_VideoBuffer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#dtor.QVideoFrame)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn delete(self: QVideoFrame) void {
        qtc.QVideoFrame_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html)
pub const QVideoFrame__PaintOptions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVideoFrame__PaintOptions,

    pub const _is_QVideoFrame__PaintOptions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVideoFrame::PaintOptions object in C++ memory
    ///
    pub fn new() QVideoFrame__PaintOptions {
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVideoFrame::PaintOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn new2(other: anytype) QVideoFrame__PaintOptions {
        comptime _ = @TypeOf(other)._is_QVideoFrame__PaintOptions;
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVideoFrame::PaintOptions object and invalidate the source QVideoFrame::PaintOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn new3(other: anytype) QVideoFrame__PaintOptions {
        comptime _ = @TypeOf(other)._is_QVideoFrame__PaintOptions;
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn copyAssign(self: QVideoFrame__PaintOptions, other: QVideoFrame__PaintOptions) void {
        qtc.QVideoFrame__PaintOptions_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn moveAssign(self: QVideoFrame__PaintOptions, other: QVideoFrame__PaintOptions) void {
        qtc.QVideoFrame__PaintOptions_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    pub fn backgroundColor(self: QVideoFrame__PaintOptions) QColor {
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` _backgroundColor: QColor `
    ///
    pub fn setBackgroundColor(self: QVideoFrame__PaintOptions, _backgroundColor: anytype) void {
        comptime _ = @TypeOf(_backgroundColor)._is_QColor;
        qtc.QVideoFrame__PaintOptions_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(_backgroundColor.ptr));
    }

    /// ### DEPRECATED: Use `aspectRatioMode` instead
    ///
    pub const AspectRatioMode = aspectRatioMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.AspectRatioMode `
    ///
    pub fn aspectRatioMode(self: QVideoFrame__PaintOptions) i32 {
        return qtc.QVideoFrame__PaintOptions_AspectRatioMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAspectRatioMode` instead
    ///
    pub const SetAspectRatioMode = setAspectRatioMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` _aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn setAspectRatioMode(self: QVideoFrame__PaintOptions, _aspectRatioMode: i32) void {
        qtc.QVideoFrame__PaintOptions_SetAspectRatioMode(@ptrCast(self.ptr), @bitCast(_aspectRatioMode));
    }

    /// ### DEPRECATED: Use `paintFlags` instead
    ///
    pub const PaintFlags = paintFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ## Returns:
    ///
    /// ` flag of qvideoframe_enums.PaintFlag `
    ///
    pub fn paintFlags(self: QVideoFrame__PaintOptions) i32 {
        return qtc.QVideoFrame__PaintOptions_PaintFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaintFlags` instead
    ///
    pub const SetPaintFlags = setPaintFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` _paintFlags: flag of qvideoframe_enums.PaintFlag `
    ///
    pub fn setPaintFlags(self: QVideoFrame__PaintOptions, _paintFlags: i32) void {
        qtc.QVideoFrame__PaintOptions_SetPaintFlags(@ptrCast(self.ptr), @bitCast(_paintFlags));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    pub fn delete(self: QVideoFrame__PaintOptions) void {
        qtc.QVideoFrame__PaintOptions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#public-types)
pub const enums = struct {
    pub const HandleType = enum {
        pub const NoHandle: i32 = 0;
        pub const RhiTextureHandle: i32 = 1;
    };

    pub const MapMode = enum {
        pub const NotMapped: i32 = 0;
        pub const ReadOnly: i32 = 1;
        pub const WriteOnly: i32 = 2;
        pub const ReadWrite: i32 = 3;
    };

    pub const RotationAngle = enum {
        pub const Rotation0: i32 = 0;
        pub const Rotation90: i32 = 90;
        pub const Rotation180: i32 = 180;
        pub const Rotation270: i32 = 270;
    };

    pub const PaintFlag = enum {
        pub const DontDrawSubtitles: i32 = 1;
    };
};
