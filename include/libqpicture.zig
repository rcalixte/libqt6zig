const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html)
pub const QPicture = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPicture,

    pub const _is_QPicture = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPicture object in C++ memory
    ///
    pub fn new() QPicture {
        return .{ .ptr = qtc.QPicture_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPicture object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPicture `
    ///
    pub fn new2(param1: anytype) QPicture {
        comptime _ = @TypeOf(param1)._is_QPicture;
        return .{ .ptr = qtc.QPicture_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPicture object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` formatVersion: i32 `
    ///
    pub fn new3(formatVersion: i32) QPicture {
        return .{ .ptr = qtc.QPicture_new3(@bitCast(formatVersion)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn isNull(self: QPicture) bool {
        return qtc.QPicture_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn devType(self: QPicture) i32 {
        return qtc.QPicture_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPicture `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QPicture, callback: *const fn () callconv(.c) i32) void {
        qtc.QPicture_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn superDevType(self: QPicture) i32 {
        return qtc.QPicture_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn size(self: QPicture) u32 {
        return qtc.QPicture_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn data(self: QPicture) [:0]const u8 {
        const _ret = qtc.QPicture_Data(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` _size: u32 `
    ///
    pub fn setData(self: QPicture, _data: [:0]const u8, _size: u32) void {
        const data_Cstring = _data.ptr;
        qtc.QPicture_SetData(@ptrCast(self.ptr), data_Cstring, @bitCast(_size));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPicture `
    ///
    /// ` callback: *const fn (self: QPicture, data: [*:0]const u8, size: u32) callconv(.c) void `
    ///
    pub fn onSetData(self: QPicture, callback: *const fn (QPicture, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.QPicture_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` _size: u32 `
    ///
    pub fn superSetData(self: QPicture, _data: [:0]const u8, _size: u32) void {
        const data_Cstring = _data.ptr;
        qtc.QPicture_SuperSetData(@ptrCast(self.ptr), data_Cstring, @bitCast(_size));
    }

    /// ### DEPRECATED: Use `play` instead
    ///
    pub const Play = play;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#play)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` p: QPainter `
    ///
    pub fn play(self: QPicture, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QPainter;
        return qtc.QPicture_Play(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn load(self: QPicture, dev: anytype) bool {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return qtc.QPicture_Load(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn load2(self: QPicture, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPicture_Load2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` dev: QIODevice `
    ///
    pub fn save(self: QPicture, dev: anytype) bool {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return qtc.QPicture_Save(@ptrCast(self.ptr), @ptrCast(dev.ptr));
    }

    /// ### DEPRECATED: Use `save2` instead
    ///
    pub const Save2 = save2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn save2(self: QPicture, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPicture_Save2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn boundingRect(self: QPicture) QRect {
        return .{ .ptr = qtc.QPicture_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundingRect` instead
    ///
    pub const SetBoundingRect = setBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` r: QRect `
    ///
    pub fn setBoundingRect(self: QPicture, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPicture_SetBoundingRect(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` p: QPicture `
    ///
    pub fn operatorAssign(self: QPicture, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPicture;
        qtc.QPicture_OperatorAssign(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` other: QPicture `
    ///
    pub fn swap(self: QPicture, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPicture;
        qtc.QPicture_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn detach(self: QPicture) void {
        qtc.QPicture_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn isDetached(self: QPicture) bool {
        return qtc.QPicture_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn paintEngine(self: QPicture) QPaintEngine {
        return .{ .ptr = qtc.QPicture_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPicture `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QPicture, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPicture_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    pub fn superPaintEngine(self: QPicture) QPaintEngine {
        return .{ .ptr = qtc.QPicture_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` m: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QPicture, m: i32) i32 {
        return qtc.QPicture_Metric(@ptrCast(self.ptr), @bitCast(m));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPicture `
    ///
    /// ` callback: *const fn (self: QPicture, m: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QPicture, callback: *const fn (QPicture, i32) callconv(.c) i32) void {
        qtc.QPicture_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPicture `
    ///
    /// ` m: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QPicture, m: i32) i32 {
        return qtc.QPicture_SuperMetric(@ptrCast(self.ptr), @bitCast(m));
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
    /// ` self: QPicture `
    ///
    pub fn paintingActive(self: QPicture) bool {
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
    /// ` self: QPicture `
    ///
    pub fn width(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn height(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn widthMM(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn heightMM(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn logicalDpiX(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn logicalDpiY(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn physicalDpiX(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn physicalDpiY(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn devicePixelRatio(self: QPicture) f64 {
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
    /// ` self: QPicture `
    ///
    pub fn devicePixelRatioF(self: QPicture) f64 {
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
    /// ` self: QPicture `
    ///
    pub fn colorCount(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    pub fn depth(self: QPicture) i32 {
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
    /// ` self: QPicture `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QPicture, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPicture_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPicture `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QPicture, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPicture_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPicture`
    ///
    /// ` callback: *const fn (self: QPicture, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QPicture, callback: *const fn (QPicture, QPainter) callconv(.c) void) void {
        qtc.QPicture_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPicture `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QPicture, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPicture_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPicture `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QPicture, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPicture_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPicture`
    ///
    /// ` callback: *const fn (self: QPicture, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QPicture, callback: *const fn (QPicture, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPicture_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPicture `
    ///
    pub fn sharedPainter(self: QPicture) QPainter {
        return .{ .ptr = qtc.QPicture_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPicture `
    ///
    pub fn superSharedPainter(self: QPicture) QPainter {
        return .{ .ptr = qtc.QPicture_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPicture`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QPicture, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPicture_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPicture `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QPicture, metricA: i32, metricB: i32) f64 {
        return qtc.QPicture_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPicture `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QPicture, metricA: i32, metricB: i32) f64 {
        return qtc.QPicture_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPicture`
    ///
    /// ` callback: *const fn (self: QPicture, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QPicture, callback: *const fn (QPicture, i32, i32) callconv(.c) f64) void {
        qtc.QPicture_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#dtor.QPicture)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPicture `
    ///
    pub fn delete(self: QPicture) void {
        qtc.QPicture_Delete(@ptrCast(self.ptr));
    }
};
