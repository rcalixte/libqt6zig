const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmediaplayer_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmediaplayer.html
pub const qmediaplayer = struct {
    /// New constructs a new QMediaPlayer object.
    ///
    ///
    pub fn New() QtC.QMediaPlayer {
        return qtc.QMediaPlayer_new();
    }

    /// New2 constructs a new QMediaPlayer object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QMediaPlayer {
        return qtc.QMediaPlayer_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QMediaPlayer_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QMediaPlayer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMediaPlayer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QMediaPlayer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QMediaPlayer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QMediaPlayer_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn AudioTracks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QMediaMetaData {
        const _arr: qtc.struct_libqt_list = qtc.QMediaPlayer_AudioTracks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMediaMetaData, _arr.len) catch @panic("qmediaplayer.AudioTracks: Memory allocation failed");
        const _data: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn VideoTracks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QMediaMetaData {
        const _arr: qtc.struct_libqt_list = qtc.QMediaPlayer_VideoTracks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMediaMetaData, _arr.len) catch @panic("qmediaplayer.VideoTracks: Memory allocation failed");
        const _data: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn SubtitleTracks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QMediaMetaData {
        const _arr: qtc.struct_libqt_list = qtc.QMediaPlayer_SubtitleTracks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMediaMetaData, _arr.len) catch @panic("qmediaplayer.SubtitleTracks: Memory allocation failed");
        const _data: [*]QtC.QMediaMetaData = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn ActiveAudioTrack(self: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_ActiveAudioTrack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn ActiveVideoTrack(self: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_ActiveVideoTrack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn ActiveSubtitleTrack(self: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_ActiveSubtitleTrack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
    ///
    /// ``` self: QtC.QMediaPlayer, index: i32 ```
    pub fn SetActiveAudioTrack(self: ?*anyopaque, index: i32) void {
        qtc.QMediaPlayer_SetActiveAudioTrack(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
    ///
    /// ``` self: QtC.QMediaPlayer, index: i32 ```
    pub fn SetActiveVideoTrack(self: ?*anyopaque, index: i32) void {
        qtc.QMediaPlayer_SetActiveVideoTrack(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
    ///
    /// ``` self: QtC.QMediaPlayer, index: i32 ```
    pub fn SetActiveSubtitleTrack(self: ?*anyopaque, index: i32) void {
        qtc.QMediaPlayer_SetActiveSubtitleTrack(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioBufferOutput)
    ///
    /// ``` self: QtC.QMediaPlayer, output: QtC.QAudioBufferOutput ```
    pub fn SetAudioBufferOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        qtc.QMediaPlayer_SetAudioBufferOutput(@ptrCast(self), @ptrCast(output));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutput)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn AudioBufferOutput(self: ?*anyopaque) QtC.QAudioBufferOutput {
        return qtc.QMediaPlayer_AudioBufferOutput(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
    ///
    /// ``` self: QtC.QMediaPlayer, output: QtC.QAudioOutput ```
    pub fn SetAudioOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        qtc.QMediaPlayer_SetAudioOutput(@ptrCast(self), @ptrCast(output));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn AudioOutput(self: ?*anyopaque) QtC.QAudioOutput {
        return qtc.QMediaPlayer_AudioOutput(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
    ///
    /// ``` self: QtC.QMediaPlayer, videoOutput: QtC.QObject ```
    pub fn SetVideoOutput(self: ?*anyopaque, videoOutput: ?*anyopaque) void {
        qtc.QMediaPlayer_SetVideoOutput(@ptrCast(self), @ptrCast(videoOutput));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn VideoOutput(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaPlayer_VideoOutput(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
    ///
    /// ``` self: QtC.QMediaPlayer, sink: QtC.QVideoSink ```
    pub fn SetVideoSink(self: ?*anyopaque, sink: ?*anyopaque) void {
        qtc.QMediaPlayer_SetVideoSink(@ptrCast(self), @ptrCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn VideoSink(self: ?*anyopaque) QtC.QVideoSink {
        return qtc.QMediaPlayer_VideoSink(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#source)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Source(self: ?*anyopaque) QtC.QUrl {
        return qtc.QMediaPlayer_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn SourceDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QMediaPlayer_SourceDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackState)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn PlaybackState(self: ?*anyopaque) i64 {
        return qtc.QMediaPlayer_PlaybackState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatus)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn MediaStatus(self: ?*anyopaque) i64 {
        return qtc.QMediaPlayer_MediaStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Duration(self: ?*anyopaque) i64 {
        return qtc.QMediaPlayer_Duration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#position)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.QMediaPlayer_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn HasAudio(self: ?*anyopaque) bool {
        return qtc.QMediaPlayer_HasAudio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn HasVideo(self: ?*anyopaque) bool {
        return qtc.QMediaPlayer_HasVideo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn BufferProgress(self: ?*anyopaque) f32 {
        return qtc.QMediaPlayer_BufferProgress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn BufferedTimeRange(self: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaPlayer_BufferedTimeRange(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn IsSeekable(self: ?*anyopaque) bool {
        return qtc.QMediaPlayer_IsSeekable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn PlaybackRate(self: ?*anyopaque) f64 {
        return qtc.QMediaPlayer_PlaybackRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isPlaying)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn IsPlaying(self: ?*anyopaque) bool {
        return qtc.QMediaPlayer_IsPlaying(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Loops(self: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_Loops(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
    ///
    /// ``` self: QtC.QMediaPlayer, loops: i32 ```
    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        qtc.QMediaPlayer_SetLoops(@ptrCast(self), @intCast(loops));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#error)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QMediaPlayer_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaPlayer_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return qtc.QMediaPlayer_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn MetaData(self: ?*anyopaque) QtC.QMediaMetaData {
        return qtc.QMediaPlayer_MetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#play)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Play(self: ?*anyopaque) void {
        qtc.QMediaPlayer_Play(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QMediaPlayer_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QMediaPlayer_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
    ///
    /// ``` self: QtC.QMediaPlayer, position: i64 ```
    pub fn SetPosition(self: ?*anyopaque, position: i64) void {
        qtc.QMediaPlayer_SetPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
    ///
    /// ``` self: QtC.QMediaPlayer, rate: f64 ```
    pub fn SetPlaybackRate(self: ?*anyopaque, rate: f64) void {
        qtc.QMediaPlayer_SetPlaybackRate(@ptrCast(self), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
    ///
    /// ``` self: QtC.QMediaPlayer, source: QtC.QUrl ```
    pub fn SetSource(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMediaPlayer_SetSource(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ``` self: QtC.QMediaPlayer, device: QtC.QIODevice ```
    pub fn SetSourceDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QMediaPlayer_SetSourceDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, media: QtC.QUrl ```
    pub fn SourceChanged(self: ?*anyopaque, media: ?*anyopaque) void {
        qtc.QMediaPlayer_SourceChanged(@ptrCast(self), @ptrCast(media));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, media: QtC.QUrl) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, newState: qmediaplayer_enums.PlaybackState ```
    pub fn PlaybackStateChanged(self: ?*anyopaque, newState: i64) void {
        qtc.QMediaPlayer_PlaybackStateChanged(@ptrCast(self), @intCast(newState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, newState: qmediaplayer_enums.PlaybackState) callconv(.c) void ```
    pub fn OnPlaybackStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, status: qmediaplayer_enums.MediaStatus ```
    pub fn MediaStatusChanged(self: ?*anyopaque, status: i64) void {
        qtc.QMediaPlayer_MediaStatusChanged(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, status: qmediaplayer_enums.MediaStatus) callconv(.c) void ```
    pub fn OnMediaStatusChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MediaStatusChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, duration: i64 ```
    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        qtc.QMediaPlayer_DurationChanged(@ptrCast(self), @intCast(duration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, duration: i64) callconv(.c) void ```
    pub fn OnDurationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_DurationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, position: i64 ```
    pub fn PositionChanged(self: ?*anyopaque, position: i64) void {
        qtc.QMediaPlayer_PositionChanged(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, position: i64) callconv(.c) void ```
    pub fn OnPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, available: bool ```
    pub fn HasAudioChanged(self: ?*anyopaque, available: bool) void {
        qtc.QMediaPlayer_HasAudioChanged(@ptrCast(self), available);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, available: bool) callconv(.c) void ```
    pub fn OnHasAudioChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasAudioChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, videoAvailable: bool ```
    pub fn HasVideoChanged(self: ?*anyopaque, videoAvailable: bool) void {
        qtc.QMediaPlayer_HasVideoChanged(@ptrCast(self), videoAvailable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, videoAvailable: bool) callconv(.c) void ```
    pub fn OnHasVideoChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasVideoChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, progress: f32 ```
    pub fn BufferProgressChanged(self: ?*anyopaque, progress: f32) void {
        qtc.QMediaPlayer_BufferProgressChanged(@ptrCast(self), @floatCast(progress));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, progress: f32) callconv(.c) void ```
    pub fn OnBufferProgressChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_BufferProgressChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, seekable: bool ```
    pub fn SeekableChanged(self: ?*anyopaque, seekable: bool) void {
        qtc.QMediaPlayer_SeekableChanged(@ptrCast(self), seekable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, seekable: bool) callconv(.c) void ```
    pub fn OnSeekableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SeekableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, playing: bool ```
    pub fn PlayingChanged(self: ?*anyopaque, playing: bool) void {
        qtc.QMediaPlayer_PlayingChanged(@ptrCast(self), playing);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, playing: bool) callconv(.c) void ```
    pub fn OnPlayingChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlayingChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, rate: f64 ```
    pub fn PlaybackRateChanged(self: ?*anyopaque, rate: f64) void {
        qtc.QMediaPlayer_PlaybackRateChanged(@ptrCast(self), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, rate: f64) callconv(.c) void ```
    pub fn OnPlaybackRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn LoopsChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_LoopsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnLoopsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_LoopsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn MetaDataChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_MetaDataChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnMetaDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MetaDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn VideoOutputChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_VideoOutputChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnVideoOutputChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_VideoOutputChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn AudioOutputChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_AudioOutputChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnAudioOutputChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioOutputChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn AudioBufferOutputChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_AudioBufferOutputChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnAudioBufferOutputChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioBufferOutputChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn TracksChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_TracksChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnTracksChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_TracksChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn ActiveTracksChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_ActiveTracksChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnActiveTracksChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ActiveTracksChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        qtc.QMediaPlayer_ErrorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ``` self: QtC.QMediaPlayer, errorVal: qmediaplayer_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64, errorString: []const u8) void {
        const errorString_str = qtc.struct_libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QMediaPlayer_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, errorVal: qmediaplayer_enums.Error, errorString: []const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QMediaPlayer_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QMediaPlayer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
    ///
    /// ``` self: QtC.QMediaPlayer, device: QtC.QIODevice, sourceUrl: QtC.QUrl ```
    pub fn SetSourceDevice2(self: ?*anyopaque, device: ?*anyopaque, sourceUrl: ?*anyopaque) void {
        qtc.QMediaPlayer_SetSourceDevice2(@ptrCast(self), @ptrCast(device), @ptrCast(sourceUrl));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QMediaPlayer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QMediaPlayer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QMediaPlayer, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QMediaPlayer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QMediaPlayer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QMediaPlayer, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qmediaplayer.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QMediaPlayer, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QMediaPlayer, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QMediaPlayer, obj: QtC.QObject ```
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
    /// ``` self: QtC.QMediaPlayer, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QMediaPlayer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QMediaPlayer, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QMediaPlayer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QMediaPlayer, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QMediaPlayer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QMediaPlayer, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QMediaPlayer, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QMediaPlayer, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaPlayer, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaPlayer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaPlayer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaPlayer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QMediaPlayer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaPlayer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaPlayer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaPlayer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaPlayer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaPlayer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMediaPlayer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaPlayer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaPlayer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaPlayer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaPlayer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaPlayer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QMediaPlayer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QMediaPlayer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QMediaPlayer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QMediaPlayer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaPlayer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMediaPlayer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QMediaPlayer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QMediaPlayer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QMediaPlayer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMediaPlayer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QMediaPlayer, slot: fn (self: QtC.QMediaPlayer, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#dtor.QMediaPlayer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMediaPlayer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaPlayer_Delete(@ptrCast(self));
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
