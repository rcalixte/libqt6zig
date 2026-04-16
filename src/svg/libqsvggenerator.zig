const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qsvggenerator_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html)
pub const QSvgGenerator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSvgGenerator,

    pub const _is_QSvgGenerator = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QSvgGenerator object.
    ///
    pub fn New() QSvgGenerator {
        return .{ .ptr = qtc.QSvgGenerator_new() };
    }

    /// New2 constructs a new QSvgGenerator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` version: qsvggenerator_enums.SvgVersion `
    ///
    pub fn New2(version: i32) QSvgGenerator {
        return .{ .ptr = qtc.QSvgGenerator_new2(@bitCast(version)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QSvgGenerator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSvgGenerator_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: QSvgGenerator, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QSvgGenerator_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QSvgGenerator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSvgGenerator_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: QSvgGenerator, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSvgGenerator_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn Size(self: QSvgGenerator) QSize {
        return .{ .ptr = qtc.QSvgGenerator_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSize(self: QSvgGenerator, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QSvgGenerator_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn ViewBox(self: QSvgGenerator) QRect {
        return .{ .ptr = qtc.QSvgGenerator_ViewBox(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn ViewBoxF(self: QSvgGenerator) QRectF {
        return .{ .ptr = qtc.QSvgGenerator_ViewBoxF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` viewBox: QRect `
    ///
    pub fn SetViewBox(self: QSvgGenerator, viewBox: anytype) void {
        comptime _ = @TypeOf(viewBox)._is_QRect;
        qtc.QSvgGenerator_SetViewBox(@ptrCast(self.ptr), @ptrCast(viewBox.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` viewBox: QRectF `
    ///
    pub fn SetViewBox2(self: QSvgGenerator, viewBox: anytype) void {
        comptime _ = @TypeOf(viewBox)._is_QRectF;
        qtc.QSvgGenerator_SetViewBox2(@ptrCast(self.ptr), @ptrCast(viewBox.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QSvgGenerator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSvgGenerator_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: QSvgGenerator, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSvgGenerator_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn OutputDevice(self: QSvgGenerator) QIODevice {
        return .{ .ptr = qtc.QSvgGenerator_OutputDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` outputDevice: QIODevice `
    ///
    pub fn SetOutputDevice(self: QSvgGenerator, outputDevice: anytype) void {
        comptime _ = @TypeOf(outputDevice)._is_QIODevice;
        qtc.QSvgGenerator_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(outputDevice.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` dpi: i32 `
    ///
    pub fn SetResolution(self: QSvgGenerator, dpi: i32) void {
        qtc.QSvgGenerator_SetResolution(@ptrCast(self.ptr), @bitCast(dpi));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn Resolution(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_Resolution(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#svgVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ## Returns:
    ///
    /// ` qsvggenerator_enums.SvgVersion `
    ///
    pub fn SvgVersion(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_SvgVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn PaintEngine(self: QSvgGenerator) QPaintEngine {
        return .{ .ptr = qtc.QSvgGenerator_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QSvgGenerator, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QSvgGenerator_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn SuperPaintEngine(self: QSvgGenerator) QPaintEngine {
        return .{ .ptr = qtc.QSvgGenerator_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QSvgGenerator, metric: i32) i32 {
        return qtc.QSvgGenerator_Metric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` callback: *const fn (self: QSvgGenerator, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QSvgGenerator, callback: *const fn (QSvgGenerator, i32) callconv(.c) i32) void {
        qtc.QSvgGenerator_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QSvgGenerator, metric: i32) i32 {
        return qtc.QSvgGenerator_SuperMetric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn PaintingActive(self: QSvgGenerator) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn Width(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn Height(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn WidthMM(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn HeightMM(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn LogicalDpiX(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn LogicalDpiY(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn PhysicalDpiX(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn PhysicalDpiY(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn DevicePixelRatio(self: QSvgGenerator) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn DevicePixelRatioF(self: QSvgGenerator) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn ColorCount(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn Depth(self: QSvgGenerator) i32 {
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn DevType(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn SuperDevType(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QSvgGenerator, callback: *const fn () callconv(.c) i32) void {
        qtc.QSvgGenerator_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QSvgGenerator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QSvgGenerator_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QSvgGenerator `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QSvgGenerator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QSvgGenerator_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator`
    ///
    /// ` callback: *const fn (self: QSvgGenerator, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QSvgGenerator, callback: *const fn (QSvgGenerator, QPainter) callconv(.c) void) void {
        qtc.QSvgGenerator_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QSvgGenerator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QSvgGenerator_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QSvgGenerator `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QSvgGenerator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QSvgGenerator_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator`
    ///
    /// ` callback: *const fn (self: QSvgGenerator, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QSvgGenerator, callback: *const fn (QSvgGenerator, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QSvgGenerator_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn SharedPainter(self: QSvgGenerator) QPainter {
        return .{ .ptr = qtc.QSvgGenerator_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QSvgGenerator `
    ///
    pub fn SuperSharedPainter(self: QSvgGenerator) QPainter {
        return .{ .ptr = qtc.QSvgGenerator_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QSvgGenerator, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QSvgGenerator_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QSvgGenerator, metricA: i32, metricB: i32) f64 {
        return qtc.QSvgGenerator_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QSvgGenerator `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QSvgGenerator, metricA: i32, metricB: i32) f64 {
        return qtc.QSvgGenerator_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgGenerator`
    ///
    /// ` callback: *const fn (self: QSvgGenerator, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QSvgGenerator, callback: *const fn (QSvgGenerator, i32, i32) callconv(.c) f64) void {
        qtc.QSvgGenerator_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#dtor.QSvgGenerator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn Delete(self: QSvgGenerator) void {
        qtc.QSvgGenerator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#public-types)
pub const enums = struct {
    pub const SvgVersion = enum(i32) {
        pub const SvgTiny12: i32 = 0;
        pub const Svg11: i32 = 1;
    };
};
