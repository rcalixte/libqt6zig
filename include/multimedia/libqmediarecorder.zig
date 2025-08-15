const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmediarecorder_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmediarecorder.html
pub const qmediarecorder = struct {
    /// New constructs a new QMediaRecorder object.
    ///
    ///
    pub fn New() QtC.QMediaRecorder {
        return qtc.QMediaRecorder_new();
    }

    /// New2 constructs a new QMediaRecorder object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QMediaRecorder {
        return qtc.QMediaRecorder_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMediaRecorder_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QMediaRecorder, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QMediaRecorder_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return qtc.QMediaRecorder_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn OutputLocation(self: ?*anyopaque) QtC.QUrl {
        return qtc.QMediaRecorder_OutputLocation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
    ///
    /// ``` self: QtC.QMediaRecorder, location: QtC.QUrl ```
    pub fn SetOutputLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QMediaRecorder_SetOutputLocation(@ptrCast(self), @ptrCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputDevice)
    ///
    /// ``` self: QtC.QMediaRecorder, device: QtC.QIODevice ```
    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QMediaRecorder_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#outputDevice)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn OutputDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QMediaRecorder_OutputDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn ActualLocation(self: ?*anyopaque) QtC.QUrl {
        return qtc.QMediaRecorder_ActualLocation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    ///
    /// Returns: ``` qmediarecorder_enums.RecorderState ```
    pub fn RecorderState(self: ?*anyopaque) i64 {
        return qtc.QMediaRecorder_RecorderState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#error)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    ///
    /// Returns: ``` qmediarecorder_enums.Error ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QMediaRecorder_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
    ///
    /// ``` self: QtC.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaRecorder_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Duration(self: ?*anyopaque) i64 {
        return qtc.QMediaRecorder_Duration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn MediaFormat(self: ?*anyopaque) QtC.QMediaFormat {
        return qtc.QMediaRecorder_MediaFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
    ///
    /// ``` self: QtC.QMediaRecorder, format: QtC.QMediaFormat ```
    pub fn SetMediaFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QMediaRecorder_SetMediaFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    ///
    /// Returns: ``` qmediarecorder_enums.EncodingMode ```
    pub fn EncodingMode(self: ?*anyopaque) i64 {
        return qtc.QMediaRecorder_EncodingMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
    ///
    /// ``` self: QtC.QMediaRecorder, encodingMode: qmediarecorder_enums.EncodingMode ```
    pub fn SetEncodingMode(self: ?*anyopaque, encodingMode: i64) void {
        qtc.QMediaRecorder_SetEncodingMode(@ptrCast(self), @intCast(encodingMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    ///
    /// Returns: ``` qmediarecorder_enums.Quality ```
    pub fn Quality(self: ?*anyopaque) i64 {
        return qtc.QMediaRecorder_Quality(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
    ///
    /// ``` self: QtC.QMediaRecorder, quality: qmediarecorder_enums.Quality ```
    pub fn SetQuality(self: ?*anyopaque, quality: i64) void {
        qtc.QMediaRecorder_SetQuality(@ptrCast(self), @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn VideoResolution(self: ?*anyopaque) QtC.QSize {
        return qtc.QMediaRecorder_VideoResolution(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ``` self: QtC.QMediaRecorder, videoResolution: QtC.QSize ```
    pub fn SetVideoResolution(self: ?*anyopaque, videoResolution: ?*anyopaque) void {
        qtc.QMediaRecorder_SetVideoResolution(@ptrCast(self), @ptrCast(videoResolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ``` self: QtC.QMediaRecorder, width: i32, height: i32 ```
    pub fn SetVideoResolution2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QMediaRecorder_SetVideoResolution2(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn VideoFrameRate(self: ?*anyopaque) f64 {
        return qtc.QMediaRecorder_VideoFrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
    ///
    /// ``` self: QtC.QMediaRecorder, frameRate: f64 ```
    pub fn SetVideoFrameRate(self: ?*anyopaque, frameRate: f64) void {
        qtc.QMediaRecorder_SetVideoFrameRate(@ptrCast(self), @floatCast(frameRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn VideoBitRate(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_VideoBitRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
    ///
    /// ``` self: QtC.QMediaRecorder, bitRate: i32 ```
    pub fn SetVideoBitRate(self: ?*anyopaque, bitRate: i32) void {
        qtc.QMediaRecorder_SetVideoBitRate(@ptrCast(self), @intCast(bitRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AudioBitRate(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_AudioBitRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
    ///
    /// ``` self: QtC.QMediaRecorder, bitRate: i32 ```
    pub fn SetAudioBitRate(self: ?*anyopaque, bitRate: i32) void {
        qtc.QMediaRecorder_SetAudioBitRate(@ptrCast(self), @intCast(bitRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AudioChannelCount(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_AudioChannelCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
    ///
    /// ``` self: QtC.QMediaRecorder, channels: i32 ```
    pub fn SetAudioChannelCount(self: ?*anyopaque, channels: i32) void {
        qtc.QMediaRecorder_SetAudioChannelCount(@ptrCast(self), @intCast(channels));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AudioSampleRate(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_AudioSampleRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
    ///
    /// ``` self: QtC.QMediaRecorder, sampleRate: i32 ```
    pub fn SetAudioSampleRate(self: ?*anyopaque, sampleRate: i32) void {
        qtc.QMediaRecorder_SetAudioSampleRate(@ptrCast(self), @intCast(sampleRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn MetaData(self: ?*anyopaque) QtC.QMediaMetaData {
        return qtc.QMediaRecorder_MetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
    ///
    /// ``` self: QtC.QMediaRecorder, metaData: QtC.QMediaMetaData ```
    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QMediaRecorder_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
    ///
    /// ``` self: QtC.QMediaRecorder, metaData: QtC.QMediaMetaData ```
    pub fn AddMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QMediaRecorder_AddMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#autoStop)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AutoStop(self: ?*anyopaque) bool {
        return qtc.QMediaRecorder_AutoStop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAutoStop)
    ///
    /// ``` self: QtC.QMediaRecorder, autoStop: bool ```
    pub fn SetAutoStop(self: ?*anyopaque, autoStop: bool) void {
        qtc.QMediaRecorder_SetAutoStop(@ptrCast(self), autoStop);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn CaptureSession(self: ?*anyopaque) QtC.QMediaCaptureSession {
        return qtc.QMediaRecorder_CaptureSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#record)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Record(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Record(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, state: qmediarecorder_enums.RecorderState ```
    pub fn RecorderStateChanged(self: ?*anyopaque, state: i64) void {
        qtc.QMediaRecorder_RecorderStateChanged(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, state: qmediarecorder_enums.RecorderState) callconv(.c) void ```
    pub fn OnRecorderStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_RecorderStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, duration: i64 ```
    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        qtc.QMediaRecorder_DurationChanged(@ptrCast(self), @intCast(duration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, duration: i64) callconv(.c) void ```
    pub fn OnDurationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_DurationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, location: QtC.QUrl ```
    pub fn ActualLocationChanged(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QMediaRecorder_ActualLocationChanged(@ptrCast(self), @ptrCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, location: QtC.QUrl) callconv(.c) void ```
    pub fn OnActualLocationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ActualLocationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn EncoderSettingsChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_EncoderSettingsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnEncoderSettingsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncoderSettingsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ``` self: QtC.QMediaRecorder, errorVal: qmediarecorder_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QMediaRecorder_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, errorVal: qmediarecorder_enums.Error, errorString: []const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_ErrorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn MetaDataChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_MetaDataChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnMetaDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MetaDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn MediaFormatChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_MediaFormatChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnMediaFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MediaFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn EncodingModeChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_EncodingModeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnEncodingModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncodingModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn QualityChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_QualityChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnQualityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_QualityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn VideoResolutionChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_VideoResolutionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnVideoResolutionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoResolutionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn VideoFrameRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_VideoFrameRateChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnVideoFrameRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoFrameRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn VideoBitRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_VideoBitRateChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnVideoBitRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoBitRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AudioBitRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AudioBitRateChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnAudioBitRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioBitRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AudioChannelCountChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AudioChannelCountChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnAudioChannelCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioChannelCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AudioSampleRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AudioSampleRateChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnAudioSampleRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioSampleRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn AutoStopChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AutoStopChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnAutoStopChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AutoStopChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QMediaRecorder_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QMediaRecorder_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QMediaRecorder, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QMediaRecorder, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QMediaRecorder, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QMediaRecorder, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QMediaRecorder, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QMediaRecorder, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qmediarecorder.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QMediaRecorder, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QMediaRecorder, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QMediaRecorder, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QMediaRecorder, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QMediaRecorder, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QMediaRecorder, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qmediarecorder.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmediarecorder.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QMediaRecorder, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QMediaRecorder, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QMediaRecorder, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QMediaRecorder, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaRecorder, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaRecorder_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaRecorder_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QMediaRecorder_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QMediaRecorder_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QMediaRecorder_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QMediaRecorder_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QMediaRecorder, slot: fn (self: QtC.QMediaRecorder, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#dtor.QMediaRecorder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMediaRecorder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmediarecorder.html#types
pub const enums = struct {
    pub const Quality = enum {
        pub const VeryLowQuality: i32 = 0;
        pub const LowQuality: i32 = 1;
        pub const NormalQuality: i32 = 2;
        pub const HighQuality: i32 = 3;
        pub const VeryHighQuality: i32 = 4;
    };

    pub const EncodingMode = enum {
        pub const ConstantQualityEncoding: i32 = 0;
        pub const ConstantBitRateEncoding: i32 = 1;
        pub const AverageBitRateEncoding: i32 = 2;
        pub const TwoPassEncoding: i32 = 3;
    };

    pub const RecorderState = enum {
        pub const StoppedState: i32 = 0;
        pub const RecordingState: i32 = 1;
        pub const PausedState: i32 = 2;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const OutOfSpaceError: i32 = 3;
        pub const LocationNotWritable: i32 = 4;
    };
};
