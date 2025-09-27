const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;

/// https://doc.qt.io/qt-6/qopenglpaintdevice.html
pub const qopenglpaintdevice = struct {
    /// New constructs a new QOpenGLPaintDevice object.
    ///
    ///
    pub fn New() QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new();
    }

    /// New2 constructs a new QOpenGLPaintDevice object.
    ///
    /// ``` size: QtC.QSize ```
    pub fn New2(size: ?*anyopaque) QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new2(@ptrCast(size));
    }

    /// New3 constructs a new QOpenGLPaintDevice object.
    ///
    /// ``` width: i32, height: i32 ```
    pub fn New3(width: i32, height: i32) QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new3(@intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPaintDevice_DevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QOpenGLPaintDevice_QBaseDevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QOpenGLPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QOpenGLPaintDevice_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QOpenGLPaintDevice_QBasePaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#context)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLPaintDevice_Context(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#size)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QOpenGLPaintDevice_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setSize)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, size: QtC.QSize ```
    pub fn SetSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDevicePixelRatio)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, devicePixelRatio: f64 ```
    pub fn SetDevicePixelRatio(self: ?*anyopaque, devicePixelRatio: f64) void {
        qtc.QOpenGLPaintDevice_SetDevicePixelRatio(@ptrCast(self), @floatCast(devicePixelRatio));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterX)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn DotsPerMeterX(self: ?*anyopaque) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterY)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn DotsPerMeterY(self: ?*anyopaque) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterX)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, dotsPerMeterX: f64 ```
    pub fn SetDotsPerMeterX(self: ?*anyopaque, dotsPerMeterX: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterX(@ptrCast(self), @floatCast(dotsPerMeterX));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterY)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, dotsPerMeterY: f64 ```
    pub fn SetDotsPerMeterY(self: ?*anyopaque, dotsPerMeterY: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterY(@ptrCast(self), @floatCast(dotsPerMeterY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setPaintFlipped)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, flipped: bool ```
    pub fn SetPaintFlipped(self: ?*anyopaque, flipped: bool) void {
        qtc.QOpenGLPaintDevice_SetPaintFlipped(@ptrCast(self), flipped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintFlipped)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn PaintFlipped(self: ?*anyopaque) bool {
        return qtc.QOpenGLPaintDevice_PaintFlipped(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn EnsureActiveTarget(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_EnsureActiveTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn () callconv(.c) void ```
    pub fn OnEnsureActiveTarget(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnEnsureActiveTarget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn QBaseEnsureActiveTarget(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_QBaseEnsureActiveTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_Metric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn (self: QtC.QOpenGLPaintDevice, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn (self: QtC.QOpenGLPaintDevice, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLPaintDevice_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLPaintDevice_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn (self: QtC.QOpenGLPaintDevice, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QOpenGLPaintDevice_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QOpenGLPaintDevice_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QOpenGLPaintDevice_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QOpenGLPaintDevice_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLPaintDevice, callback: *const fn (self: QtC.QOpenGLPaintDevice, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QOpenGLPaintDevice_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dtor.QOpenGLPaintDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLPaintDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_Delete(@ptrCast(self));
    }
};
