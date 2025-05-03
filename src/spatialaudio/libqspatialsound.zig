const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qspatialsound_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qspatialsound.html
pub const qspatialsound = struct {
    /// New constructs a new QSpatialSound object.
    ///
    /// ``` engine: ?*C.QAudioEngine ```
    pub fn New(engine: ?*anyopaque) ?*C.QSpatialSound {
        return C.QSpatialSound_new(@ptrCast(engine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSpatialSound_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSpatialSound_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSpatialSound_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSpatialSound_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSpatialSound, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSpatialSound_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSpatialSound_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
    ///
    /// ``` self: ?*C.QSpatialSound, url: ?*C.QUrl ```
    pub fn SetSource(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QSpatialSound_SetSource(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#source)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Source(self: ?*anyopaque) ?*C.QUrl {
        return C.QSpatialSound_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loops)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Loops(self: ?*anyopaque) i32 {
        return C.QSpatialSound_Loops(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
    ///
    /// ``` self: ?*C.QSpatialSound, loops: i32 ```
    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        C.QSpatialSound_SetLoops(@ptrCast(self), @intCast(loops));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn AutoPlay(self: ?*anyopaque) bool {
        return C.QSpatialSound_AutoPlay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
    ///
    /// ``` self: ?*C.QSpatialSound, autoPlay: bool ```
    pub fn SetAutoPlay(self: ?*anyopaque, autoPlay: bool) void {
        C.QSpatialSound_SetAutoPlay(@ptrCast(self), autoPlay);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
    ///
    /// ``` self: ?*C.QSpatialSound, pos: C.QVector3D ```
    pub fn SetPosition(self: ?*anyopaque, pos: C.QVector3D) void {
        C.QSpatialSound_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#position)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Position(self: ?*anyopaque) ?*C.QVector3D {
        return C.QSpatialSound_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
    ///
    /// ``` self: ?*C.QSpatialSound, q: ?*C.QQuaternion ```
    pub fn SetRotation(self: ?*anyopaque, q: ?*anyopaque) void {
        C.QSpatialSound_SetRotation(@ptrCast(self), @ptrCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Rotation(self: ?*anyopaque) ?*C.QQuaternion {
        return C.QSpatialSound_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
    ///
    /// ``` self: ?*C.QSpatialSound, volume: f32 ```
    pub fn SetVolume(self: ?*anyopaque, volume: f32) void {
        C.QSpatialSound_SetVolume(@ptrCast(self), @floatCast(volume));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volume)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Volume(self: ?*anyopaque) f32 {
        return C.QSpatialSound_Volume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
    ///
    /// ``` self: ?*C.QSpatialSound, model: qspatialsound_enums.DistanceModel ```
    pub fn SetDistanceModel(self: ?*anyopaque, model: i64) void {
        C.QSpatialSound_SetDistanceModel(@ptrCast(self), @intCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModel)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DistanceModel(self: ?*anyopaque) i64 {
        return C.QSpatialSound_DistanceModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
    ///
    /// ``` self: ?*C.QSpatialSound, size: f32 ```
    pub fn SetSize(self: ?*anyopaque, size: f32) void {
        C.QSpatialSound_SetSize(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#size)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Size(self: ?*anyopaque) f32 {
        return C.QSpatialSound_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
    ///
    /// ``` self: ?*C.QSpatialSound, cutoff: f32 ```
    pub fn SetDistanceCutoff(self: ?*anyopaque, cutoff: f32) void {
        C.QSpatialSound_SetDistanceCutoff(@ptrCast(self), @floatCast(cutoff));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DistanceCutoff(self: ?*anyopaque) f32 {
        return C.QSpatialSound_DistanceCutoff(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
    ///
    /// ``` self: ?*C.QSpatialSound, attenuation: f32 ```
    pub fn SetManualAttenuation(self: ?*anyopaque, attenuation: f32) void {
        C.QSpatialSound_SetManualAttenuation(@ptrCast(self), @floatCast(attenuation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn ManualAttenuation(self: ?*anyopaque) f32 {
        return C.QSpatialSound_ManualAttenuation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
    ///
    /// ``` self: ?*C.QSpatialSound, occlusion: f32 ```
    pub fn SetOcclusionIntensity(self: ?*anyopaque, occlusion: f32) void {
        C.QSpatialSound_SetOcclusionIntensity(@ptrCast(self), @floatCast(occlusion));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn OcclusionIntensity(self: ?*anyopaque) f32 {
        return C.QSpatialSound_OcclusionIntensity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
    ///
    /// ``` self: ?*C.QSpatialSound, alpha: f32 ```
    pub fn SetDirectivity(self: ?*anyopaque, alpha: f32) void {
        C.QSpatialSound_SetDirectivity(@ptrCast(self), @floatCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Directivity(self: ?*anyopaque) f32 {
        return C.QSpatialSound_Directivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
    ///
    /// ``` self: ?*C.QSpatialSound, alpha: f32 ```
    pub fn SetDirectivityOrder(self: ?*anyopaque, alpha: f32) void {
        C.QSpatialSound_SetDirectivityOrder(@ptrCast(self), @floatCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DirectivityOrder(self: ?*anyopaque) f32 {
        return C.QSpatialSound_DirectivityOrder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
    ///
    /// ``` self: ?*C.QSpatialSound, gain: f32 ```
    pub fn SetNearFieldGain(self: ?*anyopaque, gain: f32) void {
        C.QSpatialSound_SetNearFieldGain(@ptrCast(self), @floatCast(gain));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn NearFieldGain(self: ?*anyopaque) f32 {
        return C.QSpatialSound_NearFieldGain(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#engine)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Engine(self: ?*anyopaque) ?*C.QAudioEngine {
        return C.QSpatialSound_Engine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn SourceChanged(self: ?*anyopaque) void {
        C.QSpatialSound_SourceChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_SourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn LoopsChanged(self: ?*anyopaque) void {
        C.QSpatialSound_LoopsChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnLoopsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_LoopsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn AutoPlayChanged(self: ?*anyopaque) void {
        C.QSpatialSound_AutoPlayChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnAutoPlayChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_AutoPlayChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn PositionChanged(self: ?*anyopaque) void {
        C.QSpatialSound_PositionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_PositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        C.QSpatialSound_RotationChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_RotationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn VolumeChanged(self: ?*anyopaque) void {
        C.QSpatialSound_VolumeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnVolumeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_VolumeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DistanceModelChanged(self: ?*anyopaque) void {
        C.QSpatialSound_DistanceModelChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnDistanceModelChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_DistanceModelChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn SizeChanged(self: ?*anyopaque) void {
        C.QSpatialSound_SizeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_SizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DistanceCutoffChanged(self: ?*anyopaque) void {
        C.QSpatialSound_DistanceCutoffChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnDistanceCutoffChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_DistanceCutoffChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn ManualAttenuationChanged(self: ?*anyopaque) void {
        C.QSpatialSound_ManualAttenuationChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnManualAttenuationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_ManualAttenuationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn OcclusionIntensityChanged(self: ?*anyopaque) void {
        C.QSpatialSound_OcclusionIntensityChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnOcclusionIntensityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_OcclusionIntensityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DirectivityChanged(self: ?*anyopaque) void {
        C.QSpatialSound_DirectivityChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnDirectivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_DirectivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DirectivityOrderChanged(self: ?*anyopaque) void {
        C.QSpatialSound_DirectivityOrderChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnDirectivityOrderChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_DirectivityOrderChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn NearFieldGainChanged(self: ?*anyopaque) void {
        C.QSpatialSound_NearFieldGainChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound) callconv(.c) void ```
    pub fn OnNearFieldGainChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_Connect_NearFieldGainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#play)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Play(self: ?*anyopaque) void {
        C.QSpatialSound_Play(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#pause)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QSpatialSound_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#stop)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QSpatialSound_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSpatialSound_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QSpatialSound_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QSpatialSound, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSpatialSound, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSpatialSound, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSpatialSound, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSpatialSound, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSpatialSound, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSpatialSound, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSpatialSound, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSpatialSound, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSpatialSound, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QSpatialSound, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSpatialSound, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSpatialSound, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSpatialSound, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSpatialSound ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSpatialSound ```
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
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSpatialSound, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSpatialSound, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QSpatialSound, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSpatialSound, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSpatialSound_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSpatialSound_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSpatialSound_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSpatialSound_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSpatialSound_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSpatialSound_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSpatialSound_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSpatialSound_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSpatialSound_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSpatialSound_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSpatialSound_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSpatialSound_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSpatialSound_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSpatialSound_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSpatialSound_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSpatialSound_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSpatialSound_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSpatialSound_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSpatialSound_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSpatialSound_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSpatialSound_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSpatialSound_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSpatialSound_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSpatialSound_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSpatialSound_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSpatialSound_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSpatialSound_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSpatialSound_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSpatialSound, slot: fn (?*C.QSpatialSound, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSpatialSound_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSpatialSound ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSpatialSound_Delete(@ptrCast(self));
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
