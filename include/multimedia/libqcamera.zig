const C = @import("qt6c");
const qcamera_enums = enums;
const qcameradevice_enums = @import("libqcameradevice.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcamera.html
pub const qcamera = struct {
    /// New constructs a new QCamera object.
    ///
    ///
    pub fn New() ?*C.QCamera {
        return C.QCamera_new();
    }

    /// New2 constructs a new QCamera object.
    ///
    /// ``` cameraDevice: ?*C.QCameraDevice ```
    pub fn New2(cameraDevice: ?*anyopaque) ?*C.QCamera {
        return C.QCamera_new2(@ptrCast(cameraDevice));
    }

    /// New3 constructs a new QCamera object.
    ///
    /// ``` position: qcameradevice_enums.Position ```
    pub fn New3(position: i64) ?*C.QCamera {
        return C.QCamera_new3(@intCast(position));
    }

    /// New4 constructs a new QCamera object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New4(parent: ?*anyopaque) ?*C.QCamera {
        return C.QCamera_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QCamera object.
    ///
    /// ``` cameraDevice: ?*C.QCameraDevice, parent: ?*C.QObject ```
    pub fn New5(cameraDevice: ?*anyopaque, parent: ?*anyopaque) ?*C.QCamera {
        return C.QCamera_new5(@ptrCast(cameraDevice), @ptrCast(parent));
    }

    /// New6 constructs a new QCamera object.
    ///
    /// ``` position: qcameradevice_enums.Position, parent: ?*C.QObject ```
    pub fn New6(position: i64, parent: ?*anyopaque) ?*C.QCamera {
        return C.QCamera_new6(@intCast(position), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QCamera_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QCamera_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCamera_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QCamera_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCamera_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QCamera_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return C.QCamera_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isActive)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QCamera_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#captureSession)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CaptureSession(self: ?*anyopaque) ?*C.QMediaCaptureSession {
        return C.QCamera_CaptureSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CameraDevice(self: ?*anyopaque) ?*C.QCameraDevice {
        return C.QCamera_CameraDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
    ///
    /// ``` self: ?*C.QCamera, cameraDevice: ?*C.QCameraDevice ```
    pub fn SetCameraDevice(self: ?*anyopaque, cameraDevice: ?*anyopaque) void {
        C.QCamera_SetCameraDevice(@ptrCast(self), @ptrCast(cameraDevice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CameraFormat(self: ?*anyopaque) ?*C.QCameraFormat {
        return C.QCamera_CameraFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
    ///
    /// ``` self: ?*C.QCamera, format: ?*C.QCameraFormat ```
    pub fn SetCameraFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QCamera_SetCameraFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#error)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QCamera_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorString)
    ///
    /// ``` self: ?*C.QCamera, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCamera_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SupportedFeatures(self: ?*anyopaque) i64 {
        return C.QCamera_SupportedFeatures(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusMode)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FocusMode(self: ?*anyopaque) i64 {
        return C.QCamera_FocusMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.FocusMode ```
    pub fn SetFocusMode(self: ?*anyopaque, mode: i64) void {
        C.QCamera_SetFocusMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.FocusMode ```
    pub fn IsFocusModeSupported(self: ?*anyopaque, mode: i64) bool {
        return C.QCamera_IsFocusModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FocusPoint(self: ?*anyopaque) ?*C.QPointF {
        return C.QCamera_FocusPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CustomFocusPoint(self: ?*anyopaque) ?*C.QPointF {
        return C.QCamera_CustomFocusPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
    ///
    /// ``` self: ?*C.QCamera, point: ?*C.QPointF ```
    pub fn SetCustomFocusPoint(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QCamera_SetCustomFocusPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
    ///
    /// ``` self: ?*C.QCamera, d: f32 ```
    pub fn SetFocusDistance(self: ?*anyopaque, d: f32) void {
        C.QCamera_SetFocusDistance(@ptrCast(self), @floatCast(d));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FocusDistance(self: ?*anyopaque) f32 {
        return C.QCamera_FocusDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MinimumZoomFactor(self: ?*anyopaque) f32 {
        return C.QCamera_MinimumZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MaximumZoomFactor(self: ?*anyopaque) f32 {
        return C.QCamera_MaximumZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ZoomFactor(self: ?*anyopaque) f32 {
        return C.QCamera_ZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
    ///
    /// ``` self: ?*C.QCamera, factor: f32 ```
    pub fn SetZoomFactor(self: ?*anyopaque, factor: f32) void {
        C.QCamera_SetZoomFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashMode)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FlashMode(self: ?*anyopaque) i64 {
        return C.QCamera_FlashMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.FlashMode ```
    pub fn IsFlashModeSupported(self: ?*anyopaque, mode: i64) bool {
        return C.QCamera_IsFlashModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsFlashReady(self: ?*anyopaque) bool {
        return C.QCamera_IsFlashReady(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchMode)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn TorchMode(self: ?*anyopaque) i64 {
        return C.QCamera_TorchMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.TorchMode ```
    pub fn IsTorchModeSupported(self: ?*anyopaque, mode: i64) bool {
        return C.QCamera_IsTorchModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ExposureMode(self: ?*anyopaque) i64 {
        return C.QCamera_ExposureMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.ExposureMode ```
    pub fn IsExposureModeSupported(self: ?*anyopaque, mode: i64) bool {
        return C.QCamera_IsExposureModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ExposureCompensation(self: ?*anyopaque) f32 {
        return C.QCamera_ExposureCompensation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsoSensitivity(self: ?*anyopaque) i32 {
        return C.QCamera_IsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ManualIsoSensitivity(self: ?*anyopaque) i32 {
        return C.QCamera_ManualIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ExposureTime(self: ?*anyopaque) f32 {
        return C.QCamera_ExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ManualExposureTime(self: ?*anyopaque) f32 {
        return C.QCamera_ManualExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MinimumIsoSensitivity(self: ?*anyopaque) i32 {
        return C.QCamera_MinimumIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MaximumIsoSensitivity(self: ?*anyopaque) i32 {
        return C.QCamera_MaximumIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MinimumExposureTime(self: ?*anyopaque) f32 {
        return C.QCamera_MinimumExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn MaximumExposureTime(self: ?*anyopaque) f32 {
        return C.QCamera_MaximumExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn WhiteBalanceMode(self: ?*anyopaque) i64 {
        return C.QCamera_WhiteBalanceMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.WhiteBalanceMode ```
    pub fn IsWhiteBalanceModeSupported(self: ?*anyopaque, mode: i64) bool {
        return C.QCamera_IsWhiteBalanceModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ColorTemperature(self: ?*anyopaque) i32 {
        return C.QCamera_ColorTemperature(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setActive)
    ///
    /// ``` self: ?*C.QCamera, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        C.QCamera_SetActive(@ptrCast(self), active);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#start)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn Start(self: ?*anyopaque) void {
        C.QCamera_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#stop)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QCamera_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
    ///
    /// ``` self: ?*C.QCamera, zoom: f32, rate: f32 ```
    pub fn ZoomTo(self: ?*anyopaque, zoom: f32, rate: f32) void {
        C.QCamera_ZoomTo(@ptrCast(self), @floatCast(zoom), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.FlashMode ```
    pub fn SetFlashMode(self: ?*anyopaque, mode: i64) void {
        C.QCamera_SetFlashMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.TorchMode ```
    pub fn SetTorchMode(self: ?*anyopaque, mode: i64) void {
        C.QCamera_SetTorchMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.ExposureMode ```
    pub fn SetExposureMode(self: ?*anyopaque, mode: i64) void {
        C.QCamera_SetExposureMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
    ///
    /// ``` self: ?*C.QCamera, ev: f32 ```
    pub fn SetExposureCompensation(self: ?*anyopaque, ev: f32) void {
        C.QCamera_SetExposureCompensation(@ptrCast(self), @floatCast(ev));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
    ///
    /// ``` self: ?*C.QCamera, iso: i32 ```
    pub fn SetManualIsoSensitivity(self: ?*anyopaque, iso: i32) void {
        C.QCamera_SetManualIsoSensitivity(@ptrCast(self), @intCast(iso));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SetAutoIsoSensitivity(self: ?*anyopaque) void {
        C.QCamera_SetAutoIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
    ///
    /// ``` self: ?*C.QCamera, seconds: f32 ```
    pub fn SetManualExposureTime(self: ?*anyopaque, seconds: f32) void {
        C.QCamera_SetManualExposureTime(@ptrCast(self), @floatCast(seconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SetAutoExposureTime(self: ?*anyopaque) void {
        C.QCamera_SetAutoExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
    ///
    /// ``` self: ?*C.QCamera, mode: qcamera_enums.WhiteBalanceMode ```
    pub fn SetWhiteBalanceMode(self: ?*anyopaque, mode: i64) void {
        C.QCamera_SetWhiteBalanceMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
    ///
    /// ``` self: ?*C.QCamera, colorTemperature: i32 ```
    pub fn SetColorTemperature(self: ?*anyopaque, colorTemperature: i32) void {
        C.QCamera_SetColorTemperature(@ptrCast(self), @intCast(colorTemperature));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: bool ```
    pub fn ActiveChanged(self: ?*anyopaque, param1: bool) void {
        C.QCamera_ActiveChanged(@ptrCast(self), param1);
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, bool) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QCamera_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        C.QCamera_ErrorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_ErrorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ``` self: ?*C.QCamera, errorVal: qcamera_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QCamera_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, qcamera_enums.Error, []const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        C.QCamera_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CameraDeviceChanged(self: ?*anyopaque) void {
        C.QCamera_CameraDeviceChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnCameraDeviceChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_CameraDeviceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CameraFormatChanged(self: ?*anyopaque) void {
        C.QCamera_CameraFormatChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnCameraFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_CameraFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SupportedFeaturesChanged(self: ?*anyopaque) void {
        C.QCamera_SupportedFeaturesChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnSupportedFeaturesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_SupportedFeaturesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FocusModeChanged(self: ?*anyopaque) void {
        C.QCamera_FocusModeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnFocusModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_FocusModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: f32 ```
    pub fn ZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        C.QCamera_ZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnZoomFactorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_ZoomFactorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: f32 ```
    pub fn MinimumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        C.QCamera_MinimumZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnMinimumZoomFactorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_MinimumZoomFactorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: f32 ```
    pub fn MaximumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        C.QCamera_MaximumZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnMaximumZoomFactorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_MaximumZoomFactorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: f32 ```
    pub fn FocusDistanceChanged(self: ?*anyopaque, param1: f32) void {
        C.QCamera_FocusDistanceChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnFocusDistanceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_FocusDistanceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FocusPointChanged(self: ?*anyopaque) void {
        C.QCamera_FocusPointChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnFocusPointChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_FocusPointChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn CustomFocusPointChanged(self: ?*anyopaque) void {
        C.QCamera_CustomFocusPointChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnCustomFocusPointChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_CustomFocusPointChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ``` self: ?*C.QCamera, param1: bool ```
    pub fn FlashReady(self: ?*anyopaque, param1: bool) void {
        C.QCamera_FlashReady(@ptrCast(self), param1);
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, bool) callconv(.c) void ```
    pub fn OnFlashReady(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QCamera_Connect_FlashReady(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn FlashModeChanged(self: ?*anyopaque) void {
        C.QCamera_FlashModeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnFlashModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_FlashModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn TorchModeChanged(self: ?*anyopaque) void {
        C.QCamera_TorchModeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnTorchModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_TorchModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ``` self: ?*C.QCamera, speed: f32 ```
    pub fn ExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        C.QCamera_ExposureTimeChanged(@ptrCast(self), @floatCast(speed));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnExposureTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_ExposureTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ``` self: ?*C.QCamera, speed: f32 ```
    pub fn ManualExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        C.QCamera_ManualExposureTimeChanged(@ptrCast(self), @floatCast(speed));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnManualExposureTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_ManualExposureTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: i32 ```
    pub fn IsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        C.QCamera_IsoSensitivityChanged(@ptrCast(self), @intCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, i32) callconv(.c) void ```
    pub fn OnIsoSensitivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QCamera_Connect_IsoSensitivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: i32 ```
    pub fn ManualIsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        C.QCamera_ManualIsoSensitivityChanged(@ptrCast(self), @intCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, i32) callconv(.c) void ```
    pub fn OnManualIsoSensitivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QCamera_Connect_ManualIsoSensitivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ``` self: ?*C.QCamera, param1: f32 ```
    pub fn ExposureCompensationChanged(self: ?*anyopaque, param1: f32) void {
        C.QCamera_ExposureCompensationChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, f32) callconv(.c) void ```
    pub fn OnExposureCompensationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        C.QCamera_Connect_ExposureCompensationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ExposureModeChanged(self: ?*anyopaque) void {
        C.QCamera_ExposureModeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnExposureModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_ExposureModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn WhiteBalanceModeChanged(self: ?*anyopaque) void {
        C.QCamera_WhiteBalanceModeChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnWhiteBalanceModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_WhiteBalanceModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ColorTemperatureChanged(self: ?*anyopaque) void {
        C.QCamera_ColorTemperatureChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnColorTemperatureChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_ColorTemperatureChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn BrightnessChanged(self: ?*anyopaque) void {
        C.QCamera_BrightnessChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnBrightnessChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_BrightnessChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn ContrastChanged(self: ?*anyopaque) void {
        C.QCamera_ContrastChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnContrastChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_ContrastChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SaturationChanged(self: ?*anyopaque) void {
        C.QCamera_SaturationChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnSaturationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_SaturationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn HueChanged(self: ?*anyopaque) void {
        C.QCamera_HueChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera) callconv(.c) void ```
    pub fn OnHueChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCamera_Connect_HueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QCamera_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QCamera_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ``` self: ?*C.QCamera, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCamera, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QCamera, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QCamera, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCamera, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QCamera, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QCamera, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCamera, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QCamera, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QCamera, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QCamera, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QCamera ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QCamera, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QCamera, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QCamera, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCamera ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCamera ```
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
    /// ``` self: ?*C.QCamera ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QCamera, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCamera, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QCamera, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCamera, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QCamera, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCamera_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCamera_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCamera_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCamera_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCamera_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCamera_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCamera_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCamera_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCamera_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCamera_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCamera_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCamera_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCamera_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCamera_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCamera_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCamera_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCamera_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCamera_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCamera_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCamera_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCamera_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QCamera_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QCamera_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QCamera_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCamera_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCamera_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QCamera_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCamera_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCamera_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QCamera_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCamera_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCamera_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCamera, slot: fn (?*C.QCamera, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCamera_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCamera ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCamera_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcamera.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const CameraError: i32 = 1;
    };

    pub const FocusMode = enum {
        pub const FocusModeAuto: i32 = 0;
        pub const FocusModeAutoNear: i32 = 1;
        pub const FocusModeAutoFar: i32 = 2;
        pub const FocusModeHyperfocal: i32 = 3;
        pub const FocusModeInfinity: i32 = 4;
        pub const FocusModeManual: i32 = 5;
    };

    pub const FlashMode = enum {
        pub const FlashOff: i32 = 0;
        pub const FlashOn: i32 = 1;
        pub const FlashAuto: i32 = 2;
    };

    pub const TorchMode = enum {
        pub const TorchOff: i32 = 0;
        pub const TorchOn: i32 = 1;
        pub const TorchAuto: i32 = 2;
    };

    pub const ExposureMode = enum {
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

    pub const WhiteBalanceMode = enum {
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

    pub const Feature = enum {
        pub const ColorTemperature: i32 = 1;
        pub const ExposureCompensation: i32 = 2;
        pub const IsoSensitivity: i32 = 4;
        pub const ManualExposureTime: i32 = 8;
        pub const CustomFocusPoint: i32 = 16;
        pub const FocusDistance: i32 = 32;
    };
};
