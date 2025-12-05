const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaudioformat_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html)
pub const qaudioformat = struct {
    /// New constructs a new QAudioFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QAudioFormat `
    ///
    pub fn New(other: ?*anyopaque) QtC.QAudioFormat {
        return qtc.QAudioFormat_new(@ptrCast(other));
    }

    /// New2 constructs a new QAudioFormat object and invalidates the source QAudioFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QAudioFormat `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QAudioFormat {
        return qtc.QAudioFormat_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAudioFormat object.
    ///
    pub fn New3() QtC.QAudioFormat {
        return qtc.QAudioFormat_new3();
    }

    /// New4 constructs a new QAudioFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QAudioFormat `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QAudioFormat {
        return qtc.QAudioFormat_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` other: QtC.QAudioFormat `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioFormat_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` other: QtC.QAudioFormat `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioFormat_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAudioFormat_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` sampleRate: i32 `
    ///
    pub fn SetSampleRate(self: ?*anyopaque, sampleRate: i32) void {
        qtc.QAudioFormat_SetSampleRate(@ptrCast(self), @intCast(sampleRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#sampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    pub fn SampleRate(self: ?*anyopaque) i32 {
        return qtc.QAudioFormat_SampleRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setChannelConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` config: qaudioformat_enums.ChannelConfig `
    ///
    pub fn SetChannelConfig(self: ?*anyopaque, config: u32) void {
        qtc.QAudioFormat_SetChannelConfig(@ptrCast(self), @intCast(config));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.ChannelConfig `
    ///
    pub fn ChannelConfig(self: ?*anyopaque) u32 {
        return qtc.QAudioFormat_ChannelConfig(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` channelCount: i32 `
    ///
    pub fn SetChannelCount(self: ?*anyopaque, channelCount: i32) void {
        qtc.QAudioFormat_SetChannelCount(@ptrCast(self), @intCast(channelCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    pub fn ChannelCount(self: ?*anyopaque) i32 {
        return qtc.QAudioFormat_ChannelCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#channelOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` channel: qaudioformat_enums.AudioChannelPosition `
    ///
    pub fn ChannelOffset(self: ?*anyopaque, channel: i32) i32 {
        return qtc.QAudioFormat_ChannelOffset(@ptrCast(self), @intCast(channel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#setSampleFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` f: qaudioformat_enums.SampleFormat `
    ///
    pub fn SetSampleFormat(self: ?*anyopaque, f: u16) void {
        qtc.QAudioFormat_SetSampleFormat(@ptrCast(self), @intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#sampleFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.SampleFormat `
    ///
    pub fn SampleFormat(self: ?*anyopaque) u16 {
        return qtc.QAudioFormat_SampleFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesForDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` microseconds: i64 `
    ///
    pub fn BytesForDuration(self: ?*anyopaque, microseconds: i64) i32 {
        return qtc.QAudioFormat_BytesForDuration(@ptrCast(self), @intCast(microseconds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#durationForBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` byteCount: i32 `
    ///
    pub fn DurationForBytes(self: ?*anyopaque, byteCount: i32) i64 {
        return qtc.QAudioFormat_DurationForBytes(@ptrCast(self), @intCast(byteCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesForFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` frameCount: i32 `
    ///
    pub fn BytesForFrames(self: ?*anyopaque, frameCount: i32) i32 {
        return qtc.QAudioFormat_BytesForFrames(@ptrCast(self), @intCast(frameCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#framesForBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` byteCount: i32 `
    ///
    pub fn FramesForBytes(self: ?*anyopaque, byteCount: i32) i32 {
        return qtc.QAudioFormat_FramesForBytes(@ptrCast(self), @intCast(byteCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#framesForDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` microseconds: i64 `
    ///
    pub fn FramesForDuration(self: ?*anyopaque, microseconds: i64) i32 {
        return qtc.QAudioFormat_FramesForDuration(@ptrCast(self), @intCast(microseconds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#durationForFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` frameCount: i32 `
    ///
    pub fn DurationForFrames(self: ?*anyopaque, frameCount: i32) i64 {
        return qtc.QAudioFormat_DurationForFrames(@ptrCast(self), @intCast(frameCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    pub fn BytesPerFrame(self: ?*anyopaque) i32 {
        return qtc.QAudioFormat_BytesPerFrame(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#bytesPerSample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    pub fn BytesPerSample(self: ?*anyopaque) i32 {
        return qtc.QAudioFormat_BytesPerSample(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#normalizedSampleValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    /// ` sample: ?*anyopaque `
    ///
    pub fn NormalizedSampleValue(self: ?*anyopaque, sample: ?*anyopaque) f32 {
        return qtc.QAudioFormat_NormalizedSampleValue(@ptrCast(self), @ptrCast(sample));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#defaultChannelConfigForChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` channelCount: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.ChannelConfig `
    ///
    pub fn DefaultChannelConfigForChannelCount(channelCount: i32) u32 {
        return qtc.QAudioFormat_DefaultChannelConfigForChannelCount(@intCast(channelCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioformat.html#dtor.QAudioFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAudioFormat `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioFormat_Delete(@ptrCast(self));
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
