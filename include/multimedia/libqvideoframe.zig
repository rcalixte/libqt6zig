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

    /// New constructs a new QVideoFrame object.
    ///
    pub fn New() QVideoFrame {
        return .{ .ptr = qtc.QVideoFrame_new() };
    }

    /// New2 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn New2(format: anytype) QVideoFrame {
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return .{ .ptr = qtc.QVideoFrame_new2(@ptrCast(format.ptr)) };
    }

    /// New3 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn New3(image: anytype) QVideoFrame {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QVideoFrame_new3(@ptrCast(image.ptr)) };
    }

    /// New4 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` videoBuffer: QAbstractVideoBuffer (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.) `
    ///
    pub fn New4(videoBuffer: anytype) QVideoFrame {
        comptime _ = @TypeOf(videoBuffer)._is_QAbstractVideoBuffer;
        return .{ .ptr = qtc.QVideoFrame_new4(@ptrCast(videoBuffer.ptr)) };
    }

    /// New5 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn New5(other: anytype) QVideoFrame {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        return .{ .ptr = qtc.QVideoFrame_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QVideoFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` buffer: QAbstractVideoBuffer `
    ///
    /// ` format: QVideoFrameFormat `
    ///
    pub fn New6(buffer: anytype, format: anytype) QVideoFrame {
        comptime _ = @TypeOf(buffer)._is_QAbstractVideoBuffer;
        comptime _ = @TypeOf(format)._is_QVideoFrameFormat;
        return .{ .ptr = qtc.QVideoFrame_new6(@ptrCast(buffer.ptr), @ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn Swap(self: QVideoFrame, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        qtc.QVideoFrame_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn OperatorAssign(self: QVideoFrame, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        qtc.QVideoFrame_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn OperatorEqual(self: QVideoFrame, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        return qtc.QVideoFrame_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` other: QVideoFrame `
    ///
    pub fn OperatorNotEqual(self: QVideoFrame, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QVideoFrame;
        return qtc.QVideoFrame_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn IsValid(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsValid(@ptrCast(self.ptr));
    }

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
    pub fn PixelFormat(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_PixelFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn SurfaceFormat(self: QVideoFrame) QVideoFrameFormat {
        return .{ .ptr = qtc.QVideoFrame_SurfaceFormat(@ptrCast(self.ptr)) };
    }

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
    pub fn HandleType(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_HandleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn Size(self: QVideoFrame) QSize {
        return .{ .ptr = qtc.QVideoFrame_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn Width(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn Height(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn IsMapped(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsMapped(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn IsReadable(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsReadable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn IsWritable(self: QVideoFrame) bool {
        return qtc.QVideoFrame_IsWritable(@ptrCast(self.ptr));
    }

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
    pub fn MapMode(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_MapMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` mode: qvideoframe_enums.MapMode `
    ///
    pub fn Map(self: QVideoFrame, mode: i32) bool {
        return qtc.QVideoFrame_Map(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn Unmap(self: QVideoFrame) void {
        qtc.QVideoFrame_Unmap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn BytesPerLine(self: QVideoFrame, plane: i32) i32 {
        return qtc.QVideoFrame_BytesPerLine(@ptrCast(self.ptr), @bitCast(plane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn Bits(self: QVideoFrame, plane: i32) ?*u8 {
        return @ptrCast(qtc.QVideoFrame_Bits(@ptrCast(self.ptr), @bitCast(plane)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn Bits2(self: QVideoFrame, plane: i32) ?*const u8 {
        return @ptrCast(qtc.QVideoFrame_Bits2(@ptrCast(self.ptr), @bitCast(plane)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` plane: i32 `
    ///
    pub fn MappedBytes(self: QVideoFrame, plane: i32) i32 {
        return qtc.QVideoFrame_MappedBytes(@ptrCast(self.ptr), @bitCast(plane));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn PlaneCount(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_PlaneCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn StartTime(self: QVideoFrame) i64 {
        return qtc.QVideoFrame_StartTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` time: i64 `
    ///
    pub fn SetStartTime(self: QVideoFrame, time: i64) void {
        qtc.QVideoFrame_SetStartTime(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn EndTime(self: QVideoFrame) i64 {
        return qtc.QVideoFrame_EndTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` time: i64 `
    ///
    pub fn SetEndTime(self: QVideoFrame, time: i64) void {
        qtc.QVideoFrame_SetEndTime(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` angle: qvideoframe_enums.RotationAngle `
    ///
    pub fn SetRotationAngle(self: QVideoFrame, angle: i32) void {
        qtc.QVideoFrame_SetRotationAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

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
    pub fn RotationAngle(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_RotationAngle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` angle: qtvideo_enums.Rotation `
    ///
    pub fn SetRotation(self: QVideoFrame, angle: i32) void {
        qtc.QVideoFrame_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

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
    pub fn Rotation(self: QVideoFrame) i32 {
        return qtc.QVideoFrame_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` mirrored: bool `
    ///
    pub fn SetMirrored(self: QVideoFrame, mirrored: bool) void {
        qtc.QVideoFrame_SetMirrored(@ptrCast(self.ptr), mirrored);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn Mirrored(self: QVideoFrame) bool {
        return qtc.QVideoFrame_Mirrored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStreamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetStreamFrameRate(self: QVideoFrame, rate: f64) void {
        qtc.QVideoFrame_SetStreamFrameRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#streamFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn StreamFrameRate(self: QVideoFrame) f64 {
        return qtc.QVideoFrame_StreamFrameRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn ToImage(self: QVideoFrame) QImage {
        return .{ .ptr = qtc.QVideoFrame_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubtitleText(self: QVideoFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVideoFrame_SubtitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframe.SubtitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSubtitleText(self: QVideoFrame, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVideoFrame_SetSubtitleText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn Paint(self: QVideoFrame, painter: anytype, rect: anytype, options: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(options)._is_QVideoFrame__PaintOptions;
        qtc.QVideoFrame_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(options.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#videoBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame `
    ///
    pub fn VideoBuffer(self: QVideoFrame) QAbstractVideoBuffer {
        return .{ .ptr = qtc.QVideoFrame_VideoBuffer(@ptrCast(self.ptr)) };
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
    /// ` self: QVideoFrame `
    ///
    pub fn Delete(self: QVideoFrame) void {
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

    /// New constructs a new QVideoFrame::PaintOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn New(other: anytype) QVideoFrame__PaintOptions {
        comptime _ = @TypeOf(other)._is_QVideoFrame__PaintOptions;
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QVideoFrame::PaintOptions object and invalidates the source QVideoFrame::PaintOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn New2(other: anytype) QVideoFrame__PaintOptions {
        comptime _ = @TypeOf(other)._is_QVideoFrame__PaintOptions;
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn CopyAssign(self: QVideoFrame__PaintOptions, other: QVideoFrame__PaintOptions) void {
        qtc.QVideoFrame__PaintOptions_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` other: QVideoFrame__PaintOptions `
    ///
    pub fn MoveAssign(self: QVideoFrame__PaintOptions, other: QVideoFrame__PaintOptions) void {
        qtc.QVideoFrame__PaintOptions_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    pub fn BackgroundColor(self: QVideoFrame__PaintOptions) QColor {
        return .{ .ptr = qtc.QVideoFrame__PaintOptions_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` backgroundColor: QColor `
    ///
    pub fn SetBackgroundColor(self: QVideoFrame__PaintOptions, backgroundColor: anytype) void {
        comptime _ = @TypeOf(backgroundColor)._is_QColor;
        qtc.QVideoFrame__PaintOptions_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(backgroundColor.ptr));
    }

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
    pub fn AspectRatioMode(self: QVideoFrame__PaintOptions) i32 {
        return qtc.QVideoFrame__PaintOptions_AspectRatioMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn SetAspectRatioMode(self: QVideoFrame__PaintOptions, aspectRatioMode: i32) void {
        qtc.QVideoFrame__PaintOptions_SetAspectRatioMode(@ptrCast(self.ptr), @bitCast(aspectRatioMode));
    }

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
    pub fn PaintFlags(self: QVideoFrame__PaintOptions) i32 {
        return qtc.QVideoFrame__PaintOptions_PaintFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    /// ` paintFlags: flag of qvideoframe_enums.PaintFlag `
    ///
    pub fn SetPaintFlags(self: QVideoFrame__PaintOptions, paintFlags: i32) void {
        qtc.QVideoFrame__PaintOptions_SetPaintFlags(@ptrCast(self.ptr), @bitCast(paintFlags));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVideoFrame__PaintOptions `
    ///
    pub fn Delete(self: QVideoFrame__PaintOptions) void {
        qtc.QVideoFrame__PaintOptions_Delete(@ptrCast(self.ptr));
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
