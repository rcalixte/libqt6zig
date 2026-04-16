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

    /// New constructs a new QSpatialSound object.
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: QAudioEngine `
    ///
    pub fn New(engine: anytype) QSpatialSound {
        comptime _ = @TypeOf(engine)._is_QAudioEngine;
        return .{ .ptr = qtc.QSpatialSound_new(@ptrCast(engine.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn MetaObject(self: QSpatialSound) QMetaObject {
        return .{ .ptr = qtc.QSpatialSound_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QSpatialSound, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSpatialSound_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpatialSound `
    ///
    pub fn SuperMetaObject(self: QSpatialSound) QMetaObject {
        return .{ .ptr = qtc.QSpatialSound_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSpatialSound, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpatialSound_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSpatialSound, callback: *const fn (QSpatialSound, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSpatialSound_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSpatialSound, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpatialSound_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QSpatialSound, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSpatialSound_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSpatialSound, callback: *const fn (QSpatialSound, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSpatialSound_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QSpatialSound, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSpatialSound_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetSource(self: QSpatialSound, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QSpatialSound_SetSource(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Source(self: QSpatialSound) QUrl {
        return .{ .ptr = qtc.QSpatialSound_Source(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#loops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Loops(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_Loops(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` loops: i32 `
    ///
    pub fn SetLoops(self: QSpatialSound, loops: i32) void {
        qtc.QSpatialSound_SetLoops(@ptrCast(self.ptr), @bitCast(loops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn AutoPlay(self: QSpatialSound) bool {
        return qtc.QSpatialSound_AutoPlay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` autoPlay: bool `
    ///
    pub fn SetAutoPlay(self: QSpatialSound, autoPlay: bool) void {
        qtc.QSpatialSound_SetAutoPlay(@ptrCast(self.ptr), autoPlay);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` pos: QVector3D `
    ///
    pub fn SetPosition(self: QSpatialSound, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QVector3D;
        qtc.QSpatialSound_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Position(self: QSpatialSound) QVector3D {
        return .{ .ptr = qtc.QSpatialSound_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` q: QQuaternion `
    ///
    pub fn SetRotation(self: QSpatialSound, q: anytype) void {
        comptime _ = @TypeOf(q)._is_QQuaternion;
        qtc.QSpatialSound_SetRotation(@ptrCast(self.ptr), @ptrCast(q.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Rotation(self: QSpatialSound) QQuaternion {
        return .{ .ptr = qtc.QSpatialSound_Rotation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` volume: f32 `
    ///
    pub fn SetVolume(self: QSpatialSound, volume: f32) void {
        qtc.QSpatialSound_SetVolume(@ptrCast(self.ptr), @bitCast(volume));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#volume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Volume(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_Volume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` model: qspatialsound_enums.DistanceModel `
    ///
    pub fn SetDistanceModel(self: QSpatialSound, model: i32) void {
        qtc.QSpatialSound_SetDistanceModel(@ptrCast(self.ptr), @bitCast(model));
    }

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
    pub fn DistanceModel(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_DistanceModel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` size: f32 `
    ///
    pub fn SetSize(self: QSpatialSound, size: f32) void {
        qtc.QSpatialSound_SetSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Size(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` cutoff: f32 `
    ///
    pub fn SetDistanceCutoff(self: QSpatialSound, cutoff: f32) void {
        qtc.QSpatialSound_SetDistanceCutoff(@ptrCast(self.ptr), @bitCast(cutoff));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DistanceCutoff(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_DistanceCutoff(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` attenuation: f32 `
    ///
    pub fn SetManualAttenuation(self: QSpatialSound, attenuation: f32) void {
        qtc.QSpatialSound_SetManualAttenuation(@ptrCast(self.ptr), @bitCast(attenuation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn ManualAttenuation(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_ManualAttenuation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` occlusion: f32 `
    ///
    pub fn SetOcclusionIntensity(self: QSpatialSound, occlusion: f32) void {
        qtc.QSpatialSound_SetOcclusionIntensity(@ptrCast(self.ptr), @bitCast(occlusion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn OcclusionIntensity(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_OcclusionIntensity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` alpha: f32 `
    ///
    pub fn SetDirectivity(self: QSpatialSound, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivity(@ptrCast(self.ptr), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Directivity(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_Directivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` alpha: f32 `
    ///
    pub fn SetDirectivityOrder(self: QSpatialSound, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivityOrder(@ptrCast(self.ptr), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DirectivityOrder(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_DirectivityOrder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` gain: f32 `
    ///
    pub fn SetNearFieldGain(self: QSpatialSound, gain: f32) void {
        qtc.QSpatialSound_SetNearFieldGain(@ptrCast(self.ptr), @bitCast(gain));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn NearFieldGain(self: QSpatialSound) f32 {
        return qtc.QSpatialSound_NearFieldGain(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Engine(self: QSpatialSound) QAudioEngine {
        return .{ .ptr = qtc.QSpatialSound_Engine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn SourceChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_SourceChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnSourceChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn LoopsChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_LoopsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnLoopsChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_LoopsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn AutoPlayChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_AutoPlayChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnAutoPlayChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_AutoPlayChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn PositionChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_PositionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnPositionChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn RotationChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnRotationChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn VolumeChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_VolumeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnVolumeChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_VolumeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DistanceModelChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DistanceModelChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnDistanceModelChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn SizeChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_SizeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnSizeChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DistanceCutoffChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DistanceCutoffChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnDistanceCutoffChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceCutoffChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn ManualAttenuationChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_ManualAttenuationChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnManualAttenuationChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_ManualAttenuationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn OcclusionIntensityChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_OcclusionIntensityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnOcclusionIntensityChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_OcclusionIntensityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DirectivityChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DirectivityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnDirectivityChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DirectivityOrderChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_DirectivityOrderChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnDirectivityOrderChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityOrderChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn NearFieldGainChanged(self: QSpatialSound) void {
        qtc.QSpatialSound_NearFieldGainChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` callback: *const fn (self: QSpatialSound) callconv(.c) void `
    ///
    pub fn OnNearFieldGainChanged(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_NearFieldGainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Play(self: QSpatialSound) void {
        qtc.QSpatialSound_Play(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Pause(self: QSpatialSound) void {
        qtc.QSpatialSound_Pause(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Stop(self: QSpatialSound) void {
        qtc.QSpatialSound_Stop(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QSpatialSound, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QSpatialSound, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn IsWidgetType(self: QSpatialSound) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn IsWindowType(self: QSpatialSound) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn IsQuickItemType(self: QSpatialSound) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn SignalsBlocked(self: QSpatialSound) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QSpatialSound, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Thread(self: QSpatialSound) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSpatialSound, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QSpatialSound, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QSpatialSound, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QSpatialSound, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QSpatialSound, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QSpatialSound, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qspatialsound.Children: Memory allocation failed");
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
    /// ` self: QSpatialSound `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSpatialSound, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QSpatialSound, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QSpatialSound, obj: anytype) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSpatialSound, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSpatialSound `
    ///
    pub fn Disconnect3(self: QSpatialSound) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QSpatialSound, receiver: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    pub fn DumpObjectTree(self: QSpatialSound) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DumpObjectInfo(self: QSpatialSound) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QSpatialSound, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSpatialSound, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QSpatialSound, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qspatialsound.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qspatialsound.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSpatialSound `
    ///
    pub fn BindingStorage(self: QSpatialSound) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn BindingStorage2(self: QSpatialSound) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Destroyed(self: QSpatialSound) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QSpatialSound, callback: *const fn (QSpatialSound) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Parent(self: QSpatialSound) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QSpatialSound, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn DeleteLater(self: QSpatialSound) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QSpatialSound, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QSpatialSound, time: i64, timerType: i32) i32 {
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
    /// ` self: QSpatialSound `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSpatialSound, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSpatialSound, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QSpatialSound, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSpatialSound, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSpatialSound, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSpatialSound `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSpatialSound, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QSpatialSound, callback: *const fn (QSpatialSound, QObject) callconv(.c) void) void {
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
    /// ` self: QSpatialSound `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSpatialSound, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpatialSound_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSpatialSound, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpatialSound_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QEvent) callconv(.c) bool) void {
        qtc.QSpatialSound_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSpatialSound, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpatialSound_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSpatialSound, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpatialSound_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QSpatialSound, callback: *const fn (QSpatialSound, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSpatialSound_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSpatialSound, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSpatialSound_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSpatialSound, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSpatialSound_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QTimerEvent) callconv(.c) void) void {
        qtc.QSpatialSound_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSpatialSound, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSpatialSound_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSpatialSound, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSpatialSound_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QChildEvent) callconv(.c) void) void {
        qtc.QSpatialSound_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSpatialSound, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpatialSound_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSpatialSound, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpatialSound_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QSpatialSound, callback: *const fn (QSpatialSound, QEvent) callconv(.c) void) void {
        qtc.QSpatialSound_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QSpatialSound, callback: *const fn (QSpatialSound, QMetaMethod) callconv(.c) void) void {
        qtc.QSpatialSound_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSpatialSound, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpatialSound_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QSpatialSound, callback: *const fn (QSpatialSound, QMetaMethod) callconv(.c) void) void {
        qtc.QSpatialSound_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QSpatialSound) QObject {
        return .{ .ptr = qtc.QSpatialSound_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSpatialSound `
    ///
    pub fn SuperSender(self: QSpatialSound) QObject {
        return .{ .ptr = qtc.QSpatialSound_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QSpatialSound, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSpatialSound_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSpatialSound `
    ///
    pub fn SuperSenderSignalIndex(self: QSpatialSound) i32 {
        return qtc.QSpatialSound_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QSpatialSound, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpatialSound_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QSpatialSound, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpatialSound_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSpatialSound, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpatialSound_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QSpatialSound, callback: *const fn (QSpatialSound, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSpatialSound_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QSpatialSound, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSpatialSound_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpatialSound `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSpatialSound, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSpatialSound_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QSpatialSound, callback: *const fn (QSpatialSound, QMetaMethod) callconv(.c) bool) void {
        qtc.QSpatialSound_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QSpatialSound, callback: *const fn (QSpatialSound, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#dtor.QSpatialSound)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSpatialSound `
    ///
    pub fn Delete(self: QSpatialSound) void {
        qtc.QSpatialSound_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qspatialsound.html#public-types)
pub const enums = struct {
    pub const Loops = enum(i32) {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };

    pub const DistanceModel = enum(i32) {
        pub const Logarithmic: i32 = 0;
        pub const Linear: i32 = 1;
        pub const ManualAttenuation: i32 = 2;
    };
};
