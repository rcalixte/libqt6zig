const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html)
pub const qaudiobuffer = struct {
    /// New constructs a new QAudioBuffer object.
    ///
    pub fn New() QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new();
    }

    /// New2 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QAudioBuffer `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: QtC.QAudioFormat `
    ///
    pub fn New3(data: []u8, format: ?*anyopaque) QtC.QAudioBuffer {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QAudioBuffer_new3(data_str, @ptrCast(format));
    }

    /// New4 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` numFrames: i32 `
    ///
    /// ` format: QtC.QAudioFormat `
    ///
    pub fn New4(numFrames: i32, format: ?*anyopaque) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new4(@bitCast(numFrames), @ptrCast(format));
    }

    /// New5 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: QtC.QAudioFormat `
    ///
    /// ` startTime: i64 `
    ///
    pub fn New5(data: []u8, format: ?*anyopaque, startTime: i64) QtC.QAudioBuffer {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QAudioBuffer_new5(data_str, @ptrCast(format), @bitCast(startTime));
    }

    /// New6 constructs a new QAudioBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` numFrames: i32 `
    ///
    /// ` format: QtC.QAudioFormat `
    ///
    /// ` startTime: i64 `
    ///
    pub fn New6(numFrames: i32, format: ?*anyopaque, startTime: i64) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new6(@bitCast(numFrames), @ptrCast(format), @bitCast(startTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    /// ` other: QtC.QAudioBuffer `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioBuffer_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    /// ` other: QtC.QAudioBuffer `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioBuffer_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAudioBuffer_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QAudioBuffer_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn Format(self: ?*anyopaque) QtC.QAudioFormat {
        return qtc.QAudioBuffer_Format(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn FrameCount(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_FrameCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn SampleCount(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_SampleCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn ByteCount(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_ByteCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn Duration(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_Duration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn StartTime(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_StartTime(@ptrCast(self));
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
    /// ` self: QtC.QAudioBuffer `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QAudioBuffer_Delete(@ptrCast(self));
    }
};
