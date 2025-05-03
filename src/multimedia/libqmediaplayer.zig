const C = @import("qt6c");
const qmediaplayer_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmediaplayer.html
pub const qmediaplayer = struct {
    /// New constructs a new QMediaPlayer object.
    ///
    ///
    pub fn New() ?*C.QMediaPlayer {
        return C.QMediaPlayer_new();
    }

    /// New2 constructs a new QMediaPlayer object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QMediaPlayer {
        return C.QMediaPlayer_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QMediaPlayer_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QMediaPlayer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QMediaPlayer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QMediaPlayer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QMediaPlayer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QMediaPlayer_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn AudioTracks(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QMediaMetaData {
        const _arr: C.struct_libqt_list = C.QMediaPlayer_AudioTracks(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QMediaMetaData, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn VideoTracks(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QMediaMetaData {
        const _arr: C.struct_libqt_list = C.QMediaPlayer_VideoTracks(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QMediaMetaData, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn SubtitleTracks(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QMediaMetaData {
        const _arr: C.struct_libqt_list = C.QMediaPlayer_SubtitleTracks(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QMediaMetaData, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn ActiveAudioTrack(self: ?*anyopaque) i32 {
        return C.QMediaPlayer_ActiveAudioTrack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn ActiveVideoTrack(self: ?*anyopaque) i32 {
        return C.QMediaPlayer_ActiveVideoTrack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn ActiveSubtitleTrack(self: ?*anyopaque) i32 {
        return C.QMediaPlayer_ActiveSubtitleTrack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
    ///
    /// ``` self: ?*C.QMediaPlayer, index: i32 ```
    pub fn SetActiveAudioTrack(self: ?*anyopaque, index: i32) void {
        C.QMediaPlayer_SetActiveAudioTrack(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
    ///
    /// ``` self: ?*C.QMediaPlayer, index: i32 ```
    pub fn SetActiveVideoTrack(self: ?*anyopaque, index: i32) void {
        C.QMediaPlayer_SetActiveVideoTrack(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
    ///
    /// ``` self: ?*C.QMediaPlayer, index: i32 ```
    pub fn SetActiveSubtitleTrack(self: ?*anyopaque, index: i32) void {
        C.QMediaPlayer_SetActiveSubtitleTrack(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
    ///
    /// ``` self: ?*C.QMediaPlayer, output: ?*C.QAudioOutput ```
    pub fn SetAudioOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        C.QMediaPlayer_SetAudioOutput(@ptrCast(self), @ptrCast(output));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn AudioOutput(self: ?*anyopaque) ?*C.QAudioOutput {
        return C.QMediaPlayer_AudioOutput(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
    ///
    /// ``` self: ?*C.QMediaPlayer, videoOutput: ?*C.QObject ```
    pub fn SetVideoOutput(self: ?*anyopaque, videoOutput: ?*anyopaque) void {
        C.QMediaPlayer_SetVideoOutput(@ptrCast(self), @ptrCast(videoOutput));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn VideoOutput(self: ?*anyopaque) ?*C.QObject {
        return C.QMediaPlayer_VideoOutput(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
    ///
    /// ``` self: ?*C.QMediaPlayer, sink: ?*C.QVideoSink ```
    pub fn SetVideoSink(self: ?*anyopaque, sink: ?*anyopaque) void {
        C.QMediaPlayer_SetVideoSink(@ptrCast(self), @ptrCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn VideoSink(self: ?*anyopaque) ?*C.QVideoSink {
        return C.QMediaPlayer_VideoSink(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#source)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Source(self: ?*anyopaque) ?*C.QUrl {
        return C.QMediaPlayer_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn SourceDevice(self: ?*anyopaque) ?*C.QIODevice {
        return C.QMediaPlayer_SourceDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackState)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn PlaybackState(self: ?*anyopaque) i64 {
        return C.QMediaPlayer_PlaybackState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatus)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn MediaStatus(self: ?*anyopaque) i64 {
        return C.QMediaPlayer_MediaStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Duration(self: ?*anyopaque) i64 {
        return C.QMediaPlayer_Duration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#position)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Position(self: ?*anyopaque) i64 {
        return C.QMediaPlayer_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn HasAudio(self: ?*anyopaque) bool {
        return C.QMediaPlayer_HasAudio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn HasVideo(self: ?*anyopaque) bool {
        return C.QMediaPlayer_HasVideo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn BufferProgress(self: ?*anyopaque) f32 {
        return C.QMediaPlayer_BufferProgress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn BufferedTimeRange(self: ?*anyopaque) ?*C.QMediaTimeRange {
        return C.QMediaPlayer_BufferedTimeRange(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn IsSeekable(self: ?*anyopaque) bool {
        return C.QMediaPlayer_IsSeekable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn PlaybackRate(self: ?*anyopaque) f64 {
        return C.QMediaPlayer_PlaybackRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Loops(self: ?*anyopaque) i32 {
        return C.QMediaPlayer_Loops(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
    ///
    /// ``` self: ?*C.QMediaPlayer, loops: i32 ```
    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        C.QMediaPlayer_SetLoops(@ptrCast(self), @intCast(loops));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#error)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QMediaPlayer_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QMediaPlayer_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return C.QMediaPlayer_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn MetaData(self: ?*anyopaque) ?*C.QMediaMetaData {
        return C.QMediaPlayer_MetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#play)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Play(self: ?*anyopaque) void {
        C.QMediaPlayer_Play(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QMediaPlayer_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QMediaPlayer_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
    ///
    /// ``` self: ?*C.QMediaPlayer, position: i64 ```
    pub fn SetPosition(self: ?*anyopaque, position: i64) void {
        C.QMediaPlayer_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
    ///
    /// ``` self: ?*C.QMediaPlayer, rate: f64 ```
    pub fn SetPlaybackRate(self: ?*anyopaque, rate: f64) void {
        C.QMediaPlayer_SetPlaybackRate(@ptrCast(self), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
    ///
    /// ``` self: ?*C.QMediaPlayer, source: ?*C.QUrl ```
    pub fn SetSource(self: ?*anyopaque, source: ?*anyopaque) void {
        C.QMediaPlayer_SetSource(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ``` self: ?*C.QMediaPlayer, device: ?*C.QIODevice ```
    pub fn SetSourceDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        C.QMediaPlayer_SetSourceDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, media: ?*C.QUrl ```
    pub fn SourceChanged(self: ?*anyopaque, media: ?*anyopaque) void {
        C.QMediaPlayer_SourceChanged(@ptrCast(self), @ptrCast(media));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QUrl) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_SourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, newState: qmediaplayer_enums.PlaybackState ```
    pub fn PlaybackStateChanged(self: ?*anyopaque, newState: i64) void {
        C.QMediaPlayer_PlaybackStateChanged(@ptrCast(self), @intCast(newState));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, qmediaplayer_enums.PlaybackState) callconv(.c) void ```
    pub fn OnPlaybackStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QMediaPlayer_Connect_PlaybackStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, status: qmediaplayer_enums.MediaStatus ```
    pub fn MediaStatusChanged(self: ?*anyopaque, status: i64) void {
        C.QMediaPlayer_MediaStatusChanged(@ptrCast(self), @intCast(status));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, qmediaplayer_enums.MediaStatus) callconv(.c) void ```
    pub fn OnMediaStatusChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QMediaPlayer_Connect_MediaStatusChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, duration: i64 ```
    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        C.QMediaPlayer_DurationChanged(@ptrCast(self), @intCast(duration));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, i64) callconv(.c) void ```
    pub fn OnDurationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QMediaPlayer_Connect_DurationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, position: i64 ```
    pub fn PositionChanged(self: ?*anyopaque, position: i64) void {
        C.QMediaPlayer_PositionChanged(@ptrCast(self), @intCast(position));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, i64) callconv(.c) void ```
    pub fn OnPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QMediaPlayer_Connect_PositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, available: bool ```
    pub fn HasAudioChanged(self: ?*anyopaque, available: bool) void {
        C.QMediaPlayer_HasAudioChanged(@ptrCast(self), available);
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, bool) callconv(.c) void ```
    pub fn OnHasAudioChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QMediaPlayer_Connect_HasAudioChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, videoAvailable: bool ```
    pub fn HasVideoChanged(self: ?*anyopaque, videoAvailable: bool) void {
        C.QMediaPlayer_HasVideoChanged(@ptrCast(self), videoAvailable);
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, bool) callconv(.c) void ```
    pub fn OnHasVideoChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QMediaPlayer_Connect_HasVideoChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, progress: f32 ```
    pub fn BufferProgressChanged(self: ?*anyopaque, progress: f32) void {
        C.QMediaPlayer_BufferProgressChanged(@ptrCast(self), @floatCast(progress));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, f32) callconv(.c) void ```
    pub fn OnBufferProgressChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QMediaPlayer_Connect_BufferProgressChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, seekable: bool ```
    pub fn SeekableChanged(self: ?*anyopaque, seekable: bool) void {
        C.QMediaPlayer_SeekableChanged(@ptrCast(self), seekable);
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, bool) callconv(.c) void ```
    pub fn OnSeekableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QMediaPlayer_Connect_SeekableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer, rate: f64 ```
    pub fn PlaybackRateChanged(self: ?*anyopaque, rate: f64) void {
        C.QMediaPlayer_PlaybackRateChanged(@ptrCast(self), @floatCast(rate));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, f64) callconv(.c) void ```
    pub fn OnPlaybackRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QMediaPlayer_Connect_PlaybackRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn LoopsChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_LoopsChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnLoopsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_LoopsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn MetaDataChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_MetaDataChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnMetaDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_MetaDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn VideoOutputChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_VideoOutputChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnVideoOutputChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_VideoOutputChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn AudioOutputChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_AudioOutputChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnAudioOutputChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_AudioOutputChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn TracksChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_TracksChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnTracksChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_TracksChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn ActiveTracksChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_ActiveTracksChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnActiveTracksChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_ActiveTracksChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        C.QMediaPlayer_ErrorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_Connect_ErrorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ``` self: ?*C.QMediaPlayer, errorVal: qmediaplayer_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QMediaPlayer_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, qmediaplayer_enums.Error, []const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        C.QMediaPlayer_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QMediaPlayer_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QMediaPlayer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ``` self: ?*C.QMediaPlayer, device: ?*C.QIODevice, sourceUrl: ?*C.QUrl ```
    pub fn SetSourceDevice2(self: ?*anyopaque, device: ?*anyopaque, sourceUrl: ?*anyopaque) void {
        C.QMediaPlayer_SetSourceDevice2(@ptrCast(self), @ptrCast(device), @ptrCast(sourceUrl));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QMediaPlayer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QMediaPlayer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QMediaPlayer, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QMediaPlayer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QMediaPlayer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QMediaPlayer, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QMediaPlayer, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QMediaPlayer, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QMediaPlayer, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QMediaPlayer, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QMediaPlayer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QMediaPlayer, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
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
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QMediaPlayer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QMediaPlayer, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QMediaPlayer, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QMediaPlayer, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaPlayer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaPlayer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QMediaPlayer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaPlayer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QMediaPlayer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QMediaPlayer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaPlayer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaPlayer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaPlayer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaPlayer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaPlayer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QMediaPlayer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaPlayer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaPlayer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaPlayer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QMediaPlayer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QMediaPlayer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QMediaPlayer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QMediaPlayer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QMediaPlayer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QMediaPlayer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QMediaPlayer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QMediaPlayer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QMediaPlayer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QMediaPlayer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QMediaPlayer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QMediaPlayer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QMediaPlayer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QMediaPlayer, slot: fn (?*C.QMediaPlayer, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QMediaPlayer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QMediaPlayer ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QMediaPlayer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmediaplayer.html#types
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
