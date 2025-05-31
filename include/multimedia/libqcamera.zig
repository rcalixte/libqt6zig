const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
    pub fn New() QtC.QCamera {
        return qtc.QCamera_new();
    }

    /// New2 constructs a new QCamera object.
    ///
    /// ``` cameraDevice: QtC.QCameraDevice ```
    pub fn New2(cameraDevice: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new2(@ptrCast(cameraDevice));
    }

    /// New3 constructs a new QCamera object.
    ///
    /// ``` position: qcameradevice_enums.Position ```
    pub fn New3(position: i64) QtC.QCamera {
        return qtc.QCamera_new3(@intCast(position));
    }

    /// New4 constructs a new QCamera object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New4(parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QCamera object.
    ///
    /// ``` cameraDevice: QtC.QCameraDevice, parent: QtC.QObject ```
    pub fn New5(cameraDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new5(@ptrCast(cameraDevice), @ptrCast(parent));
    }

    /// New6 constructs a new QCamera object.
    ///
    /// ``` position: qcameradevice_enums.Position, parent: QtC.QObject ```
    pub fn New6(position: i64, parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new6(@intCast(position), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCamera_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QCamera, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return qtc.QCamera_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCamera_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QCamera_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QCamera_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = qtc.QCamera_Tr(s_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return qtc.QCamera_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isActive)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QCamera_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#captureSession)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CaptureSession(self: ?*anyopaque) QtC.QMediaCaptureSession {
        return qtc.QCamera_CaptureSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CameraDevice(self: ?*anyopaque) QtC.QCameraDevice {
        return qtc.QCamera_CameraDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
    ///
    /// ``` self: QtC.QCamera, cameraDevice: QtC.QCameraDevice ```
    pub fn SetCameraDevice(self: ?*anyopaque, cameraDevice: ?*anyopaque) void {
        qtc.QCamera_SetCameraDevice(@ptrCast(self), @ptrCast(cameraDevice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CameraFormat(self: ?*anyopaque) QtC.QCameraFormat {
        return qtc.QCamera_CameraFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
    ///
    /// ``` self: QtC.QCamera, format: QtC.QCameraFormat ```
    pub fn SetCameraFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QCamera_SetCameraFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#error)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QCamera_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorString)
    ///
    /// ``` self: QtC.QCamera, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCamera_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.ErrorString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SupportedFeatures(self: ?*anyopaque) i64 {
        return qtc.QCamera_SupportedFeatures(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusMode)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FocusMode(self: ?*anyopaque) i64 {
        return qtc.QCamera_FocusMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.FocusMode ```
    pub fn SetFocusMode(self: ?*anyopaque, mode: i64) void {
        qtc.QCamera_SetFocusMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.FocusMode ```
    pub fn IsFocusModeSupported(self: ?*anyopaque, mode: i64) bool {
        return qtc.QCamera_IsFocusModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FocusPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QCamera_FocusPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CustomFocusPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QCamera_CustomFocusPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
    ///
    /// ``` self: QtC.QCamera, point: QtC.QPointF ```
    pub fn SetCustomFocusPoint(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QCamera_SetCustomFocusPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
    ///
    /// ``` self: QtC.QCamera, d: f32 ```
    pub fn SetFocusDistance(self: ?*anyopaque, d: f32) void {
        qtc.QCamera_SetFocusDistance(@ptrCast(self), @floatCast(d));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FocusDistance(self: ?*anyopaque) f32 {
        return qtc.QCamera_FocusDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MinimumZoomFactor(self: ?*anyopaque) f32 {
        return qtc.QCamera_MinimumZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MaximumZoomFactor(self: ?*anyopaque) f32 {
        return qtc.QCamera_MaximumZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ZoomFactor(self: ?*anyopaque) f32 {
        return qtc.QCamera_ZoomFactor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
    ///
    /// ``` self: QtC.QCamera, factor: f32 ```
    pub fn SetZoomFactor(self: ?*anyopaque, factor: f32) void {
        qtc.QCamera_SetZoomFactor(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashMode)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FlashMode(self: ?*anyopaque) i64 {
        return qtc.QCamera_FlashMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.FlashMode ```
    pub fn IsFlashModeSupported(self: ?*anyopaque, mode: i64) bool {
        return qtc.QCamera_IsFlashModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsFlashReady(self: ?*anyopaque) bool {
        return qtc.QCamera_IsFlashReady(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchMode)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn TorchMode(self: ?*anyopaque) i64 {
        return qtc.QCamera_TorchMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.TorchMode ```
    pub fn IsTorchModeSupported(self: ?*anyopaque, mode: i64) bool {
        return qtc.QCamera_IsTorchModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ExposureMode(self: ?*anyopaque) i64 {
        return qtc.QCamera_ExposureMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.ExposureMode ```
    pub fn IsExposureModeSupported(self: ?*anyopaque, mode: i64) bool {
        return qtc.QCamera_IsExposureModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ExposureCompensation(self: ?*anyopaque) f32 {
        return qtc.QCamera_ExposureCompensation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_IsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ManualIsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_ManualIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_ExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ManualExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_ManualExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MinimumIsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_MinimumIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MaximumIsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_MaximumIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MinimumExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_MinimumExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn MaximumExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_MaximumExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn WhiteBalanceMode(self: ?*anyopaque) i64 {
        return qtc.QCamera_WhiteBalanceMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.WhiteBalanceMode ```
    pub fn IsWhiteBalanceModeSupported(self: ?*anyopaque, mode: i64) bool {
        return qtc.QCamera_IsWhiteBalanceModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ColorTemperature(self: ?*anyopaque) i32 {
        return qtc.QCamera_ColorTemperature(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setActive)
    ///
    /// ``` self: QtC.QCamera, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QCamera_SetActive(@ptrCast(self), active);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#start)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.QCamera_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#stop)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QCamera_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
    ///
    /// ``` self: QtC.QCamera, zoom: f32, rate: f32 ```
    pub fn ZoomTo(self: ?*anyopaque, zoom: f32, rate: f32) void {
        qtc.QCamera_ZoomTo(@ptrCast(self), @floatCast(zoom), @floatCast(rate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.FlashMode ```
    pub fn SetFlashMode(self: ?*anyopaque, mode: i64) void {
        qtc.QCamera_SetFlashMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.TorchMode ```
    pub fn SetTorchMode(self: ?*anyopaque, mode: i64) void {
        qtc.QCamera_SetTorchMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.ExposureMode ```
    pub fn SetExposureMode(self: ?*anyopaque, mode: i64) void {
        qtc.QCamera_SetExposureMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
    ///
    /// ``` self: QtC.QCamera, ev: f32 ```
    pub fn SetExposureCompensation(self: ?*anyopaque, ev: f32) void {
        qtc.QCamera_SetExposureCompensation(@ptrCast(self), @floatCast(ev));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
    ///
    /// ``` self: QtC.QCamera, iso: i32 ```
    pub fn SetManualIsoSensitivity(self: ?*anyopaque, iso: i32) void {
        qtc.QCamera_SetManualIsoSensitivity(@ptrCast(self), @intCast(iso));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SetAutoIsoSensitivity(self: ?*anyopaque) void {
        qtc.QCamera_SetAutoIsoSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
    ///
    /// ``` self: QtC.QCamera, seconds: f32 ```
    pub fn SetManualExposureTime(self: ?*anyopaque, seconds: f32) void {
        qtc.QCamera_SetManualExposureTime(@ptrCast(self), @floatCast(seconds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SetAutoExposureTime(self: ?*anyopaque) void {
        qtc.QCamera_SetAutoExposureTime(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
    ///
    /// ``` self: QtC.QCamera, mode: qcamera_enums.WhiteBalanceMode ```
    pub fn SetWhiteBalanceMode(self: ?*anyopaque, mode: i64) void {
        qtc.QCamera_SetWhiteBalanceMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
    ///
    /// ``` self: QtC.QCamera, colorTemperature: i32 ```
    pub fn SetColorTemperature(self: ?*anyopaque, colorTemperature: i32) void {
        qtc.QCamera_SetColorTemperature(@ptrCast(self), @intCast(colorTemperature));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ``` self: QtC.QCamera, param1: bool ```
    pub fn ActiveChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QCamera_ActiveChanged(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: bool) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        qtc.QCamera_ErrorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ``` self: QtC.QCamera, errorVal: qcamera_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64, errorString: []const u8) void {
        const errorString_str = qtc.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        qtc.QCamera_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, errorVal: qcamera_enums.Error, errorString: []const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CameraDeviceChanged(self: ?*anyopaque) void {
        qtc.QCamera_CameraDeviceChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnCameraDeviceChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraDeviceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CameraFormatChanged(self: ?*anyopaque) void {
        qtc.QCamera_CameraFormatChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnCameraFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SupportedFeaturesChanged(self: ?*anyopaque) void {
        qtc.QCamera_SupportedFeaturesChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnSupportedFeaturesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_SupportedFeaturesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FocusModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_FocusModeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnFocusModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ``` self: QtC.QCamera, param1: f32 ```
    pub fn ZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_ZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: f32) callconv(.c) void ```
    pub fn OnZoomFactorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ZoomFactorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ``` self: QtC.QCamera, param1: f32 ```
    pub fn MinimumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_MinimumZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: f32) callconv(.c) void ```
    pub fn OnMinimumZoomFactorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MinimumZoomFactorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ``` self: QtC.QCamera, param1: f32 ```
    pub fn MaximumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_MaximumZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: f32) callconv(.c) void ```
    pub fn OnMaximumZoomFactorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MaximumZoomFactorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ``` self: QtC.QCamera, param1: f32 ```
    pub fn FocusDistanceChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_FocusDistanceChanged(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: f32) callconv(.c) void ```
    pub fn OnFocusDistanceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusDistanceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FocusPointChanged(self: ?*anyopaque) void {
        qtc.QCamera_FocusPointChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnFocusPointChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusPointChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn CustomFocusPointChanged(self: ?*anyopaque) void {
        qtc.QCamera_CustomFocusPointChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnCustomFocusPointChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CustomFocusPointChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ``` self: QtC.QCamera, param1: bool ```
    pub fn FlashReady(self: ?*anyopaque, param1: bool) void {
        qtc.QCamera_FlashReady(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: bool) callconv(.c) void ```
    pub fn OnFlashReady(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashReady(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn FlashModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_FlashModeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnFlashModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn TorchModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_TorchModeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnTorchModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_TorchModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ``` self: QtC.QCamera, speed: f32 ```
    pub fn ExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        qtc.QCamera_ExposureTimeChanged(@ptrCast(self), @floatCast(speed));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, speed: f32) callconv(.c) void ```
    pub fn OnExposureTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ``` self: QtC.QCamera, speed: f32 ```
    pub fn ManualExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        qtc.QCamera_ManualExposureTimeChanged(@ptrCast(self), @floatCast(speed));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, speed: f32) callconv(.c) void ```
    pub fn OnManualExposureTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualExposureTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ``` self: QtC.QCamera, param1: i32 ```
    pub fn IsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCamera_IsoSensitivityChanged(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: i32) callconv(.c) void ```
    pub fn OnIsoSensitivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_IsoSensitivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ``` self: QtC.QCamera, param1: i32 ```
    pub fn ManualIsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCamera_ManualIsoSensitivityChanged(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: i32) callconv(.c) void ```
    pub fn OnManualIsoSensitivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualIsoSensitivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ``` self: QtC.QCamera, param1: f32 ```
    pub fn ExposureCompensationChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_ExposureCompensationChanged(@ptrCast(self), @floatCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, param1: f32) callconv(.c) void ```
    pub fn OnExposureCompensationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureCompensationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ExposureModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_ExposureModeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnExposureModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn WhiteBalanceModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_WhiteBalanceModeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnWhiteBalanceModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_WhiteBalanceModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ColorTemperatureChanged(self: ?*anyopaque) void {
        qtc.QCamera_ColorTemperatureChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnColorTemperatureChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ColorTemperatureChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn BrightnessChanged(self: ?*anyopaque) void {
        qtc.QCamera_BrightnessChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnBrightnessChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_BrightnessChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn ContrastChanged(self: ?*anyopaque) void {
        qtc.QCamera_ContrastChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnContrastChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ContrastChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SaturationChanged(self: ?*anyopaque) void {
        qtc.QCamera_SaturationChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnSaturationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_SaturationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn HueChanged(self: ?*anyopaque) void {
        qtc.QCamera_HueChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera) callconv(.c) void ```
    pub fn OnHueChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_HueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = qtc.QCamera_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr2: Memory allocation failed");
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
        const _str = qtc.QCamera_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr3: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QCamera, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.ObjectName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QCamera, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QCamera, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QCamera, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCamera, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QCamera, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QCamera, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcamera.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QCamera, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QCamera, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QCamera, obj: QtC.QObject ```
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
    /// ``` self: QtC.QCamera, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QCamera, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QCamera, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QCamera, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcamera.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcamera.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QCamera, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QCamera ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QCamera, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QCamera, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QCamera, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCamera_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCamera_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCamera_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCamera_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QCamera_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCamera_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCamera_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QCamera_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return qtc.QCamera_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return qtc.QCamera_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QCamera_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCamera_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCamera_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QCamera, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCamera_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QCamera, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#dtor.QCamera)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCamera ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCamera_Delete(@ptrCast(self));
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
