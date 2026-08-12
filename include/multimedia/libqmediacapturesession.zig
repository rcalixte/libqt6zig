const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioBufferInput = @import("libqt6").QAudioBufferInput;
const QAudioInput = @import("libqt6").QAudioInput;
const QAudioOutput = @import("libqt6").QAudioOutput;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QCamera = @import("libqt6").QCamera;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QImageCapture = @import("libqt6").QImageCapture;
const QMediaRecorder = @import("libqt6").QMediaRecorder;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QScreenCapture = @import("libqt6").QScreenCapture;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVideoFrameInput = @import("libqt6").QVideoFrameInput;
const QVideoSink = @import("libqt6").QVideoSink;
const QWindowCapture = @import("libqt6").QWindowCapture;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html)
pub const QMediaCaptureSession = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaCaptureSession,

    pub const _is_QMediaCaptureSession = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaCaptureSession object in C++ memory
    ///
    pub fn new() QMediaCaptureSession {
        return .{ .ptr = qtc.QMediaCaptureSession_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaCaptureSession object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QMediaCaptureSession {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QMediaCaptureSession_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn metaObject(self: QMediaCaptureSession) QMetaObject {
        return .{ .ptr = qtc.QMediaCaptureSession_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QMediaCaptureSession, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMediaCaptureSession_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn superMetaObject(self: QMediaCaptureSession) QMetaObject {
        return .{ .ptr = qtc.QMediaCaptureSession_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QMediaCaptureSession, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaCaptureSession_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaCaptureSession_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QMediaCaptureSession, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaCaptureSession_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QMediaCaptureSession, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaCaptureSession_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaCaptureSession_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QMediaCaptureSession, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaCaptureSession_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaCaptureSession.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `audioInput` instead
    ///
    pub const AudioInput = audioInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn audioInput(self: QMediaCaptureSession) QAudioInput {
        return .{ .ptr = qtc.QMediaCaptureSession_AudioInput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAudioInput` instead
    ///
    pub const SetAudioInput = setAudioInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` input: QAudioInput `
    ///
    pub fn setAudioInput(self: QMediaCaptureSession, input: anytype) void {
        comptime _ = @TypeOf(input)._is_QAudioInput;
        qtc.QMediaCaptureSession_SetAudioInput(@ptrCast(self.ptr), @ptrCast(input.ptr));
    }

    /// ### DEPRECATED: Use `audioBufferInput` instead
    ///
    pub const AudioBufferInput = audioBufferInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn audioBufferInput(self: QMediaCaptureSession) QAudioBufferInput {
        return .{ .ptr = qtc.QMediaCaptureSession_AudioBufferInput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAudioBufferInput` instead
    ///
    pub const SetAudioBufferInput = setAudioBufferInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioBufferInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` input: QAudioBufferInput `
    ///
    pub fn setAudioBufferInput(self: QMediaCaptureSession, input: anytype) void {
        comptime _ = @TypeOf(input)._is_QAudioBufferInput;
        qtc.QMediaCaptureSession_SetAudioBufferInput(@ptrCast(self.ptr), @ptrCast(input.ptr));
    }

    /// ### DEPRECATED: Use `camera` instead
    ///
    pub const Camera = camera;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#camera)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn camera(self: QMediaCaptureSession) QCamera {
        return .{ .ptr = qtc.QMediaCaptureSession_Camera(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCamera` instead
    ///
    pub const SetCamera = setCamera;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setCamera)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _camera: QCamera `
    ///
    pub fn setCamera(self: QMediaCaptureSession, _camera: anytype) void {
        comptime _ = @TypeOf(_camera)._is_QCamera;
        qtc.QMediaCaptureSession_SetCamera(@ptrCast(self.ptr), @ptrCast(_camera.ptr));
    }

    /// ### DEPRECATED: Use `imageCapture` instead
    ///
    pub const ImageCapture = imageCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn imageCapture(self: QMediaCaptureSession) QImageCapture {
        return .{ .ptr = qtc.QMediaCaptureSession_ImageCapture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setImageCapture` instead
    ///
    pub const SetImageCapture = setImageCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setImageCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _imageCapture: QImageCapture `
    ///
    pub fn setImageCapture(self: QMediaCaptureSession, _imageCapture: anytype) void {
        comptime _ = @TypeOf(_imageCapture)._is_QImageCapture;
        qtc.QMediaCaptureSession_SetImageCapture(@ptrCast(self.ptr), @ptrCast(_imageCapture.ptr));
    }

    /// ### DEPRECATED: Use `screenCapture` instead
    ///
    pub const ScreenCapture = screenCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn screenCapture(self: QMediaCaptureSession) QScreenCapture {
        return .{ .ptr = qtc.QMediaCaptureSession_ScreenCapture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenCapture` instead
    ///
    pub const SetScreenCapture = setScreenCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setScreenCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _screenCapture: QScreenCapture `
    ///
    pub fn setScreenCapture(self: QMediaCaptureSession, _screenCapture: anytype) void {
        comptime _ = @TypeOf(_screenCapture)._is_QScreenCapture;
        qtc.QMediaCaptureSession_SetScreenCapture(@ptrCast(self.ptr), @ptrCast(_screenCapture.ptr));
    }

    /// ### DEPRECATED: Use `windowCapture` instead
    ///
    pub const WindowCapture = windowCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn windowCapture(self: QMediaCaptureSession) QWindowCapture {
        return .{ .ptr = qtc.QMediaCaptureSession_WindowCapture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowCapture` instead
    ///
    pub const SetWindowCapture = setWindowCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setWindowCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _windowCapture: QWindowCapture `
    ///
    pub fn setWindowCapture(self: QMediaCaptureSession, _windowCapture: anytype) void {
        comptime _ = @TypeOf(_windowCapture)._is_QWindowCapture;
        qtc.QMediaCaptureSession_SetWindowCapture(@ptrCast(self.ptr), @ptrCast(_windowCapture.ptr));
    }

    /// ### DEPRECATED: Use `videoFrameInput` instead
    ///
    pub const VideoFrameInput = videoFrameInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn videoFrameInput(self: QMediaCaptureSession) QVideoFrameInput {
        return .{ .ptr = qtc.QMediaCaptureSession_VideoFrameInput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVideoFrameInput` instead
    ///
    pub const SetVideoFrameInput = setVideoFrameInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoFrameInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` input: QVideoFrameInput `
    ///
    pub fn setVideoFrameInput(self: QMediaCaptureSession, input: anytype) void {
        comptime _ = @TypeOf(input)._is_QVideoFrameInput;
        qtc.QMediaCaptureSession_SetVideoFrameInput(@ptrCast(self.ptr), @ptrCast(input.ptr));
    }

    /// ### DEPRECATED: Use `recorder` instead
    ///
    pub const Recorder = recorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn recorder(self: QMediaCaptureSession) QMediaRecorder {
        return .{ .ptr = qtc.QMediaCaptureSession_Recorder(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRecorder` instead
    ///
    pub const SetRecorder = setRecorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setRecorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _recorder: QMediaRecorder `
    ///
    pub fn setRecorder(self: QMediaCaptureSession, _recorder: anytype) void {
        comptime _ = @TypeOf(_recorder)._is_QMediaRecorder;
        qtc.QMediaCaptureSession_SetRecorder(@ptrCast(self.ptr), @ptrCast(_recorder.ptr));
    }

    /// ### DEPRECATED: Use `setVideoOutput` instead
    ///
    pub const SetVideoOutput = setVideoOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` output: QObject `
    ///
    pub fn setVideoOutput(self: QMediaCaptureSession, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QObject;
        qtc.QMediaCaptureSession_SetVideoOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### DEPRECATED: Use `videoOutput` instead
    ///
    pub const VideoOutput = videoOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn videoOutput(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QMediaCaptureSession_VideoOutput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVideoSink` instead
    ///
    pub const SetVideoSink = setVideoSink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` sink: QVideoSink `
    ///
    pub fn setVideoSink(self: QMediaCaptureSession, sink: anytype) void {
        comptime _ = @TypeOf(sink)._is_QVideoSink;
        qtc.QMediaCaptureSession_SetVideoSink(@ptrCast(self.ptr), @ptrCast(sink.ptr));
    }

    /// ### DEPRECATED: Use `videoSink` instead
    ///
    pub const VideoSink = videoSink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn videoSink(self: QMediaCaptureSession) QVideoSink {
        return .{ .ptr = qtc.QMediaCaptureSession_VideoSink(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAudioOutput` instead
    ///
    pub const SetAudioOutput = setAudioOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` output: QAudioOutput `
    ///
    pub fn setAudioOutput(self: QMediaCaptureSession, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QAudioOutput;
        qtc.QMediaCaptureSession_SetAudioOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### DEPRECATED: Use `audioOutput` instead
    ///
    pub const AudioOutput = audioOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn audioOutput(self: QMediaCaptureSession) QAudioOutput {
        return .{ .ptr = qtc.QMediaCaptureSession_AudioOutput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `audioInputChanged` instead
    ///
    pub const AudioInputChanged = audioInputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn audioInputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_AudioInputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioInputChanged` instead
    ///
    pub const OnAudioInputChanged = onAudioInputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onAudioInputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioInputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioBufferInputChanged` instead
    ///
    pub const AudioBufferInputChanged = audioBufferInputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn audioBufferInputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_AudioBufferInputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioBufferInputChanged` instead
    ///
    pub const OnAudioBufferInputChanged = onAudioBufferInputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onAudioBufferInputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioBufferInputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cameraChanged` instead
    ///
    pub const CameraChanged = cameraChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn cameraChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_CameraChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCameraChanged` instead
    ///
    pub const OnCameraChanged = onCameraChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onCameraChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_CameraChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `screenCaptureChanged` instead
    ///
    pub const ScreenCaptureChanged = screenCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn screenCaptureChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_ScreenCaptureChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScreenCaptureChanged` instead
    ///
    pub const OnScreenCaptureChanged = onScreenCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onScreenCaptureChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_ScreenCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowCaptureChanged` instead
    ///
    pub const WindowCaptureChanged = windowCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn windowCaptureChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_WindowCaptureChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWindowCaptureChanged` instead
    ///
    pub const OnWindowCaptureChanged = onWindowCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onWindowCaptureChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_WindowCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `videoFrameInputChanged` instead
    ///
    pub const VideoFrameInputChanged = videoFrameInputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn videoFrameInputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_VideoFrameInputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVideoFrameInputChanged` instead
    ///
    pub const OnVideoFrameInputChanged = onVideoFrameInputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onVideoFrameInputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_VideoFrameInputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageCaptureChanged` instead
    ///
    pub const ImageCaptureChanged = imageCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn imageCaptureChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_ImageCaptureChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImageCaptureChanged` instead
    ///
    pub const OnImageCaptureChanged = onImageCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onImageCaptureChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_ImageCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recorderChanged` instead
    ///
    pub const RecorderChanged = recorderChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn recorderChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_RecorderChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRecorderChanged` instead
    ///
    pub const OnRecorderChanged = onRecorderChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onRecorderChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_RecorderChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `videoOutputChanged` instead
    ///
    pub const VideoOutputChanged = videoOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn videoOutputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_VideoOutputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVideoOutputChanged` instead
    ///
    pub const OnVideoOutputChanged = onVideoOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onVideoOutputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_VideoOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioOutputChanged` instead
    ///
    pub const AudioOutputChanged = audioOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn audioOutputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_AudioOutputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioOutputChanged` instead
    ///
    pub const OnAudioOutputChanged = onAudioOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onAudioOutputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaCaptureSession.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaCaptureSession.tr3: Memory allocation failed");
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QMediaCaptureSession, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaCaptureSession.objectName: Memory allocation failed");
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QMediaCaptureSession, name: []const u8) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn isWidgetType(self: QMediaCaptureSession) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn isWindowType(self: QMediaCaptureSession) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn isQuickItemType(self: QMediaCaptureSession) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn signalsBlocked(self: QMediaCaptureSession) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QMediaCaptureSession, b: bool) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn thread(self: QMediaCaptureSession) QThread {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QMediaCaptureSession, _thread: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QMediaCaptureSession, interval: i32) i32 {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QMediaCaptureSession, time: i64) i32 {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QMediaCaptureSession, id: i32) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QMediaCaptureSession, id: i32) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QMediaCaptureSession, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QMediaCaptureSession.children: Memory allocation failed");
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QMediaCaptureSession, _parent: anytype) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QMediaCaptureSession, filterObj: anytype) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QMediaCaptureSession, obj: anytype) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QMediaCaptureSession, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn disconnect3(self: QMediaCaptureSession) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QMediaCaptureSession, receiver: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn dumpObjectTree(self: QMediaCaptureSession) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn dumpObjectInfo(self: QMediaCaptureSession) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QMediaCaptureSession, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QMediaCaptureSession, name: [:0]const u8) QVariant {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QMediaCaptureSession, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMediaCaptureSession.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMediaCaptureSession.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn bindingStorage(self: QMediaCaptureSession) QBindingStorage {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn bindingStorage2(self: QMediaCaptureSession) QBindingStorage {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn destroyed(self: QMediaCaptureSession) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn parent(self: QMediaCaptureSession) QObject {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QMediaCaptureSession, classname: [:0]const u8) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn deleteLater(self: QMediaCaptureSession) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QMediaCaptureSession, interval: i32, timerType: i32) i32 {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QMediaCaptureSession, time: i64, timerType: i32) i32 {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QMediaCaptureSession, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QMediaCaptureSession, signal: [:0]const u8) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QMediaCaptureSession, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QMediaCaptureSession, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QMediaCaptureSession, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QMediaCaptureSession, param1: anytype) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QObject) callconv(.c) void) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QMediaCaptureSession, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaCaptureSession_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QMediaCaptureSession, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaCaptureSession_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QEvent) callconv(.c) bool) void {
        qtc.QMediaCaptureSession_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QMediaCaptureSession, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaCaptureSession_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QMediaCaptureSession, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaCaptureSession_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMediaCaptureSession_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QMediaCaptureSession, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMediaCaptureSession_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QMediaCaptureSession, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMediaCaptureSession_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QTimerEvent) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QMediaCaptureSession, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMediaCaptureSession_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QMediaCaptureSession, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMediaCaptureSession_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QChildEvent) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QMediaCaptureSession, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMediaCaptureSession_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QMediaCaptureSession, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMediaCaptureSession_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QEvent) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn sender(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QMediaCaptureSession_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn superSender(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QMediaCaptureSession_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QMediaCaptureSession, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMediaCaptureSession_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn senderSignalIndex(self: QMediaCaptureSession) i32 {
        return qtc.QMediaCaptureSession_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn superSenderSignalIndex(self: QMediaCaptureSession) i32 {
        return qtc.QMediaCaptureSession_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QMediaCaptureSession, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaCaptureSession_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QMediaCaptureSession, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaCaptureSession_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QMediaCaptureSession, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaCaptureSession_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaCaptureSession_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QMediaCaptureSession, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaCaptureSession_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QMediaCaptureSession, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaCaptureSession_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession`
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QMetaMethod) callconv(.c) bool) void {
        qtc.QMediaCaptureSession_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#dtor.QMediaCaptureSession)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn delete(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_Delete(@ptrCast(self.ptr));
    }
};
