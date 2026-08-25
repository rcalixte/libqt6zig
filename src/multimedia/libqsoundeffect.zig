const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioDevice = @import("libqt6").QAudioDevice;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsoundeffect_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html)
pub const QSoundEffect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSoundEffect,

    pub const _is_QSoundEffect = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSoundEffect object in C++ memory
    ///
    pub fn new() QSoundEffect {
        return .{ .ptr = qtc.QSoundEffect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSoundEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _audioDevice: QAudioDevice `
    ///
    pub fn new2(_audioDevice: anytype) QSoundEffect {
        comptime _ = @TypeOf(_audioDevice)._is_QAudioDevice;
        return .{ .ptr = qtc.QSoundEffect_new2(@ptrCast(_audioDevice.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSoundEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QSoundEffect {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSoundEffect_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSoundEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _audioDevice: QAudioDevice `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_audioDevice: anytype, _parent: anytype) QSoundEffect {
        comptime _ = @TypeOf(_audioDevice)._is_QAudioDevice;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSoundEffect_new4(@ptrCast(_audioDevice.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn metaObject(self: QSoundEffect) QMetaObject {
        return .{ .ptr = qtc.QSoundEffect_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSoundEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSoundEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    pub fn superMetaObject(self: QSoundEffect) QMetaObject {
        return .{ .ptr = qtc.QSoundEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSoundEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSoundEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSoundEffect, callback: *const fn (QSoundEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSoundEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSoundEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSoundEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSoundEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSoundEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSoundEffect, callback: *const fn (QSoundEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSoundEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSoundEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSoundEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSoundEffect.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedMimeTypes` instead
    ///
    pub const SupportedMimeTypes = supportedMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedMimeTypes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSoundEffect_SupportedMimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSoundEffect.supportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSoundEffect.supportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn source(self: QSoundEffect) QUrl {
        return .{ .ptr = qtc.QSoundEffect_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` url: QUrl `
    ///
    pub fn setSource(self: QSoundEffect, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QSoundEffect_SetSource(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `loopCount` instead
    ///
    pub const LoopCount = loopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn loopCount(self: QSoundEffect) i32 {
        return qtc.QSoundEffect_LoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loopsRemaining` instead
    ///
    pub const LoopsRemaining = loopsRemaining;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemaining)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn loopsRemaining(self: QSoundEffect) i32 {
        return qtc.QSoundEffect_LoopsRemaining(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLoopCount` instead
    ///
    pub const SetLoopCount = setLoopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` _loopCount: i32 `
    ///
    pub fn setLoopCount(self: QSoundEffect, _loopCount: i32) void {
        qtc.QSoundEffect_SetLoopCount(@ptrCast(self.ptr), @bitCast(_loopCount));
    }

    /// ### DEPRECATED: Use `audioDevice` instead
    ///
    pub const AudioDevice = audioDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#audioDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn audioDevice(self: QSoundEffect) QAudioDevice {
        return .{ .ptr = qtc.QSoundEffect_AudioDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAudioDevice` instead
    ///
    pub const SetAudioDevice = setAudioDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setAudioDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` device: QAudioDevice `
    ///
    pub fn setAudioDevice(self: QSoundEffect, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QAudioDevice;
        qtc.QSoundEffect_SetAudioDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `volume` instead
    ///
    pub const Volume = volume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn volume(self: QSoundEffect) f32 {
        return qtc.QSoundEffect_Volume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVolume` instead
    ///
    pub const SetVolume = setVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` _volume: f32 `
    ///
    pub fn setVolume(self: QSoundEffect, _volume: f32) void {
        qtc.QSoundEffect_SetVolume(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `isMuted` instead
    ///
    pub const IsMuted = isMuted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#isMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn isMuted(self: QSoundEffect) bool {
        return qtc.QSoundEffect_IsMuted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMuted` instead
    ///
    pub const SetMuted = setMuted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setMuted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` muted: bool `
    ///
    pub fn setMuted(self: QSoundEffect, muted: bool) void {
        qtc.QSoundEffect_SetMuted(@ptrCast(self.ptr), muted);
    }

    /// ### DEPRECATED: Use `isLoaded` instead
    ///
    pub const IsLoaded = isLoaded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#isLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn isLoaded(self: QSoundEffect) bool {
        return qtc.QSoundEffect_IsLoaded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPlaying` instead
    ///
    pub const IsPlaying = isPlaying;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#isPlaying)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn isPlaying(self: QSoundEffect) bool {
        return qtc.QSoundEffect_IsPlaying(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    /// ## Returns:
    ///
    /// ` qsoundeffect_enums.Status `
    ///
    pub fn status(self: QSoundEffect) i32 {
        return qtc.QSoundEffect_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn sourceChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_SourceChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_SourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loopCountChanged` instead
    ///
    pub const LoopCountChanged = loopCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn loopCountChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_LoopCountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoopCountChanged` instead
    ///
    pub const OnLoopCountChanged = onLoopCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onLoopCountChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_LoopCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loopsRemainingChanged` instead
    ///
    pub const LoopsRemainingChanged = loopsRemainingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn loopsRemainingChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_LoopsRemainingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoopsRemainingChanged` instead
    ///
    pub const OnLoopsRemainingChanged = onLoopsRemainingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onLoopsRemainingChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_LoopsRemainingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `volumeChanged` instead
    ///
    pub const VolumeChanged = volumeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn volumeChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_VolumeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVolumeChanged` instead
    ///
    pub const OnVolumeChanged = onVolumeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onVolumeChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_VolumeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mutedChanged` instead
    ///
    pub const MutedChanged = mutedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn mutedChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_MutedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMutedChanged` instead
    ///
    pub const OnMutedChanged = onMutedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onMutedChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_MutedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadedChanged` instead
    ///
    pub const LoadedChanged = loadedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn loadedChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_LoadedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadedChanged` instead
    ///
    pub const OnLoadedChanged = onLoadedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onLoadedChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_LoadedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `playingChanged` instead
    ///
    pub const PlayingChanged = playingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn playingChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_PlayingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPlayingChanged` instead
    ///
    pub const OnPlayingChanged = onPlayingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onPlayingChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_PlayingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn statusChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_StatusChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `audioDeviceChanged` instead
    ///
    pub const AudioDeviceChanged = audioDeviceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn audioDeviceChanged(self: QSoundEffect) void {
        qtc.QSoundEffect_AudioDeviceChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAudioDeviceChanged` instead
    ///
    pub const OnAudioDeviceChanged = onAudioDeviceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onAudioDeviceChanged(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
        qtc.QSoundEffect_Connect_AudioDeviceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `play` instead
    ///
    pub const Play = play;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn play(self: QSoundEffect) void {
        qtc.QSoundEffect_Play(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn stop(self: QSoundEffect) void {
        qtc.QSoundEffect_Stop(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSoundEffect.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSoundEffect.tr3: Memory allocation failed");
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
    /// ` self: QSoundEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSoundEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSoundEffect.objectName: Memory allocation failed");
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
    /// ` self: QSoundEffect `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSoundEffect, name: []const u8) void {
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
    /// ` self: QSoundEffect `
    ///
    pub fn isWidgetType(self: QSoundEffect) bool {
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
    /// ` self: QSoundEffect `
    ///
    pub fn isWindowType(self: QSoundEffect) bool {
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
    /// ` self: QSoundEffect `
    ///
    pub fn isQuickItemType(self: QSoundEffect) bool {
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
    /// ` self: QSoundEffect `
    ///
    pub fn signalsBlocked(self: QSoundEffect) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSoundEffect, b: bool) bool {
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
    /// ` self: QSoundEffect `
    ///
    pub fn thread(self: QSoundEffect) QThread {
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
    /// ` self: QSoundEffect `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSoundEffect, _thread: anytype) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSoundEffect, interval: i32) i32 {
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
    /// ` self: QSoundEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSoundEffect, time: i64) i32 {
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
    /// ` self: QSoundEffect `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSoundEffect, id: i32) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSoundEffect, id: i32) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSoundEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSoundEffect.children: Memory allocation failed");
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
    /// ` self: QSoundEffect `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSoundEffect, _parent: anytype) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSoundEffect, filterObj: anytype) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSoundEffect, obj: anytype) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSoundEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSoundEffect `
    ///
    pub fn disconnect3(self: QSoundEffect) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSoundEffect, receiver: anytype) bool {
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
    /// ` self: QSoundEffect `
    ///
    pub fn dumpObjectTree(self: QSoundEffect) void {
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
    /// ` self: QSoundEffect `
    ///
    pub fn dumpObjectInfo(self: QSoundEffect) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSoundEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSoundEffect, name: [:0]const u8) QVariant {
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
    /// ` self: QSoundEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSoundEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSoundEffect.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSoundEffect.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSoundEffect `
    ///
    pub fn bindingStorage(self: QSoundEffect) QBindingStorage {
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
    /// ` self: QSoundEffect `
    ///
    pub fn bindingStorage2(self: QSoundEffect) QBindingStorage {
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
    /// ` self: QSoundEffect `
    ///
    pub fn destroyed(self: QSoundEffect) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSoundEffect, callback: *const fn (QSoundEffect) callconv(.c) void) void {
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
    /// ` self: QSoundEffect `
    ///
    pub fn parent(self: QSoundEffect) QObject {
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
    /// ` self: QSoundEffect `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSoundEffect, classname: [:0]const u8) bool {
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
    /// ` self: QSoundEffect `
    ///
    pub fn deleteLater(self: QSoundEffect) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSoundEffect, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSoundEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSoundEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QSoundEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSoundEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSoundEffect, signal: [:0]const u8) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSoundEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSoundEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSoundEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSoundEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSoundEffect, param1: anytype) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSoundEffect, callback: *const fn (QSoundEffect, QObject) callconv(.c) void) void {
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSoundEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSoundEffect_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSoundEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSoundEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSoundEffect, callback: *const fn (QSoundEffect, QEvent) callconv(.c) bool) void {
        qtc.QSoundEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSoundEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSoundEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSoundEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSoundEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSoundEffect, callback: *const fn (QSoundEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSoundEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSoundEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSoundEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSoundEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSoundEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSoundEffect, callback: *const fn (QSoundEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QSoundEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSoundEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSoundEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSoundEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSoundEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSoundEffect, callback: *const fn (QSoundEffect, QChildEvent) callconv(.c) void) void {
        qtc.QSoundEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSoundEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSoundEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSoundEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSoundEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSoundEffect, callback: *const fn (QSoundEffect, QEvent) callconv(.c) void) void {
        qtc.QSoundEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSoundEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSoundEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSoundEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSoundEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSoundEffect, callback: *const fn (QSoundEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QSoundEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSoundEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSoundEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSoundEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSoundEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSoundEffect, callback: *const fn (QSoundEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QSoundEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    pub fn sender(self: QSoundEffect) QObject {
        return .{ .ptr = qtc.QSoundEffect_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSoundEffect `
    ///
    pub fn superSender(self: QSoundEffect) QObject {
        return .{ .ptr = qtc.QSoundEffect_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSoundEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSoundEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    pub fn senderSignalIndex(self: QSoundEffect) i32 {
        return qtc.QSoundEffect_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSoundEffect `
    ///
    pub fn superSenderSignalIndex(self: QSoundEffect) i32 {
        return qtc.QSoundEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSoundEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QSoundEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSoundEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSoundEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSoundEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSoundEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSoundEffect, callback: *const fn (QSoundEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSoundEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSoundEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSoundEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSoundEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSoundEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSoundEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSoundEffect`
    ///
    /// ` callback: *const fn (self: QSoundEffect, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSoundEffect, callback: *const fn (QSoundEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QSoundEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSoundEffect `
    ///
    /// ` callback: *const fn (self: QSoundEffect, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSoundEffect, callback: *const fn (QSoundEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#dtor.QSoundEffect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSoundEffect `
    ///
    pub fn delete(self: QSoundEffect) void {
        qtc.QSoundEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#public-types)
pub const enums = struct {
    pub const Loop = enum {
        pub const Infinite: i32 = -2;
    };

    pub const Status = enum {
        pub const Null: i32 = 0;
        pub const Loading: i32 = 1;
        pub const Ready: i32 = 2;
        pub const Error: i32 = 3;
    };
};
