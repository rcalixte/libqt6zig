const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Q3DObject = @import("libqt6").Q3DObject;
const Q3DScene = @import("libqt6").Q3DScene;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const q3dcamera_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html)
pub const Q3DCamera = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Q3DCamera,

    pub const _is_Q3DCamera = {};
    pub const _is_Q3DObject = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Q3DCamera object in C++ memory
    ///
    pub fn new() Q3DCamera {
        return .{ .ptr = qtc.Q3DCamera_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Q3DCamera object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) Q3DCamera {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Q3DCamera_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn metaObject(self: Q3DCamera) QMetaObject {
        return .{ .ptr = qtc.Q3DCamera_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Q3DCamera, callback: *const fn (Q3DCamera) callconv(.c) QMetaObject) void {
        qtc.Q3DCamera_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    pub fn superMetaObject(self: Q3DCamera) QMetaObject {
        return .{ .ptr = qtc.Q3DCamera_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Q3DCamera, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DCamera_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Q3DCamera, callback: *const fn (Q3DCamera, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Q3DCamera_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Q3DCamera, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DCamera_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Q3DCamera, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DCamera_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Q3DCamera, callback: *const fn (Q3DCamera, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Q3DCamera_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Q3DCamera, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DCamera_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.Q3DCamera_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DCamera.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xRotation` instead
    ///
    pub const XRotation = xRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#xRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn xRotation(self: Q3DCamera) f32 {
        return qtc.Q3DCamera_XRotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXRotation` instead
    ///
    pub const SetXRotation = setXRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setXRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` rotation: f32 `
    ///
    pub fn setXRotation(self: Q3DCamera, rotation: f32) void {
        qtc.Q3DCamera_SetXRotation(@ptrCast(self.ptr), @bitCast(rotation));
    }

    /// ### DEPRECATED: Use `yRotation` instead
    ///
    pub const YRotation = yRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#yRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn yRotation(self: Q3DCamera) f32 {
        return qtc.Q3DCamera_YRotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYRotation` instead
    ///
    pub const SetYRotation = setYRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setYRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` rotation: f32 `
    ///
    pub fn setYRotation(self: Q3DCamera, rotation: f32) void {
        qtc.Q3DCamera_SetYRotation(@ptrCast(self.ptr), @bitCast(rotation));
    }

    /// ### DEPRECATED: Use `wrapXRotation` instead
    ///
    pub const WrapXRotation = wrapXRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapXRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn wrapXRotation(self: Q3DCamera) bool {
        return qtc.Q3DCamera_WrapXRotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapXRotation` instead
    ///
    pub const SetWrapXRotation = setWrapXRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setWrapXRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` isEnabled: bool `
    ///
    pub fn setWrapXRotation(self: Q3DCamera, isEnabled: bool) void {
        qtc.Q3DCamera_SetWrapXRotation(@ptrCast(self.ptr), isEnabled);
    }

    /// ### DEPRECATED: Use `wrapYRotation` instead
    ///
    pub const WrapYRotation = wrapYRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapYRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn wrapYRotation(self: Q3DCamera) bool {
        return qtc.Q3DCamera_WrapYRotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapYRotation` instead
    ///
    pub const SetWrapYRotation = setWrapYRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setWrapYRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` isEnabled: bool `
    ///
    pub fn setWrapYRotation(self: Q3DCamera, isEnabled: bool) void {
        qtc.Q3DCamera_SetWrapYRotation(@ptrCast(self.ptr), isEnabled);
    }

    /// ### DEPRECATED: Use `copyValuesFrom` instead
    ///
    pub const CopyValuesFrom = copyValuesFrom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#copyValuesFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` source: Q3DObject `
    ///
    pub fn copyValuesFrom(self: Q3DCamera, source: anytype) void {
        comptime _ = @TypeOf(source)._is_Q3DObject;
        qtc.Q3DCamera_CopyValuesFrom(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onCopyValuesFrom` instead
    ///
    pub const OnCopyValuesFrom = onCopyValuesFrom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#copyValuesFrom)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, source: Q3DObject) callconv(.c) void `
    ///
    pub fn onCopyValuesFrom(self: Q3DCamera, callback: *const fn (Q3DCamera, Q3DObject) callconv(.c) void) void {
        qtc.Q3DCamera_OnCopyValuesFrom(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCopyValuesFrom` instead
    ///
    pub const SuperCopyValuesFrom = superCopyValuesFrom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#copyValuesFrom)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` source: Q3DObject `
    ///
    pub fn superCopyValuesFrom(self: Q3DCamera, source: anytype) void {
        comptime _ = @TypeOf(source)._is_Q3DObject;
        qtc.Q3DCamera_SuperCopyValuesFrom(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `cameraPreset` instead
    ///
    pub const CameraPreset = cameraPreset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#cameraPreset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ## Returns:
    ///
    /// ` q3dcamera_enums.CameraPreset `
    ///
    pub fn cameraPreset(self: Q3DCamera) i32 {
        return qtc.Q3DCamera_CameraPreset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCameraPreset` instead
    ///
    pub const SetCameraPreset = setCameraPreset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setCameraPreset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` preset: q3dcamera_enums.CameraPreset `
    ///
    pub fn setCameraPreset(self: Q3DCamera, preset: i32) void {
        qtc.Q3DCamera_SetCameraPreset(@ptrCast(self.ptr), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `zoomLevel` instead
    ///
    pub const ZoomLevel = zoomLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#zoomLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn zoomLevel(self: Q3DCamera) f32 {
        return qtc.Q3DCamera_ZoomLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZoomLevel` instead
    ///
    pub const SetZoomLevel = setZoomLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setZoomLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _zoomLevel: f32 `
    ///
    pub fn setZoomLevel(self: Q3DCamera, _zoomLevel: f32) void {
        qtc.Q3DCamera_SetZoomLevel(@ptrCast(self.ptr), @bitCast(_zoomLevel));
    }

    /// ### DEPRECATED: Use `minZoomLevel` instead
    ///
    pub const MinZoomLevel = minZoomLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#minZoomLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn minZoomLevel(self: Q3DCamera) f32 {
        return qtc.Q3DCamera_MinZoomLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinZoomLevel` instead
    ///
    pub const SetMinZoomLevel = setMinZoomLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setMinZoomLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _zoomLevel: f32 `
    ///
    pub fn setMinZoomLevel(self: Q3DCamera, _zoomLevel: f32) void {
        qtc.Q3DCamera_SetMinZoomLevel(@ptrCast(self.ptr), @bitCast(_zoomLevel));
    }

    /// ### DEPRECATED: Use `maxZoomLevel` instead
    ///
    pub const MaxZoomLevel = maxZoomLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#maxZoomLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn maxZoomLevel(self: Q3DCamera) f32 {
        return qtc.Q3DCamera_MaxZoomLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxZoomLevel` instead
    ///
    pub const SetMaxZoomLevel = setMaxZoomLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setMaxZoomLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _zoomLevel: f32 `
    ///
    pub fn setMaxZoomLevel(self: Q3DCamera, _zoomLevel: f32) void {
        qtc.Q3DCamera_SetMaxZoomLevel(@ptrCast(self.ptr), @bitCast(_zoomLevel));
    }

    /// ### DEPRECATED: Use `setCameraPosition` instead
    ///
    pub const SetCameraPosition = setCameraPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setCameraPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` horizontal: f32 `
    ///
    /// ` vertical: f32 `
    ///
    pub fn setCameraPosition(self: Q3DCamera, horizontal: f32, vertical: f32) void {
        qtc.Q3DCamera_SetCameraPosition(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn target(self: Q3DCamera) QVector3D {
        return .{ .ptr = qtc.Q3DCamera_Target(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTarget` instead
    ///
    pub const SetTarget = setTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _target: QVector3D `
    ///
    pub fn setTarget(self: Q3DCamera, _target: anytype) void {
        comptime _ = @TypeOf(_target)._is_QVector3D;
        qtc.Q3DCamera_SetTarget(@ptrCast(self.ptr), @ptrCast(_target.ptr));
    }

    /// ### DEPRECATED: Use `xRotationChanged` instead
    ///
    pub const XRotationChanged = xRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#xRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` rotation: f32 `
    ///
    pub fn xRotationChanged(self: Q3DCamera, rotation: f32) void {
        qtc.Q3DCamera_XRotationChanged(@ptrCast(self.ptr), @bitCast(rotation));
    }

    /// ### DEPRECATED: Use `onXRotationChanged` instead
    ///
    pub const OnXRotationChanged = onXRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#xRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, rotation: f32) callconv(.c) void `
    ///
    pub fn onXRotationChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, f32) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_XRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yRotationChanged` instead
    ///
    pub const YRotationChanged = yRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#yRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` rotation: f32 `
    ///
    pub fn yRotationChanged(self: Q3DCamera, rotation: f32) void {
        qtc.Q3DCamera_YRotationChanged(@ptrCast(self.ptr), @bitCast(rotation));
    }

    /// ### DEPRECATED: Use `onYRotationChanged` instead
    ///
    pub const OnYRotationChanged = onYRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#yRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, rotation: f32) callconv(.c) void `
    ///
    pub fn onYRotationChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, f32) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_YRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomLevelChanged` instead
    ///
    pub const ZoomLevelChanged = zoomLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#zoomLevelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _zoomLevel: f32 `
    ///
    pub fn zoomLevelChanged(self: Q3DCamera, _zoomLevel: f32) void {
        qtc.Q3DCamera_ZoomLevelChanged(@ptrCast(self.ptr), @bitCast(_zoomLevel));
    }

    /// ### DEPRECATED: Use `onZoomLevelChanged` instead
    ///
    pub const OnZoomLevelChanged = onZoomLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#zoomLevelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, zoomLevel: f32) callconv(.c) void `
    ///
    pub fn onZoomLevelChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, f32) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_ZoomLevelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cameraPresetChanged` instead
    ///
    pub const CameraPresetChanged = cameraPresetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#cameraPresetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` preset: q3dcamera_enums.CameraPreset `
    ///
    pub fn cameraPresetChanged(self: Q3DCamera, preset: i32) void {
        qtc.Q3DCamera_CameraPresetChanged(@ptrCast(self.ptr), @bitCast(preset));
    }

    /// ### DEPRECATED: Use `onCameraPresetChanged` instead
    ///
    pub const OnCameraPresetChanged = onCameraPresetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#cameraPresetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, preset: q3dcamera_enums.CameraPreset) callconv(.c) void `
    ///
    pub fn onCameraPresetChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, i32) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_CameraPresetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wrapXRotationChanged` instead
    ///
    pub const WrapXRotationChanged = wrapXRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapXRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` isEnabled: bool `
    ///
    pub fn wrapXRotationChanged(self: Q3DCamera, isEnabled: bool) void {
        qtc.Q3DCamera_WrapXRotationChanged(@ptrCast(self.ptr), isEnabled);
    }

    /// ### DEPRECATED: Use `onWrapXRotationChanged` instead
    ///
    pub const OnWrapXRotationChanged = onWrapXRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapXRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, isEnabled: bool) callconv(.c) void `
    ///
    pub fn onWrapXRotationChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, bool) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_WrapXRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wrapYRotationChanged` instead
    ///
    pub const WrapYRotationChanged = wrapYRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapYRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` isEnabled: bool `
    ///
    pub fn wrapYRotationChanged(self: Q3DCamera, isEnabled: bool) void {
        qtc.Q3DCamera_WrapYRotationChanged(@ptrCast(self.ptr), isEnabled);
    }

    /// ### DEPRECATED: Use `onWrapYRotationChanged` instead
    ///
    pub const OnWrapYRotationChanged = onWrapYRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#wrapYRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, isEnabled: bool) callconv(.c) void `
    ///
    pub fn onWrapYRotationChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, bool) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_WrapYRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `targetChanged` instead
    ///
    pub const TargetChanged = targetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#targetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _target: QVector3D `
    ///
    pub fn targetChanged(self: Q3DCamera, _target: anytype) void {
        comptime _ = @TypeOf(_target)._is_QVector3D;
        qtc.Q3DCamera_TargetChanged(@ptrCast(self.ptr), @ptrCast(_target.ptr));
    }

    /// ### DEPRECATED: Use `onTargetChanged` instead
    ///
    pub const OnTargetChanged = onTargetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#targetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, target: QVector3D) callconv(.c) void `
    ///
    pub fn onTargetChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, QVector3D) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_TargetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minZoomLevelChanged` instead
    ///
    pub const MinZoomLevelChanged = minZoomLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#minZoomLevelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _zoomLevel: f32 `
    ///
    pub fn minZoomLevelChanged(self: Q3DCamera, _zoomLevel: f32) void {
        qtc.Q3DCamera_MinZoomLevelChanged(@ptrCast(self.ptr), @bitCast(_zoomLevel));
    }

    /// ### DEPRECATED: Use `onMinZoomLevelChanged` instead
    ///
    pub const OnMinZoomLevelChanged = onMinZoomLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#minZoomLevelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, zoomLevel: f32) callconv(.c) void `
    ///
    pub fn onMinZoomLevelChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, f32) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_MinZoomLevelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxZoomLevelChanged` instead
    ///
    pub const MaxZoomLevelChanged = maxZoomLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#maxZoomLevelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _zoomLevel: f32 `
    ///
    pub fn maxZoomLevelChanged(self: Q3DCamera, _zoomLevel: f32) void {
        qtc.Q3DCamera_MaxZoomLevelChanged(@ptrCast(self.ptr), @bitCast(_zoomLevel));
    }

    /// ### DEPRECATED: Use `onMaxZoomLevelChanged` instead
    ///
    pub const OnMaxZoomLevelChanged = onMaxZoomLevelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#maxZoomLevelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, zoomLevel: f32) callconv(.c) void `
    ///
    pub fn onMaxZoomLevelChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, f32) callconv(.c) void) void {
        qtc.Q3DCamera_Connect_MaxZoomLevelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.Q3DCamera_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DCamera.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.Q3DCamera_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DCamera.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCameraPosition3` instead
    ///
    pub const SetCameraPosition3 = setCameraPosition3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#setCameraPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` horizontal: f32 `
    ///
    /// ` vertical: f32 `
    ///
    /// ` zoom: f32 `
    ///
    pub fn setCameraPosition3(self: Q3DCamera, horizontal: f32, vertical: f32, zoom: f32) void {
        qtc.Q3DCamera_SetCameraPosition3(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical), @bitCast(zoom));
    }

    /// ### DEPRECATED: Use `parentScene` instead
    ///
    pub const ParentScene = parentScene;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#parentScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn parentScene(self: Q3DCamera) Q3DScene {
        return .{ .ptr = qtc.Q3DObject_ParentScene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn position(self: Q3DCamera) QVector3D {
        return .{ .ptr = qtc.Q3DObject_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn setPosition(self: Q3DCamera, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.Q3DObject_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn positionChanged(self: Q3DCamera, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.Q3DObject_PositionChanged(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, position: QVector3D) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, QVector3D) callconv(.c) void) void {
        qtc.Q3DObject_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Q3DCamera, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DCamera.objectName: Memory allocation failed");
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
    /// ` self: Q3DCamera `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Q3DCamera, name: []const u8) void {
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
    /// ` self: Q3DCamera `
    ///
    pub fn isWidgetType(self: Q3DCamera) bool {
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
    /// ` self: Q3DCamera `
    ///
    pub fn isWindowType(self: Q3DCamera) bool {
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
    /// ` self: Q3DCamera `
    ///
    pub fn isQuickItemType(self: Q3DCamera) bool {
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
    /// ` self: Q3DCamera `
    ///
    pub fn signalsBlocked(self: Q3DCamera) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Q3DCamera, b: bool) bool {
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
    /// ` self: Q3DCamera `
    ///
    pub fn thread(self: Q3DCamera) QThread {
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
    /// ` self: Q3DCamera `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Q3DCamera, _thread: anytype) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Q3DCamera, interval: i32) i32 {
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
    /// ` self: Q3DCamera `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Q3DCamera, time: i64) i32 {
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
    /// ` self: Q3DCamera `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Q3DCamera, id: i32) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Q3DCamera, id: i32) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Q3DCamera, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Q3DCamera.children: Memory allocation failed");
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
    /// ` self: Q3DCamera `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Q3DCamera, _parent: anytype) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Q3DCamera, filterObj: anytype) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Q3DCamera, obj: anytype) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Q3DCamera, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Q3DCamera `
    ///
    pub fn disconnect3(self: Q3DCamera) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Q3DCamera, receiver: anytype) bool {
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
    /// ` self: Q3DCamera `
    ///
    pub fn dumpObjectTree(self: Q3DCamera) void {
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
    /// ` self: Q3DCamera `
    ///
    pub fn dumpObjectInfo(self: Q3DCamera) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Q3DCamera, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Q3DCamera, name: [:0]const u8) QVariant {
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
    /// ` self: Q3DCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Q3DCamera, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Q3DCamera.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Q3DCamera.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Q3DCamera `
    ///
    pub fn bindingStorage(self: Q3DCamera) QBindingStorage {
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
    /// ` self: Q3DCamera `
    ///
    pub fn bindingStorage2(self: Q3DCamera) QBindingStorage {
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
    /// ` self: Q3DCamera `
    ///
    pub fn destroyed(self: Q3DCamera) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Q3DCamera, callback: *const fn (Q3DCamera) callconv(.c) void) void {
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
    /// ` self: Q3DCamera `
    ///
    pub fn parent(self: Q3DCamera) QObject {
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
    /// ` self: Q3DCamera `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Q3DCamera, classname: [:0]const u8) bool {
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
    /// ` self: Q3DCamera `
    ///
    pub fn deleteLater(self: Q3DCamera) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Q3DCamera, interval: i32, timerType: i32) i32 {
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
    /// ` self: Q3DCamera `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Q3DCamera, time: i64, timerType: i32) i32 {
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
    /// ` self: Q3DCamera `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Q3DCamera, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Q3DCamera, signal: [:0]const u8) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Q3DCamera, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Q3DCamera, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Q3DCamera, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Q3DCamera `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Q3DCamera, param1: anytype) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Q3DCamera, callback: *const fn (Q3DCamera, QObject) callconv(.c) void) void {
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Q3DCamera, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DCamera_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Q3DCamera, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DCamera_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Q3DCamera, callback: *const fn (Q3DCamera, QEvent) callconv(.c) bool) void {
        qtc.Q3DCamera_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Q3DCamera, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DCamera_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Q3DCamera, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DCamera_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Q3DCamera, callback: *const fn (Q3DCamera, QObject, QEvent) callconv(.c) bool) void {
        qtc.Q3DCamera_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Q3DCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DCamera_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Q3DCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DCamera_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Q3DCamera, callback: *const fn (Q3DCamera, QTimerEvent) callconv(.c) void) void {
        qtc.Q3DCamera_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Q3DCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DCamera_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Q3DCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DCamera_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Q3DCamera, callback: *const fn (Q3DCamera, QChildEvent) callconv(.c) void) void {
        qtc.Q3DCamera_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Q3DCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DCamera_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Q3DCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DCamera_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Q3DCamera, callback: *const fn (Q3DCamera, QEvent) callconv(.c) void) void {
        qtc.Q3DCamera_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Q3DCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DCamera_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Q3DCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DCamera_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Q3DCamera, callback: *const fn (Q3DCamera, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DCamera_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Q3DCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DCamera_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Q3DCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DCamera_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DCamera`
    ///
    /// ` callback: *const fn (self: Q3DCamera, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Q3DCamera, callback: *const fn (Q3DCamera, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DCamera_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDirty` instead
    ///
    pub const SetDirty = setDirty;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#setDirty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    /// ` dirty: bool `
    ///
    pub fn setDirty(self: Q3DCamera, dirty: bool) void {
        qtc.Q3DCamera_SetDirty(@ptrCast(self.ptr), dirty);
    }

    /// ### DEPRECATED: Use `isDirty` instead
    ///
    pub const IsDirty = isDirty;

    /// Inherited from Q3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dobject.html#isDirty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn isDirty(self: Q3DCamera) bool {
        return qtc.Q3DCamera_IsDirty(@ptrCast(self.ptr));
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
    /// ` self: Q3DCamera `
    ///
    pub fn sender(self: Q3DCamera) QObject {
        return .{ .ptr = qtc.Q3DCamera_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Q3DCamera `
    ///
    pub fn senderSignalIndex(self: Q3DCamera) i32 {
        return qtc.Q3DCamera_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Q3DCamera, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Q3DCamera_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Q3DCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Q3DCamera, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Q3DCamera_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DCamera `
    ///
    /// ` callback: *const fn (self: Q3DCamera, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Q3DCamera, callback: *const fn (Q3DCamera, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#dtor.Q3DCamera)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Q3DCamera `
    ///
    pub fn delete(self: Q3DCamera) void {
        qtc.Q3DCamera_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/q3dcamera-qtdatavis.html#public-types)
pub const enums = struct {
    pub const CameraPreset = enum {
        pub const CameraPresetNone: i32 = -1;
        pub const CameraPresetFrontLow: i32 = 0;
        pub const CameraPresetFront: i32 = 1;
        pub const CameraPresetFrontHigh: i32 = 2;
        pub const CameraPresetLeftLow: i32 = 3;
        pub const CameraPresetLeft: i32 = 4;
        pub const CameraPresetLeftHigh: i32 = 5;
        pub const CameraPresetRightLow: i32 = 6;
        pub const CameraPresetRight: i32 = 7;
        pub const CameraPresetRightHigh: i32 = 8;
        pub const CameraPresetBehindLow: i32 = 9;
        pub const CameraPresetBehind: i32 = 10;
        pub const CameraPresetBehindHigh: i32 = 11;
        pub const CameraPresetIsometricLeft: i32 = 12;
        pub const CameraPresetIsometricLeftHigh: i32 = 13;
        pub const CameraPresetIsometricRight: i32 = 14;
        pub const CameraPresetIsometricRightHigh: i32 = 15;
        pub const CameraPresetDirectlyAbove: i32 = 16;
        pub const CameraPresetDirectlyAboveCW45: i32 = 17;
        pub const CameraPresetDirectlyAboveCCW45: i32 = 18;
        pub const CameraPresetFrontBelow: i32 = 19;
        pub const CameraPresetLeftBelow: i32 = 20;
        pub const CameraPresetRightBelow: i32 = 21;
        pub const CameraPresetBehindBelow: i32 = 22;
        pub const CameraPresetDirectlyBelow: i32 = 23;
    };
};
