const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmediarecorder_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html)
pub const qmediarecorder = struct {
    /// New constructs a new QMediaRecorder object.
    ///
    pub fn New() QtC.QMediaRecorder {
        return qtc.QMediaRecorder_new();
    }

    /// New2 constructs a new QMediaRecorder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QMediaRecorder {
        return qtc.QMediaRecorder_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMediaRecorder_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QMediaRecorder_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMediaRecorder_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaRecorder_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaRecorder_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaRecorder_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return qtc.QMediaRecorder_IsAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn OutputLocation(self: ?*anyopaque) QtC.QUrl {
        return qtc.QMediaRecorder_OutputLocation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` location: QtC.QUrl `
    ///
    pub fn SetOutputLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QMediaRecorder_SetOutputLocation(@ptrCast(self), @ptrCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QMediaRecorder_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn OutputDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QMediaRecorder_OutputDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn ActualLocation(self: ?*anyopaque) QtC.QUrl {
        return qtc.QMediaRecorder_ActualLocation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.RecorderState `
    ///
    pub fn RecorderState(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_RecorderState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaRecorder_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Duration(self: ?*anyopaque) i64 {
        return qtc.QMediaRecorder_Duration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn MediaFormat(self: ?*anyopaque) QtC.QMediaFormat {
        return qtc.QMediaRecorder_MediaFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` format: QtC.QMediaFormat `
    ///
    pub fn SetMediaFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QMediaRecorder_SetMediaFormat(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.EncodingMode `
    ///
    pub fn EncodingMode(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_EncodingMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` encodingMode: qmediarecorder_enums.EncodingMode `
    ///
    pub fn SetEncodingMode(self: ?*anyopaque, encodingMode: i32) void {
        qtc.QMediaRecorder_SetEncodingMode(@ptrCast(self), @bitCast(encodingMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.Quality `
    ///
    pub fn Quality(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_Quality(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` quality: qmediarecorder_enums.Quality `
    ///
    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QMediaRecorder_SetQuality(@ptrCast(self), @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn VideoResolution(self: ?*anyopaque) QtC.QSize {
        return qtc.QMediaRecorder_VideoResolution(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` videoResolution: QtC.QSize `
    ///
    pub fn SetVideoResolution(self: ?*anyopaque, videoResolution: ?*anyopaque) void {
        qtc.QMediaRecorder_SetVideoResolution(@ptrCast(self), @ptrCast(videoResolution));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SetVideoResolution2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QMediaRecorder_SetVideoResolution2(@ptrCast(self), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn VideoFrameRate(self: ?*anyopaque) f64 {
        return qtc.QMediaRecorder_VideoFrameRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` frameRate: f64 `
    ///
    pub fn SetVideoFrameRate(self: ?*anyopaque, frameRate: f64) void {
        qtc.QMediaRecorder_SetVideoFrameRate(@ptrCast(self), @bitCast(frameRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn VideoBitRate(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_VideoBitRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` bitRate: i32 `
    ///
    pub fn SetVideoBitRate(self: ?*anyopaque, bitRate: i32) void {
        qtc.QMediaRecorder_SetVideoBitRate(@ptrCast(self), @bitCast(bitRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AudioBitRate(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_AudioBitRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` bitRate: i32 `
    ///
    pub fn SetAudioBitRate(self: ?*anyopaque, bitRate: i32) void {
        qtc.QMediaRecorder_SetAudioBitRate(@ptrCast(self), @bitCast(bitRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AudioChannelCount(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_AudioChannelCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` channels: i32 `
    ///
    pub fn SetAudioChannelCount(self: ?*anyopaque, channels: i32) void {
        qtc.QMediaRecorder_SetAudioChannelCount(@ptrCast(self), @bitCast(channels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AudioSampleRate(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_AudioSampleRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` sampleRate: i32 `
    ///
    pub fn SetAudioSampleRate(self: ?*anyopaque, sampleRate: i32) void {
        qtc.QMediaRecorder_SetAudioSampleRate(@ptrCast(self), @bitCast(sampleRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn MetaData(self: ?*anyopaque) QtC.QMediaMetaData {
        return qtc.QMediaRecorder_MetaData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` metaData: QtC.QMediaMetaData `
    ///
    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QMediaRecorder_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` metaData: QtC.QMediaMetaData `
    ///
    pub fn AddMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QMediaRecorder_AddMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AutoStop(self: ?*anyopaque) bool {
        return qtc.QMediaRecorder_AutoStop(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAutoStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` autoStop: bool `
    ///
    pub fn SetAutoStop(self: ?*anyopaque, autoStop: bool) void {
        qtc.QMediaRecorder_SetAutoStop(@ptrCast(self), autoStop);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn CaptureSession(self: ?*anyopaque) QtC.QMediaCaptureSession {
        return qtc.QMediaRecorder_CaptureSession(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Record(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Record(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Pause(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Stop(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` state: qmediarecorder_enums.RecorderState `
    ///
    pub fn RecorderStateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QMediaRecorder_RecorderStateChanged(@ptrCast(self), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, state: qmediarecorder_enums.RecorderState) callconv(.c) void `
    ///
    pub fn OnRecorderStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_RecorderStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` duration: i64 `
    ///
    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        qtc.QMediaRecorder_DurationChanged(@ptrCast(self), @bitCast(duration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, duration: i64) callconv(.c) void `
    ///
    pub fn OnDurationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_DurationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` location: QtC.QUrl `
    ///
    pub fn ActualLocationChanged(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QMediaRecorder_ActualLocationChanged(@ptrCast(self), @ptrCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, location: QtC.QUrl) callconv(.c) void `
    ///
    pub fn OnActualLocationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ActualLocationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn EncoderSettingsChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_EncoderSettingsChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnEncoderSettingsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncoderSettingsChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` errorVal: qmediarecorder_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QMediaRecorder_ErrorOccurred(@ptrCast(self), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, errorVal: qmediarecorder_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn ErrorChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_ErrorChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn MetaDataChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_MetaDataChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnMetaDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MetaDataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn MediaFormatChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_MediaFormatChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnMediaFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MediaFormatChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn EncodingModeChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_EncodingModeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnEncodingModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncodingModeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn QualityChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_QualityChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnQualityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_QualityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn VideoResolutionChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_VideoResolutionChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnVideoResolutionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoResolutionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn VideoFrameRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_VideoFrameRateChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnVideoFrameRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoFrameRateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn VideoBitRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_VideoBitRateChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnVideoBitRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoBitRateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AudioBitRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AudioBitRateChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAudioBitRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioBitRateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AudioChannelCountChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AudioChannelCountChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAudioChannelCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioChannelCountChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AudioSampleRateChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AudioSampleRateChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAudioSampleRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioSampleRateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn AutoStopChanged(self: ?*anyopaque) void {
        qtc.QMediaRecorder_AutoStopChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAutoStopChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AutoStopChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaRecorder_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaRecorder_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaRecorder_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaRecorder_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaRecorder_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QMediaRecorder_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMediaRecorder_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaRecorder_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QMediaRecorder_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QMediaRecorder_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QtC.QMediaRecorder, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#dtor.QMediaRecorder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMediaRecorder `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#public-types)
pub const enums = struct {
    pub const Quality = enum(i32) {
        pub const VeryLowQuality: i32 = 0;
        pub const LowQuality: i32 = 1;
        pub const NormalQuality: i32 = 2;
        pub const HighQuality: i32 = 3;
        pub const VeryHighQuality: i32 = 4;
    };

    pub const EncodingMode = enum(i32) {
        pub const ConstantQualityEncoding: i32 = 0;
        pub const ConstantBitRateEncoding: i32 = 1;
        pub const AverageBitRateEncoding: i32 = 2;
        pub const TwoPassEncoding: i32 = 3;
    };

    pub const RecorderState = enum(i32) {
        pub const StoppedState: i32 = 0;
        pub const RecordingState: i32 = 1;
        pub const PausedState: i32 = 2;
    };

    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const OutOfSpaceError: i32 = 3;
        pub const LocationNotWritable: i32 = 4;
    };
};
