const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qspatialsound_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qspatialsound.html
pub const qspatialsound = struct {
    /// New constructs a new QSpatialSound object.
    ///
    /// ``` engine: QtC.QAudioEngine ```
    pub fn New(engine: ?*anyopaque) QtC.QSpatialSound {
        return qtc.QSpatialSound_new(@ptrCast(engine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSpatialSound_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSpatialSound, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpatialSound_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSpatialSound_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSpatialSound_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSpatialSound_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSpatialSound_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
    ///
    /// ``` self: QtC.QSpatialSound, url: QtC.QUrl ```
    pub fn SetSource(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QSpatialSound_SetSource(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#source)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Source(self: ?*anyopaque) QtC.QUrl {
        return qtc.QSpatialSound_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loops)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Loops(self: ?*anyopaque) i32 {
        return qtc.QSpatialSound_Loops(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
    ///
    /// ``` self: QtC.QSpatialSound, loops: i32 ```
    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        qtc.QSpatialSound_SetLoops(@ptrCast(self), @intCast(loops));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn AutoPlay(self: ?*anyopaque) bool {
        return qtc.QSpatialSound_AutoPlay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
    ///
    /// ``` self: QtC.QSpatialSound, autoPlay: bool ```
    pub fn SetAutoPlay(self: ?*anyopaque, autoPlay: bool) void {
        qtc.QSpatialSound_SetAutoPlay(@ptrCast(self), autoPlay);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
    ///
    /// ``` self: QtC.QSpatialSound, pos: QtC.QVector3D ```
    pub fn SetPosition(self: ?*anyopaque, pos: QtC.QVector3D) void {
        qtc.QSpatialSound_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#position)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Position(self: ?*anyopaque) QtC.QVector3D {
        return qtc.QSpatialSound_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
    ///
    /// ``` self: QtC.QSpatialSound, q: QtC.QQuaternion ```
    pub fn SetRotation(self: ?*anyopaque, q: ?*anyopaque) void {
        qtc.QSpatialSound_SetRotation(@ptrCast(self), @ptrCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Rotation(self: ?*anyopaque) QtC.QQuaternion {
        return qtc.QSpatialSound_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
    ///
    /// ``` self: QtC.QSpatialSound, volume: f32 ```
    pub fn SetVolume(self: ?*anyopaque, volume: f32) void {
        qtc.QSpatialSound_SetVolume(@ptrCast(self), @floatCast(volume));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volume)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Volume(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_Volume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
    ///
    /// ``` self: QtC.QSpatialSound, model: qspatialsound_enums.DistanceModel ```
    pub fn SetDistanceModel(self: ?*anyopaque, model: i64) void {
        qtc.QSpatialSound_SetDistanceModel(@ptrCast(self), @intCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModel)
    ///
    /// ``` self: QtC.QSpatialSound ```
    ///
    /// Returns: ``` qspatialsound_enums.DistanceModel ```
    pub fn DistanceModel(self: ?*anyopaque) i64 {
        return qtc.QSpatialSound_DistanceModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
    ///
    /// ``` self: QtC.QSpatialSound, size: f32 ```
    pub fn SetSize(self: ?*anyopaque, size: f32) void {
        qtc.QSpatialSound_SetSize(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#size)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Size(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
    ///
    /// ``` self: QtC.QSpatialSound, cutoff: f32 ```
    pub fn SetDistanceCutoff(self: ?*anyopaque, cutoff: f32) void {
        qtc.QSpatialSound_SetDistanceCutoff(@ptrCast(self), @floatCast(cutoff));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DistanceCutoff(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_DistanceCutoff(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
    ///
    /// ``` self: QtC.QSpatialSound, attenuation: f32 ```
    pub fn SetManualAttenuation(self: ?*anyopaque, attenuation: f32) void {
        qtc.QSpatialSound_SetManualAttenuation(@ptrCast(self), @floatCast(attenuation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn ManualAttenuation(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_ManualAttenuation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
    ///
    /// ``` self: QtC.QSpatialSound, occlusion: f32 ```
    pub fn SetOcclusionIntensity(self: ?*anyopaque, occlusion: f32) void {
        qtc.QSpatialSound_SetOcclusionIntensity(@ptrCast(self), @floatCast(occlusion));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn OcclusionIntensity(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_OcclusionIntensity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
    ///
    /// ``` self: QtC.QSpatialSound, alpha: f32 ```
    pub fn SetDirectivity(self: ?*anyopaque, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivity(@ptrCast(self), @floatCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Directivity(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_Directivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
    ///
    /// ``` self: QtC.QSpatialSound, alpha: f32 ```
    pub fn SetDirectivityOrder(self: ?*anyopaque, alpha: f32) void {
        qtc.QSpatialSound_SetDirectivityOrder(@ptrCast(self), @floatCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DirectivityOrder(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_DirectivityOrder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
    ///
    /// ``` self: QtC.QSpatialSound, gain: f32 ```
    pub fn SetNearFieldGain(self: ?*anyopaque, gain: f32) void {
        qtc.QSpatialSound_SetNearFieldGain(@ptrCast(self), @floatCast(gain));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn NearFieldGain(self: ?*anyopaque) f32 {
        return qtc.QSpatialSound_NearFieldGain(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#engine)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Engine(self: ?*anyopaque) QtC.QAudioEngine {
        return qtc.QSpatialSound_Engine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn SourceChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_SourceChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn LoopsChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_LoopsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnLoopsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_LoopsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn AutoPlayChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_AutoPlayChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnAutoPlayChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_AutoPlayChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn PositionChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_PositionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_PositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_RotationChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_RotationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn VolumeChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_VolumeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnVolumeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_VolumeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DistanceModelChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_DistanceModelChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnDistanceModelChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceModelChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn SizeChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_SizeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_SizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DistanceCutoffChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_DistanceCutoffChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnDistanceCutoffChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DistanceCutoffChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn ManualAttenuationChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_ManualAttenuationChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnManualAttenuationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_ManualAttenuationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn OcclusionIntensityChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_OcclusionIntensityChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnOcclusionIntensityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_OcclusionIntensityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DirectivityChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_DirectivityChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnDirectivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DirectivityOrderChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_DirectivityOrderChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnDirectivityOrderChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_DirectivityOrderChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn NearFieldGainChanged(self: ?*anyopaque) void {
        qtc.QSpatialSound_NearFieldGainChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnNearFieldGainChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_Connect_NearFieldGainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#play)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Play(self: ?*anyopaque) void {
        qtc.QSpatialSound_Play(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#pause)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QSpatialSound_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#stop)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QSpatialSound_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSpatialSound_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSpatialSound_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSpatialSound, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspatialsound.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSpatialSound, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSpatialSound, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSpatialSound, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSpatialSound, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSpatialSound, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSpatialSound, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSpatialSound, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qspatialsound.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSpatialSound, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSpatialSound, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSpatialSound, obj: QtC.QObject ```
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
    /// ``` self: QtC.QSpatialSound, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QSpatialSound ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSpatialSound, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSpatialSound, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSpatialSound, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSpatialSound, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSpatialSound, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSpatialSound, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QSpatialSound, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSpatialSound, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSpatialSound_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSpatialSound_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSpatialSound_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSpatialSound_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSpatialSound_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSpatialSound_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSpatialSound_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSpatialSound_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSpatialSound_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSpatialSound_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSpatialSound_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSpatialSound_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSpatialSound_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSpatialSound_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSpatialSound_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSpatialSound_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSpatialSound_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSpatialSound_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSpatialSound_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QSpatialSound_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSpatialSound_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSpatialSound_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSpatialSound_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpatialSound_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpatialSound_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QSpatialSound_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSpatialSound_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSpatialSound_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSpatialSound_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSpatialSound, slot: fn (self: QtC.QSpatialSound, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#dtor.QSpatialSound)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSpatialSound ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSpatialSound_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qspatialsound.html#types
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
