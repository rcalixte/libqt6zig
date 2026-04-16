const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QSize = @import("libqt6").QSize;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html)
pub const QOpenGLPaintDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLPaintDevice,

    pub const _is_QOpenGLPaintDevice = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QOpenGLPaintDevice object.
    ///
    pub fn New() QOpenGLPaintDevice {
        return .{ .ptr = qtc.QOpenGLPaintDevice_new() };
    }

    /// New2 constructs a new QOpenGLPaintDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    pub fn New2(size: anytype) QOpenGLPaintDevice {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLPaintDevice_new2(@ptrCast(size.ptr)) };
    }

    /// New3 constructs a new QOpenGLPaintDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn New3(width: i32, height: i32) QOpenGLPaintDevice {
        return .{ .ptr = qtc.QOpenGLPaintDevice_new3(@bitCast(width), @bitCast(height)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn DevType(self: QOpenGLPaintDevice) i32 {
        return qtc.QOpenGLPaintDevice_DevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn SuperDevType(self: QOpenGLPaintDevice) i32 {
        return qtc.QOpenGLPaintDevice_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn PaintEngine(self: QOpenGLPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QOpenGLPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QOpenGLPaintDevice_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn SuperPaintEngine(self: QOpenGLPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QOpenGLPaintDevice_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#context)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn Context(self: QOpenGLPaintDevice) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLPaintDevice_Context(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn Size(self: QOpenGLPaintDevice) QSize {
        return .{ .ptr = qtc.QOpenGLPaintDevice_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSize(self: QOpenGLPaintDevice, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLPaintDevice_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` devicePixelRatio: f64 `
    ///
    pub fn SetDevicePixelRatio(self: QOpenGLPaintDevice, devicePixelRatio: f64) void {
        qtc.QOpenGLPaintDevice_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(devicePixelRatio));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn DotsPerMeterX(self: QOpenGLPaintDevice) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn DotsPerMeterY(self: QOpenGLPaintDevice) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` dotsPerMeterX: f64 `
    ///
    pub fn SetDotsPerMeterX(self: QOpenGLPaintDevice, dotsPerMeterX: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterX(@ptrCast(self.ptr), @bitCast(dotsPerMeterX));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` dotsPerMeterY: f64 `
    ///
    pub fn SetDotsPerMeterY(self: QOpenGLPaintDevice, dotsPerMeterY: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterY(@ptrCast(self.ptr), @bitCast(dotsPerMeterY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setPaintFlipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` flipped: bool `
    ///
    pub fn SetPaintFlipped(self: QOpenGLPaintDevice, flipped: bool) void {
        qtc.QOpenGLPaintDevice_SetPaintFlipped(@ptrCast(self.ptr), flipped);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintFlipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn PaintFlipped(self: QOpenGLPaintDevice) bool {
        return qtc.QOpenGLPaintDevice_PaintFlipped(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn EnsureActiveTarget(self: QOpenGLPaintDevice) void {
        qtc.QOpenGLPaintDevice_EnsureActiveTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEnsureActiveTarget(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnEnsureActiveTarget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnsureActiveTarget` instead
    ///
    pub const QBaseEnsureActiveTarget = SuperEnsureActiveTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn SuperEnsureActiveTarget(self: QOpenGLPaintDevice) void {
        qtc.QOpenGLPaintDevice_SuperEnsureActiveTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QOpenGLPaintDevice, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_Metric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, i32) callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QOpenGLPaintDevice, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_SuperMetric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn PaintingActive(self: QOpenGLPaintDevice) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn Width(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn Height(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn WidthMM(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn HeightMM(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn LogicalDpiX(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn LogicalDpiY(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn PhysicalDpiX(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn PhysicalDpiY(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn DevicePixelRatio(self: QOpenGLPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn DevicePixelRatioF(self: QOpenGLPaintDevice) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn ColorCount(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn Depth(self: QOpenGLPaintDevice) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QOpenGLPaintDevice, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLPaintDevice_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QOpenGLPaintDevice, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLPaintDevice_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, QPainter) callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QOpenGLPaintDevice, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLPaintDevice_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QOpenGLPaintDevice, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLPaintDevice_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QOpenGLPaintDevice_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn SharedPainter(self: QOpenGLPaintDevice) QPainter {
        return .{ .ptr = qtc.QOpenGLPaintDevice_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn SuperSharedPainter(self: QOpenGLPaintDevice) QPainter {
        return .{ .ptr = qtc.QOpenGLPaintDevice_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QOpenGLPaintDevice_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QOpenGLPaintDevice, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QOpenGLPaintDevice, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, i32, i32) callconv(.c) f64) void {
        qtc.QOpenGLPaintDevice_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dtor.QOpenGLPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn Delete(self: QOpenGLPaintDevice) void {
        qtc.QOpenGLPaintDevice_Delete(@ptrCast(self.ptr));
    }
};
