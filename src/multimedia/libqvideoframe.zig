const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtvideo_enums = @import("libqtvideo.zig").enums;
const qvideoframe_enums = enums;
const qvideoframeformat_enums = @import("libqvideoframeformat.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qvideoframe.html
pub const qvideoframe = struct {
    /// New constructs a new QVideoFrame object.
    ///
    ///
    pub fn New() QtC.QVideoFrame {
        return qtc.QVideoFrame_new();
    }

    /// New2 constructs a new QVideoFrame object.
    ///
    /// ``` format: QtC.QVideoFrameFormat ```
    pub fn New2(format: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new2(@ptrCast(format));
    }

    /// New3 constructs a new QVideoFrame object.
    ///
    /// ``` image: QtC.QImage ```
    pub fn New3(image: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new3(@ptrCast(image));
    }

    /// New4 constructs a new QVideoFrame object.
    ///
    /// ``` other: QtC.QVideoFrame ```
    pub fn New4(other: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#swap)
    ///
    /// ``` self: QtC.QVideoFrame, other: QtC.QVideoFrame ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator=)
    ///
    /// ``` self: QtC.QVideoFrame, other: QtC.QVideoFrame ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator==)
    ///
    /// ``` self: QtC.QVideoFrame, other: QtC.QVideoFrame ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVideoFrame_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator!=)
    ///
    /// ``` self: QtC.QVideoFrame, other: QtC.QVideoFrame ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVideoFrame_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#pixelFormat)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn PixelFormat(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_PixelFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn SurfaceFormat(self: ?*anyopaque) QtC.QVideoFrameFormat {
        return qtc.QVideoFrame_SurfaceFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#handleType)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn HandleType(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_HandleType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#size)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QVideoFrame_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#width)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#height)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn IsMapped(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsMapped(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsReadable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mapMode)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn MapMode(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_MapMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#map)
    ///
    /// ``` self: QtC.QVideoFrame, mode: qvideoframe_enums.MapMode ```
    pub fn Map(self: ?*anyopaque, mode: i64) bool {
        return qtc.QVideoFrame_Map(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn Unmap(self: ?*anyopaque) void {
        qtc.QVideoFrame_Unmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
    ///
    /// ``` self: QtC.QVideoFrame, plane: i32 ```
    pub fn BytesPerLine(self: ?*anyopaque, plane: i32) i32 {
        return qtc.QVideoFrame_BytesPerLine(@ptrCast(self), @intCast(plane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ``` self: QtC.QVideoFrame, plane: i32 ```
    pub fn Bits(self: ?*anyopaque, plane: i32) ?*u8 {
        return @ptrCast(qtc.QVideoFrame_Bits(@ptrCast(self), @intCast(plane)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bits)
    ///
    /// ``` self: QtC.QVideoFrame, plane: i32 ```
    pub fn BitsWithPlane(self: ?*anyopaque, plane: i32) ?*const u8 {
        return @ptrCast(qtc.QVideoFrame_BitsWithPlane(@ptrCast(self), @intCast(plane)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
    ///
    /// ``` self: QtC.QVideoFrame, plane: i32 ```
    pub fn MappedBytes(self: ?*anyopaque, plane: i32) i32 {
        return qtc.QVideoFrame_MappedBytes(@ptrCast(self), @intCast(plane));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn PlaneCount(self: ?*anyopaque) i32 {
        return qtc.QVideoFrame_PlaneCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn StartTime(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_StartTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
    ///
    /// ``` self: QtC.QVideoFrame, time: i64 ```
    pub fn SetStartTime(self: ?*anyopaque, time: i64) void {
        qtc.QVideoFrame_SetStartTime(@ptrCast(self), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn EndTime(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_EndTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
    ///
    /// ``` self: QtC.QVideoFrame, time: i64 ```
    pub fn SetEndTime(self: ?*anyopaque, time: i64) void {
        qtc.QVideoFrame_SetEndTime(@ptrCast(self), @intCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
    ///
    /// ``` self: QtC.QVideoFrame, angle: qvideoframe_enums.RotationAngle ```
    pub fn SetRotationAngle(self: ?*anyopaque, angle: i64) void {
        qtc.QVideoFrame_SetRotationAngle(@ptrCast(self), @intCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#rotationAngle)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn RotationAngle(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_RotationAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setRotation)
    ///
    /// ``` self: QtC.QVideoFrame, angle: qtvideo_enums.Rotation ```
    pub fn SetRotation(self: ?*anyopaque, angle: i64) void {
        qtc.QVideoFrame_SetRotation(@ptrCast(self), @intCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#rotation)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn Rotation(self: ?*anyopaque) i64 {
        return qtc.QVideoFrame_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
    ///
    /// ``` self: QtC.QVideoFrame, mirrored: bool ```
    pub fn SetMirrored(self: ?*anyopaque, mirrored: bool) void {
        qtc.QVideoFrame_SetMirrored(@ptrCast(self), mirrored);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn Mirrored(self: ?*anyopaque) bool {
        return qtc.QVideoFrame_Mirrored(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setStreamFrameRate)
    ///
    /// ``` self: QtC.QVideoFrame, rate: f64 ```
    pub fn SetStreamFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrame_SetStreamFrameRate(@ptrCast(self), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#streamFrameRate)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn StreamFrameRate(self: ?*anyopaque) f64 {
        return qtc.QVideoFrame_StreamFrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QVideoFrame_ToImage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
    ///
    /// ``` self: QtC.QVideoFrame, allocator: std.mem.Allocator ```
    pub fn SubtitleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrame_SubtitleText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframe.SubtitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
    ///
    /// ``` self: QtC.QVideoFrame, text: []const u8 ```
    pub fn SetSubtitleText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QVideoFrame_SetSubtitleText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#paint)
    ///
    /// ``` self: QtC.QVideoFrame, painter: QtC.QPainter, rect: QtC.QRectF, options: QtC.QVideoFrame__PaintOptions ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QVideoFrame_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#dtor.QVideoFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVideoFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvideoframe-paintoptions.html
pub const qvideoframe__paintoptions = struct {
    /// New constructs a new QVideoFrame::PaintOptions object.
    ///
    /// ``` other: QtC.QVideoFrame__PaintOptions ```
    pub fn New(other: ?*anyopaque) QtC.QVideoFrame__PaintOptions {
        return qtc.QVideoFrame__PaintOptions_new(@ptrCast(other));
    }

    /// New2 constructs a new QVideoFrame::PaintOptions object and invalidates the source QVideoFrame::PaintOptions object.
    ///
    /// ``` other: QtC.QVideoFrame__PaintOptions ```
    pub fn New2(other: ?*anyopaque) QtC.QVideoFrame__PaintOptions {
        return qtc.QVideoFrame__PaintOptions_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QVideoFrame__PaintOptions, other: QtC.QVideoFrame__PaintOptions ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QVideoFrame__PaintOptions, other: QtC.QVideoFrame__PaintOptions ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVideoFrame__PaintOptions ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvideoframe.html#types
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
