const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioFormat = @import("libqt6").QAudioFormat;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html)
pub const QAudioBuffer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAudioBuffer,

    pub const _is_QAudioBuffer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAudioBuffer object in C++ memory
    ///
    pub fn new() QAudioBuffer {
        return .{ .ptr = qtc.QAudioBuffer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAudioBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAudioBuffer `
    ///
    pub fn new2(other: anytype) QAudioBuffer {
        comptime _ = @TypeOf(other)._is_QAudioBuffer;
        return .{ .ptr = qtc.QAudioBuffer_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAudioBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` _format: QAudioFormat `
    ///
    pub fn new3(data: []u8, _format: anytype) QAudioBuffer {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(_format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new3(data_str, @ptrCast(_format.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QAudioBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` numFrames: i32 `
    ///
    /// ` _format: QAudioFormat `
    ///
    pub fn new4(numFrames: i32, _format: anytype) QAudioBuffer {
        comptime _ = @TypeOf(_format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new4(@bitCast(numFrames), @ptrCast(_format.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QAudioBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` _format: QAudioFormat `
    ///
    /// ` _startTime: i64 `
    ///
    pub fn new5(data: []u8, _format: anytype, _startTime: i64) QAudioBuffer {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(_format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new5(data_str, @ptrCast(_format.ptr), @bitCast(_startTime)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QAudioBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` numFrames: i32 `
    ///
    /// ` _format: QAudioFormat `
    ///
    /// ` _startTime: i64 `
    ///
    pub fn new6(numFrames: i32, _format: anytype, _startTime: i64) QAudioBuffer {
        comptime _ = @TypeOf(_format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new6(@bitCast(numFrames), @ptrCast(_format.ptr), @bitCast(_startTime)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    /// ` other: QAudioBuffer `
    ///
    pub fn operatorAssign(self: QAudioBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioBuffer;
        qtc.QAudioBuffer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    /// ` other: QAudioBuffer `
    ///
    pub fn swap(self: QAudioBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioBuffer;
        qtc.QAudioBuffer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn isValid(self: QAudioBuffer) bool {
        return qtc.QAudioBuffer_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn detach(self: QAudioBuffer) void {
        qtc.QAudioBuffer_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn format(self: QAudioBuffer) QAudioFormat {
        return .{ .ptr = qtc.QAudioBuffer_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameCount` instead
    ///
    pub const FrameCount = frameCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn frameCount(self: QAudioBuffer) isize {
        return qtc.QAudioBuffer_FrameCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sampleCount` instead
    ///
    pub const SampleCount = sampleCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn sampleCount(self: QAudioBuffer) isize {
        return qtc.QAudioBuffer_SampleCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `byteCount` instead
    ///
    pub const ByteCount = byteCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn byteCount(self: QAudioBuffer) isize {
        return qtc.QAudioBuffer_ByteCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn duration(self: QAudioBuffer) i64 {
        return qtc.QAudioBuffer_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTime` instead
    ///
    pub const StartTime = startTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn startTime(self: QAudioBuffer) i64 {
        return qtc.QAudioBuffer_StartTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#dtor.QAudioBuffer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn delete(self: QAudioBuffer) void {
        qtc.QAudioBuffer_Delete(@ptrCast(self.ptr));
    }
};
