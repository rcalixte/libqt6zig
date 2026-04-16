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

    /// New constructs a new QMediaCaptureSession object.
    ///
    pub fn New() QMediaCaptureSession {
        return .{ .ptr = qtc.QMediaCaptureSession_new() };
    }

    /// New2 constructs a new QMediaCaptureSession object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QMediaCaptureSession {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QMediaCaptureSession_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn MetaObject(self: QMediaCaptureSession) QMetaObject {
        return .{ .ptr = qtc.QMediaCaptureSession_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QMediaCaptureSession, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMediaCaptureSession_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn SuperMetaObject(self: QMediaCaptureSession) QMetaObject {
        return .{ .ptr = qtc.QMediaCaptureSession_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QMediaCaptureSession, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaCaptureSession_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaCaptureSession_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QMediaCaptureSession, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaCaptureSession_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QMediaCaptureSession, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaCaptureSession_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaCaptureSession_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QMediaCaptureSession, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaCaptureSession_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn AudioInput(self: QMediaCaptureSession) QAudioInput {
        return .{ .ptr = qtc.QMediaCaptureSession_AudioInput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` input: QAudioInput `
    ///
    pub fn SetAudioInput(self: QMediaCaptureSession, input: anytype) void {
        comptime _ = @TypeOf(input)._is_QAudioInput;
        qtc.QMediaCaptureSession_SetAudioInput(@ptrCast(self.ptr), @ptrCast(input.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn AudioBufferInput(self: QMediaCaptureSession) QAudioBufferInput {
        return .{ .ptr = qtc.QMediaCaptureSession_AudioBufferInput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioBufferInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` input: QAudioBufferInput `
    ///
    pub fn SetAudioBufferInput(self: QMediaCaptureSession, input: anytype) void {
        comptime _ = @TypeOf(input)._is_QAudioBufferInput;
        qtc.QMediaCaptureSession_SetAudioBufferInput(@ptrCast(self.ptr), @ptrCast(input.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#camera)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Camera(self: QMediaCaptureSession) QCamera {
        return .{ .ptr = qtc.QMediaCaptureSession_Camera(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setCamera)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` camera: QCamera `
    ///
    pub fn SetCamera(self: QMediaCaptureSession, camera: anytype) void {
        comptime _ = @TypeOf(camera)._is_QCamera;
        qtc.QMediaCaptureSession_SetCamera(@ptrCast(self.ptr), @ptrCast(camera.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn ImageCapture(self: QMediaCaptureSession) QImageCapture {
        return .{ .ptr = qtc.QMediaCaptureSession_ImageCapture(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setImageCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` imageCapture: QImageCapture `
    ///
    pub fn SetImageCapture(self: QMediaCaptureSession, imageCapture: anytype) void {
        comptime _ = @TypeOf(imageCapture)._is_QImageCapture;
        qtc.QMediaCaptureSession_SetImageCapture(@ptrCast(self.ptr), @ptrCast(imageCapture.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn ScreenCapture(self: QMediaCaptureSession) QScreenCapture {
        return .{ .ptr = qtc.QMediaCaptureSession_ScreenCapture(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setScreenCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` screenCapture: QScreenCapture `
    ///
    pub fn SetScreenCapture(self: QMediaCaptureSession, screenCapture: anytype) void {
        comptime _ = @TypeOf(screenCapture)._is_QScreenCapture;
        qtc.QMediaCaptureSession_SetScreenCapture(@ptrCast(self.ptr), @ptrCast(screenCapture.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn WindowCapture(self: QMediaCaptureSession) QWindowCapture {
        return .{ .ptr = qtc.QMediaCaptureSession_WindowCapture(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setWindowCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` windowCapture: QWindowCapture `
    ///
    pub fn SetWindowCapture(self: QMediaCaptureSession, windowCapture: anytype) void {
        comptime _ = @TypeOf(windowCapture)._is_QWindowCapture;
        qtc.QMediaCaptureSession_SetWindowCapture(@ptrCast(self.ptr), @ptrCast(windowCapture.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn VideoFrameInput(self: QMediaCaptureSession) QVideoFrameInput {
        return .{ .ptr = qtc.QMediaCaptureSession_VideoFrameInput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoFrameInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` input: QVideoFrameInput `
    ///
    pub fn SetVideoFrameInput(self: QMediaCaptureSession, input: anytype) void {
        comptime _ = @TypeOf(input)._is_QVideoFrameInput;
        qtc.QMediaCaptureSession_SetVideoFrameInput(@ptrCast(self.ptr), @ptrCast(input.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Recorder(self: QMediaCaptureSession) QMediaRecorder {
        return .{ .ptr = qtc.QMediaCaptureSession_Recorder(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setRecorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` recorder: QMediaRecorder `
    ///
    pub fn SetRecorder(self: QMediaCaptureSession, recorder: anytype) void {
        comptime _ = @TypeOf(recorder)._is_QMediaRecorder;
        qtc.QMediaCaptureSession_SetRecorder(@ptrCast(self.ptr), @ptrCast(recorder.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` output: QObject `
    ///
    pub fn SetVideoOutput(self: QMediaCaptureSession, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QObject;
        qtc.QMediaCaptureSession_SetVideoOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn VideoOutput(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QMediaCaptureSession_VideoOutput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` sink: QVideoSink `
    ///
    pub fn SetVideoSink(self: QMediaCaptureSession, sink: anytype) void {
        comptime _ = @TypeOf(sink)._is_QVideoSink;
        qtc.QMediaCaptureSession_SetVideoSink(@ptrCast(self.ptr), @ptrCast(sink.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn VideoSink(self: QMediaCaptureSession) QVideoSink {
        return .{ .ptr = qtc.QMediaCaptureSession_VideoSink(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` output: QAudioOutput `
    ///
    pub fn SetAudioOutput(self: QMediaCaptureSession, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QAudioOutput;
        qtc.QMediaCaptureSession_SetAudioOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn AudioOutput(self: QMediaCaptureSession) QAudioOutput {
        return .{ .ptr = qtc.QMediaCaptureSession_AudioOutput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn AudioInputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_AudioInputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnAudioInputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioInputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn AudioBufferInputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_AudioBufferInputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnAudioBufferInputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioBufferInputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn CameraChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_CameraChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnCameraChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_CameraChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn ScreenCaptureChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_ScreenCaptureChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnScreenCaptureChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_ScreenCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn WindowCaptureChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_WindowCaptureChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnWindowCaptureChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_WindowCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn VideoFrameInputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_VideoFrameInputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnVideoFrameInputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_VideoFrameInputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn ImageCaptureChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_ImageCaptureChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnImageCaptureChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_ImageCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn RecorderChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_RecorderChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnRecorderChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_RecorderChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn VideoOutputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_VideoOutputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnVideoOutputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_VideoOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn AudioOutputChanged(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_AudioOutputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` callback: *const fn (self: QMediaCaptureSession) callconv(.c) void `
    ///
    pub fn OnAudioOutputChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QMediaCaptureSession_Connect_AudioOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QMediaCaptureSession, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediacapturesession.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QMediaCaptureSession, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn IsWidgetType(self: QMediaCaptureSession) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn IsWindowType(self: QMediaCaptureSession) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn IsQuickItemType(self: QMediaCaptureSession) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn SignalsBlocked(self: QMediaCaptureSession) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QMediaCaptureSession, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Thread(self: QMediaCaptureSession) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QMediaCaptureSession, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QMediaCaptureSession, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QMediaCaptureSession, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QMediaCaptureSession, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QMediaCaptureSession, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QMediaCaptureSession, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qmediacapturesession.Children: Memory allocation failed");
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QMediaCaptureSession, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QMediaCaptureSession, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QMediaCaptureSession, obj: anytype) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QMediaCaptureSession, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Disconnect3(self: QMediaCaptureSession) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QMediaCaptureSession, receiver: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn DumpObjectTree(self: QMediaCaptureSession) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn DumpObjectInfo(self: QMediaCaptureSession) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QMediaCaptureSession, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QMediaCaptureSession, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QMediaCaptureSession, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qmediacapturesession.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmediacapturesession.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn BindingStorage(self: QMediaCaptureSession) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn BindingStorage2(self: QMediaCaptureSession) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Destroyed(self: QMediaCaptureSession) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Parent(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QMediaCaptureSession, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn DeleteLater(self: QMediaCaptureSession) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QMediaCaptureSession, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QMediaCaptureSession, time: i64, timerType: i32) i32 {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QMediaCaptureSession, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QMediaCaptureSession, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QMediaCaptureSession, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QMediaCaptureSession, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QMediaCaptureSession, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QMediaCaptureSession, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QObject) callconv(.c) void) void {
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QMediaCaptureSession, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaCaptureSession_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QMediaCaptureSession, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaCaptureSession_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QEvent) callconv(.c) bool) void {
        qtc.QMediaCaptureSession_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QMediaCaptureSession, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaCaptureSession_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QMediaCaptureSession, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaCaptureSession_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMediaCaptureSession_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QMediaCaptureSession, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMediaCaptureSession_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QMediaCaptureSession, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMediaCaptureSession_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QTimerEvent) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QMediaCaptureSession, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMediaCaptureSession_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QMediaCaptureSession, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMediaCaptureSession_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QChildEvent) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QMediaCaptureSession, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMediaCaptureSession_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QMediaCaptureSession, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMediaCaptureSession_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QEvent) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QMediaCaptureSession, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaCaptureSession_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaCaptureSession_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QMediaCaptureSession_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn SuperSender(self: QMediaCaptureSession) QObject {
        return .{ .ptr = qtc.QMediaCaptureSession_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QMediaCaptureSession, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMediaCaptureSession_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QMediaCaptureSession) i32 {
        return qtc.QMediaCaptureSession_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    pub fn SuperSenderSignalIndex(self: QMediaCaptureSession) i32 {
        return qtc.QMediaCaptureSession_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QMediaCaptureSession, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaCaptureSession_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QMediaCaptureSession, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaCaptureSession_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QMediaCaptureSession, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaCaptureSession_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaCaptureSession_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QMediaCaptureSession, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaCaptureSession_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaCaptureSession `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QMediaCaptureSession, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaCaptureSession_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, QMetaMethod) callconv(.c) bool) void {
        qtc.QMediaCaptureSession_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QMediaCaptureSession, callback: *const fn (QMediaCaptureSession, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#dtor.QMediaCaptureSession)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaCaptureSession `
    ///
    pub fn Delete(self: QMediaCaptureSession) void {
        qtc.QMediaCaptureSession_Delete(@ptrCast(self.ptr));
    }
};
