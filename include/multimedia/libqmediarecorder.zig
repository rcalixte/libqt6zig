const C = @import("qt6c");
const qmediarecorder_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmediarecorder.html
pub const qmediarecorder = struct {
    /// New constructs a new QMediaRecorder object.
    ///
    ///
    pub fn New() ?*C.QMediaRecorder {
        return C.QMediaRecorder_new();
    }

    /// New2 constructs a new QMediaRecorder object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QMediaRecorder {
        return C.QMediaRecorder_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QMediaRecorder_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QMediaRecorder_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QMediaRecorder_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QMediaRecorder_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QMediaRecorder_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QMediaRecorder_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return C.QMediaRecorder_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn OutputLocation(self: ?*anyopaque) ?*C.QUrl {
        return C.QMediaRecorder_OutputLocation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
    ///
    /// ``` self: ?*C.QMediaRecorder, location: ?*C.QUrl ```
    pub fn SetOutputLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        C.QMediaRecorder_SetOutputLocation(@ptrCast(self), @ptrCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn ActualLocation(self: ?*anyopaque) ?*C.QUrl {
        return C.QMediaRecorder_ActualLocation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn RecorderState(self: ?*anyopaque) i64 {
        return C.QMediaRecorder_RecorderState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#error)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QMediaRecorder_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
    ///
    /// ``` self: ?*C.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QMediaRecorder_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Duration(self: ?*anyopaque) i64 {
        return C.QMediaRecorder_Duration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn MediaFormat(self: ?*anyopaque) ?*C.QMediaFormat {
        return C.QMediaRecorder_MediaFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
    ///
    /// ``` self: ?*C.QMediaRecorder, format: ?*C.QMediaFormat ```
    pub fn SetMediaFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QMediaRecorder_SetMediaFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn EncodingMode(self: ?*anyopaque) i64 {
        return C.QMediaRecorder_EncodingMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
    ///
    /// ``` self: ?*C.QMediaRecorder, encodingMode: qmediarecorder_enums.EncodingMode ```
    pub fn SetEncodingMode(self: ?*anyopaque, encodingMode: i64) void {
        C.QMediaRecorder_SetEncodingMode(@ptrCast(self), @intCast(encodingMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Quality(self: ?*anyopaque) i64 {
        return C.QMediaRecorder_Quality(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
    ///
    /// ``` self: ?*C.QMediaRecorder, quality: qmediarecorder_enums.Quality ```
    pub fn SetQuality(self: ?*anyopaque, quality: i64) void {
        C.QMediaRecorder_SetQuality(@ptrCast(self), @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn VideoResolution(self: ?*anyopaque) ?*C.QSize {
        return C.QMediaRecorder_VideoResolution(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ``` self: ?*C.QMediaRecorder, videoResolution: ?*C.QSize ```
    pub fn SetVideoResolution(self: ?*anyopaque, videoResolution: ?*anyopaque) void {
        C.QMediaRecorder_SetVideoResolution(@ptrCast(self), @ptrCast(videoResolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ``` self: ?*C.QMediaRecorder, width: i32, height: i32 ```
    pub fn SetVideoResolution2(self: ?*anyopaque, width: i32, height: i32) void {
        C.QMediaRecorder_SetVideoResolution2(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn VideoFrameRate(self: ?*anyopaque) f64 {
        return C.QMediaRecorder_VideoFrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
    ///
    /// ``` self: ?*C.QMediaRecorder, frameRate: f64 ```
    pub fn SetVideoFrameRate(self: ?*anyopaque, frameRate: f64) void {
        C.QMediaRecorder_SetVideoFrameRate(@ptrCast(self), @floatCast(frameRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn VideoBitRate(self: ?*anyopaque) i32 {
        return C.QMediaRecorder_VideoBitRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
    ///
    /// ``` self: ?*C.QMediaRecorder, bitRate: i32 ```
    pub fn SetVideoBitRate(self: ?*anyopaque, bitRate: i32) void {
        C.QMediaRecorder_SetVideoBitRate(@ptrCast(self), @intCast(bitRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn AudioBitRate(self: ?*anyopaque) i32 {
        return C.QMediaRecorder_AudioBitRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
    ///
    /// ``` self: ?*C.QMediaRecorder, bitRate: i32 ```
    pub fn SetAudioBitRate(self: ?*anyopaque, bitRate: i32) void {
        C.QMediaRecorder_SetAudioBitRate(@ptrCast(self), @intCast(bitRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn AudioChannelCount(self: ?*anyopaque) i32 {
        return C.QMediaRecorder_AudioChannelCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
    ///
    /// ``` self: ?*C.QMediaRecorder, channels: i32 ```
    pub fn SetAudioChannelCount(self: ?*anyopaque, channels: i32) void {
        C.QMediaRecorder_SetAudioChannelCount(@ptrCast(self), @intCast(channels));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn AudioSampleRate(self: ?*anyopaque) i32 {
        return C.QMediaRecorder_AudioSampleRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
    ///
    /// ``` self: ?*C.QMediaRecorder, sampleRate: i32 ```
    pub fn SetAudioSampleRate(self: ?*anyopaque, sampleRate: i32) void {
        C.QMediaRecorder_SetAudioSampleRate(@ptrCast(self), @intCast(sampleRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn MetaData(self: ?*anyopaque) ?*C.QMediaMetaData {
        return C.QMediaRecorder_MetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
    ///
    /// ``` self: ?*C.QMediaRecorder, metaData: ?*C.QMediaMetaData ```
    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        C.QMediaRecorder_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
    ///
    /// ``` self: ?*C.QMediaRecorder, metaData: ?*C.QMediaMetaData ```
    pub fn AddMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        C.QMediaRecorder_AddMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn CaptureSession(self: ?*anyopaque) ?*C.QMediaCaptureSession {
        return C.QMediaRecorder_CaptureSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#record)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Record(self: ?*anyopaque) void {
        C.QMediaRecorder_Record(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QMediaRecorder_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QMediaRecorder_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder, state: qmediarecorder_enums.RecorderState ```
    pub fn RecorderStateChanged(self: ?*anyopaque, state: i64) void {
        C.QMediaRecorder_RecorderStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, qmediarecorder_enums.RecorderState) callconv(.c) void ```
    pub fn OnRecorderStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QMediaRecorder_Connect_RecorderStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder, duration: i64 ```
    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        C.QMediaRecorder_DurationChanged(@ptrCast(self), @intCast(duration));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, i64) callconv(.c) void ```
    pub fn OnDurationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QMediaRecorder_Connect_DurationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder, location: ?*C.QUrl ```
    pub fn ActualLocationChanged(self: ?*anyopaque, location: ?*anyopaque) void {
        C.QMediaRecorder_ActualLocationChanged(@ptrCast(self), @ptrCast(location));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QUrl) callconv(.c) void ```
    pub fn OnActualLocationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_ActualLocationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn EncoderSettingsChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_EncoderSettingsChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnEncoderSettingsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_EncoderSettingsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ``` self: ?*C.QMediaRecorder, errorVal: qmediarecorder_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QMediaRecorder_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, qmediarecorder_enums.Error, []const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        C.QMediaRecorder_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_ErrorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_ErrorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn MetaDataChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_MetaDataChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnMetaDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_MetaDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn MediaFormatChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_MediaFormatChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnMediaFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_MediaFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn EncodingModeChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_EncodingModeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnEncodingModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_EncodingModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn QualityChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_QualityChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnQualityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_QualityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn VideoResolutionChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_VideoResolutionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnVideoResolutionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_VideoResolutionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn VideoFrameRateChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_VideoFrameRateChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnVideoFrameRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_VideoFrameRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn VideoBitRateChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_VideoBitRateChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnVideoBitRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_VideoBitRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn AudioBitRateChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_AudioBitRateChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnAudioBitRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_AudioBitRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn AudioChannelCountChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_AudioChannelCountChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnAudioChannelCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_AudioChannelCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn AudioSampleRateChanged(self: ?*anyopaque) void {
        C.QMediaRecorder_AudioSampleRateChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder) callconv(.c) void ```
    pub fn OnAudioSampleRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_Connect_AudioSampleRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QMediaRecorder_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QMediaRecorder_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QMediaRecorder, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QMediaRecorder, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QMediaRecorder, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QMediaRecorder, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QMediaRecorder, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QMediaRecorder, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QMediaRecorder, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QMediaRecorder, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QMediaRecorder, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QMediaRecorder, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QMediaRecorder, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QMediaRecorder, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QMediaRecorder, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QMediaRecorder, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QMediaRecorder, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QMediaRecorder, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaRecorder_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaRecorder_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QMediaRecorder_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaRecorder_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaRecorder_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QMediaRecorder_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaRecorder_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaRecorder_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaRecorder_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaRecorder_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaRecorder_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaRecorder_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaRecorder_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaRecorder_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaRecorder_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaRecorder_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaRecorder_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QMediaRecorder_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QMediaRecorder_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QMediaRecorder_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QMediaRecorder_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QMediaRecorder_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QMediaRecorder_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QMediaRecorder_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QMediaRecorder_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QMediaRecorder_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QMediaRecorder_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QMediaRecorder_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaRecorder, slot: fn (?*C.QMediaRecorder, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QMediaRecorder_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QMediaRecorder ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QMediaRecorder_Delete(@ptrCast(self));
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
