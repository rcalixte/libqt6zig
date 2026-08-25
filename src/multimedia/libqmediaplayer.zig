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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaPlayer object in C++ memory
    ///
    pub fn new() QMediaPlayer {
        return .{ .ptr = qtc.QMediaPlayer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaPlayer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QMediaPlayer {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QMediaPlayer_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn metaObject(self: QMediaPlayer) QMetaObject {
        return .{ .ptr = qtc.QMediaPlayer_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QMediaPlayer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMediaPlayer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    pub fn superMetaObject(self: QMediaPlayer) QMetaObject {
        return .{ .ptr = qtc.QMediaPlayer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QMediaPlayer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaPlayer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QMediaPlayer, callback: *const fn (QMediaPlayer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMediaPlayer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QMediaPlayer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaPlayer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QMediaPlayer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaPlayer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaPlayer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QMediaPlayer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMediaPlayer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaPlayer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `audioTracks` instead
    ///
    pub const AudioTracks = audioTracks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn audioTracks(self: QMediaPlayer, allocator: std.mem.Allocator) []QMediaMetaData {
        const _arr: qtc.libqt_list = qtc.QMediaPlayer_AudioTracks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaMetaData, _arr.len) catch @panic("QMediaPlayer.audioTracks: Memory allocation failed");
        const _data_val: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `videoTracks` instead
    ///
    pub const VideoTracks = videoTracks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn videoTracks(self: QMediaPlayer, allocator: std.mem.Allocator) []QMediaMetaData {
        const _arr: qtc.libqt_list = qtc.QMediaPlayer_VideoTracks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaMetaData, _arr.len) catch @panic("QMediaPlayer.videoTracks: Memory allocation failed");
        const _data_val: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `subtitleTracks` instead
    ///
    pub const SubtitleTracks = subtitleTracks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subtitleTracks(self: QMediaPlayer, allocator: std.mem.Allocator) []QMediaMetaData {
        const _arr: qtc.libqt_list = qtc.QMediaPlayer_SubtitleTracks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMediaMetaData, _arr.len) catch @panic("QMediaPlayer.subtitleTracks: Memory allocation failed");
        const _data_val: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `activeAudioTrack` instead
    ///
    pub const ActiveAudioTrack = activeAudioTrack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn activeAudioTrack(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_ActiveAudioTrack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeVideoTrack` instead
    ///
    pub const ActiveVideoTrack = activeVideoTrack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn activeVideoTrack(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_ActiveVideoTrack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeSubtitleTrack` instead
    ///
    pub const ActiveSubtitleTrack = activeSubtitleTrack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn activeSubtitleTrack(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_ActiveSubtitleTrack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveAudioTrack` instead
    ///
    pub const SetActiveAudioTrack = setActiveAudioTrack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` index: i32 `
    ///
    pub fn setActiveAudioTrack(self: QMediaPlayer, index: i32) void {
        qtc.QMediaPlayer_SetActiveAudioTrack(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setActiveVideoTrack` instead
    ///
    pub const SetActiveVideoTrack = setActiveVideoTrack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` index: i32 `
    ///
    pub fn setActiveVideoTrack(self: QMediaPlayer, index: i32) void {
        qtc.QMediaPlayer_SetActiveVideoTrack(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setActiveSubtitleTrack` instead
    ///
    pub const SetActiveSubtitleTrack = setActiveSubtitleTrack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` index: i32 `
    ///
    pub fn setActiveSubtitleTrack(self: QMediaPlayer, index: i32) void {
        qtc.QMediaPlayer_SetActiveSubtitleTrack(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setAudioBufferOutput` instead
    ///
    pub const SetAudioBufferOutput = setAudioBufferOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioBufferOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` output: QAudioBufferOutput `
    ///
    pub fn setAudioBufferOutput(self: QMediaPlayer, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QAudioBufferOutput;
        qtc.QMediaPlayer_SetAudioBufferOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### DEPRECATED: Use `audioBufferOutput` instead
    ///
    pub const AudioBufferOutput = audioBufferOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn audioBufferOutput(self: QMediaPlayer) QAudioBufferOutput {
        return .{ .ptr = qtc.QMediaPlayer_AudioBufferOutput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAudioOutput` instead
    ///
    pub const SetAudioOutput = setAudioOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` output: QAudioOutput `
    ///
    pub fn setAudioOutput(self: QMediaPlayer, output: anytype) void {
        comptime _ = @TypeOf(output)._is_QAudioOutput;
        qtc.QMediaPlayer_SetAudioOutput(@ptrCast(self.ptr), @ptrCast(output.ptr));
    }

    /// ### DEPRECATED: Use `audioOutput` instead
    ///
    pub const AudioOutput = audioOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn audioOutput(self: QMediaPlayer) QAudioOutput {
        return .{ .ptr = qtc.QMediaPlayer_AudioOutput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVideoOutput` instead
    ///
    pub const SetVideoOutput = setVideoOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` _videoOutput: QObject `
    ///
    pub fn setVideoOutput(self: QMediaPlayer, _videoOutput: anytype) void {
        comptime _ = @TypeOf(_videoOutput)._is_QObject;
        qtc.QMediaPlayer_SetVideoOutput(@ptrCast(self.ptr), @ptrCast(_videoOutput.ptr));
    }

    /// ### DEPRECATED: Use `videoOutput` instead
    ///
    pub const VideoOutput = videoOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn videoOutput(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QMediaPlayer_VideoOutput(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVideoSink` instead
    ///
    pub const SetVideoSink = setVideoSink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` sink: QVideoSink `
    ///
    pub fn setVideoSink(self: QMediaPlayer, sink: anytype) void {
        comptime _ = @TypeOf(sink)._is_QVideoSink;
        qtc.QMediaPlayer_SetVideoSink(@ptrCast(self.ptr), @ptrCast(sink.ptr));
    }

    /// ### DEPRECATED: Use `videoSink` instead
    ///
    pub const VideoSink = videoSink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn videoSink(self: QMediaPlayer) QVideoSink {
        return .{ .ptr = qtc.QMediaPlayer_VideoSink(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn source(self: QMediaPlayer) QUrl {
        return .{ .ptr = qtc.QMediaPlayer_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sourceDevice` instead
    ///
    pub const SourceDevice = sourceDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn sourceDevice(self: QMediaPlayer) QIODevice {
        return .{ .ptr = qtc.QMediaPlayer_SourceDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `playbackState` instead
    ///
    pub const PlaybackState = playbackState;

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
    pub fn playbackState(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_PlaybackState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mediaStatus` instead
    ///
    pub const MediaStatus = mediaStatus;

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
    pub fn mediaStatus(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_MediaStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn duration(self: QMediaPlayer) i64 {
        return qtc.QMediaPlayer_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn position(self: QMediaPlayer) i64 {
        return qtc.QMediaPlayer_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasAudio` instead
    ///
    pub const HasAudio = hasAudio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn hasAudio(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_HasAudio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasVideo` instead
    ///
    pub const HasVideo = hasVideo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn hasVideo(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_HasVideo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bufferProgress` instead
    ///
    pub const BufferProgress = bufferProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn bufferProgress(self: QMediaPlayer) f32 {
        return qtc.QMediaPlayer_BufferProgress(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bufferedTimeRange` instead
    ///
    pub const BufferedTimeRange = bufferedTimeRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn bufferedTimeRange(self: QMediaPlayer) QMediaTimeRange {
        return .{ .ptr = qtc.QMediaPlayer_BufferedTimeRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isSeekable` instead
    ///
    pub const IsSeekable = isSeekable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn isSeekable(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_IsSeekable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `playbackRate` instead
    ///
    pub const PlaybackRate = playbackRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn playbackRate(self: QMediaPlayer) f64 {
        return qtc.QMediaPlayer_PlaybackRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPlaying` instead
    ///
    pub const IsPlaying = isPlaying;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#isPlaying)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn isPlaying(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_IsPlaying(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loops` instead
    ///
    pub const Loops = loops;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn loops(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_Loops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLoops` instead
    ///
    pub const SetLoops = setLoops;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` _loops: i32 `
    ///
    pub fn setLoops(self: QMediaPlayer, _loops: i32) void {
        qtc.QMediaPlayer_SetLoops(@ptrCast(self.ptr), @bitCast(_loops));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QMediaPlayer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaPlayer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaPlayer.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAvailable` instead
    ///
    pub const IsAvailable = isAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn isAvailable(self: QMediaPlayer) bool {
        return qtc.QMediaPlayer_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn metaData(self: QMediaPlayer) QMediaMetaData {
        return .{ .ptr = qtc.QMediaPlayer_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `play` instead
    ///
    pub const Play = play;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn play(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Play(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn pause(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn stop(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` _position: i64 `
    ///
    pub fn setPosition(self: QMediaPlayer, _position: i64) void {
        qtc.QMediaPlayer_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `setPlaybackRate` instead
    ///
    pub const SetPlaybackRate = setPlaybackRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` rate: f64 `
    ///
    pub fn setPlaybackRate(self: QMediaPlayer, rate: f64) void {
        qtc.QMediaPlayer_SetPlaybackRate(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` _source: QUrl `
    ///
    pub fn setSource(self: QMediaPlayer, _source: anytype) void {
        comptime _ = @TypeOf(_source)._is_QUrl;
        qtc.QMediaPlayer_SetSource(@ptrCast(self.ptr), @ptrCast(_source.ptr));
    }

    /// ### DEPRECATED: Use `setSourceDevice` instead
    ///
    pub const SetSourceDevice = setSourceDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` device: QIODevice `
    ///
    pub fn setSourceDevice(self: QMediaPlayer, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QMediaPlayer_SetSourceDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` media: QUrl `
    ///
    pub fn sourceChanged(self: QMediaPlayer, media: anytype) void {
        comptime _ = @TypeOf(media)._is_QUrl;
        qtc.QMediaPlayer_SourceChanged(@ptrCast(self.ptr), @ptrCast(media.ptr));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, media: QUrl) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QUrl) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `playbackStateChanged` instead
    ///
    pub const PlaybackStateChanged = playbackStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` newState: qmediaplayer_enums.PlaybackState `
    ///
    pub fn playbackStateChanged(self: QMediaPlayer, newState: i32) void {
        qtc.QMediaPlayer_PlaybackStateChanged(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### DEPRECATED: Use `onPlaybackStateChanged` instead
    ///
    pub const OnPlaybackStateChanged = onPlaybackStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, newState: qmediaplayer_enums.PlaybackState) callconv(.c) void `
    ///
    pub fn onPlaybackStateChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mediaStatusChanged` instead
    ///
    pub const MediaStatusChanged = mediaStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` status: qmediaplayer_enums.MediaStatus `
    ///
    pub fn mediaStatusChanged(self: QMediaPlayer, status: i32) void {
        qtc.QMediaPlayer_MediaStatusChanged(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### DEPRECATED: Use `onMediaStatusChanged` instead
    ///
    pub const OnMediaStatusChanged = onMediaStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, status: qmediaplayer_enums.MediaStatus) callconv(.c) void `
    ///
    pub fn onMediaStatusChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MediaStatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `durationChanged` instead
    ///
    pub const DurationChanged = durationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` _duration: i64 `
    ///
    pub fn durationChanged(self: QMediaPlayer, _duration: i64) void {
        qtc.QMediaPlayer_DurationChanged(@ptrCast(self.ptr), @bitCast(_duration));
    }

    /// ### DEPRECATED: Use `onDurationChanged` instead
    ///
    pub const OnDurationChanged = onDurationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, duration: i64) callconv(.c) void `
    ///
    pub fn onDurationChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_DurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` _position: i64 `
    ///
    pub fn positionChanged(self: QMediaPlayer, _position: i64) void {
        qtc.QMediaPlayer_PositionChanged(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, position: i64) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasAudioChanged` instead
    ///
    pub const HasAudioChanged = hasAudioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` available: bool `
    ///
    pub fn hasAudioChanged(self: QMediaPlayer, available: bool) void {
        qtc.QMediaPlayer_HasAudioChanged(@ptrCast(self.ptr), available);
    }

    /// ### DEPRECATED: Use `onHasAudioChanged` instead
    ///
    pub const OnHasAudioChanged = onHasAudioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, available: bool) callconv(.c) void `
    ///
    pub fn onHasAudioChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasAudioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasVideoChanged` instead
    ///
    pub const HasVideoChanged = hasVideoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` videoAvailable: bool `
    ///
    pub fn hasVideoChanged(self: QMediaPlayer, videoAvailable: bool) void {
        qtc.QMediaPlayer_HasVideoChanged(@ptrCast(self.ptr), videoAvailable);
    }

    /// ### DEPRECATED: Use `onHasVideoChanged` instead
    ///
    pub const OnHasVideoChanged = onHasVideoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, videoAvailable: bool) callconv(.c) void `
    ///
    pub fn onHasVideoChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasVideoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bufferProgressChanged` instead
    ///
    pub const BufferProgressChanged = bufferProgressChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` progress: f32 `
    ///
    pub fn bufferProgressChanged(self: QMediaPlayer, progress: f32) void {
        qtc.QMediaPlayer_BufferProgressChanged(@ptrCast(self.ptr), @bitCast(progress));
    }

    /// ### DEPRECATED: Use `onBufferProgressChanged` instead
    ///
    pub const OnBufferProgressChanged = onBufferProgressChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, progress: f32) callconv(.c) void `
    ///
    pub fn onBufferProgressChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, f32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_BufferProgressChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seekableChanged` instead
    ///
    pub const SeekableChanged = seekableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` seekable: bool `
    ///
    pub fn seekableChanged(self: QMediaPlayer, seekable: bool) void {
        qtc.QMediaPlayer_SeekableChanged(@ptrCast(self.ptr), seekable);
    }

    /// ### DEPRECATED: Use `onSeekableChanged` instead
    ///
    pub const OnSeekableChanged = onSeekableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, seekable: bool) callconv(.c) void `
    ///
    pub fn onSeekableChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SeekableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `playingChanged` instead
    ///
    pub const PlayingChanged = playingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` playing: bool `
    ///
    pub fn playingChanged(self: QMediaPlayer, playing: bool) void {
        qtc.QMediaPlayer_PlayingChanged(@ptrCast(self.ptr), playing);
    }

    /// ### DEPRECATED: Use `onPlayingChanged` instead
    ///
    pub const OnPlayingChanged = onPlayingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, playing: bool) callconv(.c) void `
    ///
    pub fn onPlayingChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlayingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `playbackRateChanged` instead
    ///
    pub const PlaybackRateChanged = playbackRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` rate: f64 `
    ///
    pub fn playbackRateChanged(self: QMediaPlayer, rate: f64) void {
        qtc.QMediaPlayer_PlaybackRateChanged(@ptrCast(self.ptr), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `onPlaybackRateChanged` instead
    ///
    pub const OnPlaybackRateChanged = onPlaybackRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, rate: f64) callconv(.c) void `
    ///
    pub fn onPlaybackRateChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, f64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loopsChanged` instead
    ///
    pub const LoopsChanged = loopsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn loopsChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_LoopsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoopsChanged` instead
    ///
    pub const OnLoopsChanged = onLoopsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onLoopsChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_LoopsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metaDataChanged` instead
    ///
    pub const MetaDataChanged = metaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn metaDataChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMetaDataChanged` instead
    ///
    pub const OnMetaDataChanged = onMetaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onMetaDataChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `videoOutputChanged` instead
    ///
    pub const VideoOutputChanged = videoOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn videoOutputChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_VideoOutputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVideoOutputChanged` instead
    ///
    pub const OnVideoOutputChanged = onVideoOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onVideoOutputChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_VideoOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioOutputChanged` instead
    ///
    pub const AudioOutputChanged = audioOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn audioOutputChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_AudioOutputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioOutputChanged` instead
    ///
    pub const OnAudioOutputChanged = onAudioOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onAudioOutputChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioBufferOutputChanged` instead
    ///
    pub const AudioBufferOutputChanged = audioBufferOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn audioBufferOutputChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_AudioBufferOutputChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioBufferOutputChanged` instead
    ///
    pub const OnAudioBufferOutputChanged = onAudioBufferOutputChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onAudioBufferOutputChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioBufferOutputChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tracksChanged` instead
    ///
    pub const TracksChanged = tracksChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn tracksChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_TracksChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTracksChanged` instead
    ///
    pub const OnTracksChanged = onTracksChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onTracksChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_TracksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeTracksChanged` instead
    ///
    pub const ActiveTracksChanged = activeTracksChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn activeTracksChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_ActiveTracksChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveTracksChanged` instead
    ///
    pub const OnActiveTracksChanged = onActiveTracksChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onActiveTracksChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ActiveTracksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorChanged` instead
    ///
    pub const ErrorChanged = errorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn errorChanged(self: QMediaPlayer) void {
        qtc.QMediaPlayer_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onErrorChanged` instead
    ///
    pub const OnErrorChanged = onErrorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onErrorChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` errorVal: qmediaplayer_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred(self: QMediaPlayer, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QMediaPlayer_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, errorVal: qmediaplayer_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QMediaPlayer, callback: *const fn (QMediaPlayer, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaPlayer.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaPlayer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSourceDevice2` instead
    ///
    pub const SetSourceDevice2 = setSourceDevice2;

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
    pub fn setSourceDevice2(self: QMediaPlayer, device: anytype, sourceUrl: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        comptime _ = @TypeOf(sourceUrl)._is_QUrl;
        qtc.QMediaPlayer_SetSourceDevice2(@ptrCast(self.ptr), @ptrCast(device.ptr), @ptrCast(sourceUrl.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QMediaPlayer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaPlayer.objectName: Memory allocation failed");
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
    /// ` self: QMediaPlayer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QMediaPlayer, name: []const u8) void {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn isWidgetType(self: QMediaPlayer) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn isWindowType(self: QMediaPlayer) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn isQuickItemType(self: QMediaPlayer) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn signalsBlocked(self: QMediaPlayer) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QMediaPlayer, b: bool) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn thread(self: QMediaPlayer) QThread {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QMediaPlayer, _thread: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QMediaPlayer, interval: i32) i32 {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QMediaPlayer, time: i64) i32 {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QMediaPlayer, id: i32) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QMediaPlayer, id: i32) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QMediaPlayer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QMediaPlayer.children: Memory allocation failed");
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QMediaPlayer, _parent: anytype) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QMediaPlayer, filterObj: anytype) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QMediaPlayer, obj: anytype) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QMediaPlayer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn disconnect3(self: QMediaPlayer) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QMediaPlayer, receiver: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn dumpObjectTree(self: QMediaPlayer) void {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn dumpObjectInfo(self: QMediaPlayer) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QMediaPlayer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QMediaPlayer, name: [:0]const u8) QVariant {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QMediaPlayer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMediaPlayer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMediaPlayer.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QMediaPlayer `
    ///
    pub fn bindingStorage(self: QMediaPlayer) QBindingStorage {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn bindingStorage2(self: QMediaPlayer) QBindingStorage {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn destroyed(self: QMediaPlayer) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QMediaPlayer, callback: *const fn (QMediaPlayer) callconv(.c) void) void {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn parent(self: QMediaPlayer) QObject {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QMediaPlayer, classname: [:0]const u8) bool {
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
    /// ` self: QMediaPlayer `
    ///
    pub fn deleteLater(self: QMediaPlayer) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QMediaPlayer, interval: i32, timerType: i32) i32 {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QMediaPlayer, time: i64, timerType: i32) i32 {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QMediaPlayer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QMediaPlayer, signal: [:0]const u8) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QMediaPlayer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QMediaPlayer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QMediaPlayer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QMediaPlayer, param1: anytype) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QObject) callconv(.c) void) void {
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QMediaPlayer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaPlayer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QMediaPlayer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaPlayer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QEvent) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QMediaPlayer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaPlayer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QMediaPlayer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMediaPlayer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QMediaPlayer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMediaPlayer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QMediaPlayer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMediaPlayer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QTimerEvent) callconv(.c) void) void {
        qtc.QMediaPlayer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QMediaPlayer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMediaPlayer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QMediaPlayer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMediaPlayer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QChildEvent) callconv(.c) void) void {
        qtc.QMediaPlayer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QMediaPlayer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMediaPlayer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QMediaPlayer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMediaPlayer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QEvent) callconv(.c) void) void {
        qtc.QMediaPlayer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaPlayer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QMediaPlayer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMediaPlayer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QMetaMethod) callconv(.c) void) void {
        qtc.QMediaPlayer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    pub fn sender(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QMediaPlayer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaPlayer `
    ///
    pub fn superSender(self: QMediaPlayer) QObject {
        return .{ .ptr = qtc.QMediaPlayer_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QMediaPlayer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMediaPlayer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    pub fn senderSignalIndex(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    pub fn superSenderSignalIndex(self: QMediaPlayer) i32 {
        return qtc.QMediaPlayer_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QMediaPlayer, callback: *const fn () callconv(.c) i32) void {
        qtc.QMediaPlayer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QMediaPlayer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaPlayer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QMediaPlayer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaPlayer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QMediaPlayer, callback: *const fn (QMediaPlayer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMediaPlayer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QMediaPlayer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaPlayer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QMediaPlayer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMediaPlayer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMediaPlayer`
    ///
    /// ` callback: *const fn (self: QMediaPlayer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QMediaPlayer, callback: *const fn (QMediaPlayer, QMetaMethod) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMediaPlayer `
    ///
    /// ` callback: *const fn (self: QMediaPlayer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QMediaPlayer, callback: *const fn (QMediaPlayer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#dtor.QMediaPlayer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaPlayer `
    ///
    pub fn delete(self: QMediaPlayer) void {
        qtc.QMediaPlayer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaplayer.html#public-types)
pub const enums = struct {
    pub const PlaybackState = enum {
        pub const StoppedState: i32 = 0;
        pub const PlayingState: i32 = 1;
        pub const PausedState: i32 = 2;
    };

    pub const MediaStatus = enum {
        pub const NoMedia: i32 = 0;
        pub const LoadingMedia: i32 = 1;
        pub const LoadedMedia: i32 = 2;
        pub const StalledMedia: i32 = 3;
        pub const BufferingMedia: i32 = 4;
        pub const BufferedMedia: i32 = 5;
        pub const EndOfMedia: i32 = 6;
        pub const InvalidMedia: i32 = 7;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const NetworkError: i32 = 3;
        pub const AccessDeniedError: i32 = 4;
    };

    pub const Loops = enum {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };
};
