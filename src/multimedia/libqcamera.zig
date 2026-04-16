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

    /// New constructs a new QCamera object.
    ///
    pub fn New() QCamera {
        return .{ .ptr = qtc.QCamera_new() };
    }

    /// New2 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cameraDevice: QCameraDevice `
    ///
    pub fn New2(cameraDevice: anytype) QCamera {
        comptime _ = @TypeOf(cameraDevice)._is_QCameraDevice;
        return .{ .ptr = qtc.QCamera_new2(@ptrCast(cameraDevice.ptr)) };
    }

    /// New3 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` position: qcameradevice_enums.Position `
    ///
    pub fn New3(position: i32) QCamera {
        return .{ .ptr = qtc.QCamera_new3(@bitCast(position)) };
    }

    /// New4 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) QCamera {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCamera_new4(@ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cameraDevice: QCameraDevice `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(cameraDevice: anytype, parent: anytype) QCamera {
        comptime _ = @TypeOf(cameraDevice)._is_QCameraDevice;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCamera_new5(@ptrCast(cameraDevice.ptr), @ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` position: qcameradevice_enums.Position `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(position: i32, parent: anytype) QCamera {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCamera_new6(@bitCast(position), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MetaObject(self: QCamera) QMetaObject {
        return .{ .ptr = qtc.QCamera_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QCamera, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCamera_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCamera `
    ///
    pub fn SuperMetaObject(self: QCamera) QMetaObject {
        return .{ .ptr = qtc.QCamera_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QCamera, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCamera_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QCamera, callback: *const fn (QCamera, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCamera_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QCamera, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCamera_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QCamera, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCamera_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QCamera, callback: *const fn (QCamera, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCamera_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QCamera, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCamera_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsAvailable(self: QCamera) bool {
        return qtc.QCamera_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsActive(self: QCamera) bool {
        return qtc.QCamera_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CaptureSession(self: QCamera) QMediaCaptureSession {
        return .{ .ptr = qtc.QCamera_CaptureSession(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CameraDevice(self: QCamera) QCameraDevice {
        return .{ .ptr = qtc.QCamera_CameraDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` cameraDevice: QCameraDevice `
    ///
    pub fn SetCameraDevice(self: QCamera, cameraDevice: anytype) void {
        comptime _ = @TypeOf(cameraDevice)._is_QCameraDevice;
        qtc.QCamera_SetCameraDevice(@ptrCast(self.ptr), @ptrCast(cameraDevice.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CameraFormat(self: QCamera) QCameraFormat {
        return .{ .ptr = qtc.QCamera_CameraFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` format: QCameraFormat `
    ///
    pub fn SetCameraFormat(self: QCamera, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QCameraFormat;
        qtc.QCamera_SetCameraFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

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
    pub fn Error(self: QCamera) i32 {
        return qtc.QCamera_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QCamera, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCamera_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SupportedFeatures(self: QCamera) i32 {
        return qtc.QCamera_SupportedFeatures(@ptrCast(self.ptr));
    }

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
    pub fn FocusMode(self: QCamera) i32 {
        return qtc.QCamera_FocusMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FocusMode `
    ///
    pub fn SetFocusMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetFocusMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FocusMode `
    ///
    pub fn IsFocusModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsFocusModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn FocusPoint(self: QCamera) QPointF {
        return .{ .ptr = qtc.QCamera_FocusPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CustomFocusPoint(self: QCamera) QPointF {
        return .{ .ptr = qtc.QCamera_CustomFocusPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` point: QPointF `
    ///
    pub fn SetCustomFocusPoint(self: QCamera, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QCamera_SetCustomFocusPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` d: f32 `
    ///
    pub fn SetFocusDistance(self: QCamera, d: f32) void {
        qtc.QCamera_SetFocusDistance(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn FocusDistance(self: QCamera) f32 {
        return qtc.QCamera_FocusDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MinimumZoomFactor(self: QCamera) f32 {
        return qtc.QCamera_MinimumZoomFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MaximumZoomFactor(self: QCamera) f32 {
        return qtc.QCamera_MaximumZoomFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ZoomFactor(self: QCamera) f32 {
        return qtc.QCamera_ZoomFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` factor: f32 `
    ///
    pub fn SetZoomFactor(self: QCamera, factor: f32) void {
        qtc.QCamera_SetZoomFactor(@ptrCast(self.ptr), @bitCast(factor));
    }

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
    pub fn FlashMode(self: QCamera) i32 {
        return qtc.QCamera_FlashMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FlashMode `
    ///
    pub fn IsFlashModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsFlashModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsFlashReady(self: QCamera) bool {
        return qtc.QCamera_IsFlashReady(@ptrCast(self.ptr));
    }

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
    pub fn TorchMode(self: QCamera) i32 {
        return qtc.QCamera_TorchMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.TorchMode `
    ///
    pub fn IsTorchModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsTorchModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn ExposureMode(self: QCamera) i32 {
        return qtc.QCamera_ExposureMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.ExposureMode `
    ///
    pub fn IsExposureModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsExposureModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ExposureCompensation(self: QCamera) f32 {
        return qtc.QCamera_ExposureCompensation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_IsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ManualIsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_ManualIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ExposureTime(self: QCamera) f32 {
        return qtc.QCamera_ExposureTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ManualExposureTime(self: QCamera) f32 {
        return qtc.QCamera_ManualExposureTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MinimumIsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_MinimumIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MaximumIsoSensitivity(self: QCamera) i32 {
        return qtc.QCamera_MaximumIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MinimumExposureTime(self: QCamera) f32 {
        return qtc.QCamera_MinimumExposureTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn MaximumExposureTime(self: QCamera) f32 {
        return qtc.QCamera_MaximumExposureTime(@ptrCast(self.ptr));
    }

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
    pub fn WhiteBalanceMode(self: QCamera) i32 {
        return qtc.QCamera_WhiteBalanceMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.WhiteBalanceMode `
    ///
    pub fn IsWhiteBalanceModeSupported(self: QCamera, mode: i32) bool {
        return qtc.QCamera_IsWhiteBalanceModeSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ColorTemperature(self: QCamera) i32 {
        return qtc.QCamera_ColorTemperature(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: QCamera, active: bool) void {
        qtc.QCamera_SetActive(@ptrCast(self.ptr), active);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn Start(self: QCamera) void {
        qtc.QCamera_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn Stop(self: QCamera) void {
        qtc.QCamera_Stop(@ptrCast(self.ptr));
    }

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
    pub fn ZoomTo(self: QCamera, zoom: f32, rate: f32) void {
        qtc.QCamera_ZoomTo(@ptrCast(self.ptr), @bitCast(zoom), @bitCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.FlashMode `
    ///
    pub fn SetFlashMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetFlashMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.TorchMode `
    ///
    pub fn SetTorchMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetTorchMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.ExposureMode `
    ///
    pub fn SetExposureMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetExposureMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` ev: f32 `
    ///
    pub fn SetExposureCompensation(self: QCamera, ev: f32) void {
        qtc.QCamera_SetExposureCompensation(@ptrCast(self.ptr), @bitCast(ev));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` iso: i32 `
    ///
    pub fn SetManualIsoSensitivity(self: QCamera, iso: i32) void {
        qtc.QCamera_SetManualIsoSensitivity(@ptrCast(self.ptr), @bitCast(iso));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn SetAutoIsoSensitivity(self: QCamera) void {
        qtc.QCamera_SetAutoIsoSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` seconds: f32 `
    ///
    pub fn SetManualExposureTime(self: QCamera, seconds: f32) void {
        qtc.QCamera_SetManualExposureTime(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn SetAutoExposureTime(self: QCamera) void {
        qtc.QCamera_SetAutoExposureTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` mode: qcamera_enums.WhiteBalanceMode `
    ///
    pub fn SetWhiteBalanceMode(self: QCamera, mode: i32) void {
        qtc.QCamera_SetWhiteBalanceMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` colorTemperature: i32 `
    ///
    pub fn SetColorTemperature(self: QCamera, colorTemperature: i32) void {
        qtc.QCamera_SetColorTemperature(@ptrCast(self.ptr), @bitCast(colorTemperature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: bool `
    ///
    pub fn ActiveChanged(self: QCamera, param1: bool) void {
        qtc.QCamera_ActiveChanged(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: bool) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: QCamera, callback: *const fn (QCamera, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ErrorChanged(self: QCamera) void {
        qtc.QCamera_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnErrorChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` errorVal: qcamera_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: QCamera, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QCamera_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, errorVal: qcamera_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QCamera, callback: *const fn (QCamera, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CameraDeviceChanged(self: QCamera) void {
        qtc.QCamera_CameraDeviceChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnCameraDeviceChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraDeviceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CameraFormatChanged(self: QCamera) void {
        qtc.QCamera_CameraFormatChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnCameraFormatChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn SupportedFeaturesChanged(self: QCamera) void {
        qtc.QCamera_SupportedFeaturesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnSupportedFeaturesChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_SupportedFeaturesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn FocusModeChanged(self: QCamera) void {
        qtc.QCamera_FocusModeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnFocusModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn ZoomFactorChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnZoomFactorChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn MinimumZoomFactorChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_MinimumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnMinimumZoomFactorChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MinimumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn MaximumZoomFactorChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_MaximumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnMaximumZoomFactorChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MaximumZoomFactorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn FocusDistanceChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_FocusDistanceChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnFocusDistanceChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusDistanceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn FocusPointChanged(self: QCamera) void {
        qtc.QCamera_FocusPointChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnFocusPointChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusPointChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn CustomFocusPointChanged(self: QCamera) void {
        qtc.QCamera_CustomFocusPointChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnCustomFocusPointChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_CustomFocusPointChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: bool `
    ///
    pub fn FlashReady(self: QCamera, param1: bool) void {
        qtc.QCamera_FlashReady(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: bool) callconv(.c) void `
    ///
    pub fn OnFlashReady(self: QCamera, callback: *const fn (QCamera, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashReady(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn FlashModeChanged(self: QCamera) void {
        qtc.QCamera_FlashModeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnFlashModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn TorchModeChanged(self: QCamera) void {
        qtc.QCamera_TorchModeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnTorchModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_TorchModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` speed: f32 `
    ///
    pub fn ExposureTimeChanged(self: QCamera, speed: f32) void {
        qtc.QCamera_ExposureTimeChanged(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, speed: f32) callconv(.c) void `
    ///
    pub fn OnExposureTimeChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` speed: f32 `
    ///
    pub fn ManualExposureTimeChanged(self: QCamera, speed: f32) void {
        qtc.QCamera_ManualExposureTimeChanged(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, speed: f32) callconv(.c) void `
    ///
    pub fn OnManualExposureTimeChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualExposureTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: i32 `
    ///
    pub fn IsoSensitivityChanged(self: QCamera, param1: i32) void {
        qtc.QCamera_IsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: i32) callconv(.c) void `
    ///
    pub fn OnIsoSensitivityChanged(self: QCamera, callback: *const fn (QCamera, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_IsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: i32 `
    ///
    pub fn ManualIsoSensitivityChanged(self: QCamera, param1: i32) void {
        qtc.QCamera_ManualIsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: i32) callconv(.c) void `
    ///
    pub fn OnManualIsoSensitivityChanged(self: QCamera, callback: *const fn (QCamera, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualIsoSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn ExposureCompensationChanged(self: QCamera, param1: f32) void {
        qtc.QCamera_ExposureCompensationChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnExposureCompensationChanged(self: QCamera, callback: *const fn (QCamera, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureCompensationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ExposureModeChanged(self: QCamera) void {
        qtc.QCamera_ExposureModeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnExposureModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn WhiteBalanceModeChanged(self: QCamera) void {
        qtc.QCamera_WhiteBalanceModeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnWhiteBalanceModeChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_WhiteBalanceModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ColorTemperatureChanged(self: QCamera) void {
        qtc.QCamera_ColorTemperatureChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnColorTemperatureChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ColorTemperatureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn BrightnessChanged(self: QCamera) void {
        qtc.QCamera_BrightnessChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnBrightnessChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_BrightnessChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn ContrastChanged(self: QCamera) void {
        qtc.QCamera_ContrastChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnContrastChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_ContrastChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn SaturationChanged(self: QCamera) void {
        qtc.QCamera_SaturationChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnSaturationChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_SaturationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn HueChanged(self: QCamera) void {
        qtc.QCamera_HueChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCamera `
    ///
    /// ` callback: *const fn (self: QCamera) callconv(.c) void `
    ///
    pub fn OnHueChanged(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QCamera_Connect_HueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QCamera, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QCamera, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsWidgetType(self: QCamera) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsWindowType(self: QCamera) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn IsQuickItemType(self: QCamera) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn SignalsBlocked(self: QCamera) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QCamera, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn Thread(self: QCamera) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QCamera, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QCamera, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QCamera, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QCamera, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QCamera, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QCamera, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qcamera.Children: Memory allocation failed");
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
    /// ` self: QCamera `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QCamera, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QCamera, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QCamera, obj: anytype) void {
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
    /// ` self: QCamera `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QCamera, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCamera `
    ///
    pub fn Disconnect3(self: QCamera) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QCamera, receiver: anytype) bool {
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
    /// ` self: QCamera `
    ///
    pub fn DumpObjectTree(self: QCamera) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn DumpObjectInfo(self: QCamera) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QCamera, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QCamera, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QCamera, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcamera.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcamera.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCamera `
    ///
    pub fn BindingStorage(self: QCamera) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn BindingStorage2(self: QCamera) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn Destroyed(self: QCamera) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QCamera, callback: *const fn (QCamera) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn Parent(self: QCamera) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QCamera, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCamera `
    ///
    pub fn DeleteLater(self: QCamera) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QCamera, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QCamera, time: i64, timerType: i32) i32 {
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
    /// ` self: QCamera `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QCamera, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QCamera, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QCamera, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QCamera, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCamera `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QCamera, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCamera `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QCamera, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QCamera, callback: *const fn (QCamera, QObject) callconv(.c) void) void {
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
    /// ` self: QCamera `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QCamera, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCamera_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QCamera, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCamera_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QCamera, callback: *const fn (QCamera, QEvent) callconv(.c) bool) void {
        qtc.QCamera_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QCamera, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCamera_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QCamera, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCamera_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QCamera, callback: *const fn (QCamera, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCamera_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QCamera, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCamera_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QCamera, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCamera_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QCamera, callback: *const fn (QCamera, QTimerEvent) callconv(.c) void) void {
        qtc.QCamera_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QCamera, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCamera_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QCamera, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCamera_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QCamera, callback: *const fn (QCamera, QChildEvent) callconv(.c) void) void {
        qtc.QCamera_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QCamera, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCamera_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QCamera, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCamera_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QCamera, callback: *const fn (QCamera, QEvent) callconv(.c) void) void {
        qtc.QCamera_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QCamera, callback: *const fn (QCamera, QMetaMethod) callconv(.c) void) void {
        qtc.QCamera_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QCamera, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCamera_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QCamera, callback: *const fn (QCamera, QMetaMethod) callconv(.c) void) void {
        qtc.QCamera_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QCamera) QObject {
        return .{ .ptr = qtc.QCamera_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCamera `
    ///
    pub fn SuperSender(self: QCamera) QObject {
        return .{ .ptr = qtc.QCamera_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QCamera, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCamera_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QCamera) i32 {
        return qtc.QCamera_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCamera `
    ///
    pub fn SuperSenderSignalIndex(self: QCamera) i32 {
        return qtc.QCamera_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QCamera, callback: *const fn () callconv(.c) i32) void {
        qtc.QCamera_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QCamera, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCamera_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QCamera, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCamera_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QCamera, callback: *const fn (QCamera, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCamera_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QCamera, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCamera_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCamera `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QCamera, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCamera_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QCamera, callback: *const fn (QCamera, QMetaMethod) callconv(.c) bool) void {
        qtc.QCamera_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QCamera, callback: *const fn (QCamera, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#dtor.QCamera)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCamera `
    ///
    pub fn Delete(self: QCamera) void {
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
