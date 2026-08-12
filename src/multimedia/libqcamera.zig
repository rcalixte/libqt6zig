const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QCameraDevice = @import("libqt6").QCameraDevice;
const QCameraFormat = @import("libqt6").QCameraFormat;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMediaCaptureSession = @import("libqt6").QMediaCaptureSession;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qcamera_enums = enums;
const qcameradevice_enums = @import("libqcameradevice.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html)
pub const QCamera = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCamera,

    pub const _is_QCamera = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCamera object in C++ memory
    ///
    pub fn new() QCamera {
        return .{ .ptr = qtc.QCamera_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCamera object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _cameraDevice: QCameraDevice `
    ///
    pub fn new2(_cameraDevice: anytype) QCamera {
        comptime _ = @TypeOf(_cameraDevice)._is_QCameraDevice;
        return .{ .ptr = qtc.QCamera_new2(@ptrCast(_cameraDevice.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCamera object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` position: qcameradevice_enums.Position `
    ///
    pub fn new3(position: i32) QCamera {
        return .{ .ptr = qtc.QCamera_new3(@bitCast(position)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCamera object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QCamera {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCamera_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCamera object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _cameraDevice: QCameraDevice `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_cameraDevice: anytype, _parent: anytype) QCamera {
        comptime _ = @TypeOf(_cameraDevice)._is_QCameraDevice;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCamera_new5(@ptrCast(_cameraDevice.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCamera object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` position: qcameradevice_enums.Position `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(position: i32, _parent: anytype) QCamera {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCamera_new6(@bitCast(position), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn metaObject(self: QCamera) QMetaObject {
        return .{ .ptr = qtc.QCamera_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCamera, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCamera_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    pub fn superMetaObject(self: QCamera) QMetaObject {
        return .{ .ptr = qtc.QCamera_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCamera, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCamera_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCamera, callback: *const fn (QCamera, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCamera_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCamera, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCamera_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QCamera, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCamera_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCamera, callback: *const fn (QCamera, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCamera_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QCamera, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCamera_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCamera.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAvailable` instead
    ///
    pub const IsAvailable = isAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn isAvailable(self: QCamera) bool {
        return qtc.QCamera_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn isActive(self: QCamera) bool {
        return qtc.QCamera_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `captureSession` instead
    ///
    pub const CaptureSession = captureSession;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn captureSession(self: QCamera) QMediaCaptureSession {
        return .{ .ptr = qtc.QCamera_CaptureSession(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cameraDevice` instead
    ///
    pub const CameraDevice = cameraDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn cameraDevice(self: QCamera) QCameraDevice {
        return .{ .ptr = qtc.QCamera_CameraDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCameraDevice` instead
    ///
    pub const SetCameraDevice = setCameraDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` _cameraDevice: QCameraDevice `
    ///
    pub fn setCameraDevice(self: QCamera, _cameraDevice: anytype) void {
        comptime _ = @TypeOf(_cameraDevice)._is_QCameraDevice;
        qtc.QCamera_SetCameraDevice(@ptrCast(self.ptr), @ptrCast(_cameraDevice.ptr));
    }

    /// ### DEPRECATED: Use `cameraFormat` instead
    ///
    pub const CameraFormat = cameraFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn cameraFormat(self: QCamera) QCameraFormat {
        return .{ .ptr = qtc.QCamera_CameraFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCameraFormat` instead
    ///
    pub const SetCameraFormat = setCameraFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` format: QCameraFormat `
    ///
    pub fn setCameraFormat(self: QCamera, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QCameraFormat;
        qtc.QCamera_SetCameraFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.Error `
    ///
    pub fn error0(self: QCamera) i32 {
        return qtc.QCamera_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QCamera, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCamera_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCamera.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedFeatures` instead
    ///
    pub const SupportedFeatures = supportedFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` flag of qcamera_enums.Feature `
    ///
    pub fn supportedFeatures(self: QCamera) i32 {
        return qtc.QCamera_SupportedFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `focusMode` instead
    ///
    pub const FocusMode = focusMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.FocusMode `
    ///
    pub fn focusMode(self: QCamera) i32 {
        return qtc.QCamera_FocusMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusMode` instead
    ///
    pub const SetFocusMode = setFocusMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FocusMode `
    ///
    pub fn setFocusMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetFocusMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `isFocusModeSupported` instead
    ///
    pub const IsFocusModeSupported = isFocusModeSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FocusMode `
    ///
    pub fn isFocusModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsFocusModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `focusPoint` instead
    ///
    pub const FocusPoint = focusPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn focusPoint(self: QCamera) QPointF {
        return .{ .ptr = qtc.QCamera_FocusPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `customFocusPoint` instead
    ///
    pub const CustomFocusPoint = customFocusPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn customFocusPoint(self: QCamera) QPointF {
        return .{ .ptr = qtc.QCamera_CustomFocusPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCustomFocusPoint` instead
    ///
    pub const SetCustomFocusPoint = setCustomFocusPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` point: QPointF `
    ///
    pub fn setCustomFocusPoint(self: QCamera, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QCamera_SetCustomFocusPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setFocusDistance` instead
    ///
    pub const SetFocusDistance = setFocusDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` d: f32 `
    ///
    pub fn setFocusDistance(self: QCamera, d: f32) void {
        qtc.QCamera_SetFocusDistance(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### DEPRECATED: Use `focusDistance` instead
    ///
    pub const FocusDistance = focusDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn focusDistance(self: QCamera) f32 {
        return qtc.QCamera_FocusDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumZoomFactor` instead
    ///
    pub const MinimumZoomFactor = minimumZoomFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn minimumZoomFactor(self: QCamera) f32 {
        return qtc.QCamera_MinimumZoomFactor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumZoomFactor` instead
    ///
    pub const MaximumZoomFactor = maximumZoomFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn maximumZoomFactor(self: QCamera) f32 {
        return qtc.QCamera_MaximumZoomFactor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomFactor` instead
    ///
    pub const ZoomFactor = zoomFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn zoomFactor(self: QCamera) f32 {
        return qtc.QCamera_ZoomFactor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZoomFactor` instead
    ///
    pub const SetZoomFactor = setZoomFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` factor: f32 `
    ///
    pub fn setZoomFactor(self: QCamera, factor: f32) void {
        qtc.QCamera_SetZoomFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `flashMode` instead
    ///
    pub const FlashMode = flashMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.FlashMode `
    ///
    pub fn flashMode(self: QCamera) i32 {
        return qtc.QCamera_FlashMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFlashModeSupported` instead
    ///
    pub const IsFlashModeSupported = isFlashModeSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FlashMode `
    ///
    pub fn isFlashModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsFlashModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `isFlashReady` instead
    ///
    pub const IsFlashReady = isFlashReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn isFlashReady(self: QCamera) bool {
        return qtc.QCamera_IsFlashReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `torchMode` instead
    ///
    pub const TorchMode = torchMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.TorchMode `
    ///
    pub fn torchMode(self: QCamera) i32 {
        return qtc.QCamera_TorchMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTorchModeSupported` instead
    ///
    pub const IsTorchModeSupported = isTorchModeSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.TorchMode `
    ///
    pub fn isTorchModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsTorchModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `exposureMode` instead
    ///
    pub const ExposureMode = exposureMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.ExposureMode `
    ///
    pub fn exposureMode(self: QCamera) i32 {
        return qtc.QCamera_ExposureMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExposureModeSupported` instead
    ///
    pub const IsExposureModeSupported = isExposureModeSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.ExposureMode `
    ///
    pub fn isExposureModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsExposureModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `exposureCompensation` instead
    ///
    pub const ExposureCompensation = exposureCompensation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn exposureCompensation(self: QCamera) f32 {
        return qtc.QCamera_ExposureCompensation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isoSensitivity` instead
    ///
    pub const IsoSensitivity = isoSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn isoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_IsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `manualIsoSensitivity` instead
    ///
    pub const ManualIsoSensitivity = manualIsoSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn manualIsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_ManualIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exposureTime` instead
    ///
    pub const ExposureTime = exposureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn exposureTime(self: QCamera) f32 {
        return qtc.QCamera_ExposureTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `manualExposureTime` instead
    ///
    pub const ManualExposureTime = manualExposureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn manualExposureTime(self: QCamera) f32 {
        return qtc.QCamera_ManualExposureTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumIsoSensitivity` instead
    ///
    pub const MinimumIsoSensitivity = minimumIsoSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn minimumIsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_MinimumIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumIsoSensitivity` instead
    ///
    pub const MaximumIsoSensitivity = maximumIsoSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn maximumIsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_MaximumIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumExposureTime` instead
    ///
    pub const MinimumExposureTime = minimumExposureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn minimumExposureTime(self: QCamera) f32 {
        return qtc.QCamera_MinimumExposureTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumExposureTime` instead
    ///
    pub const MaximumExposureTime = maximumExposureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn maximumExposureTime(self: QCamera) f32 {
        return qtc.QCamera_MaximumExposureTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `whiteBalanceMode` instead
    ///
    pub const WhiteBalanceMode = whiteBalanceMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.WhiteBalanceMode `
    ///
    pub fn whiteBalanceMode(self: QCamera) i32 {
        return qtc.QCamera_WhiteBalanceMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWhiteBalanceModeSupported` instead
    ///
    pub const IsWhiteBalanceModeSupported = isWhiteBalanceModeSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.WhiteBalanceMode `
    ///
    pub fn isWhiteBalanceModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsWhiteBalanceModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `colorTemperature` instead
    ///
    pub const ColorTemperature = colorTemperature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn colorTemperature(self: QCamera) i32 {
        return qtc.QCamera_ColorTemperature(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` active: bool `
    ///
    pub fn setActive(self: QCamera, active: bool) void {
        qtc.QCamera_SetActive(@ptrCast(self.ptr), active);
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn start(self: QCamera) void {
        qtc.QCamera_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn stop(self: QCamera) void {
        qtc.QCamera_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomTo` instead
    ///
    pub const ZoomTo = zoomTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` zoom: f32 `
    ///
    /// ` rate: f32 `
    ///
    pub fn zoomTo(self: QCamera, zoom: f32, rate: f32) void {
        qtc.QCamera_ZoomTo(@ptrCast(self.ptr), @bitCast(zoom), @bitCast(rate));
    }

    /// ### DEPRECATED: Use `setFlashMode` instead
    ///
    pub const SetFlashMode = setFlashMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FlashMode `
    ///
    pub fn setFlashMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetFlashMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setTorchMode` instead
    ///
    pub const SetTorchMode = setTorchMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.TorchMode `
    ///
    pub fn setTorchMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetTorchMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setExposureMode` instead
    ///
    pub const SetExposureMode = setExposureMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.ExposureMode `
    ///
    pub fn setExposureMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetExposureMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setExposureCompensation` instead
    ///
    pub const SetExposureCompensation = setExposureCompensation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` ev: f32 `
    ///
    pub fn setExposureCompensation(self: QCamera, ev: f32) void {
        qtc.QCamera_SetExposureCompensation(@ptrCast(self.ptr), @bitCast(ev));
    }

    /// ### DEPRECATED: Use `setManualIsoSensitivity` instead
    ///
    pub const SetManualIsoSensitivity = setManualIsoSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` iso: i32 `
    ///
    pub fn setManualIsoSensitivity(self: QCamera, iso: i32) void {
        qtc.QCamera_SetManualIsoSensitivity(@ptrCast(self.ptr), @bitCast(iso));
    }

    /// ### DEPRECATED: Use `setAutoIsoSensitivity` instead
    ///
    pub const SetAutoIsoSensitivity = setAutoIsoSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn setAutoIsoSensitivity(self: QCamera) void {
        qtc.QCamera_SetAutoIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setManualExposureTime` instead
    ///
    pub const SetManualExposureTime = setManualExposureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` seconds: f32 `
    ///
    pub fn setManualExposureTime(self: QCamera, seconds: f32) void {
        qtc.QCamera_SetManualExposureTime(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### DEPRECATED: Use `setAutoExposureTime` instead
    ///
    pub const SetAutoExposureTime = setAutoExposureTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn setAutoExposureTime(self: QCamera) void {
        qtc.QCamera_SetAutoExposureTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWhiteBalanceMode` instead
    ///
    pub const SetWhiteBalanceMode = setWhiteBalanceMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.WhiteBalanceMode `
    ///
    pub fn setWhiteBalanceMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetWhiteBalanceMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setColorTemperature` instead
    ///
    pub const SetColorTemperature = setColorTemperature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` _colorTemperature: i32 `
    ///
    pub fn setColorTemperature(self: QCamera, _colorTemperature: i32) void {
        qtc.QCamera_SetColorTemperature(@ptrCast(self.ptr), @bitCast(_colorTemperature));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: bool `
    ///
    pub fn activeChanged(self: QCamera, param1: bool) void {
        qtc.QCamera_ActiveChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveChanged(self: QCamera, callback: *const fn (QCamera, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorChanged` instead
    ///
    pub const ErrorChanged = errorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn errorChanged(self: QCamera) void {
        qtc.QCamera_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onErrorChanged` instead
    ///
    pub const OnErrorChanged = onErrorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onErrorChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` errorVal: qcamera_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred(self: QCamera, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QCamera_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, errorVal: qcamera_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QCamera, callback: *const fn (QCamera, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cameraDeviceChanged` instead
    ///
    pub const CameraDeviceChanged = cameraDeviceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn cameraDeviceChanged(self: QCamera) void {
        qtc.QCamera_CameraDeviceChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCameraDeviceChanged` instead
    ///
    pub const OnCameraDeviceChanged = onCameraDeviceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onCameraDeviceChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraDeviceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cameraFormatChanged` instead
    ///
    pub const CameraFormatChanged = cameraFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn cameraFormatChanged(self: QCamera) void {
        qtc.QCamera_CameraFormatChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCameraFormatChanged` instead
    ///
    pub const OnCameraFormatChanged = onCameraFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onCameraFormatChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedFeaturesChanged` instead
    ///
    pub const SupportedFeaturesChanged = supportedFeaturesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn supportedFeaturesChanged(self: QCamera) void {
        qtc.QCamera_SupportedFeaturesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedFeaturesChanged` instead
    ///
    pub const OnSupportedFeaturesChanged = onSupportedFeaturesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onSupportedFeaturesChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_SupportedFeaturesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusModeChanged` instead
    ///
    pub const FocusModeChanged = focusModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn focusModeChanged(self: QCamera) void {
        qtc.QCamera_FocusModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusModeChanged` instead
    ///
    pub const OnFocusModeChanged = onFocusModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onFocusModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomFactorChanged` instead
    ///
    pub const ZoomFactorChanged = zoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn zoomFactorChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onZoomFactorChanged` instead
    ///
    pub const OnZoomFactorChanged = onZoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn onZoomFactorChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumZoomFactorChanged` instead
    ///
    pub const MinimumZoomFactorChanged = minimumZoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn minimumZoomFactorChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_MinimumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumZoomFactorChanged` instead
    ///
    pub const OnMinimumZoomFactorChanged = onMinimumZoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn onMinimumZoomFactorChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MinimumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumZoomFactorChanged` instead
    ///
    pub const MaximumZoomFactorChanged = maximumZoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn maximumZoomFactorChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_MaximumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMaximumZoomFactorChanged` instead
    ///
    pub const OnMaximumZoomFactorChanged = onMaximumZoomFactorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn onMaximumZoomFactorChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MaximumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusDistanceChanged` instead
    ///
    pub const FocusDistanceChanged = focusDistanceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn focusDistanceChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_FocusDistanceChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onFocusDistanceChanged` instead
    ///
    pub const OnFocusDistanceChanged = onFocusDistanceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn onFocusDistanceChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusDistanceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPointChanged` instead
    ///
    pub const FocusPointChanged = focusPointChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn focusPointChanged(self: QCamera) void {
        qtc.QCamera_FocusPointChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusPointChanged` instead
    ///
    pub const OnFocusPointChanged = onFocusPointChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onFocusPointChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusPointChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customFocusPointChanged` instead
    ///
    pub const CustomFocusPointChanged = customFocusPointChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn customFocusPointChanged(self: QCamera) void {
        qtc.QCamera_CustomFocusPointChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCustomFocusPointChanged` instead
    ///
    pub const OnCustomFocusPointChanged = onCustomFocusPointChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onCustomFocusPointChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_CustomFocusPointChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flashReady` instead
    ///
    pub const FlashReady = flashReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: bool `
    ///
    pub fn flashReady(self: QCamera, param1: bool) void {
        qtc.QCamera_FlashReady(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onFlashReady` instead
    ///
    pub const OnFlashReady = onFlashReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: bool) callconv(.c) void `
    ///
    pub fn onFlashReady(self: QCamera, callback: *const fn (QCamera, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashReady(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flashModeChanged` instead
    ///
    pub const FlashModeChanged = flashModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn flashModeChanged(self: QCamera) void {
        qtc.QCamera_FlashModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFlashModeChanged` instead
    ///
    pub const OnFlashModeChanged = onFlashModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onFlashModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `torchModeChanged` instead
    ///
    pub const TorchModeChanged = torchModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn torchModeChanged(self: QCamera) void {
        qtc.QCamera_TorchModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTorchModeChanged` instead
    ///
    pub const OnTorchModeChanged = onTorchModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onTorchModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_TorchModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exposureTimeChanged` instead
    ///
    pub const ExposureTimeChanged = exposureTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` speed: f32 `
    ///
    pub fn exposureTimeChanged(self: QCamera, speed: f32) void {
        qtc.QCamera_ExposureTimeChanged(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// ### DEPRECATED: Use `onExposureTimeChanged` instead
    ///
    pub const OnExposureTimeChanged = onExposureTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, speed: f32) callconv(.c) void `
    ///
    pub fn onExposureTimeChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `manualExposureTimeChanged` instead
    ///
    pub const ManualExposureTimeChanged = manualExposureTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` speed: f32 `
    ///
    pub fn manualExposureTimeChanged(self: QCamera, speed: f32) void {
        qtc.QCamera_ManualExposureTimeChanged(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// ### DEPRECATED: Use `onManualExposureTimeChanged` instead
    ///
    pub const OnManualExposureTimeChanged = onManualExposureTimeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, speed: f32) callconv(.c) void `
    ///
    pub fn onManualExposureTimeChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualExposureTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isoSensitivityChanged` instead
    ///
    pub const IsoSensitivityChanged = isoSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: i32 `
    ///
    pub fn isoSensitivityChanged(self: QCamera, param1: i32) void {
        qtc.QCamera_IsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onIsoSensitivityChanged` instead
    ///
    pub const OnIsoSensitivityChanged = onIsoSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: i32) callconv(.c) void `
    ///
    pub fn onIsoSensitivityChanged(self: QCamera, callback: *const fn (QCamera, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_IsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `manualIsoSensitivityChanged` instead
    ///
    pub const ManualIsoSensitivityChanged = manualIsoSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: i32 `
    ///
    pub fn manualIsoSensitivityChanged(self: QCamera, param1: i32) void {
        qtc.QCamera_ManualIsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onManualIsoSensitivityChanged` instead
    ///
    pub const OnManualIsoSensitivityChanged = onManualIsoSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: i32) callconv(.c) void `
    ///
    pub fn onManualIsoSensitivityChanged(self: QCamera, callback: *const fn (QCamera, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualIsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exposureCompensationChanged` instead
    ///
    pub const ExposureCompensationChanged = exposureCompensationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn exposureCompensationChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_ExposureCompensationChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onExposureCompensationChanged` instead
    ///
    pub const OnExposureCompensationChanged = onExposureCompensationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn onExposureCompensationChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureCompensationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exposureModeChanged` instead
    ///
    pub const ExposureModeChanged = exposureModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn exposureModeChanged(self: QCamera) void {
        qtc.QCamera_ExposureModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExposureModeChanged` instead
    ///
    pub const OnExposureModeChanged = onExposureModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onExposureModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `whiteBalanceModeChanged` instead
    ///
    pub const WhiteBalanceModeChanged = whiteBalanceModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn whiteBalanceModeChanged(self: QCamera) void {
        qtc.QCamera_WhiteBalanceModeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWhiteBalanceModeChanged` instead
    ///
    pub const OnWhiteBalanceModeChanged = onWhiteBalanceModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onWhiteBalanceModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_WhiteBalanceModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorTemperatureChanged` instead
    ///
    pub const ColorTemperatureChanged = colorTemperatureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn colorTemperatureChanged(self: QCamera) void {
        qtc.QCamera_ColorTemperatureChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorTemperatureChanged` instead
    ///
    pub const OnColorTemperatureChanged = onColorTemperatureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onColorTemperatureChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ColorTemperatureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brightnessChanged` instead
    ///
    pub const BrightnessChanged = brightnessChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn brightnessChanged(self: QCamera) void {
        qtc.QCamera_BrightnessChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrightnessChanged` instead
    ///
    pub const OnBrightnessChanged = onBrightnessChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onBrightnessChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_BrightnessChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contrastChanged` instead
    ///
    pub const ContrastChanged = contrastChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn contrastChanged(self: QCamera) void {
        qtc.QCamera_ContrastChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContrastChanged` instead
    ///
    pub const OnContrastChanged = onContrastChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onContrastChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ContrastChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `saturationChanged` instead
    ///
    pub const SaturationChanged = saturationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn saturationChanged(self: QCamera) void {
        qtc.QCamera_SaturationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSaturationChanged` instead
    ///
    pub const OnSaturationChanged = onSaturationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onSaturationChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_SaturationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hueChanged` instead
    ///
    pub const HueChanged = hueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn hueChanged(self: QCamera) void {
        qtc.QCamera_HueChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHueChanged` instead
    ///
    pub const OnHueChanged = onHueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onHueChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_HueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCamera.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCamera.tr3: Memory allocation failed");
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
    /// ` self: QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCamera, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCamera.objectName: Memory allocation failed");
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
    /// ` self: QCamera `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCamera, name: []const u8) void {
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
    /// ` self: QCamera `
    ///
    pub fn isWidgetType(self: QCamera) bool {
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
    /// ` self: QCamera `
    ///
    pub fn isWindowType(self: QCamera) bool {
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
    /// ` self: QCamera `
    ///
    pub fn isQuickItemType(self: QCamera) bool {
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
    /// ` self: QCamera `
    ///
    pub fn signalsBlocked(self: QCamera) bool {
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
    /// ` self: QCamera `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCamera, b: bool) bool {
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
    /// ` self: QCamera `
    ///
    pub fn thread(self: QCamera) QThread {
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
    /// ` self: QCamera `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCamera, _thread: anytype) bool {
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
    /// ` self: QCamera `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCamera, interval: i32) i32 {
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
    /// ` self: QCamera `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCamera, time: i64) i32 {
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
    /// ` self: QCamera `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCamera, id: i32) void {
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
    /// ` self: QCamera `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCamera, id: i32) void {
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
    /// ` self: QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCamera, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCamera.children: Memory allocation failed");
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
    /// ` self: QCamera `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCamera, _parent: anytype) void {
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
    /// ` self: QCamera `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCamera, filterObj: anytype) void {
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
    /// ` self: QCamera `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCamera, obj: anytype) void {
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
    /// ` self: QCamera `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCamera, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCamera `
    ///
    pub fn disconnect3(self: QCamera) bool {
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
    /// ` self: QCamera `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCamera, receiver: anytype) bool {
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
    /// ` self: QCamera `
    ///
    pub fn dumpObjectTree(self: QCamera) void {
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
    /// ` self: QCamera `
    ///
    pub fn dumpObjectInfo(self: QCamera) void {
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
    /// ` self: QCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCamera, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCamera, name: [:0]const u8) QVariant {
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
    /// ` self: QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCamera, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCamera.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCamera.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCamera `
    ///
    pub fn bindingStorage(self: QCamera) QBindingStorage {
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
    /// ` self: QCamera `
    ///
    pub fn bindingStorage2(self: QCamera) QBindingStorage {
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
    /// ` self: QCamera `
    ///
    pub fn destroyed(self: QCamera) void {
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
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
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
    /// ` self: QCamera `
    ///
    pub fn parent(self: QCamera) QObject {
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
    /// ` self: QCamera `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCamera, classname: [:0]const u8) bool {
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
    /// ` self: QCamera `
    ///
    pub fn deleteLater(self: QCamera) void {
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
    /// ` self: QCamera `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCamera, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCamera `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCamera, time: i64, timerType: i32) i32 {
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
    /// ` self: QCamera `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCamera, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCamera, signal: [:0]const u8) bool {
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCamera, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCamera, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCamera `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCamera, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCamera `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCamera, param1: anytype) void {
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
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCamera, callback: *const fn (QCamera, QObject) callconv(.c) void) void {
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
    /// ` self: QCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCamera, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCamera_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCamera, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCamera_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCamera, callback: *const fn (QCamera, QEvent) callconv(.c) bool) void {
        qtc.QCamera_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCamera, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCamera_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCamera, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCamera_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCamera, callback: *const fn (QCamera, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCamera_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCamera_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCamera_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCamera, callback: *const fn (QCamera, QTimerEvent) callconv(.c) void) void {
        qtc.QCamera_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCamera_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCamera_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCamera, callback: *const fn (QCamera, QChildEvent) callconv(.c) void) void {
        qtc.QCamera_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCamera_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCamera, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCamera_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCamera, callback: *const fn (QCamera, QEvent) callconv(.c) void) void {
        qtc.QCamera_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCamera, callback: *const fn (QCamera, QMetaMethod) callconv(.c) void) void {
        qtc.QCamera_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCamera, callback: *const fn (QCamera, QMetaMethod) callconv(.c) void) void {
        qtc.QCamera_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    pub fn sender(self: QCamera) QObject {
        return .{ .ptr = qtc.QCamera_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCamera `
    ///
    pub fn superSender(self: QCamera) QObject {
        return .{ .ptr = qtc.QCamera_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCamera, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCamera_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    pub fn senderSignalIndex(self: QCamera) i32 {
        return qtc.QCamera_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCamera `
    ///
    pub fn superSenderSignalIndex(self: QCamera) i32 {
        return qtc.QCamera_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCamera, callback: *const fn () callconv(.c) i32) void {
        qtc.QCamera_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCamera, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCamera_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCamera, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCamera_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCamera, callback: *const fn (QCamera, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCamera_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCamera, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCamera_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCamera, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCamera_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera`
    ///
    /// ` callback: *const fn (self: QCamera, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCamera, callback: *const fn (QCamera, QMetaMethod) callconv(.c) bool) void {
        qtc.QCamera_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCamera, callback: *const fn (QCamera, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#dtor.QCamera)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCamera `
    ///
    pub fn delete(self: QCamera) void {
        qtc.QCamera_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const CameraError: i32 = 1;
    };

    pub const FocusMode = enum(i32) {
        pub const FocusModeAuto: i32 = 0;
        pub const FocusModeAutoNear: i32 = 1;
        pub const FocusModeAutoFar: i32 = 2;
        pub const FocusModeHyperfocal: i32 = 3;
        pub const FocusModeInfinity: i32 = 4;
        pub const FocusModeManual: i32 = 5;
    };

    pub const FlashMode = enum(i32) {
        pub const FlashOff: i32 = 0;
        pub const FlashOn: i32 = 1;
        pub const FlashAuto: i32 = 2;
    };

    pub const TorchMode = enum(i32) {
        pub const TorchOff: i32 = 0;
        pub const TorchOn: i32 = 1;
        pub const TorchAuto: i32 = 2;
    };

    pub const ExposureMode = enum(i32) {
        pub const ExposureAuto: i32 = 0;
        pub const ExposureManual: i32 = 1;
        pub const ExposurePortrait: i32 = 2;
        pub const ExposureNight: i32 = 3;
        pub const ExposureSports: i32 = 4;
        pub const ExposureSnow: i32 = 5;
        pub const ExposureBeach: i32 = 6;
        pub const ExposureAction: i32 = 7;
        pub const ExposureLandscape: i32 = 8;
        pub const ExposureNightPortrait: i32 = 9;
        pub const ExposureTheatre: i32 = 10;
        pub const ExposureSunset: i32 = 11;
        pub const ExposureSteadyPhoto: i32 = 12;
        pub const ExposureFireworks: i32 = 13;
        pub const ExposureParty: i32 = 14;
        pub const ExposureCandlelight: i32 = 15;
        pub const ExposureBarcode: i32 = 16;
    };

    pub const WhiteBalanceMode = enum(i32) {
        pub const WhiteBalanceAuto: i32 = 0;
        pub const WhiteBalanceManual: i32 = 1;
        pub const WhiteBalanceSunlight: i32 = 2;
        pub const WhiteBalanceCloudy: i32 = 3;
        pub const WhiteBalanceShade: i32 = 4;
        pub const WhiteBalanceTungsten: i32 = 5;
        pub const WhiteBalanceFluorescent: i32 = 6;
        pub const WhiteBalanceFlash: i32 = 7;
        pub const WhiteBalanceSunset: i32 = 8;
    };

    pub const Feature = enum(i32) {
        pub const ColorTemperature: i32 = 1;
        pub const ExposureCompensation: i32 = 2;
        pub const IsoSensitivity: i32 = 4;
        pub const ManualExposureTime: i32 = 8;
        pub const CustomFocusPoint: i32 = 16;
        pub const FocusDistance: i32 = 32;
    };
};
