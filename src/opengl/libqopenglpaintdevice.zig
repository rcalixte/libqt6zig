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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLPaintDevice object in C++ memory
    ///
    pub fn new() QOpenGLPaintDevice {
        return .{ .ptr = qtc.QOpenGLPaintDevice_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLPaintDevice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    pub fn new2(_size: anytype) QOpenGLPaintDevice {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLPaintDevice_new2(@ptrCast(_size.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLPaintDevice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn new3(_width: i32, _height: i32) QOpenGLPaintDevice {
        return .{ .ptr = qtc.QOpenGLPaintDevice_new3(@bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn devType(self: QOpenGLPaintDevice) i32 {
        return qtc.QOpenGLPaintDevice_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn superDevType(self: QOpenGLPaintDevice) i32 {
        return qtc.QOpenGLPaintDevice_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn paintEngine(self: QOpenGLPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QOpenGLPaintDevice_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QOpenGLPaintDevice_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn superPaintEngine(self: QOpenGLPaintDevice) QPaintEngine {
        return .{ .ptr = qtc.QOpenGLPaintDevice_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `context` instead
    ///
    pub const Context = context;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#context)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn context(self: QOpenGLPaintDevice) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLPaintDevice_Context(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn size(self: QOpenGLPaintDevice) QSize {
        return .{ .ptr = qtc.QOpenGLPaintDevice_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSize(self: QOpenGLPaintDevice, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QOpenGLPaintDevice_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` _devicePixelRatio: f64 `
    ///
    pub fn setDevicePixelRatio(self: QOpenGLPaintDevice, _devicePixelRatio: f64) void {
        qtc.QOpenGLPaintDevice_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(_devicePixelRatio));
    }

    /// ### DEPRECATED: Use `dotsPerMeterX` instead
    ///
    pub const DotsPerMeterX = dotsPerMeterX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn dotsPerMeterX(self: QOpenGLPaintDevice) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dotsPerMeterY` instead
    ///
    pub const DotsPerMeterY = dotsPerMeterY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn dotsPerMeterY(self: QOpenGLPaintDevice) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDotsPerMeterX` instead
    ///
    pub const SetDotsPerMeterX = setDotsPerMeterX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` _dotsPerMeterX: f64 `
    ///
    pub fn setDotsPerMeterX(self: QOpenGLPaintDevice, _dotsPerMeterX: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterX(@ptrCast(self.ptr), @bitCast(_dotsPerMeterX));
    }

    /// ### DEPRECATED: Use `setDotsPerMeterY` instead
    ///
    pub const SetDotsPerMeterY = setDotsPerMeterY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` _dotsPerMeterY: f64 `
    ///
    pub fn setDotsPerMeterY(self: QOpenGLPaintDevice, _dotsPerMeterY: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterY(@ptrCast(self.ptr), @bitCast(_dotsPerMeterY));
    }

    /// ### DEPRECATED: Use `setPaintFlipped` instead
    ///
    pub const SetPaintFlipped = setPaintFlipped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setPaintFlipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` flipped: bool `
    ///
    pub fn setPaintFlipped(self: QOpenGLPaintDevice, flipped: bool) void {
        qtc.QOpenGLPaintDevice_SetPaintFlipped(@ptrCast(self.ptr), flipped);
    }

    /// ### DEPRECATED: Use `paintFlipped` instead
    ///
    pub const PaintFlipped = paintFlipped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintFlipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn paintFlipped(self: QOpenGLPaintDevice) bool {
        return qtc.QOpenGLPaintDevice_PaintFlipped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ensureActiveTarget` instead
    ///
    pub const EnsureActiveTarget = ensureActiveTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn ensureActiveTarget(self: QOpenGLPaintDevice) void {
        qtc.QOpenGLPaintDevice_EnsureActiveTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnsureActiveTarget` instead
    ///
    pub const OnEnsureActiveTarget = onEnsureActiveTarget;

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
    pub fn onEnsureActiveTarget(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnEnsureActiveTarget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnsureActiveTarget` instead
    ///
    pub const SuperEnsureActiveTarget = superEnsureActiveTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn superEnsureActiveTarget(self: QOpenGLPaintDevice) void {
        qtc.QOpenGLPaintDevice_SuperEnsureActiveTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QOpenGLPaintDevice, _metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_Metric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, i32) callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QOpenGLPaintDevice, _metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_SuperMetric(@ptrCast(self.ptr), @bitCast(_metric));
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn paintingActive(self: QOpenGLPaintDevice) bool {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn width(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn height(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn widthMM(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn heightMM(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn logicalDpiX(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn logicalDpiY(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn physicalDpiX(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn physicalDpiY(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn devicePixelRatio(self: QOpenGLPaintDevice) f64 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn devicePixelRatioF(self: QOpenGLPaintDevice) f64 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn colorCount(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn depth(self: QOpenGLPaintDevice) i32 {
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
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QOpenGLPaintDevice, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLPaintDevice_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QOpenGLPaintDevice, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QOpenGLPaintDevice_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, QPainter) callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QOpenGLPaintDevice, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLPaintDevice_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QOpenGLPaintDevice, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QOpenGLPaintDevice_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QOpenGLPaintDevice_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn sharedPainter(self: QOpenGLPaintDevice) QPainter {
        return .{ .ptr = qtc.QOpenGLPaintDevice_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn superSharedPainter(self: QOpenGLPaintDevice) QPainter {
        return .{ .ptr = qtc.QOpenGLPaintDevice_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QOpenGLPaintDevice, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QOpenGLPaintDevice_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QOpenGLPaintDevice, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QOpenGLPaintDevice `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QOpenGLPaintDevice, metricA: i32, metricB: i32) f64 {
        return qtc.QOpenGLPaintDevice_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QOpenGLPaintDevice`
    ///
    /// ` callback: *const fn (self: QOpenGLPaintDevice, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QOpenGLPaintDevice, callback: *const fn (QOpenGLPaintDevice, i32, i32) callconv(.c) f64) void {
        qtc.QOpenGLPaintDevice_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dtor.QOpenGLPaintDevice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLPaintDevice `
    ///
    pub fn delete(self: QOpenGLPaintDevice) void {
        qtc.QOpenGLPaintDevice_Delete(@ptrCast(self.ptr));
    }
};
