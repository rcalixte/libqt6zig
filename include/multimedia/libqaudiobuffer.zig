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

    /// New constructs a new QAudioBuffer object.
    ///
    pub fn New() QAudioBuffer {
        return .{ .ptr = qtc.QAudioBuffer_new() };
    }

    /// New2 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAudioBuffer `
    ///
    pub fn New2(other: anytype) QAudioBuffer {
        comptime _ = @TypeOf(other)._is_QAudioBuffer;
        return .{ .ptr = qtc.QAudioBuffer_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: QAudioFormat `
    ///
    pub fn New3(data: []u8, format: anytype) QAudioBuffer {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new3(data_str, @ptrCast(format.ptr)) };
    }

    /// New4 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` numFrames: i32 `
    ///
    /// ` format: QAudioFormat `
    ///
    pub fn New4(numFrames: i32, format: anytype) QAudioBuffer {
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new4(@bitCast(numFrames), @ptrCast(format.ptr)) };
    }

    /// New5 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: QAudioFormat `
    ///
    /// ` startTime: i64 `
    ///
    pub fn New5(data: []u8, format: anytype, startTime: i64) QAudioBuffer {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new5(data_str, @ptrCast(format.ptr), @bitCast(startTime)) };
    }

    /// New6 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` numFrames: i32 `
    ///
    /// ` format: QAudioFormat `
    ///
    /// ` startTime: i64 `
    ///
    pub fn New6(numFrames: i32, format: anytype, startTime: i64) QAudioBuffer {
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioBuffer_new6(@bitCast(numFrames), @ptrCast(format.ptr), @bitCast(startTime)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    /// ` other: QAudioBuffer `
    ///
    pub fn OperatorAssign(self: QAudioBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioBuffer;
        qtc.QAudioBuffer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    /// ` other: QAudioBuffer `
    ///
    pub fn Swap(self: QAudioBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioBuffer;
        qtc.QAudioBuffer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn IsValid(self: QAudioBuffer) bool {
        return qtc.QAudioBuffer_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn Detach(self: QAudioBuffer) void {
        qtc.QAudioBuffer_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn Format(self: QAudioBuffer) QAudioFormat {
        return .{ .ptr = qtc.QAudioBuffer_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn FrameCount(self: QAudioBuffer) isize {
        return qtc.QAudioBuffer_FrameCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn SampleCount(self: QAudioBuffer) isize {
        return qtc.QAudioBuffer_SampleCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn ByteCount(self: QAudioBuffer) isize {
        return qtc.QAudioBuffer_ByteCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn Duration(self: QAudioBuffer) i64 {
        return qtc.QAudioBuffer_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn StartTime(self: QAudioBuffer) i64 {
        return qtc.QAudioBuffer_StartTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#dtor.QAudioBuffer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAudioBuffer `
    ///
    pub fn Delete(self: QAudioBuffer) void {
        qtc.QAudioBuffer_Delete(@ptrCast(self.ptr));
    }
};
