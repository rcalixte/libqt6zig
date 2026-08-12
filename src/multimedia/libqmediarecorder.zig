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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaRecorder object in C++ memory
    ///
    pub fn new() QMediaRecorder {
        return .{ .ptr = qtc.QMediaRecorder_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaRecorder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QMediaRecorder {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QMediaRecorder_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn metaObject(self: QMediaRecorder) QMetaObject {
        return .{ .ptr = qtc.QMediaRecorder_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QMediaRecorder, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMediaRecorder_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn superMetaObject(self: QMediaRecorder) QMetaObject {
        return .{ .ptr = qtc.QMediaRecorder_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QMediaRecorder, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QMediaRecorder, callback: *const fn (QMediaRecorder, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaRecorder_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QMediaRecorder, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaRecorder_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QMediaRecorder, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaRecorder_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QMediaRecorder, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaRecorder_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaRecorder.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAvailable` instead
    ///
    pub const IsAvailable = isAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn isAvailable(self: QMediaRecorder) bool {
        return qtc.QMediaRecorder_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `outputLocation` instead
    ///
    pub const OutputLocation = outputLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn outputLocation(self: QMediaRecorder) QUrl {
        return .{ .ptr = qtc.QMediaRecorder_OutputLocation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOutputLocation` instead
    ///
    pub const SetOutputLocation = setOutputLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` location: QUrl `
    ///
    pub fn setOutputLocation(self: QMediaRecorder, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QUrl;
        qtc.QMediaRecorder_SetOutputLocation(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### DEPRECATED: Use `setOutputDevice` instead
    ///
    pub const SetOutputDevice = setOutputDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` device: QIODevice `
    ///
    pub fn setOutputDevice(self: QMediaRecorder, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QMediaRecorder_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `outputDevice` instead
    ///
    pub const OutputDevice = outputDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn outputDevice(self: QMediaRecorder) QIODevice {
        return .{ .ptr = qtc.QMediaRecorder_OutputDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actualLocation` instead
    ///
    pub const ActualLocation = actualLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn actualLocation(self: QMediaRecorder) QUrl {
        return .{ .ptr = qtc.QMediaRecorder_ActualLocation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `recorderState` instead
    ///
    pub const RecorderState = recorderState;

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
    pub fn recorderState(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_RecorderState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QMediaRecorder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaRecorder_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaRecorder.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn duration(self: QMediaRecorder) i64 {
        return qtc.QMediaRecorder_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mediaFormat` instead
    ///
    pub const MediaFormat = mediaFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn mediaFormat(self: QMediaRecorder) QMediaFormat {
        return .{ .ptr = qtc.QMediaRecorder_MediaFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMediaFormat` instead
    ///
    pub const SetMediaFormat = setMediaFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` format: QMediaFormat `
    ///
    pub fn setMediaFormat(self: QMediaRecorder, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QMediaFormat;
        qtc.QMediaRecorder_SetMediaFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `encodingMode` instead
    ///
    pub const EncodingMode = encodingMode;

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
    pub fn encodingMode(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_EncodingMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEncodingMode` instead
    ///
    pub const SetEncodingMode = setEncodingMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _encodingMode: qmediarecorder_enums.EncodingMode `
    ///
    pub fn setEncodingMode(self: QMediaRecorder, _encodingMode: i32) void {
        qtc.QMediaRecorder_SetEncodingMode(@ptrCast(self.ptr), @bitCast(_encodingMode));
    }

    /// ### DEPRECATED: Use `quality` instead
    ///
    pub const Quality = quality;

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
    pub fn quality(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_Quality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQuality` instead
    ///
    pub const SetQuality = setQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _quality: qmediarecorder_enums.Quality `
    ///
    pub fn setQuality(self: QMediaRecorder, _quality: i32) void {
        qtc.QMediaRecorder_SetQuality(@ptrCast(self.ptr), @bitCast(_quality));
    }

    /// ### DEPRECATED: Use `videoResolution` instead
    ///
    pub const VideoResolution = videoResolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn videoResolution(self: QMediaRecorder) QSize {
        return .{ .ptr = qtc.QMediaRecorder_VideoResolution(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVideoResolution` instead
    ///
    pub const SetVideoResolution = setVideoResolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _videoResolution: QSize `
    ///
    pub fn setVideoResolution(self: QMediaRecorder, _videoResolution: anytype) void {
        comptime _ = @TypeOf(_videoResolution)._is_QSize;
        qtc.QMediaRecorder_SetVideoResolution(@ptrCast(self.ptr), @ptrCast(_videoResolution.ptr));
    }

    /// ### DEPRECATED: Use `setVideoResolution2` instead
    ///
    pub const SetVideoResolution2 = setVideoResolution2;

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
    pub fn setVideoResolution2(self: QMediaRecorder, width: i32, height: i32) void {
        qtc.QMediaRecorder_SetVideoResolution2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `videoFrameRate` instead
    ///
    pub const VideoFrameRate = videoFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn videoFrameRate(self: QMediaRecorder) f64 {
        return qtc.QMediaRecorder_VideoFrameRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVideoFrameRate` instead
    ///
    pub const SetVideoFrameRate = setVideoFrameRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` frameRate: f64 `
    ///
    pub fn setVideoFrameRate(self: QMediaRecorder, frameRate: f64) void {
        qtc.QMediaRecorder_SetVideoFrameRate(@ptrCast(self.ptr), @bitCast(frameRate));
    }

    /// ### DEPRECATED: Use `videoBitRate` instead
    ///
    pub const VideoBitRate = videoBitRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn videoBitRate(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_VideoBitRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVideoBitRate` instead
    ///
    pub const SetVideoBitRate = setVideoBitRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` bitRate: i32 `
    ///
    pub fn setVideoBitRate(self: QMediaRecorder, bitRate: i32) void {
        qtc.QMediaRecorder_SetVideoBitRate(@ptrCast(self.ptr), @bitCast(bitRate));
    }

    /// ### DEPRECATED: Use `audioBitRate` instead
    ///
    pub const AudioBitRate = audioBitRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn audioBitRate(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_AudioBitRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAudioBitRate` instead
    ///
    pub const SetAudioBitRate = setAudioBitRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` bitRate: i32 `
    ///
    pub fn setAudioBitRate(self: QMediaRecorder, bitRate: i32) void {
        qtc.QMediaRecorder_SetAudioBitRate(@ptrCast(self.ptr), @bitCast(bitRate));
    }

    /// ### DEPRECATED: Use `audioChannelCount` instead
    ///
    pub const AudioChannelCount = audioChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn audioChannelCount(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_AudioChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAudioChannelCount` instead
    ///
    pub const SetAudioChannelCount = setAudioChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` channels: i32 `
    ///
    pub fn setAudioChannelCount(self: QMediaRecorder, channels: i32) void {
        qtc.QMediaRecorder_SetAudioChannelCount(@ptrCast(self.ptr), @bitCast(channels));
    }

    /// ### DEPRECATED: Use `audioSampleRate` instead
    ///
    pub const AudioSampleRate = audioSampleRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn audioSampleRate(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_AudioSampleRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAudioSampleRate` instead
    ///
    pub const SetAudioSampleRate = setAudioSampleRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` sampleRate: i32 `
    ///
    pub fn setAudioSampleRate(self: QMediaRecorder, sampleRate: i32) void {
        qtc.QMediaRecorder_SetAudioSampleRate(@ptrCast(self.ptr), @bitCast(sampleRate));
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn metaData(self: QMediaRecorder) QMediaMetaData {
        return .{ .ptr = qtc.QMediaRecorder_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaData` instead
    ///
    pub const SetMetaData = setMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _metaData: QMediaMetaData `
    ///
    pub fn setMetaData(self: QMediaRecorder, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QMediaMetaData;
        qtc.QMediaRecorder_SetMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `addMetaData` instead
    ///
    pub const AddMetaData = addMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _metaData: QMediaMetaData `
    ///
    pub fn addMetaData(self: QMediaRecorder, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QMediaMetaData;
        qtc.QMediaRecorder_AddMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `autoStop` instead
    ///
    pub const AutoStop = autoStop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn autoStop(self: QMediaRecorder) bool {
        return qtc.QMediaRecorder_AutoStop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoStop` instead
    ///
    pub const SetAutoStop = setAutoStop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAutoStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _autoStop: bool `
    ///
    pub fn setAutoStop(self: QMediaRecorder, _autoStop: bool) void {
        qtc.QMediaRecorder_SetAutoStop(@ptrCast(self.ptr), _autoStop);
    }

    /// ### DEPRECATED: Use `captureSession` instead
    ///
    pub const CaptureSession = captureSession;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn captureSession(self: QMediaRecorder) QMediaCaptureSession {
        return .{ .ptr = qtc.QMediaRecorder_CaptureSession(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `record` instead
    ///
    pub const Record = record;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#record)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn record(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Record(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn pause(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn stop(self: QMediaRecorder) void {
        qtc.QMediaRecorder_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `recorderStateChanged` instead
    ///
    pub const RecorderStateChanged = recorderStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` state: qmediarecorder_enums.RecorderState `
    ///
    pub fn recorderStateChanged(self: QMediaRecorder, state: i32) void {
        qtc.QMediaRecorder_RecorderStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onRecorderStateChanged` instead
    ///
    pub const OnRecorderStateChanged = onRecorderStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, state: qmediarecorder_enums.RecorderState) callconv(.c) void `
    ///
    pub fn onRecorderStateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i32) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_RecorderStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `durationChanged` instead
    ///
    pub const DurationChanged = durationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _duration: i64 `
    ///
    pub fn durationChanged(self: QMediaRecorder, _duration: i64) void {
        qtc.QMediaRecorder_DurationChanged(@ptrCast(self.ptr), @bitCast(_duration));
    }

    /// ### DEPRECATED: Use `onDurationChanged` instead
    ///
    pub const OnDurationChanged = onDurationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, duration: i64) callconv(.c) void `
    ///
    pub fn onDurationChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i64) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_DurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actualLocationChanged` instead
    ///
    pub const ActualLocationChanged = actualLocationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` location: QUrl `
    ///
    pub fn actualLocationChanged(self: QMediaRecorder, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QUrl;
        qtc.QMediaRecorder_ActualLocationChanged(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### DEPRECATED: Use `onActualLocationChanged` instead
    ///
    pub const OnActualLocationChanged = onActualLocationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, location: QUrl) callconv(.c) void `
    ///
    pub fn onActualLocationChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QUrl) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ActualLocationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encoderSettingsChanged` instead
    ///
    pub const EncoderSettingsChanged = encoderSettingsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn encoderSettingsChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_EncoderSettingsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEncoderSettingsChanged` instead
    ///
    pub const OnEncoderSettingsChanged = onEncoderSettingsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onEncoderSettingsChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncoderSettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` errorVal: qmediarecorder_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred(self: QMediaRecorder, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QMediaRecorder_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder, errorVal: qmediarecorder_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QMediaRecorder, callback: *const fn (QMediaRecorder, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorChanged` instead
    ///
    pub const ErrorChanged = errorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn errorChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onErrorChanged` instead
    ///
    pub const OnErrorChanged = onErrorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onErrorChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metaDataChanged` instead
    ///
    pub const MetaDataChanged = metaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn metaDataChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMetaDataChanged` instead
    ///
    pub const OnMetaDataChanged = onMetaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onMetaDataChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mediaFormatChanged` instead
    ///
    pub const MediaFormatChanged = mediaFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn mediaFormatChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_MediaFormatChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMediaFormatChanged` instead
    ///
    pub const OnMediaFormatChanged = onMediaFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onMediaFormatChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MediaFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encodingModeChanged` instead
    ///
    pub const EncodingModeChanged = encodingModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn encodingModeChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_EncodingModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEncodingModeChanged` instead
    ///
    pub const OnEncodingModeChanged = onEncodingModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onEncodingModeChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncodingModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `qualityChanged` instead
    ///
    pub const QualityChanged = qualityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn qualityChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_QualityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQualityChanged` instead
    ///
    pub const OnQualityChanged = onQualityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onQualityChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_QualityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `videoResolutionChanged` instead
    ///
    pub const VideoResolutionChanged = videoResolutionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn videoResolutionChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_VideoResolutionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVideoResolutionChanged` instead
    ///
    pub const OnVideoResolutionChanged = onVideoResolutionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onVideoResolutionChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoResolutionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `videoFrameRateChanged` instead
    ///
    pub const VideoFrameRateChanged = videoFrameRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn videoFrameRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_VideoFrameRateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVideoFrameRateChanged` instead
    ///
    pub const OnVideoFrameRateChanged = onVideoFrameRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onVideoFrameRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoFrameRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `videoBitRateChanged` instead
    ///
    pub const VideoBitRateChanged = videoBitRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn videoBitRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_VideoBitRateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVideoBitRateChanged` instead
    ///
    pub const OnVideoBitRateChanged = onVideoBitRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onVideoBitRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoBitRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioBitRateChanged` instead
    ///
    pub const AudioBitRateChanged = audioBitRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn audioBitRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AudioBitRateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioBitRateChanged` instead
    ///
    pub const OnAudioBitRateChanged = onAudioBitRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onAudioBitRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioBitRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioChannelCountChanged` instead
    ///
    pub const AudioChannelCountChanged = audioChannelCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn audioChannelCountChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AudioChannelCountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioChannelCountChanged` instead
    ///
    pub const OnAudioChannelCountChanged = onAudioChannelCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onAudioChannelCountChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioChannelCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioSampleRateChanged` instead
    ///
    pub const AudioSampleRateChanged = audioSampleRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn audioSampleRateChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AudioSampleRateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioSampleRateChanged` instead
    ///
    pub const OnAudioSampleRateChanged = onAudioSampleRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onAudioSampleRateChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioSampleRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoStopChanged` instead
    ///
    pub const AutoStopChanged = autoStopChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn autoStopChanged(self: QMediaRecorder) void {
        qtc.QMediaRecorder_AutoStopChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoStopChanged` instead
    ///
    pub const OnAutoStopChanged = onAutoStopChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` callback: *const fn (self: QMediaRecorder) callconv(.c) void `
    ///
    pub fn onAutoStopChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AutoStopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaRecorder.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaRecorder.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QMediaRecorder, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaRecorder.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QMediaRecorder, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn isWidgetType(self: QMediaRecorder) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn isWindowType(self: QMediaRecorder) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn isQuickItemType(self: QMediaRecorder) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn signalsBlocked(self: QMediaRecorder) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QMediaRecorder, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn thread(self: QMediaRecorder) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QMediaRecorder, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QMediaRecorder, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QMediaRecorder, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QMediaRecorder, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QMediaRecorder, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QMediaRecorder, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QMediaRecorder.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QMediaRecorder, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QMediaRecorder, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QMediaRecorder, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QMediaRecorder, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn disconnect3(self: QMediaRecorder) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QMediaRecorder, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn dumpObjectTree(self: QMediaRecorder) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn dumpObjectInfo(self: QMediaRecorder) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QMediaRecorder, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QMediaRecorder, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QMediaRecorder, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMediaRecorder.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMediaRecorder.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn bindingStorage(self: QMediaRecorder) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn bindingStorage2(self: QMediaRecorder) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn destroyed(self: QMediaRecorder) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QMediaRecorder, callback: *const fn (QMediaRecorder) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn parent(self: QMediaRecorder) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QMediaRecorder, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn deleteLater(self: QMediaRecorder) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QMediaRecorder, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QMediaRecorder, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaRecorder `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QMediaRecorder, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QMediaRecorder, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QMediaRecorder, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QMediaRecorder, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QMediaRecorder, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QMediaRecorder, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QMediaRecorder, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaRecorder_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QMediaRecorder, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaRecorder_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QEvent) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QMediaRecorder, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaRecorder_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QMediaRecorder, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaRecorder_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QMediaRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMediaRecorder_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QMediaRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMediaRecorder_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QTimerEvent) callconv(.c) void) void {
        qtc.QMediaRecorder_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QMediaRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMediaRecorder_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QMediaRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMediaRecorder_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QChildEvent) callconv(.c) void) void {
        qtc.QMediaRecorder_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QMediaRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMediaRecorder_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QMediaRecorder, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMediaRecorder_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QEvent) callconv(.c) void) void {
        qtc.QMediaRecorder_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaRecorder_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QMediaRecorder, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaRecorder_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaRecorder_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QMediaRecorder) QObject {
        return .{ .ptr = qtc.QMediaRecorder_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QMediaRecorder) QObject {
        return .{ .ptr = qtc.QMediaRecorder_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QMediaRecorder, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMediaRecorder_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QMediaRecorder) i32 {
        return qtc.QMediaRecorder_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QMediaRecorder, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaRecorder_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QMediaRecorder, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QMediaRecorder, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaRecorder_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QMediaRecorder, callback: *const fn (QMediaRecorder, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaRecorder_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QMediaRecorder, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaRecorder_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QMediaRecorder, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaRecorder_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QMediaRecorder, callback: *const fn (QMediaRecorder, QMetaMethod) callconv(.c) bool) void {
        qtc.QMediaRecorder_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QMediaRecorder, callback: *const fn (QMediaRecorder, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#dtor.QMediaRecorder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaRecorder `
    ///
    pub fn delete(self: QMediaRecorder) void {
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
