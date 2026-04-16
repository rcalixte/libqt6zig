const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioBufferOutput = @import("libqt6").QAudioBufferOutput;
const QAudioOutput = @import("libqt6").QAudioOutput;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QMediaMetaData = @import("libqt6").QMediaMetaData;
const QMediaTimeRange = @import("libqt6").QMediaTimeRange;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QVideoSink = @import("libqt6").QVideoSink;
const qmediaplayer_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html)
pub const QMediaPlayer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaPlayer,

    pub const _is_QMediaPlayer = {};
    pub const _is_QObject = {};

    /// New constructs a new QMediaPlayer object.
    ///
    pub fn New() QMediaPlayer {
        return .{ .ptr = qtc.QMediaPlayer_new() };
    }

    /// New2 constructs a new QMediaPlayer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QMediaPlayer {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QMediaPlayer_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn MetaObject(self: QMediaPlayer) QMetaObject {
        return .{ .ptr = qtc.QMediaPlayer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QMediaPlayer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMediaPlayer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    pub fn SuperMetaObject(self: QMediaPlayer) QMetaObject {
        return .{ .ptr = qtc.QMediaPlayer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QMediaPlayer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaPlayer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QMediaPlayer, callback: *const fn (QMediaPlayer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaPlayer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QMediaPlayer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaPlayer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QMediaPlayer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaPlayer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaPlayer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QMediaPlayer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaPlayer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AudioTracks(self: QMediaPlayer, allocator: std.mem.Allocator) []QMediaMetaData {
        const _arr: qtc.libqt_list = qtc.QMediaPlayer_AudioTracks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaMetaData, _arr.len) catch @panic("qmediaplayer.AudioTracks: Memory allocation failed");
        const _data: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VideoTracks(self: QMediaPlayer, allocator: std.mem.Allocator) []QMediaMetaData {
        const _arr: qtc.libqt_list = qtc.QMediaPlayer_VideoTracks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaMetaData, _arr.len) catch @panic("qmediaplayer.VideoTracks: Memory allocation failed");
        const _data: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubtitleTracks(self: QMediaPlayer, allocator: std.mem.Allocator) []QMediaMetaData {
        const _arr: qtc.libqt_list = qtc.QMediaPlayer_SubtitleTracks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaMetaData, _arr.len) catch @panic("qmediaplayer.SubtitleTracks: Memory allocation failed");
        const _data: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn ActiveAudioTrack(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_ActiveAudioTrack(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn ActiveVideoTrack(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_ActiveVideoTrack(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn ActiveSubtitleTrack(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_ActiveSubtitleTrack(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` index: i32 `
    ///
    pub fn SetActiveAudioTrack(self: QMediaPlayer, index: i32) void {
        qtc.QMediaPlayer_SetActiveAudioTrack(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` index: i32 `
    ///
    pub fn SetActiveVideoTrack(self: QMediaPlayer, index: i32) void {
        qtc.QMediaPlayer_SetActiveVideoTrack(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` index: i32 `
    ///
    pub fn SetActiveSubtitleTrack(self: QMediaPlayer, index: i32) void {
        qtc.QMediaPlayer_SetActiveSubtitleTrack(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioBufferOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` output: QAudioBufferOutput `
    ///
    pub fn SetAudioBufferOutput(self: QMediaPlayer, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QAudioBufferOutput;
        qtc.QMediaPlayer_SetAudioBufferOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn AudioBufferOutput(self: QMediaPlayer) QAudioBufferOutput {
        return .{ .ptr = qtc.QMediaPlayer_AudioBufferOutput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` output: QAudioOutput `
    ///
    pub fn SetAudioOutput(self: QMediaPlayer, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QAudioOutput;
        qtc.QMediaPlayer_SetAudioOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn AudioOutput(self: QMediaPlayer) QAudioOutput {
        return .{ .ptr = qtc.QMediaPlayer_AudioOutput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` videoOutput: QObject `
    ///
    pub fn SetVideoOutput(self: QMediaPlayer, videoOutput: anytype) void {
        comptime _ = @TypeOf(videoOutput)._is_QObject;
        qtc.QMediaPlayer_SetVideoOutput(@ptrCast(self.ptr), @ptrCast(videoOutput.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn VideoOutput(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QMediaPlayer_VideoOutput(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` sink: QVideoSink `
    ///
    pub fn SetVideoSink(self: QMediaPlayer, sink: anytype) void {
        comptime _ = @TypeOf(sink)._is_QVideoSink;
        qtc.QMediaPlayer_SetVideoSink(@ptrCast(self.ptr), @ptrCast(sink.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn VideoSink(self: QMediaPlayer) QVideoSink {
        return .{ .ptr = qtc.QMediaPlayer_VideoSink(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Source(self: QMediaPlayer) QUrl {
        return .{ .ptr = qtc.QMediaPlayer_Source(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn SourceDevice(self: QMediaPlayer) QIODevice {
        return .{ .ptr = qtc.QMediaPlayer_SourceDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ## Returns:
    ///
    /// ` qmediaplayer_enums.PlaybackState `
    ///
    pub fn PlaybackState(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_PlaybackState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ## Returns:
    ///
    /// ` qmediaplayer_enums.MediaStatus `
    ///
    pub fn MediaStatus(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_MediaStatus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Duration(self: QMediaPlayer) i64 {
        return qtc.QMediaPlayer_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Position(self: QMediaPlayer) i64 {
        return qtc.QMediaPlayer_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn HasAudio(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_HasAudio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn HasVideo(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_HasVideo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn BufferProgress(self: QMediaPlayer) f32 {
        return qtc.QMediaPlayer_BufferProgress(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn BufferedTimeRange(self: QMediaPlayer) QMediaTimeRange {
        return .{ .ptr = qtc.QMediaPlayer_BufferedTimeRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn IsSeekable(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_IsSeekable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn PlaybackRate(self: QMediaPlayer) f64 {
        return qtc.QMediaPlayer_PlaybackRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#isPlaying)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn IsPlaying(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_IsPlaying(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Loops(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_Loops(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` loops: i32 `
    ///
    pub fn SetLoops(self: QMediaPlayer, loops: i32) void {
        qtc.QMediaPlayer_SetLoops(@ptrCast(self.ptr), @bitCast(loops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ## Returns:
    ///
    /// ` qmediaplayer_enums.Error `
    ///
    pub fn Error(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QMediaPlayer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaPlayer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn IsAvailable(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn MetaData(self: QMediaPlayer) QMediaMetaData {
        return .{ .ptr = qtc.QMediaPlayer_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Play(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Play(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Pause(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Pause(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Stop(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` position: i64 `
    ///
    pub fn SetPosition(self: QMediaPlayer, position: i64) void {
        qtc.QMediaPlayer_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` rate: f64 `
    ///
    pub fn SetPlaybackRate(self: QMediaPlayer, rate: f64) void {
        qtc.QMediaPlayer_SetPlaybackRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` source: QUrl `
    ///
    pub fn SetSource(self: QMediaPlayer, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QUrl;
        qtc.QMediaPlayer_SetSource(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetSourceDevice(self: QMediaPlayer, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QMediaPlayer_SetSourceDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` media: QUrl `
    ///
    pub fn SourceChanged(self: QMediaPlayer, media: anytype) void {
        comptime _ = @TypeOf(media)._is_QUrl;
        qtc.QMediaPlayer_SourceChanged(@ptrCast(self.ptr), @ptrCast(media.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, media: QUrl) callconv(.c) void `
    ///
    pub fn OnSourceChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QUrl) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` newState: qmediaplayer_enums.PlaybackState `
    ///
    pub fn PlaybackStateChanged(self: QMediaPlayer, newState: i32) void {
        qtc.QMediaPlayer_PlaybackStateChanged(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, newState: qmediaplayer_enums.PlaybackState) callconv(.c) void `
    ///
    pub fn OnPlaybackStateChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` status: qmediaplayer_enums.MediaStatus `
    ///
    pub fn MediaStatusChanged(self: QMediaPlayer, status: i32) void {
        qtc.QMediaPlayer_MediaStatusChanged(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, status: qmediaplayer_enums.MediaStatus) callconv(.c) void `
    ///
    pub fn OnMediaStatusChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MediaStatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` duration: i64 `
    ///
    pub fn DurationChanged(self: QMediaPlayer, duration: i64) void {
        qtc.QMediaPlayer_DurationChanged(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, duration: i64) callconv(.c) void `
    ///
    pub fn OnDurationChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_DurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` position: i64 `
    ///
    pub fn PositionChanged(self: QMediaPlayer, position: i64) void {
        qtc.QMediaPlayer_PositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, position: i64) callconv(.c) void `
    ///
    pub fn OnPositionChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` available: bool `
    ///
    pub fn HasAudioChanged(self: QMediaPlayer, available: bool) void {
        qtc.QMediaPlayer_HasAudioChanged(@ptrCast(self.ptr), available);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, available: bool) callconv(.c) void `
    ///
    pub fn OnHasAudioChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasAudioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` videoAvailable: bool `
    ///
    pub fn HasVideoChanged(self: QMediaPlayer, videoAvailable: bool) void {
        qtc.QMediaPlayer_HasVideoChanged(@ptrCast(self.ptr), videoAvailable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, videoAvailable: bool) callconv(.c) void `
    ///
    pub fn OnHasVideoChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasVideoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` progress: f32 `
    ///
    pub fn BufferProgressChanged(self: QMediaPlayer, progress: f32) void {
        qtc.QMediaPlayer_BufferProgressChanged(@ptrCast(self.ptr), @bitCast(progress));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, progress: f32) callconv(.c) void `
    ///
    pub fn OnBufferProgressChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, f32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_BufferProgressChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` seekable: bool `
    ///
    pub fn SeekableChanged(self: QMediaPlayer, seekable: bool) void {
        qtc.QMediaPlayer_SeekableChanged(@ptrCast(self.ptr), seekable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, seekable: bool) callconv(.c) void `
    ///
    pub fn OnSeekableChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SeekableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` playing: bool `
    ///
    pub fn PlayingChanged(self: QMediaPlayer, playing: bool) void {
        qtc.QMediaPlayer_PlayingChanged(@ptrCast(self.ptr), playing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, playing: bool) callconv(.c) void `
    ///
    pub fn OnPlayingChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlayingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` rate: f64 `
    ///
    pub fn PlaybackRateChanged(self: QMediaPlayer, rate: f64) void {
        qtc.QMediaPlayer_PlaybackRateChanged(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, rate: f64) callconv(.c) void `
    ///
    pub fn OnPlaybackRateChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, f64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn LoopsChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_LoopsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnLoopsChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_LoopsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn MetaDataChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnMetaDataChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn VideoOutputChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_VideoOutputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnVideoOutputChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_VideoOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn AudioOutputChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_AudioOutputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnAudioOutputChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn AudioBufferOutputChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_AudioBufferOutputChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnAudioBufferOutputChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioBufferOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn TracksChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_TracksChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnTracksChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_TracksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn ActiveTracksChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_ActiveTracksChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnActiveTracksChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ActiveTracksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn ErrorChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnErrorChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` errorVal: qmediaplayer_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: QMediaPlayer, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QMediaPlayer_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, errorVal: qmediaplayer_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` device: QIODevice `
    ///
    /// ` sourceUrl: QUrl `
    ///
    pub fn SetSourceDevice2(self: QMediaPlayer, device: anytype, sourceUrl: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(sourceUrl)._is_QUrl;
        qtc.QMediaPlayer_SetSourceDevice2(@ptrCast(self.ptr), @ptrCast(device.ptr), @ptrCast(sourceUrl.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QMediaPlayer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QMediaPlayer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn IsWidgetType(self: QMediaPlayer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn IsWindowType(self: QMediaPlayer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn IsQuickItemType(self: QMediaPlayer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn SignalsBlocked(self: QMediaPlayer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QMediaPlayer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Thread(self: QMediaPlayer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QMediaPlayer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QMediaPlayer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QMediaPlayer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QMediaPlayer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QMediaPlayer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QMediaPlayer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qmediaplayer.Children: Memory allocation failed");
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
    /// ` self: QMediaPlayer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QMediaPlayer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QMediaPlayer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QMediaPlayer, obj: anytype) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QMediaPlayer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn Disconnect3(self: QMediaPlayer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QMediaPlayer, receiver: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn DumpObjectTree(self: QMediaPlayer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn DumpObjectInfo(self: QMediaPlayer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QMediaPlayer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QMediaPlayer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QMediaPlayer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qmediaplayer.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmediaplayer.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QMediaPlayer `
    ///
    pub fn BindingStorage(self: QMediaPlayer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn BindingStorage2(self: QMediaPlayer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Destroyed(self: QMediaPlayer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Parent(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QMediaPlayer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn DeleteLater(self: QMediaPlayer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QMediaPlayer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QMediaPlayer, time: i64, timerType: i32) i32 {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QMediaPlayer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QMediaPlayer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QMediaPlayer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QMediaPlayer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QMediaPlayer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QMediaPlayer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QObject) callconv(.c) void) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QMediaPlayer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaPlayer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QMediaPlayer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaPlayer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QEvent) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QMediaPlayer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaPlayer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QMediaPlayer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QMediaPlayer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QMediaPlayer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMediaPlayer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QMediaPlayer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMediaPlayer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QTimerEvent) callconv(.c) void) void {
        qtc.QMediaPlayer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QMediaPlayer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMediaPlayer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QMediaPlayer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMediaPlayer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QChildEvent) callconv(.c) void) void {
        qtc.QMediaPlayer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QMediaPlayer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMediaPlayer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QMediaPlayer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMediaPlayer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QEvent) callconv(.c) void) void {
        qtc.QMediaPlayer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaPlayer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaPlayer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Sender(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QMediaPlayer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaPlayer `
    ///
    pub fn SuperSender(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QMediaPlayer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QMediaPlayer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMediaPlayer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn SenderSignalIndex(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    pub fn SuperSenderSignalIndex(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QMediaPlayer, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaPlayer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QMediaPlayer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaPlayer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QMediaPlayer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaPlayer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QMediaPlayer, callback: *const fn (QMediaPlayer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaPlayer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QMediaPlayer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaPlayer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QMediaPlayer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaPlayer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QMetaMethod) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#dtor.QMediaPlayer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn Delete(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#public-types)
pub const enums = struct {
    pub const PlaybackState = enum(i32) {
        pub const StoppedState: i32 = 0;
        pub const PlayingState: i32 = 1;
        pub const PausedState: i32 = 2;
    };

    pub const MediaStatus = enum(i32) {
        pub const NoMedia: i32 = 0;
        pub const LoadingMedia: i32 = 1;
        pub const LoadedMedia: i32 = 2;
        pub const StalledMedia: i32 = 3;
        pub const BufferingMedia: i32 = 4;
        pub const BufferedMedia: i32 = 5;
        pub const EndOfMedia: i32 = 6;
        pub const InvalidMedia: i32 = 7;
    };

    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const NetworkError: i32 = 3;
        pub const AccessDeniedError: i32 = 4;
    };

    pub const Loops = enum(i32) {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };
};
