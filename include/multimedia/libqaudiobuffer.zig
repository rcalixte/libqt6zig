const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qaudiobuffer.html
pub const qaudiobuffer = struct {
    /// New constructs a new QAudioBuffer object.
    ///
    ///
    pub fn New() QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new();
    }

    /// New2 constructs a new QAudioBuffer object.
    ///
    /// ``` other: QtC.QAudioBuffer ```
    pub fn New2(other: ?*anyopaque) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAudioBuffer object.
    ///
    /// ``` data: []u8, format: QtC.QAudioFormat ```
    pub fn New3(data: []u8, format: ?*anyopaque) QtC.QAudioBuffer {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };

        return qtc.QAudioBuffer_new3(data_str, @ptrCast(format));
    }

    /// New4 constructs a new QAudioBuffer object.
    ///
    /// ``` numFrames: i32, format: QtC.QAudioFormat ```
    pub fn New4(numFrames: i32, format: ?*anyopaque) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new4(@intCast(numFrames), @ptrCast(format));
    }

    /// New5 constructs a new QAudioBuffer object.
    ///
    /// ``` data: []u8, format: QtC.QAudioFormat, startTime: i64 ```
    pub fn New5(data: []u8, format: ?*anyopaque, startTime: i64) QtC.QAudioBuffer {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };

        return qtc.QAudioBuffer_new5(data_str, @ptrCast(format), @intCast(startTime));
    }

    /// New6 constructs a new QAudioBuffer object.
    ///
    /// ``` numFrames: i32, format: QtC.QAudioFormat, startTime: i64 ```
    pub fn New6(numFrames: i32, format: ?*anyopaque, startTime: i64) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new6(@intCast(numFrames), @ptrCast(format), @intCast(startTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#operator=)
    ///
    /// ``` self: QtC.QAudioBuffer, other: QtC.QAudioBuffer ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioBuffer_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#swap)
    ///
    /// ``` self: QtC.QAudioBuffer, other: QtC.QAudioBuffer ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioBuffer_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#isValid)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAudioBuffer_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#detach)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QAudioBuffer_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#format)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn Format(self: ?*anyopaque) QtC.QAudioFormat {
        return qtc.QAudioBuffer_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#frameCount)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn FrameCount(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_FrameCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#sampleCount)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn SampleCount(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_SampleCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#byteCount)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn ByteCount(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_ByteCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#duration)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn Duration(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_Duration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#startTime)
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn StartTime(self: ?*anyopaque) i64 {
        return qtc.QAudioBuffer_StartTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaudiobuffer.html#dtor.QAudioBuffer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAudioBuffer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioBuffer_Delete(@ptrCast(self));
    }
};
