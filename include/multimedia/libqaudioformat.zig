const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaudioformat_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)
pub const QAudioFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAudioFormat,

    pub const _is_QAudioFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAudioFormat object in C++ memory
    ///
    pub fn new() QAudioFormat {
        return .{ .ptr = qtc.QAudioFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAudioFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAudioFormat `
    ///
    pub fn new2(other: anytype) QAudioFormat {
        comptime _ = @TypeOf(other)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAudioFormat object and invalidate the source QAudioFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAudioFormat `
    ///
    pub fn new3(other: anytype) QAudioFormat {
        comptime _ = @TypeOf(other)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioFormat_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QAudioFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAudioFormat `
    ///
    pub fn new4(param1: anytype) QAudioFormat {
        comptime _ = @TypeOf(param1)._is_QAudioFormat;
        return .{ .ptr = qtc.QAudioFormat_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` other: QAudioFormat `
    ///
    pub fn copyAssign(self: QAudioFormat, other: QAudioFormat) void {
        qtc.QAudioFormat_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` other: QAudioFormat `
    ///
    pub fn moveAssign(self: QAudioFormat, other: QAudioFormat) void {
        qtc.QAudioFormat_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    pub fn isValid(self: QAudioFormat) bool {
        return qtc.QAudioFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSampleRate` instead
    ///
    pub const SetSampleRate = setSampleRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` _sampleRate: i32 `
    ///
    pub fn setSampleRate(self: QAudioFormat, _sampleRate: i32) void {
        qtc.QAudioFormat_SetSampleRate(@ptrCast(self.ptr), @bitCast(_sampleRate));
    }

    /// ### DEPRECATED: Use `sampleRate` instead
    ///
    pub const SampleRate = sampleRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#sampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    pub fn sampleRate(self: QAudioFormat) i32 {
        return qtc.QAudioFormat_SampleRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChannelConfig` instead
    ///
    pub const SetChannelConfig = setChannelConfig;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setChannelConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` config: qaudioformat_enums.ChannelConfig `
    ///
    pub fn setChannelConfig(self: QAudioFormat, config: u32) void {
        qtc.QAudioFormat_SetChannelConfig(@ptrCast(self.ptr), @bitCast(config));
    }

    /// ### DEPRECATED: Use `channelConfig` instead
    ///
    pub const ChannelConfig = channelConfig;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.ChannelConfig `
    ///
    pub fn channelConfig(self: QAudioFormat) u32 {
        return qtc.QAudioFormat_ChannelConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChannelCount` instead
    ///
    pub const SetChannelCount = setChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` _channelCount: i32 `
    ///
    pub fn setChannelCount(self: QAudioFormat, _channelCount: i32) void {
        qtc.QAudioFormat_SetChannelCount(@ptrCast(self.ptr), @bitCast(_channelCount));
    }

    /// ### DEPRECATED: Use `channelCount` instead
    ///
    pub const ChannelCount = channelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    pub fn channelCount(self: QAudioFormat) i32 {
        return qtc.QAudioFormat_ChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `channelOffset` instead
    ///
    pub const ChannelOffset = channelOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` channel: qaudioformat_enums.AudioChannelPosition `
    ///
    pub fn channelOffset(self: QAudioFormat, channel: i32) i32 {
        return qtc.QAudioFormat_ChannelOffset(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `setSampleFormat` instead
    ///
    pub const SetSampleFormat = setSampleFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setSampleFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` f: qaudioformat_enums.SampleFormat `
    ///
    pub fn setSampleFormat(self: QAudioFormat, f: u16) void {
        qtc.QAudioFormat_SetSampleFormat(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `sampleFormat` instead
    ///
    pub const SampleFormat = sampleFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#sampleFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.SampleFormat `
    ///
    pub fn sampleFormat(self: QAudioFormat) u16 {
        return qtc.QAudioFormat_SampleFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesForDuration` instead
    ///
    pub const BytesForDuration = bytesForDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesForDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` microseconds: i64 `
    ///
    pub fn bytesForDuration(self: QAudioFormat, microseconds: i64) i32 {
        return qtc.QAudioFormat_BytesForDuration(@ptrCast(self.ptr), @bitCast(microseconds));
    }

    /// ### DEPRECATED: Use `durationForBytes` instead
    ///
    pub const DurationForBytes = durationForBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#durationForBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` byteCount: i32 `
    ///
    pub fn durationForBytes(self: QAudioFormat, byteCount: i32) i64 {
        return qtc.QAudioFormat_DurationForBytes(@ptrCast(self.ptr), @bitCast(byteCount));
    }

    /// ### DEPRECATED: Use `bytesForFrames` instead
    ///
    pub const BytesForFrames = bytesForFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesForFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` frameCount: i32 `
    ///
    pub fn bytesForFrames(self: QAudioFormat, frameCount: i32) i32 {
        return qtc.QAudioFormat_BytesForFrames(@ptrCast(self.ptr), @bitCast(frameCount));
    }

    /// ### DEPRECATED: Use `framesForBytes` instead
    ///
    pub const FramesForBytes = framesForBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#framesForBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` byteCount: i32 `
    ///
    pub fn framesForBytes(self: QAudioFormat, byteCount: i32) i32 {
        return qtc.QAudioFormat_FramesForBytes(@ptrCast(self.ptr), @bitCast(byteCount));
    }

    /// ### DEPRECATED: Use `framesForDuration` instead
    ///
    pub const FramesForDuration = framesForDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#framesForDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` microseconds: i64 `
    ///
    pub fn framesForDuration(self: QAudioFormat, microseconds: i64) i32 {
        return qtc.QAudioFormat_FramesForDuration(@ptrCast(self.ptr), @bitCast(microseconds));
    }

    /// ### DEPRECATED: Use `durationForFrames` instead
    ///
    pub const DurationForFrames = durationForFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#durationForFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` frameCount: i32 `
    ///
    pub fn durationForFrames(self: QAudioFormat, frameCount: i32) i64 {
        return qtc.QAudioFormat_DurationForFrames(@ptrCast(self.ptr), @bitCast(frameCount));
    }

    /// ### DEPRECATED: Use `bytesPerFrame` instead
    ///
    pub const BytesPerFrame = bytesPerFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    pub fn bytesPerFrame(self: QAudioFormat) i32 {
        return qtc.QAudioFormat_BytesPerFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesPerSample` instead
    ///
    pub const BytesPerSample = bytesPerSample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerSample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    pub fn bytesPerSample(self: QAudioFormat) i32 {
        return qtc.QAudioFormat_BytesPerSample(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalizedSampleValue` instead
    ///
    pub const NormalizedSampleValue = normalizedSampleValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#normalizedSampleValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioFormat `
    ///
    /// ` sample: ?*const anyopaque `
    ///
    pub fn normalizedSampleValue(self: QAudioFormat, sample: ?*const anyopaque) f32 {
        return qtc.QAudioFormat_NormalizedSampleValue(@ptrCast(self.ptr), @ptrCast(sample));
    }

    /// ### DEPRECATED: Use `defaultChannelConfigForChannelCount` instead
    ///
    pub const DefaultChannelConfigForChannelCount = defaultChannelConfigForChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#defaultChannelConfigForChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` _channelCount: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.ChannelConfig `
    ///
    pub fn defaultChannelConfigForChannelCount(_channelCount: i32) u32 {
        return qtc.QAudioFormat_DefaultChannelConfigForChannelCount(@bitCast(_channelCount));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#dtor.QAudioFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAudioFormat `
    ///
    pub fn delete(self: QAudioFormat) void {
        qtc.QAudioFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#public-types)
pub const enums = struct {
    pub const SampleFormat = enum {
        pub const Unknown: u16 = 0;
        pub const UInt8: u16 = 1;
        pub const Int16: u16 = 2;
        pub const Int32: u16 = 3;
        pub const Float: u16 = 4;
        pub const NSampleFormats: u16 = 5;
    };

    pub const AudioChannelPosition = enum {
        pub const UnknownPosition: i32 = 0;
        pub const FrontLeft: i32 = 1;
        pub const FrontRight: i32 = 2;
        pub const FrontCenter: i32 = 3;
        pub const LFE: i32 = 4;
        pub const BackLeft: i32 = 5;
        pub const BackRight: i32 = 6;
        pub const FrontLeftOfCenter: i32 = 7;
        pub const FrontRightOfCenter: i32 = 8;
        pub const BackCenter: i32 = 9;
        pub const SideLeft: i32 = 10;
        pub const SideRight: i32 = 11;
        pub const TopCenter: i32 = 12;
        pub const TopFrontLeft: i32 = 13;
        pub const TopFrontCenter: i32 = 14;
        pub const TopFrontRight: i32 = 15;
        pub const TopBackLeft: i32 = 16;
        pub const TopBackCenter: i32 = 17;
        pub const TopBackRight: i32 = 18;
        pub const LFE2: i32 = 19;
        pub const TopSideLeft: i32 = 20;
        pub const TopSideRight: i32 = 21;
        pub const BottomFrontCenter: i32 = 22;
        pub const BottomFrontLeft: i32 = 23;
        pub const BottomFrontRight: i32 = 24;
    };

    pub const ChannelConfig = enum {
        pub const ChannelConfigUnknown: u32 = 0;
        pub const ChannelConfigMono: u32 = 8;
        pub const ChannelConfigStereo: u32 = 6;
        pub const ChannelConfig2Dot1: u32 = 22;
        pub const ChannelConfig3Dot0: u32 = 14;
        pub const ChannelConfig3Dot1: u32 = 30;
        pub const ChannelConfigSurround5Dot0: u32 = 110;
        pub const ChannelConfigSurround5Dot1: u32 = 126;
        pub const ChannelConfigSurround7Dot0: u32 = 3182;
        pub const ChannelConfigSurround7Dot1: u32 = 3198;
    };
};
