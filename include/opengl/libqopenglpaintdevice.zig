const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html)
pub const qopenglpaintdevice = struct {
    /// New constructs a new QOpenGLPaintDevice object.
    ///
    pub fn New() QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new();
    }

    /// New2 constructs a new QOpenGLPaintDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn New2(size: ?*anyopaque) QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new2(@ptrCast(size));
    }

    /// New3 constructs a new QOpenGLPaintDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn New3(width: i32, height: i32) QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new3(@bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPaintDevice_DevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPaintDevice_SuperDevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QOpenGLPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QOpenGLPaintDevice_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QOpenGLPaintDevice_SuperPaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#context)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLPaintDevice_Context(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QOpenGLPaintDevice_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` devicePixelRatio: f64 `
    ///
    pub fn SetDevicePixelRatio(self: ?*anyopaque, devicePixelRatio: f64) void {
        qtc.QOpenGLPaintDevice_SetDevicePixelRatio(@ptrCast(self), @bitCast(devicePixelRatio));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn DotsPerMeterX(self: ?*anyopaque) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn DotsPerMeterY(self: ?*anyopaque) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` dotsPerMeterX: f64 `
    ///
    pub fn SetDotsPerMeterX(self: ?*anyopaque, dotsPerMeterX: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterX(@ptrCast(self), @bitCast(dotsPerMeterX));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` dotsPerMeterY: f64 `
    ///
    pub fn SetDotsPerMeterY(self: ?*anyopaque, dotsPerMeterY: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterY(@ptrCast(self), @bitCast(dotsPerMeterY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setPaintFlipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` flipped: bool `
    ///
    pub fn SetPaintFlipped(self: ?*anyopaque, flipped: bool) void {
        qtc.QOpenGLPaintDevice_SetPaintFlipped(@ptrCast(self), flipped);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintFlipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn PaintFlipped(self: ?*anyopaque) bool {
        return qtc.QOpenGLPaintDevice_PaintFlipped(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn EnsureActiveTarget(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_EnsureActiveTarget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEnsureActiveTarget(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnEnsureActiveTarget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn SuperEnsureActiveTarget(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_SuperEnsureActiveTarget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_Metric(@ptrCast(self), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLPaintDevice, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_SuperMetric(@ptrCast(self), @bitCast(metric));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_InitPainter(@ptrCast(self), @ptrCast(painter));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLPaintDevice, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLPaintDevice_Redirected(@ptrCast(self), @ptrCast(offset));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLPaintDevice_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLPaintDevice, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QOpenGLPaintDevice_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QOpenGLPaintDevice_SharedPainter(@ptrCast(self));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QOpenGLPaintDevice_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QOpenGLPaintDevice_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLPaintDevice, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QOpenGLPaintDevice_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QOpenGLPaintDevice `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_Delete(@ptrCast(self));
    }
};
