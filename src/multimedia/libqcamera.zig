const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcamera_enums = enums;
const qcameradevice_enums = @import("libqcameradevice.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html)
pub const qcamera = struct {
    /// New constructs a new QCamera object.
    ///
    pub fn New() QtC.QCamera {
        return qtc.QCamera_new();
    }

    /// New2 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cameraDevice: QtC.QCameraDevice `
    ///
    pub fn New2(cameraDevice: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new2(@ptrCast(cameraDevice));
    }

    /// New3 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` position: qcameradevice_enums.Position `
    ///
    pub fn New3(position: i32) QtC.QCamera {
        return qtc.QCamera_new3(@intCast(position));
    }

    /// New4 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cameraDevice: QtC.QCameraDevice `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New5(cameraDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new5(@ptrCast(cameraDevice), @ptrCast(parent));
    }

    /// New6 constructs a new QCamera object.
    ///
    /// ## Parameter(s):
    ///
    /// ` position: qcameradevice_enums.Position `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New6(position: i32, parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new6(@intCast(position), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCamera_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QCamera_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QCamera_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCamera_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCamera_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCamera_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCamera_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCamera_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCamera_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QCamera `
    ///
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return qtc.QCamera_IsAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QCamera_IsActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CaptureSession(self: ?*anyopaque) QtC.QMediaCaptureSession {
        return qtc.QCamera_CaptureSession(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CameraDevice(self: ?*anyopaque) QtC.QCameraDevice {
        return qtc.QCamera_CameraDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` cameraDevice: QtC.QCameraDevice `
    ///
    pub fn SetCameraDevice(self: ?*anyopaque, cameraDevice: ?*anyopaque) void {
        qtc.QCamera_SetCameraDevice(@ptrCast(self), @ptrCast(cameraDevice));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CameraFormat(self: ?*anyopaque) QtC.QCameraFormat {
        return qtc.QCamera_CameraFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` format: QtC.QCameraFormat `
    ///
    pub fn SetCameraFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QCamera_SetCameraFormat(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QCamera_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCamera_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` flag of qcamera_enums.Feature `
    ///
    pub fn SupportedFeatures(self: ?*anyopaque) i32 {
        return qtc.QCamera_SupportedFeatures(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.FocusMode `
    ///
    pub fn FocusMode(self: ?*anyopaque) i32 {
        return qtc.QCamera_FocusMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.FocusMode `
    ///
    pub fn SetFocusMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetFocusMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.FocusMode `
    ///
    pub fn IsFocusModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsFocusModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn FocusPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QCamera_FocusPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CustomFocusPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QCamera_CustomFocusPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn SetCustomFocusPoint(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QCamera_SetCustomFocusPoint(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` d: f32 `
    ///
    pub fn SetFocusDistance(self: ?*anyopaque, d: f32) void {
        qtc.QCamera_SetFocusDistance(@ptrCast(self), @floatCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn FocusDistance(self: ?*anyopaque) f32 {
        return qtc.QCamera_FocusDistance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MinimumZoomFactor(self: ?*anyopaque) f32 {
        return qtc.QCamera_MinimumZoomFactor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MaximumZoomFactor(self: ?*anyopaque) f32 {
        return qtc.QCamera_MaximumZoomFactor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ZoomFactor(self: ?*anyopaque) f32 {
        return qtc.QCamera_ZoomFactor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` factor: f32 `
    ///
    pub fn SetZoomFactor(self: ?*anyopaque, factor: f32) void {
        qtc.QCamera_SetZoomFactor(@ptrCast(self), @floatCast(factor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.FlashMode `
    ///
    pub fn FlashMode(self: ?*anyopaque) i32 {
        return qtc.QCamera_FlashMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.FlashMode `
    ///
    pub fn IsFlashModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsFlashModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn IsFlashReady(self: ?*anyopaque) bool {
        return qtc.QCamera_IsFlashReady(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.TorchMode `
    ///
    pub fn TorchMode(self: ?*anyopaque) i32 {
        return qtc.QCamera_TorchMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.TorchMode `
    ///
    pub fn IsTorchModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsTorchModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.ExposureMode `
    ///
    pub fn ExposureMode(self: ?*anyopaque) i32 {
        return qtc.QCamera_ExposureMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.ExposureMode `
    ///
    pub fn IsExposureModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsExposureModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ExposureCompensation(self: ?*anyopaque) f32 {
        return qtc.QCamera_ExposureCompensation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn IsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_IsoSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ManualIsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_ManualIsoSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_ExposureTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ManualExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_ManualExposureTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MinimumIsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_MinimumIsoSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MaximumIsoSensitivity(self: ?*anyopaque) i32 {
        return qtc.QCamera_MaximumIsoSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MinimumExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_MinimumExposureTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn MaximumExposureTime(self: ?*anyopaque) f32 {
        return qtc.QCamera_MaximumExposureTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ## Returns:
    ///
    /// ` qcamera_enums.WhiteBalanceMode `
    ///
    pub fn WhiteBalanceMode(self: ?*anyopaque) i32 {
        return qtc.QCamera_WhiteBalanceMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.WhiteBalanceMode `
    ///
    pub fn IsWhiteBalanceModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsWhiteBalanceModeSupported(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ColorTemperature(self: ?*anyopaque) i32 {
        return qtc.QCamera_ColorTemperature(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QCamera_SetActive(@ptrCast(self), active);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn Start(self: ?*anyopaque) void {
        qtc.QCamera_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QCamera_Stop(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` zoom: f32 `
    ///
    /// ` rate: f32 `
    ///
    pub fn ZoomTo(self: ?*anyopaque, zoom: f32, rate: f32) void {
        qtc.QCamera_ZoomTo(@ptrCast(self), @floatCast(zoom), @floatCast(rate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.FlashMode `
    ///
    pub fn SetFlashMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetFlashMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.TorchMode `
    ///
    pub fn SetTorchMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetTorchMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.ExposureMode `
    ///
    pub fn SetExposureMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetExposureMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` ev: f32 `
    ///
    pub fn SetExposureCompensation(self: ?*anyopaque, ev: f32) void {
        qtc.QCamera_SetExposureCompensation(@ptrCast(self), @floatCast(ev));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` iso: i32 `
    ///
    pub fn SetManualIsoSensitivity(self: ?*anyopaque, iso: i32) void {
        qtc.QCamera_SetManualIsoSensitivity(@ptrCast(self), @intCast(iso));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn SetAutoIsoSensitivity(self: ?*anyopaque) void {
        qtc.QCamera_SetAutoIsoSensitivity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` seconds: f32 `
    ///
    pub fn SetManualExposureTime(self: ?*anyopaque, seconds: f32) void {
        qtc.QCamera_SetManualExposureTime(@ptrCast(self), @floatCast(seconds));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn SetAutoExposureTime(self: ?*anyopaque) void {
        qtc.QCamera_SetAutoExposureTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` mode: qcamera_enums.WhiteBalanceMode `
    ///
    pub fn SetWhiteBalanceMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetWhiteBalanceMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` colorTemperature: i32 `
    ///
    pub fn SetColorTemperature(self: ?*anyopaque, colorTemperature: i32) void {
        qtc.QCamera_SetColorTemperature(@ptrCast(self), @intCast(colorTemperature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: bool `
    ///
    pub fn ActiveChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QCamera_ActiveChanged(@ptrCast(self), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: bool) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_ActiveChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ErrorChanged(self: ?*anyopaque) void {
        qtc.QCamera_ErrorChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` errorVal: qcamera_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QCamera_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, errorVal: qcamera_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CameraDeviceChanged(self: ?*anyopaque) void {
        qtc.QCamera_CameraDeviceChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnCameraDeviceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraDeviceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CameraFormatChanged(self: ?*anyopaque) void {
        qtc.QCamera_CameraFormatChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnCameraFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn SupportedFeaturesChanged(self: ?*anyopaque) void {
        qtc.QCamera_SupportedFeaturesChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnSupportedFeaturesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_SupportedFeaturesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn FocusModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_FocusModeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnFocusModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn ZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_ZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn MinimumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_MinimumZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnMinimumZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MinimumZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn MaximumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_MaximumZoomFactorChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnMaximumZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MaximumZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn FocusDistanceChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_FocusDistanceChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnFocusDistanceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusDistanceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn FocusPointChanged(self: ?*anyopaque) void {
        qtc.QCamera_FocusPointChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnFocusPointChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusPointChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn CustomFocusPointChanged(self: ?*anyopaque) void {
        qtc.QCamera_CustomFocusPointChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnCustomFocusPointChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CustomFocusPointChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: bool `
    ///
    pub fn FlashReady(self: ?*anyopaque, param1: bool) void {
        qtc.QCamera_FlashReady(@ptrCast(self), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashReady)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: bool) callconv(.c) void `
    ///
    pub fn OnFlashReady(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashReady(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn FlashModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_FlashModeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnFlashModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn TorchModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_TorchModeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnTorchModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_TorchModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` speed: f32 `
    ///
    pub fn ExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        qtc.QCamera_ExposureTimeChanged(@ptrCast(self), @floatCast(speed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, speed: f32) callconv(.c) void `
    ///
    pub fn OnExposureTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` speed: f32 `
    ///
    pub fn ManualExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        qtc.QCamera_ManualExposureTimeChanged(@ptrCast(self), @floatCast(speed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, speed: f32) callconv(.c) void `
    ///
    pub fn OnManualExposureTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualExposureTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: i32 `
    ///
    pub fn IsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCamera_IsoSensitivityChanged(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: i32) callconv(.c) void `
    ///
    pub fn OnIsoSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_IsoSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: i32 `
    ///
    pub fn ManualIsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCamera_ManualIsoSensitivityChanged(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: i32) callconv(.c) void `
    ///
    pub fn OnManualIsoSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualIsoSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: f32 `
    ///
    pub fn ExposureCompensationChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_ExposureCompensationChanged(@ptrCast(self), @floatCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: f32) callconv(.c) void `
    ///
    pub fn OnExposureCompensationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureCompensationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ExposureModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_ExposureModeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnExposureModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn WhiteBalanceModeChanged(self: ?*anyopaque) void {
        qtc.QCamera_WhiteBalanceModeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnWhiteBalanceModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_WhiteBalanceModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ColorTemperatureChanged(self: ?*anyopaque) void {
        qtc.QCamera_ColorTemperatureChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnColorTemperatureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ColorTemperatureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn BrightnessChanged(self: ?*anyopaque) void {
        qtc.QCamera_BrightnessChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnBrightnessChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_BrightnessChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn ContrastChanged(self: ?*anyopaque) void {
        qtc.QCamera_ContrastChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnContrastChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ContrastChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn SaturationChanged(self: ?*anyopaque) void {
        qtc.QCamera_SaturationChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnSaturationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_SaturationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn HueChanged(self: ?*anyopaque) void {
        qtc.QCamera_HueChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnHueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_HueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ` self: QtC.QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QCamera `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qcamera.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QCamera `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCamera_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCamera_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCamera_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCamera_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QCamera_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCamera_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QCamera_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QCamera_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCamera_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QCamera_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QCamera_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCamera_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCamera_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCamera_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCamera_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QCamera_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera`
    ///
    /// ` callback: *const fn (self: QtC.QCamera, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCamera_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QCamera `
    ///
    /// ` callback: *const fn (self: QtC.QCamera, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#dtor.QCamera)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCamera `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCamera_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcamera.html#public-types)
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
