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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSvgGenerator object in C++ memory
    ///
    pub fn new() QSvgGenerator {
        return .{ .ptr = qtc.QSvgGenerator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSvgGenerator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` version: qsvggenerator_enums.SvgVersion `
    ///
    pub fn new2(version: i32) QSvgGenerator {
        return .{ .ptr = qtc.QSvgGenerator_new2(@bitCast(version)) };
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QSvgGenerator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSvgGenerator_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgGenerator.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QSvgGenerator, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QSvgGenerator_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QSvgGenerator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSvgGenerator_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgGenerator.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: QSvgGenerator, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.QSvgGenerator_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn size(self: QSvgGenerator) QSize {
        return .{ .ptr = qtc.QSvgGenerator_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSize(self: QSvgGenerator, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QSvgGenerator_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `viewBox` instead
    ///
    pub const ViewBox = viewBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn viewBox(self: QSvgGenerator) QRect {
        return .{ .ptr = qtc.QSvgGenerator_ViewBox(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `viewBoxF` instead
    ///
    pub const ViewBoxF = viewBoxF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn viewBoxF(self: QSvgGenerator) QRectF {
        return .{ .ptr = qtc.QSvgGenerator_ViewBoxF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewBox` instead
    ///
    pub const SetViewBox = setViewBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _viewBox: QRect `
    ///
    pub fn setViewBox(self: QSvgGenerator, _viewBox: anytype) void {
        comptime _ = @TypeOf(_viewBox)._is_QRect;
        qtc.QSvgGenerator_SetViewBox(@ptrCast(self.ptr), @ptrCast(_viewBox.ptr));
    }

    /// ### DEPRECATED: Use `setViewBox2` instead
    ///
    pub const SetViewBox2 = setViewBox2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _viewBox: QRectF `
    ///
    pub fn setViewBox2(self: QSvgGenerator, _viewBox: anytype) void {
        comptime _ = @TypeOf(_viewBox)._is_QRectF;
        qtc.QSvgGenerator_SetViewBox2(@ptrCast(self.ptr), @ptrCast(_viewBox.ptr));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QSvgGenerator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSvgGenerator_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgGenerator.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn setFileName(self: QSvgGenerator, _fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.QSvgGenerator_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `outputDevice` instead
    ///
    pub const OutputDevice = outputDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn outputDevice(self: QSvgGenerator) QIODevice {
        return .{ .ptr = qtc.QSvgGenerator_OutputDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOutputDevice` instead
    ///
    pub const SetOutputDevice = setOutputDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _outputDevice: QIODevice `
    ///
    pub fn setOutputDevice(self: QSvgGenerator, _outputDevice: anytype) void {
        comptime _ = @TypeOf(_outputDevice)._is_QIODevice;
        qtc.QSvgGenerator_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(_outputDevice.ptr));
    }

    /// ### DEPRECATED: Use `setResolution` instead
    ///
    pub const SetResolution = setResolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` dpi: i32 `
    ///
    pub fn setResolution(self: QSvgGenerator, dpi: i32) void {
        qtc.QSvgGenerator_SetResolution(@ptrCast(self.ptr), @bitCast(dpi));
    }

    /// ### DEPRECATED: Use `resolution` instead
    ///
    pub const Resolution = resolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn resolution(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_Resolution(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `svgVersion` instead
    ///
    pub const SvgVersion = svgVersion;

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
    pub fn svgVersion(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_SvgVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn paintEngine(self: QSvgGenerator) QPaintEngine {
        return .{ .ptr = qtc.QSvgGenerator_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: QSvgGenerator, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QSvgGenerator_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn superPaintEngine(self: QSvgGenerator) QPaintEngine {
        return .{ .ptr = qtc.QSvgGenerator_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QSvgGenerator, _metric: i32) i32 {
        return qtc.QSvgGenerator_Metric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QSvgGenerator, callback: *const fn (QSvgGenerator, i32) callconv(.c) i32) void {
        qtc.QSvgGenerator_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QSvgGenerator, _metric: i32) i32 {
        return qtc.QSvgGenerator_SuperMetric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn paintingActive(self: QSvgGenerator) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn width(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn height(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn widthMM(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn heightMM(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn logicalDpiX(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn logicalDpiY(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn physicalDpiX(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn physicalDpiY(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn devicePixelRatio(self: QSvgGenerator) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn devicePixelRatioF(self: QSvgGenerator) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn colorCount(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn depth(self: QSvgGenerator) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

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
    pub fn devType(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

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
    pub fn superDevType(self: QSvgGenerator) i32 {
        return qtc.QSvgGenerator_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QSvgGenerator, callback: *const fn () callconv(.c) i32) void {
        qtc.QSvgGenerator_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

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
    pub fn initPainter(self: QSvgGenerator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QSvgGenerator_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

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
    pub fn superInitPainter(self: QSvgGenerator, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QSvgGenerator_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

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
    pub fn onInitPainter(self: QSvgGenerator, callback: *const fn (QSvgGenerator, QPainter) callconv(.c) void) void {
        qtc.QSvgGenerator_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

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
    pub fn redirected(self: QSvgGenerator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QSvgGenerator_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

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
    pub fn superRedirected(self: QSvgGenerator, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QSvgGenerator_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

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
    pub fn onRedirected(self: QSvgGenerator, callback: *const fn (QSvgGenerator, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QSvgGenerator_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

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
    pub fn sharedPainter(self: QSvgGenerator) QPainter {
        return .{ .ptr = qtc.QSvgGenerator_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

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
    pub fn superSharedPainter(self: QSvgGenerator) QPainter {
        return .{ .ptr = qtc.QSvgGenerator_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

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
    pub fn onSharedPainter(self: QSvgGenerator, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QSvgGenerator_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

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
    pub fn getDecodedMetricF(self: QSvgGenerator, metricA: i32, metricB: i32) f64 {
        return qtc.QSvgGenerator_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

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
    pub fn superGetDecodedMetricF(self: QSvgGenerator, metricA: i32, metricB: i32) f64 {
        return qtc.QSvgGenerator_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

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
    pub fn onGetDecodedMetricF(self: QSvgGenerator, callback: *const fn (QSvgGenerator, i32, i32) callconv(.c) f64) void {
        qtc.QSvgGenerator_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#dtor.QSvgGenerator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSvgGenerator `
    ///
    pub fn delete(self: QSvgGenerator) void {
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
