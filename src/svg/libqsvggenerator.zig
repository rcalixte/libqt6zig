const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qsvggenerator_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html)
pub const qsvggenerator = struct {
    /// New constructs a new QSvgGenerator object.
    ///
    pub fn New() QtC.QSvgGenerator {
        return qtc.QSvgGenerator_new();
    }

    /// New2 constructs a new QSvgGenerator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: qsvggenerator_enums.SvgVersion `
    ///
    pub fn New2(version: i32) QtC.QSvgGenerator {
        return qtc.QSvgGenerator_new2(@intCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QSvgGenerator_SetTitle(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSvgGenerator_SetDescription(@ptrCast(self), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QSvgGenerator_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QSvgGenerator_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn ViewBox(self: ?*anyopaque) QtC.QRect {
        return qtc.QSvgGenerator_ViewBox(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn ViewBoxF(self: ?*anyopaque) QtC.QRectF {
        return qtc.QSvgGenerator_ViewBoxF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` viewBox: QtC.QRect `
    ///
    pub fn SetViewBox(self: ?*anyopaque, viewBox: ?*anyopaque) void {
        qtc.QSvgGenerator_SetViewBox(@ptrCast(self), @ptrCast(viewBox));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` viewBox: QtC.QRectF `
    ///
    pub fn SetViewBox2(self: ?*anyopaque, viewBox: ?*anyopaque) void {
        qtc.QSvgGenerator_SetViewBox2(@ptrCast(self), @ptrCast(viewBox));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSvgGenerator_SetFileName(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn OutputDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QSvgGenerator_OutputDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` outputDevice: QtC.QIODevice `
    ///
    pub fn SetOutputDevice(self: ?*anyopaque, outputDevice: ?*anyopaque) void {
        qtc.QSvgGenerator_SetOutputDevice(@ptrCast(self), @ptrCast(outputDevice));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` dpi: i32 `
    ///
    pub fn SetResolution(self: ?*anyopaque, dpi: i32) void {
        qtc.QSvgGenerator_SetResolution(@ptrCast(self), @intCast(dpi));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn Resolution(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_Resolution(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#svgVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ## Returns:
    ///
    /// ` qsvggenerator_enums.SvgVersion `
    ///
    pub fn SvgVersion(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_SvgVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QSvgGenerator_PaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QSvgGenerator_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QSvgGenerator_QBasePaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QSvgGenerator_Metric(@ptrCast(self), @intCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` callback: *const fn (self: QtC.QSvgGenerator, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSvgGenerator_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QSvgGenerator_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
    /// ` self: QtC.QSvgGenerator `
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
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_DevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSvgGenerator_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QSvgGenerator_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QSvgGenerator_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator`
    ///
    /// ` callback: *const fn (self: QtC.QSvgGenerator, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSvgGenerator_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QSvgGenerator_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QSvgGenerator_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator`
    ///
    /// ` callback: *const fn (self: QtC.QSvgGenerator, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QSvgGenerator_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QSvgGenerator_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QSvgGenerator_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QSvgGenerator_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QSvgGenerator_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QSvgGenerator_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSvgGenerator`
    ///
    /// ` callback: *const fn (self: QtC.QSvgGenerator, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QSvgGenerator_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#dtor.QSvgGenerator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSvgGenerator `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSvgGenerator_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#public-types)
pub const enums = struct {
    pub const SvgVersion = enum {
        pub const SvgTiny12: i32 = 0;
        pub const Svg11: i32 = 1;
    };
};
