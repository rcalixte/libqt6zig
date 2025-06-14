const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsvggenerator.html
pub const qsvggenerator = struct {
    /// New constructs a new QSvgGenerator object.
    ///
    ///
    pub fn New() QtC.QSvgGenerator {
        return qtc.QSvgGenerator_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#title)
    ///
    /// ``` self: QtC.QSvgGenerator, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
    ///
    /// ``` self: QtC.QSvgGenerator, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QSvgGenerator_SetTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#description)
    ///
    /// ``` self: QtC.QSvgGenerator, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
    ///
    /// ``` self: QtC.QSvgGenerator, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSvgGenerator_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#size)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QSvgGenerator_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
    ///
    /// ``` self: QtC.QSvgGenerator, size: QtC.QSize ```
    pub fn SetSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QSvgGenerator_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn ViewBox(self: ?*anyopaque) QtC.QRect {
        return qtc.QSvgGenerator_ViewBox(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn ViewBoxF(self: ?*anyopaque) QtC.QRectF {
        return qtc.QSvgGenerator_ViewBoxF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ``` self: QtC.QSvgGenerator, viewBox: QtC.QRect ```
    pub fn SetViewBox(self: ?*anyopaque, viewBox: ?*anyopaque) void {
        qtc.QSvgGenerator_SetViewBox(@ptrCast(self), @ptrCast(viewBox));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ``` self: QtC.QSvgGenerator, viewBox: QtC.QRectF ```
    pub fn SetViewBoxWithViewBox(self: ?*anyopaque, viewBox: ?*anyopaque) void {
        qtc.QSvgGenerator_SetViewBoxWithViewBox(@ptrCast(self), @ptrCast(viewBox));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
    ///
    /// ``` self: QtC.QSvgGenerator, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
    ///
    /// ``` self: QtC.QSvgGenerator, fileName: []const u8 ```
    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSvgGenerator_SetFileName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn OutputDevice(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QSvgGenerator_OutputDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
    ///
    /// ``` self: QtC.QSvgGenerator, outputDevice: QtC.QIODevice ```
    pub fn SetOutputDevice(self: ?*anyopaque, outputDevice: ?*anyopaque) void {
        qtc.QSvgGenerator_SetOutputDevice(@ptrCast(self), @ptrCast(outputDevice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
    ///
    /// ``` self: QtC.QSvgGenerator, dpi: i32 ```
    pub fn SetResolution(self: ?*anyopaque, dpi: i32) void {
        qtc.QSvgGenerator_SetResolution(@ptrCast(self), @intCast(dpi));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn Resolution(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_Resolution(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QSvgGenerator_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSvgGenerator, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QSvgGenerator_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QSvgGenerator_QBasePaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// ``` self: QtC.QSvgGenerator, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, metric: i64) i32 {
        return qtc.QSvgGenerator_Metric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSvgGenerator, slot: fn (self: QtC.QSvgGenerator, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QSvgGenerator_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSvgGenerator, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, metric: i64) i32 {
        return qtc.QSvgGenerator_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QSvgGenerator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_DevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QSvgGenerator_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSvgGenerator_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QSvgGenerator_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QSvgGenerator_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, slot: fn (self: QtC.QSvgGenerator, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSvgGenerator_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QSvgGenerator_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QSvgGenerator_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, slot: fn (self: QtC.QSvgGenerator, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QSvgGenerator_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QSvgGenerator_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QSvgGenerator_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSvgGenerator, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QSvgGenerator_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#dtor.QSvgGenerator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSvgGenerator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSvgGenerator_Delete(@ptrCast(self));
    }
};
