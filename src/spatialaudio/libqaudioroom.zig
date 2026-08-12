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
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const qaudioroom_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html)
pub const QAudioRoom = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAudioRoom,

    pub const _is_QAudioRoom = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAudioRoom object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: QAudioEngine `
    ///
    pub fn new(engine: anytype) QAudioRoom {
        comptime _ = @TypeOf(engine)._is_QAudioEngine;
        return .{ .ptr = qtc.QAudioRoom_new(@ptrCast(engine.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn metaObject(self: QAudioRoom) QMetaObject {
        return .{ .ptr = qtc.QAudioRoom_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QAudioRoom, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAudioRoom_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    pub fn superMetaObject(self: QAudioRoom) QMetaObject {
        return .{ .ptr = qtc.QAudioRoom_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAudioRoom, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAudioRoom_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QAudioRoom, callback: *const fn (QAudioRoom, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAudioRoom_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QAudioRoom, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAudioRoom_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAudioRoom, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAudioRoom_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QAudioRoom, callback: *const fn (QAudioRoom, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAudioRoom_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QAudioRoom, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAudioRoom_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAudioRoom.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` pos: QVector3D `
    ///
    pub fn setPosition(self: QAudioRoom, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QVector3D;
        qtc.QAudioRoom_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn position(self: QAudioRoom) QVector3D {
        return .{ .ptr = qtc.QAudioRoom_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDimensions` instead
    ///
    pub const SetDimensions = setDimensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setDimensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` dim: QVector3D `
    ///
    pub fn setDimensions(self: QAudioRoom, dim: anytype) void {
        comptime _ = @TypeOf(dim)._is_QVector3D;
        qtc.QAudioRoom_SetDimensions(@ptrCast(self.ptr), @ptrCast(dim.ptr));
    }

    /// ### DEPRECATED: Use `dimensions` instead
    ///
    pub const Dimensions = dimensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dimensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn dimensions(self: QAudioRoom) QVector3D {
        return .{ .ptr = qtc.QAudioRoom_Dimensions(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` q: QQuaternion `
    ///
    pub fn setRotation(self: QAudioRoom, q: anytype) void {
        comptime _ = @TypeOf(q)._is_QQuaternion;
        qtc.QAudioRoom_SetRotation(@ptrCast(self.ptr), @ptrCast(q.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn rotation(self: QAudioRoom) QQuaternion {
        return .{ .ptr = qtc.QAudioRoom_Rotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWallMaterial` instead
    ///
    pub const SetWallMaterial = setWallMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setWallMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` wall: qaudioroom_enums.Wall `
    ///
    /// ` material: qaudioroom_enums.Material `
    ///
    pub fn setWallMaterial(self: QAudioRoom, wall: i32, material: i32) void {
        qtc.QAudioRoom_SetWallMaterial(@ptrCast(self.ptr), @bitCast(wall), @bitCast(material));
    }

    /// ### DEPRECATED: Use `wallMaterial` instead
    ///
    pub const WallMaterial = wallMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#wallMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` wall: qaudioroom_enums.Wall `
    ///
    /// ## Returns:
    ///
    /// ` qaudioroom_enums.Material `
    ///
    pub fn wallMaterial(self: QAudioRoom, wall: i32) i32 {
        return qtc.QAudioRoom_WallMaterial(@ptrCast(self.ptr), @bitCast(wall));
    }

    /// ### DEPRECATED: Use `setReflectionGain` instead
    ///
    pub const SetReflectionGain = setReflectionGain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReflectionGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` factor: f32 `
    ///
    pub fn setReflectionGain(self: QAudioRoom, factor: f32) void {
        qtc.QAudioRoom_SetReflectionGain(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `reflectionGain` instead
    ///
    pub const ReflectionGain = reflectionGain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reflectionGain(self: QAudioRoom) f32 {
        return qtc.QAudioRoom_ReflectionGain(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReverbGain` instead
    ///
    pub const SetReverbGain = setReverbGain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReverbGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` factor: f32 `
    ///
    pub fn setReverbGain(self: QAudioRoom, factor: f32) void {
        qtc.QAudioRoom_SetReverbGain(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `reverbGain` instead
    ///
    pub const ReverbGain = reverbGain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbGain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reverbGain(self: QAudioRoom) f32 {
        return qtc.QAudioRoom_ReverbGain(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReverbTime` instead
    ///
    pub const SetReverbTime = setReverbTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReverbTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` factor: f32 `
    ///
    pub fn setReverbTime(self: QAudioRoom, factor: f32) void {
        qtc.QAudioRoom_SetReverbTime(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `reverbTime` instead
    ///
    pub const ReverbTime = reverbTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reverbTime(self: QAudioRoom) f32 {
        return qtc.QAudioRoom_ReverbTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReverbBrightness` instead
    ///
    pub const SetReverbBrightness = setReverbBrightness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReverbBrightness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` factor: f32 `
    ///
    pub fn setReverbBrightness(self: QAudioRoom, factor: f32) void {
        qtc.QAudioRoom_SetReverbBrightness(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `reverbBrightness` instead
    ///
    pub const ReverbBrightness = reverbBrightness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reverbBrightness(self: QAudioRoom) f32 {
        return qtc.QAudioRoom_ReverbBrightness(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn positionChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_PositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dimensionsChanged` instead
    ///
    pub const DimensionsChanged = dimensionsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn dimensionsChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_DimensionsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDimensionsChanged` instead
    ///
    pub const OnDimensionsChanged = onDimensionsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onDimensionsChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_DimensionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn rotationChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wallsChanged` instead
    ///
    pub const WallsChanged = wallsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn wallsChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_WallsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWallsChanged` instead
    ///
    pub const OnWallsChanged = onWallsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onWallsChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_WallsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reflectionGainChanged` instead
    ///
    pub const ReflectionGainChanged = reflectionGainChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reflectionGainChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_ReflectionGainChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReflectionGainChanged` instead
    ///
    pub const OnReflectionGainChanged = onReflectionGainChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onReflectionGainChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReflectionGainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverbGainChanged` instead
    ///
    pub const ReverbGainChanged = reverbGainChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reverbGainChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_ReverbGainChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReverbGainChanged` instead
    ///
    pub const OnReverbGainChanged = onReverbGainChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onReverbGainChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReverbGainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverbTimeChanged` instead
    ///
    pub const ReverbTimeChanged = reverbTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reverbTimeChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_ReverbTimeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReverbTimeChanged` instead
    ///
    pub const OnReverbTimeChanged = onReverbTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onReverbTimeChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReverbTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverbBrightnessChanged` instead
    ///
    pub const ReverbBrightnessChanged = reverbBrightnessChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn reverbBrightnessChanged(self: QAudioRoom) void {
        qtc.QAudioRoom_ReverbBrightnessChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReverbBrightnessChanged` instead
    ///
    pub const OnReverbBrightnessChanged = onReverbBrightnessChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onReverbBrightnessChanged(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
        qtc.QAudioRoom_Connect_ReverbBrightnessChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAudioRoom.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAudioRoom.tr3: Memory allocation failed");
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
    /// ` self: QAudioRoom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAudioRoom, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAudioRoom.objectName: Memory allocation failed");
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
    /// ` self: QAudioRoom `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAudioRoom, name: []const u8) void {
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
    /// ` self: QAudioRoom `
    ///
    pub fn isWidgetType(self: QAudioRoom) bool {
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
    /// ` self: QAudioRoom `
    ///
    pub fn isWindowType(self: QAudioRoom) bool {
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
    /// ` self: QAudioRoom `
    ///
    pub fn isQuickItemType(self: QAudioRoom) bool {
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
    /// ` self: QAudioRoom `
    ///
    pub fn signalsBlocked(self: QAudioRoom) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAudioRoom, b: bool) bool {
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
    /// ` self: QAudioRoom `
    ///
    pub fn thread(self: QAudioRoom) QThread {
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
    /// ` self: QAudioRoom `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAudioRoom, _thread: anytype) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAudioRoom, interval: i32) i32 {
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
    /// ` self: QAudioRoom `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAudioRoom, time: i64) i32 {
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
    /// ` self: QAudioRoom `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAudioRoom, id: i32) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAudioRoom, id: i32) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAudioRoom, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAudioRoom.children: Memory allocation failed");
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
    /// ` self: QAudioRoom `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAudioRoom, _parent: anytype) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAudioRoom, filterObj: anytype) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAudioRoom, obj: anytype) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAudioRoom, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAudioRoom `
    ///
    pub fn disconnect3(self: QAudioRoom) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAudioRoom, receiver: anytype) bool {
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
    /// ` self: QAudioRoom `
    ///
    pub fn dumpObjectTree(self: QAudioRoom) void {
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
    /// ` self: QAudioRoom `
    ///
    pub fn dumpObjectInfo(self: QAudioRoom) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAudioRoom, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAudioRoom, name: [:0]const u8) QVariant {
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
    /// ` self: QAudioRoom `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAudioRoom, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAudioRoom.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAudioRoom.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAudioRoom `
    ///
    pub fn bindingStorage(self: QAudioRoom) QBindingStorage {
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
    /// ` self: QAudioRoom `
    ///
    pub fn bindingStorage2(self: QAudioRoom) QBindingStorage {
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
    /// ` self: QAudioRoom `
    ///
    pub fn destroyed(self: QAudioRoom) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAudioRoom, callback: *const fn (QAudioRoom) callconv(.c) void) void {
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
    /// ` self: QAudioRoom `
    ///
    pub fn parent(self: QAudioRoom) QObject {
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
    /// ` self: QAudioRoom `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAudioRoom, classname: [:0]const u8) bool {
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
    /// ` self: QAudioRoom `
    ///
    pub fn deleteLater(self: QAudioRoom) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAudioRoom, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAudioRoom `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAudioRoom, time: i64, timerType: i32) i32 {
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
    /// ` self: QAudioRoom `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAudioRoom, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAudioRoom, signal: [:0]const u8) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAudioRoom, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAudioRoom, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAudioRoom, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAudioRoom `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAudioRoom, param1: anytype) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAudioRoom, callback: *const fn (QAudioRoom, QObject) callconv(.c) void) void {
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAudioRoom, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAudioRoom_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QAudioRoom, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAudioRoom_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QAudioRoom, callback: *const fn (QAudioRoom, QEvent) callconv(.c) bool) void {
        qtc.QAudioRoom_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAudioRoom, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAudioRoom_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QAudioRoom, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAudioRoom_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QAudioRoom, callback: *const fn (QAudioRoom, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAudioRoom_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QAudioRoom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAudioRoom_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QAudioRoom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAudioRoom_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QAudioRoom, callback: *const fn (QAudioRoom, QTimerEvent) callconv(.c) void) void {
        qtc.QAudioRoom_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QAudioRoom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAudioRoom_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QAudioRoom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAudioRoom_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QAudioRoom, callback: *const fn (QAudioRoom, QChildEvent) callconv(.c) void) void {
        qtc.QAudioRoom_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QAudioRoom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAudioRoom_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QAudioRoom, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAudioRoom_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QAudioRoom, callback: *const fn (QAudioRoom, QEvent) callconv(.c) void) void {
        qtc.QAudioRoom_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QAudioRoom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAudioRoom_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QAudioRoom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAudioRoom_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QAudioRoom, callback: *const fn (QAudioRoom, QMetaMethod) callconv(.c) void) void {
        qtc.QAudioRoom_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QAudioRoom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAudioRoom_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QAudioRoom, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAudioRoom_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QAudioRoom, callback: *const fn (QAudioRoom, QMetaMethod) callconv(.c) void) void {
        qtc.QAudioRoom_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    pub fn sender(self: QAudioRoom) QObject {
        return .{ .ptr = qtc.QAudioRoom_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QAudioRoom `
    ///
    pub fn superSender(self: QAudioRoom) QObject {
        return .{ .ptr = qtc.QAudioRoom_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QAudioRoom, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAudioRoom_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    pub fn senderSignalIndex(self: QAudioRoom) i32 {
        return qtc.QAudioRoom_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAudioRoom `
    ///
    pub fn superSenderSignalIndex(self: QAudioRoom) i32 {
        return qtc.QAudioRoom_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QAudioRoom, callback: *const fn () callconv(.c) i32) void {
        qtc.QAudioRoom_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QAudioRoom, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAudioRoom_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QAudioRoom, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAudioRoom_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QAudioRoom, callback: *const fn (QAudioRoom, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAudioRoom_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QAudioRoom, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAudioRoom_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAudioRoom `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QAudioRoom, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAudioRoom_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAudioRoom`
    ///
    /// ` callback: *const fn (self: QAudioRoom, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QAudioRoom, callback: *const fn (QAudioRoom, QMetaMethod) callconv(.c) bool) void {
        qtc.QAudioRoom_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAudioRoom `
    ///
    /// ` callback: *const fn (self: QAudioRoom, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAudioRoom, callback: *const fn (QAudioRoom, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dtor.QAudioRoom)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAudioRoom `
    ///
    pub fn delete(self: QAudioRoom) void {
        qtc.QAudioRoom_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#public-types)
pub const enums = struct {
    pub const Material = enum(i32) {
        pub const Transparent: i32 = 0;
        pub const AcousticCeilingTiles: i32 = 1;
        pub const BrickBare: i32 = 2;
        pub const BrickPainted: i32 = 3;
        pub const ConcreteBlockCoarse: i32 = 4;
        pub const ConcreteBlockPainted: i32 = 5;
        pub const CurtainHeavy: i32 = 6;
        pub const FiberGlassInsulation: i32 = 7;
        pub const GlassThin: i32 = 8;
        pub const GlassThick: i32 = 9;
        pub const Grass: i32 = 10;
        pub const LinoleumOnConcrete: i32 = 11;
        pub const Marble: i32 = 12;
        pub const Metal: i32 = 13;
        pub const ParquetOnConcrete: i32 = 14;
        pub const PlasterRough: i32 = 15;
        pub const PlasterSmooth: i32 = 16;
        pub const PlywoodPanel: i32 = 17;
        pub const PolishedConcreteOrTile: i32 = 18;
        pub const Sheetrock: i32 = 19;
        pub const WaterOrIceSurface: i32 = 20;
        pub const WoodCeiling: i32 = 21;
        pub const WoodPanel: i32 = 22;
        pub const UniformMaterial: i32 = 23;
    };

    pub const Wall = enum(i32) {
        pub const LeftWall: i32 = 0;
        pub const RightWall: i32 = 1;
        pub const Floor: i32 = 2;
        pub const Ceiling: i32 = 3;
        pub const FrontWall: i32 = 4;
        pub const BackWall: i32 = 5;
    };
};
