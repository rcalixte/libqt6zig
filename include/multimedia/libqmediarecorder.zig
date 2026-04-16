const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QMediaCaptureSession = @import("libqt6").QMediaCaptureSession;
const QMediaFormat = @import("libqt6").QMediaFormat;
const QMediaMetaData = @import("libqt6").QMediaMetaData;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qmediarecorder_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html)
pub const QMediaRecorder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaRecorder,

    pub const _is_QMediaRecorder = {};
    pub const _is_QObject = {};

    /// New constructs a new QMediaRecorder object.
    ///
    pub fn New() QMediaRecorder {
        return .{ .ptr = qtc.QMediaRecorder_new() };
    }

    /// New2 constructs a new QMediaRecorder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QMediaRecorder {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QMediaRecorder_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn MetaObject(self: QMediaRecorder) QMetaObject {
        return .{ .ptr = qtc.QMediaRecorder_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QMediaRecorder, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMediaRecorder_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaRecorder `
    ///
    pub fn SuperMetaObject(self: QMediaRecorder) QMetaObject {
        return .{ .ptr = qtc.QMediaRecorder_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QMediaRecorder, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QMediaRecorder, callback: *const fn (QMediaRecorder, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaRecorder_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QMediaRecorder, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QMediaRecorder, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaRecorder_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QMediaRecorder, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaRecorder_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
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
    /// ` self: QMediaRecorder `
    ///
    pub fn IsAvailable(self: QMediaRecorder) bool {
        return qtc.QMediaRecorder_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn OutputLocation(self: QMediaRecorder) QUrl {
        return .{ .ptr = qtc.QMediaRecorder_OutputLocation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` location: QUrl `
    ///
    pub fn SetOutputLocation(self: QMediaRecorder, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QUrl;
        qtc.QMediaRecorder_SetOutputLocation(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetOutputDevice(self: QMediaRecorder, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QMediaRecorder_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn OutputDevice(self: QMediaRecorder) QIODevice {
        return .{ .ptr = qtc.QMediaRecorder_OutputDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn ActualLocation(self: QMediaRecorder) QUrl {
        return .{ .ptr = qtc.QMediaRecorder_ActualLocation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.RecorderState `
    ///
    pub fn RecorderState(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_RecorderState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.Error `
    ///
    pub fn Error(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QMediaRecorder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaRecorder_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Duration(self: QMediaRecorder) i64 {
        return qtc.QMediaRecorder_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn MediaFormat(self: QMediaRecorder) QMediaFormat {
        return .{ .ptr = qtc.QMediaRecorder_MediaFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` format: QMediaFormat `
    ///
    pub fn SetMediaFormat(self: QMediaRecorder, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QMediaFormat;
        qtc.QMediaRecorder_SetMediaFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.EncodingMode `
    ///
    pub fn EncodingMode(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_EncodingMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` encodingMode: qmediarecorder_enums.EncodingMode `
    ///
    pub fn SetEncodingMode(self: QMediaRecorder, encodingMode: i32) void {
        qtc.QMediaRecorder_SetEncodingMode(@ptrCast(self.ptr), @bitCast(encodingMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ## Returns:
    ///
    /// ` qmediarecorder_enums.Quality `
    ///
    pub fn Quality(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_Quality(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` quality: qmediarecorder_enums.Quality `
    ///
    pub fn SetQuality(self: QMediaRecorder, quality: i32) void {
        qtc.QMediaRecorder_SetQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn VideoResolution(self: QMediaRecorder) QSize {
        return .{ .ptr = qtc.QMediaRecorder_VideoResolution(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` videoResolution: QSize `
    ///
    pub fn SetVideoResolution(self: QMediaRecorder, videoResolution: anytype) void {
        comptime _ = @TypeOf(videoResolution)._is_QSize;
        qtc.QMediaRecorder_SetVideoResolution(@ptrCast(self.ptr), @ptrCast(videoResolution.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SetVideoResolution2(self: QMediaRecorder, width: i32, height: i32) void {
        qtc.QMediaRecorder_SetVideoResolution2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn VideoFrameRate(self: QMediaRecorder) f64 {
        return qtc.QMediaRecorder_VideoFrameRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` frameRate: f64 `
    ///
    pub fn SetVideoFrameRate(self: QMediaRecorder, frameRate: f64) void {
        qtc.QMediaRecorder_SetVideoFrameRate(@ptrCast(self.ptr), @bitCast(frameRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn VideoBitRate(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_VideoBitRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` bitRate: i32 `
    ///
    pub fn SetVideoBitRate(self: QMediaRecorder, bitRate: i32) void {
        qtc.QMediaRecorder_SetVideoBitRate(@ptrCast(self.ptr), @bitCast(bitRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AudioBitRate(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_AudioBitRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` bitRate: i32 `
    ///
    pub fn SetAudioBitRate(self: QMediaRecorder, bitRate: i32) void {
        qtc.QMediaRecorder_SetAudioBitRate(@ptrCast(self.ptr), @bitCast(bitRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AudioChannelCount(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_AudioChannelCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` channels: i32 `
    ///
    pub fn SetAudioChannelCount(self: QMediaRecorder, channels: i32) void {
        qtc.QMediaRecorder_SetAudioChannelCount(@ptrCast(self.ptr), @bitCast(channels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AudioSampleRate(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_AudioSampleRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` sampleRate: i32 `
    ///
    pub fn SetAudioSampleRate(self: QMediaRecorder, sampleRate: i32) void {
        qtc.QMediaRecorder_SetAudioSampleRate(@ptrCast(self.ptr), @bitCast(sampleRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn MetaData(self: QMediaRecorder) QMediaMetaData {
        return .{ .ptr = qtc.QMediaRecorder_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` metaData: QMediaMetaData `
    ///
    pub fn SetMetaData(self: QMediaRecorder, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QMediaMetaData;
        qtc.QMediaRecorder_SetMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` metaData: QMediaMetaData `
    ///
    pub fn AddMetaData(self: QMediaRecorder, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QMediaMetaData;
        qtc.QMediaRecorder_AddMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AutoStop(self: QMediaRecorder) bool {
        return qtc.QMediaRecorder_AutoStop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAutoStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` autoStop: bool `
    ///
    pub fn SetAutoStop(self: QMediaRecorder, autoStop: bool) void {
        qtc.QMediaRecorder_SetAutoStop(@ptrCast(self.ptr), autoStop);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn CaptureSession(self: QMediaRecorder) QMediaCaptureSession {
        return .{ .ptr = qtc.QMediaRecorder_CaptureSession(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Record(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Record(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Pause(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Pause(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Stop(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` state: qmediarecorder_enums.RecorderState `
    ///
    pub fn RecorderStateChanged(self: QMediaRecorder, state: i32) void {
        qtc.QMediaRecorder_RecorderStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, state: qmediarecorder_enums.RecorderState) callconv(.c) void `
    ///
    pub fn OnRecorderStateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i32) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_RecorderStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` duration: i64 `
    ///
    pub fn DurationChanged(self: QMediaRecorder, duration: i64) void {
        qtc.QMediaRecorder_DurationChanged(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, duration: i64) callconv(.c) void `
    ///
    pub fn OnDurationChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i64) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_DurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` location: QUrl `
    ///
    pub fn ActualLocationChanged(self: QMediaRecorder, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QUrl;
        qtc.QMediaRecorder_ActualLocationChanged(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, location: QUrl) callconv(.c) void `
    ///
    pub fn OnActualLocationChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QUrl) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ActualLocationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn EncoderSettingsChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_EncoderSettingsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnEncoderSettingsChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncoderSettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` errorVal: qmediarecorder_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: QMediaRecorder, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QMediaRecorder_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, errorVal: qmediarecorder_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn ErrorChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnErrorChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn MetaDataChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnMetaDataChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn MediaFormatChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_MediaFormatChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnMediaFormatChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MediaFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn EncodingModeChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_EncodingModeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnEncodingModeChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncodingModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn QualityChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_QualityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnQualityChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_QualityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn VideoResolutionChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_VideoResolutionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnVideoResolutionChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoResolutionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn VideoFrameRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_VideoFrameRateChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnVideoFrameRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoFrameRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn VideoBitRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_VideoBitRateChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnVideoBitRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoBitRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AudioBitRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AudioBitRateChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAudioBitRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioBitRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AudioChannelCountChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AudioChannelCountChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAudioChannelCountChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioChannelCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AudioSampleRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AudioSampleRateChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAudioSampleRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioSampleRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn AutoStopChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AutoStopChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnAutoStopChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AutoStopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
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
    /// ` self: QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QMediaRecorder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QMediaRecorder, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn IsWidgetType(self: QMediaRecorder) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn IsWindowType(self: QMediaRecorder) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn IsQuickItemType(self: QMediaRecorder) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn SignalsBlocked(self: QMediaRecorder) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QMediaRecorder, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Thread(self: QMediaRecorder) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QMediaRecorder, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QMediaRecorder, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QMediaRecorder, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QMediaRecorder, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QMediaRecorder, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QMediaRecorder, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qmediarecorder.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QMediaRecorder, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QMediaRecorder, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QMediaRecorder, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QMediaRecorder, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Disconnect3(self: QMediaRecorder) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QMediaRecorder, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn DumpObjectTree(self: QMediaRecorder) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn DumpObjectInfo(self: QMediaRecorder) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QMediaRecorder, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QMediaRecorder, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QMediaRecorder, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QMediaRecorder `
    ///
    pub fn BindingStorage(self: QMediaRecorder) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn BindingStorage2(self: QMediaRecorder) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Destroyed(self: QMediaRecorder) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Parent(self: QMediaRecorder) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QMediaRecorder, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn DeleteLater(self: QMediaRecorder) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QMediaRecorder, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QMediaRecorder, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QMediaRecorder, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QMediaRecorder, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QMediaRecorder, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QMediaRecorder, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QMediaRecorder, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QMediaRecorder, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QMediaRecorder, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaRecorder_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QMediaRecorder, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaRecorder_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QEvent) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QMediaRecorder, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaRecorder_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QMediaRecorder, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaRecorder_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QMediaRecorder, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMediaRecorder_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QMediaRecorder, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMediaRecorder_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QTimerEvent) callconv(.c) void) void {
        qtc.QMediaRecorder_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QMediaRecorder, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMediaRecorder_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QMediaRecorder, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMediaRecorder_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QChildEvent) callconv(.c) void) void {
        qtc.QMediaRecorder_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QMediaRecorder, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMediaRecorder_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QMediaRecorder, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMediaRecorder_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QEvent) callconv(.c) void) void {
        qtc.QMediaRecorder_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaRecorder_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaRecorder_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn Sender(self: QMediaRecorder) QObject {
        return .{ .ptr = qtc.QMediaRecorder_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaRecorder `
    ///
    pub fn SuperSender(self: QMediaRecorder) QObject {
        return .{ .ptr = qtc.QMediaRecorder_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QMediaRecorder, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMediaRecorder_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn SenderSignalIndex(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    pub fn SuperSenderSignalIndex(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QMediaRecorder, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaRecorder_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QMediaRecorder, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QMediaRecorder, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QMediaRecorder, callback: *const fn (QMediaRecorder, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QMediaRecorder, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaRecorder_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaRecorder `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QMediaRecorder, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaRecorder_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder`
    ///
    /// ` callback: *const fn (self: QMediaRecorder, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QMetaMethod) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaRecorder `
    ///
    pub fn Delete(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Delete(@ptrCast(self.ptr));
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
