const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioEngine = @import("libqt6").QAudioEngine;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQuaternion = @import("libqt6").QQuaternion;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qspatialsound_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html)
pub const QSpatialSound = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSpatialSound,

    pub const _is_QSpatialSound = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSpatialSound object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: QAudioEngine `
    ///
    pub fn new(_engine: anytype) QSpatialSound {
        comptime _ = @TypeOf(_engine)._is_QAudioEngine;
        return .{ .ptr = qtc.QSpatialSound_new(@ptrCast(_engine.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn metaObject(self: QSpatialSound) QMetaObject {
        return .{ .ptr = qtc.QSpatialSound_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSpatialSound, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSpatialSound_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    pub fn superMetaObject(self: QSpatialSound) QMetaObject {
        return .{ .ptr = qtc.QSpatialSound_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSpatialSound, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpatialSound_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSpatialSound, callback: *const fn (QSpatialSound, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSpatialSound_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSpatialSound, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpatialSound_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSpatialSound, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSpatialSound_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSpatialSound, callback: *const fn (QSpatialSound, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSpatialSound_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSpatialSound, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSpatialSound_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSpatialSound.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` url: QUrl `
    ///
    pub fn setSource(self: QSpatialSound, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QSpatialSound_SetSource(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn source(self: QSpatialSound) QUrl {
        return .{ .ptr = qtc.QSpatialSound_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `loops` instead
    ///
    pub const Loops = loops;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#loops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn loops(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_Loops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLoops` instead
    ///
    pub const SetLoops = setLoops;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` _loops: i32 `
    ///
    pub fn setLoops(self: QSpatialSound, _loops: i32) void {
        qtc.QSpatialSound_SetLoops(@ptrCast(self.ptr), @bitCast(_loops));
    }

    /// ### DEPRECATED: Use `autoPlay` instead
    ///
    pub const AutoPlay = autoPlay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn autoPlay(self: QSpatialSound) bool {
        return qtc.QSpatialSound_AutoPlay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoPlay` instead
    ///
    pub const SetAutoPlay = setAutoPlay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` _autoPlay: bool `
    ///
    pub fn setAutoPlay(self: QSpatialSound, _autoPlay: bool) void {
        qtc.QSpatialSound_SetAutoPlay(@ptrCast(self.ptr), _autoPlay);
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` pos: QVector3D `
    ///
    pub fn setPosition(self: QSpatialSound, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QVector3D;
        qtc.QSpatialSound_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn position(self: QSpatialSound) QVector3D {
        return .{ .ptr = qtc.QSpatialSound_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` q: QQuaternion `
    ///
    pub fn setRotation(self: QSpatialSound, q: anytype) void {
        comptime _ = @TypeOf(q)._is_QQuaternion;
        qtc.QSpatialSound_SetRotation(@ptrCast(self.ptr), @ptrCast(q.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn rotation(self: QSpatialSound) QQuaternion {
        return .{ .ptr = qtc.QSpatialSound_Rotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVolume` instead
    ///
    pub const SetVolume = setVolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` _volume: f32 `
    ///
    pub fn setVolume(self: QSpatialSound, _volume: f32) void {
        qtc.QSpatialSound_SetVolume(@ptrCast(self.ptr), @bitCast(_volume));
    }

    /// ### DEPRECATED: Use `volume` instead
    ///
    pub const Volume = volume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn volume(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_Volume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDistanceModel` instead
    ///
    pub const SetDistanceModel = setDistanceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` model: qspatialsound_enums.DistanceModel `
    ///
    pub fn setDistanceModel(self: QSpatialSound, model: i32) void {
        qtc.QSpatialSound_SetDistanceModel(@ptrCast(self.ptr), @bitCast(model));
    }

    /// ### DEPRECATED: Use `distanceModel` instead
    ///
    pub const DistanceModel = distanceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ## Returns:
    ///
    /// ` qspatialsound_enums.DistanceModel `
    ///
    pub fn distanceModel(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_DistanceModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` _size: f32 `
    ///
    pub fn setSize(self: QSpatialSound, _size: f32) void {
        qtc.QSpatialSound_SetSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn size(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDistanceCutoff` instead
    ///
    pub const SetDistanceCutoff = setDistanceCutoff;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` cutoff: f32 `
    ///
    pub fn setDistanceCutoff(self: QSpatialSound, cutoff: f32) void {
        qtc.QSpatialSound_SetDistanceCutoff(@ptrCast(self.ptr), @bitCast(cutoff));
    }

    /// ### DEPRECATED: Use `distanceCutoff` instead
    ///
    pub const DistanceCutoff = distanceCutoff;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn distanceCutoff(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_DistanceCutoff(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setManualAttenuation` instead
    ///
    pub const SetManualAttenuation = setManualAttenuation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` attenuation: f32 `
    ///
    pub fn setManualAttenuation(self: QSpatialSound, attenuation: f32) void {
        qtc.QSpatialSound_SetManualAttenuation(@ptrCast(self.ptr), @bitCast(attenuation));
    }

    /// ### DEPRECATED: Use `manualAttenuation` instead
    ///
    pub const ManualAttenuation = manualAttenuation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn manualAttenuation(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_ManualAttenuation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOcclusionIntensity` instead
    ///
    pub const SetOcclusionIntensity = setOcclusionIntensity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` occlusion: f32 `
    ///
    pub fn setOcclusionIntensity(self: QSpatialSound, occlusion: f32) void {
        qtc.QSpatialSound_SetOcclusionIntensity(@ptrCast(self.ptr), @bitCast(occlusion));
    }

    /// ### DEPRECATED: Use `occlusionIntensity` instead
    ///
    pub const OcclusionIntensity = occlusionIntensity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn occlusionIntensity(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_OcclusionIntensity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirectivity` instead
    ///
    pub const SetDirectivity = setDirectivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` alpha: f32 `
    ///
    pub fn setDirectivity(self: QSpatialSound, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivity(@ptrCast(self.ptr), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `directivity` instead
    ///
    pub const Directivity = directivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn directivity(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_Directivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirectivityOrder` instead
    ///
    pub const SetDirectivityOrder = setDirectivityOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` alpha: f32 `
    ///
    pub fn setDirectivityOrder(self: QSpatialSound, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivityOrder(@ptrCast(self.ptr), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `directivityOrder` instead
    ///
    pub const DirectivityOrder = directivityOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn directivityOrder(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_DirectivityOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNearFieldGain` instead
    ///
    pub const SetNearFieldGain = setNearFieldGain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` gain: f32 `
    ///
    pub fn setNearFieldGain(self: QSpatialSound, gain: f32) void {
        qtc.QSpatialSound_SetNearFieldGain(@ptrCast(self.ptr), @bitCast(gain));
    }

    /// ### DEPRECATED: Use `nearFieldGain` instead
    ///
    pub const NearFieldGain = nearFieldGain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn nearFieldGain(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_NearFieldGain(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `engine` instead
    ///
    pub const Engine = engine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn engine(self: QSpatialSound) QAudioEngine {
        return .{ .ptr = qtc.QSpatialSound_Engine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn sourceChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_SourceChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loopsChanged` instead
    ///
    pub const LoopsChanged = loopsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn loopsChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_LoopsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoopsChanged` instead
    ///
    pub const OnLoopsChanged = onLoopsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onLoopsChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_LoopsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoPlayChanged` instead
    ///
    pub const AutoPlayChanged = autoPlayChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn autoPlayChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_AutoPlayChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoPlayChanged` instead
    ///
    pub const OnAutoPlayChanged = onAutoPlayChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onAutoPlayChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_AutoPlayChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn positionChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_PositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn rotationChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `volumeChanged` instead
    ///
    pub const VolumeChanged = volumeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn volumeChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_VolumeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVolumeChanged` instead
    ///
    pub const OnVolumeChanged = onVolumeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onVolumeChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_VolumeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `distanceModelChanged` instead
    ///
    pub const DistanceModelChanged = distanceModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn distanceModelChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DistanceModelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDistanceModelChanged` instead
    ///
    pub const OnDistanceModelChanged = onDistanceModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onDistanceModelChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeChanged` instead
    ///
    pub const SizeChanged = sizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn sizeChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_SizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSizeChanged` instead
    ///
    pub const OnSizeChanged = onSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onSizeChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `distanceCutoffChanged` instead
    ///
    pub const DistanceCutoffChanged = distanceCutoffChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn distanceCutoffChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DistanceCutoffChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDistanceCutoffChanged` instead
    ///
    pub const OnDistanceCutoffChanged = onDistanceCutoffChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onDistanceCutoffChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceCutoffChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `manualAttenuationChanged` instead
    ///
    pub const ManualAttenuationChanged = manualAttenuationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn manualAttenuationChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_ManualAttenuationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onManualAttenuationChanged` instead
    ///
    pub const OnManualAttenuationChanged = onManualAttenuationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onManualAttenuationChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_ManualAttenuationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `occlusionIntensityChanged` instead
    ///
    pub const OcclusionIntensityChanged = occlusionIntensityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn occlusionIntensityChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_OcclusionIntensityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOcclusionIntensityChanged` instead
    ///
    pub const OnOcclusionIntensityChanged = onOcclusionIntensityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onOcclusionIntensityChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_OcclusionIntensityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directivityChanged` instead
    ///
    pub const DirectivityChanged = directivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn directivityChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DirectivityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDirectivityChanged` instead
    ///
    pub const OnDirectivityChanged = onDirectivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onDirectivityChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directivityOrderChanged` instead
    ///
    pub const DirectivityOrderChanged = directivityOrderChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn directivityOrderChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DirectivityOrderChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDirectivityOrderChanged` instead
    ///
    pub const OnDirectivityOrderChanged = onDirectivityOrderChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onDirectivityOrderChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityOrderChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nearFieldGainChanged` instead
    ///
    pub const NearFieldGainChanged = nearFieldGainChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn nearFieldGainChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_NearFieldGainChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNearFieldGainChanged` instead
    ///
    pub const OnNearFieldGainChanged = onNearFieldGainChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onNearFieldGainChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_NearFieldGainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `play` instead
    ///
    pub const Play = play;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn play(self: QSpatialSound) void {
        qtc.QSpatialSound_Play(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn pause(self: QSpatialSound) void {
        qtc.QSpatialSound_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn stop(self: QSpatialSound) void {
        qtc.QSpatialSound_Stop(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSpatialSound.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSpatialSound.tr3: Memory allocation failed");
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
    /// ` self: QSpatialSound `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSpatialSound, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSpatialSound.objectName: Memory allocation failed");
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
    /// ` self: QSpatialSound `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSpatialSound, name: []const u8) void {
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
    /// ` self: QSpatialSound `
    ///
    pub fn isWidgetType(self: QSpatialSound) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn isWindowType(self: QSpatialSound) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn isQuickItemType(self: QSpatialSound) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn signalsBlocked(self: QSpatialSound) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSpatialSound, b: bool) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn thread(self: QSpatialSound) QThread {
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
    /// ` self: QSpatialSound `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSpatialSound, _thread: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSpatialSound, interval: i32) i32 {
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
    /// ` self: QSpatialSound `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSpatialSound, time: i64) i32 {
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
    /// ` self: QSpatialSound `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSpatialSound, id: i32) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSpatialSound, id: i32) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSpatialSound, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSpatialSound.children: Memory allocation failed");
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
    /// ` self: QSpatialSound `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSpatialSound, _parent: anytype) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSpatialSound, filterObj: anytype) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSpatialSound, obj: anytype) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSpatialSound, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSpatialSound `
    ///
    pub fn disconnect3(self: QSpatialSound) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSpatialSound, receiver: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn dumpObjectTree(self: QSpatialSound) void {
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
    /// ` self: QSpatialSound `
    ///
    pub fn dumpObjectInfo(self: QSpatialSound) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSpatialSound, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSpatialSound, name: [:0]const u8) QVariant {
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
    /// ` self: QSpatialSound `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSpatialSound, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSpatialSound.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSpatialSound.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSpatialSound `
    ///
    pub fn bindingStorage(self: QSpatialSound) QBindingStorage {
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
    /// ` self: QSpatialSound `
    ///
    pub fn bindingStorage2(self: QSpatialSound) QBindingStorage {
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
    /// ` self: QSpatialSound `
    ///
    pub fn destroyed(self: QSpatialSound) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
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
    /// ` self: QSpatialSound `
    ///
    pub fn parent(self: QSpatialSound) QObject {
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
    /// ` self: QSpatialSound `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSpatialSound, classname: [:0]const u8) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn deleteLater(self: QSpatialSound) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSpatialSound, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSpatialSound `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSpatialSound, time: i64, timerType: i32) i32 {
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
    /// ` self: QSpatialSound `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSpatialSound, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSpatialSound, signal: [:0]const u8) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSpatialSound, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSpatialSound, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSpatialSound, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSpatialSound, param1: anytype) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSpatialSound, callback: *const fn (QSpatialSound, QObject) callconv(.c) void) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSpatialSound, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSpatialSound_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSpatialSound, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSpatialSound_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QEvent) callconv(.c) bool) void {
        qtc.QSpatialSound_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSpatialSound, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSpatialSound_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSpatialSound, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSpatialSound_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSpatialSound, callback: *const fn (QSpatialSound, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSpatialSound_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSpatialSound, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSpatialSound_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSpatialSound, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSpatialSound_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QTimerEvent) callconv(.c) void) void {
        qtc.QSpatialSound_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSpatialSound, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSpatialSound_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSpatialSound, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSpatialSound_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QChildEvent) callconv(.c) void) void {
        qtc.QSpatialSound_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSpatialSound, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSpatialSound_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSpatialSound, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSpatialSound_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QEvent) callconv(.c) void) void {
        qtc.QSpatialSound_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSpatialSound, callback: *const fn (QSpatialSound, QMetaMethod) callconv(.c) void) void {
        qtc.QSpatialSound_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSpatialSound, callback: *const fn (QSpatialSound, QMetaMethod) callconv(.c) void) void {
        qtc.QSpatialSound_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    pub fn sender(self: QSpatialSound) QObject {
        return .{ .ptr = qtc.QSpatialSound_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSpatialSound `
    ///
    pub fn superSender(self: QSpatialSound) QObject {
        return .{ .ptr = qtc.QSpatialSound_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSpatialSound, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSpatialSound_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    pub fn senderSignalIndex(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSpatialSound `
    ///
    pub fn superSenderSignalIndex(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSpatialSound, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpatialSound_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSpatialSound, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpatialSound_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSpatialSound, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpatialSound_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSpatialSound, callback: *const fn (QSpatialSound, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSpatialSound_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSpatialSound, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSpatialSound_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSpatialSound, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSpatialSound_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound`
    ///
    /// ` callback: *const fn (self: QSpatialSound, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSpatialSound, callback: *const fn (QSpatialSound, QMetaMethod) callconv(.c) bool) void {
        qtc.QSpatialSound_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSpatialSound, callback: *const fn (QSpatialSound, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#dtor.QSpatialSound)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn delete(self: QSpatialSound) void {
        qtc.QSpatialSound_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#public-types)
pub const enums = struct {
    pub const Loops = enum {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };

    pub const DistanceModel = enum {
        pub const Logarithmic: i32 = 0;
        pub const Linear: i32 = 1;
        pub const ManualAttenuation: i32 = 2;
    };
};
